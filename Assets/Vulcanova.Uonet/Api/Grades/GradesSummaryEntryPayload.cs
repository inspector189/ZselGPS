using Newtonsoft.Json;
using Vulcanova.Uonet.Api.Common.Models;

namespace Vulcanova.Uonet.Api.Grades
{
    public class GradesSummaryEntryPayload : IPaginatedResource
    {
        public int Id { get; set; }
        public int PupilId { get; set; }
        public int PeriodId { get; set; }
        public Subject Subject { get; set; }

        [JsonProperty("Entry_1")]
        public string Entry1 { get; set; }

        [JsonProperty("Entry_2")]
        public string Entry2 { get; set; }

        [JsonProperty("Entry_3")]
        public string Entry3 { get; set; }

        public DateTimeInfo DateModify { get; set; }
    }
}
