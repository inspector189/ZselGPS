using System;
using System.Globalization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace Vulcanova.Uonet.Api.Common
{
    internal class HebeDateConverter : DateTimeConverterBase
    {
        private const string Format = "yyyy-MM-dd";

        public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer)
        {
            if (value is DateTime dateTime)
            {
                writer.WriteValue(dateTime.ToString(Format, CultureInfo.InvariantCulture));
            }
        }

        public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer)
        {
            if (reader.TokenType == JsonToken.String)
            {
                var dateString = reader.Value.ToString();
                return DateTime.ParseExact(dateString, Format, CultureInfo.InvariantCulture);
            }

            throw new JsonSerializationException("Expected date string value.");
        }
    }
}
