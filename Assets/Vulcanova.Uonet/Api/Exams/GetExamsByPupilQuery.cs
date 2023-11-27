using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Vulcanova.Uonet.Api;

namespace Vulcanova.Uonet.Api.Exams
{
    public record GetExamsByPupilQuery(
        int UnitId,
        int PupilId,
        DateTime LastSyncDate,
        int PageSize,
        int LastId = int.MinValue) : IPaginatedApiQuery<ExamPayload>, IApiQuery
    {
        public IPaginatedApiQuery<ExamPayload> NextPage(int lastId)
            => this with { LastId = lastId };

        public const string ApiEndpoint = "mobile/exam/byPupil";

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
