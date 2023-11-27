using System;
using System.Globalization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace Vulcanova.Uonet.Api.Common
{
    internal class HebeTimeConverter : DateTimeConverterBase
    {
        private const string Format = "HH:mm:ss";

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
                var dateTimeStr = reader.Value.ToString();
                return DateTime.ParseExact(dateTimeStr, Format, CultureInfo.InvariantCulture);
            }

            throw new JsonSerializationException("Expected date string value.");
        }
    }
}
