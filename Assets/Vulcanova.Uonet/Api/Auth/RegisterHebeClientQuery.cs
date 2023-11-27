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
            // Zak³adaj¹c, ¿e nie ma w³aœciwoœci do wys³ania, ta metoda zwraca pust¹ kolekcjê.
            // Jeœli s¹ jakieœ parametry zapytania, powinny byæ tutaj dodane.
            return Enumerable.Empty<KeyValuePair<string, string>>();
        }
    }
}
