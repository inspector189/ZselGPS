using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api.Schedule;

namespace Vulcanova.Uonet.Api.Schedule
{
    public record GetScheduleEntriesByPupilQuery(
        int PupilId,
        DateTime DateFrom,
        DateTime DateTo,
        DateTime LastSyncDate,
        int PageSize = 500,
        int LastId = int.MinValue) : IApiQuery<ScheduleEntryPayload[]>
    {
        public const string ApiEndpoint = "mobile/schedule/byPupil";

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
