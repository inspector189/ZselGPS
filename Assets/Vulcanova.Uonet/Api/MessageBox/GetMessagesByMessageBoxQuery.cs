using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api.MessageBox;

namespace Vulcanova.Uonet.Api.MessageBox
{
    public record GetMessagesByMessageBoxQuery(
        Guid Box,
        MessageBoxFolder Folder,
        DateTime LastSyncDate,
        int LastId = int.MinValue, // Używam int, ale warto to dostosować do faktycznego typu, jeśli jest inny
        int PageSize = 500) : IApiQuery<MessagePayload[]>
    {
        public const string ApiEndpoint = "mobile/messagebox/message/byBox";

        public IEnumerable<KeyValuePair<string, string>> GetPropertyKeyValuePairs()
        {
            return this.GetType()
                .GetProperties()
                .Where(p => p.CanRead)
                .Select(p => new KeyValuePair<string, string>(
                    ApiQueryHelpers.ConvertToCamelCase(p.Name),
                    ApiQueryHelpers.ConvertValueToString(p.GetValue(this), p.PropertyType)))
                .ToList();
        }
    }

    public enum MessageBoxFolder
    {
        Received = 1,
        Sent,
        Deleted
    }

    // ApiQueryHelpers jak zdefiniowano wcześniej
}
