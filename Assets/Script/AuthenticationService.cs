using System;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using Vulcanova.Core.Uonet;
using Vulcanova.Features.Auth.Accounts;
using Vulcanova.Uonet;
using Vulcanova.Uonet.Api.Auth;

namespace Vulcanova.Features.Auth
{
    public class AuthenticationService : MonoBehaviour, IAuthenticationService
    {
        private IApiClientFactory _apiClientFactory;
        private IMapper _mapper; // Pamiêtaj o dodaniu biblioteki do obs³ugi AutoMapper, jeœli korzystasz z niej

        public void Initialize(IApiClientFactory apiClientFactory, IMapper mapper)
        {
            _apiClientFactory = apiClientFactory;
            _mapper = mapper;
        }

        public async Task<Account[]> AuthenticateAsync(string token, string pin, string instanceUrl)
        {
            var identity = await ClientIdentityProvider.CreateClientIdentityAsync();

            var x509Certificate2 = identity.Certificate;

            var device = $"Vulcanova - {SystemInfo.deviceName}";

            var request = new RegisterClientRequest
            {
                OS = Constants.AppOs,
                DeviceModel = device,
                Certificate = Convert.ToBase64String(x509Certificate2.RawData),
                CertificateType = "X509",
                CertificateThumbprint = x509Certificate2.Thumbprint,
                PIN = pin,
                SecurityToken = token,
                SelfIdentifier = Guid.NewGuid().ToString()
            };

            var client = _apiClientFactory.GetAuthenticated(identity, instanceUrl);

            await client.PostAsync(RegisterClientRequest.ApiEndpoint, request);

            await ClientIdentityStore.SaveIdentityAsync(identity);

            var registerHebeResponse = await client.GetAsync(RegisterHebeClientQuery.ApiEndpoint, new RegisterHebeClientQuery());

            var accounts = registerHebeResponse.Envelope.Select(_mapper.Map<Account>).ToArray();

            foreach (var account in accounts)
            {
                // W niektórych rzadkich przypadkach dane mog¹ zawieraæ zduplikowane okresy
                account.Periods = account.Periods.GroupBy(p => p.Id).Select(g => g.First()).ToList();
                account.IdentityThumbprint = identity.Certificate.Thumbprint;
            }

            return accounts;
        }
    }
}
