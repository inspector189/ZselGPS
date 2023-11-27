using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api;

namespace Vulcanova.Uonet.Api.Notes
{
    public record GetNotesByPupilQuery(
        int PupilId,
        DateTime LastSyncDate,
        int LastId = int.MinValue,
        int PageSize = 500) : IPaginatedApiQuery<NotesPayload>, IApiQuery
    {
        public const string ApiEndpoint = "mobile/note/byPupil";

        public IPaginatedApiQuery<NotesPayload> NextPage(int lastId)
        {
            return this with { LastId = lastId };
        }

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

    // ApiQueryHelpers jak zdefiniowano wczeœniej
}
