using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api;

namespace Vulcanova.Uonet.Api.Lessons
{
    public record GetLessonsByPupilQuery(
        int PupilId,
        DateTime DateFrom,
        DateTime DateTo,
        DateTime LastSyncDate,
        int LastId = int.MinValue,
        int PageSize = 500) : IPaginatedApiQuery<LessonPayload>, IApiQuery
    {
        public const string ApiEndpoint = "mobile/lesson/byPupil";

        public IPaginatedApiQuery<LessonPayload> NextPage(int lastId)
            => this with { LastId = lastId };

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
