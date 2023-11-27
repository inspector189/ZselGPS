using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api;

namespace Vulcanova.Uonet.Api.Homework
{
    public record GetHomeworkByPupilQuery(
        int PupilId,
        int PeriodId,
        DateTime LastSyncDate,
        int LastId = int.MinValue,
        int PageSize = 500) : IPaginatedApiQuery<HomeworkPayload>, IApiQuery
    {
        public IPaginatedApiQuery<HomeworkPayload> NextPage(int lastId)
            => this with { LastId = lastId };

        public const string ApiEndpoint = "mobile/homework/byPupil";

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
