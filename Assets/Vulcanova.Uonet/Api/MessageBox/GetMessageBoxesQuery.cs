using System.Collections.Generic;
using System.Linq;
using Vulcanova.Uonet.Api.MessageBox;

namespace Vulcanova.Uonet.Api.MessageBox
{
    public record GetMessageBoxesQuery : IApiQuery<MessageBoxPayload[]>
    {
        public const string ApiEndpoint = "mobile/messagebox";

        public IEnumerable<KeyValuePair<string, string>> GetPropertyKeyValuePairs()
        {
            // Zak³adaj¹c, ¿e nie ma w³aœciwoœci do wys³ania, ta metoda zwraca pust¹ kolekcjê.
            return Enumerable.Empty<KeyValuePair<string, string>>();
        }
    }
}
