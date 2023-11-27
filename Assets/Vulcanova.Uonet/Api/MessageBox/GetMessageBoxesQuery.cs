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
            // Zak�adaj�c, �e nie ma w�a�ciwo�ci do wys�ania, ta metoda zwraca pust� kolekcj�.
            return Enumerable.Empty<KeyValuePair<string, string>>();
        }
    }
}
