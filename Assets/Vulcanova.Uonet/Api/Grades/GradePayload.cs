using System;
using Vulcanova.Uonet.Api.Common.Models;

namespace Vulcanova.Uonet.Api.Grades
{
    public class GradePayload : IPaginatedResource
    {
        public int Id { get; set; }
        public Guid Key { get; set; }
        public int PupilId { get; set; }
        public string ContentRaw { get; set; }
        public string Content { get; set; }
        public string Comment { get; set; }
        public decimal? Value { get; set; }
        public object Numerator { get; set; }
        public object Denominator { get; set; }
        public DateTimeInfo DateCreated { get; set; }
        public DateTimeInfo DateModify { get; set; }
        public Teacher Creator { get; set; }
        public Teacher Modifier { get; set; }
        public Column Column { get; set; }
    }

    public class Column
    {
        public int Id { get; set; }
        public Guid Key { get; set; }
        public int PeriodId { get; set; }
        public string Name { get; set; }
        public string Code { get; set; }
        public string Group { get; set; }
        public int Number { get; set; }
        public uint Color { get; set; }
        public decimal Weight { get; set; }
        public Subject Subject { get; set; }
        public Category Category { get; set; }
    }

    public class Category
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Code { get; set; }
    }
}
