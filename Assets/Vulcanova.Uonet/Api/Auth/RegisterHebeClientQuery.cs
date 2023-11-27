using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api.Auth;

namespace Vulcanova.Uonet.Api.Auth
{
    public class RegisterHebeClientQuery : IApiQuery<AccountPayload[]>
    {
        public const string ApiEndpoint = "api/mobile/register/hebe";

        public IEnumerable<KeyValuePair<string, string>> GetPropertyKeyValuePairs()
        {
            // Zak�adaj�c, �e nie ma w�a�ciwo�ci do wys�ania, ta metoda zwraca pust� kolekcj�.
            // Je�li s� jakie� parametry zapytania, powinny by� tutaj dodane.
            return Enumerable.Empty<KeyValuePair<string, string>>();
        }
    }
}
