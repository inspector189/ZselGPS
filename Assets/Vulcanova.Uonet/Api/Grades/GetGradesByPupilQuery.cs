using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api;

namespace Vulcanova.Uonet.Api.Grades
{
    public record GetGradesByPupilQuery(
        int UnitId,
        int PupilId,
        int PeriodId,
        DateTime LastSyncDate,
        int PageSize,
        int LastId = int.MinValue) : IPaginatedApiQuery<GradePayload>, IApiQuery
    {
        public IPaginatedApiQuery<GradePayload> NextPage(int lastId)
            => this with { LastId = lastId };

        public const string ApiEndpoint = "mobile/grade/byPupil";

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
