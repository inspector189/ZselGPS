using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api;

namespace Vulcanova.Uonet.Api.Grades
{
    public record GetAverageGradesByPupilQuery(
        int UnitId,
        int PupilId,
        int PeriodId,
        int PageSize,
        int LastId = int.MinValue) : IPaginatedApiQuery<AverageGradePayload>, IApiQuery
    {
        public IPaginatedApiQuery<AverageGradePayload> NextPage(int lastId)
            => this with { LastId = lastId };

        public const string ApiEndpoint = "mobile/grade/average/byPupil";

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
