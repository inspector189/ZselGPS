using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Newtonsoft.Json;

namespace Vulcanova.Uonet.Api
{
    public interface IApiQuery<TResponse> : IApiQuery
    {
    }

    public interface IApiQuery
    {
        IEnumerable<KeyValuePair<string, string>> GetPropertyKeyValuePairs();
    }

    // Mo¿esz umieœciæ te metody pomocnicze w osobnej klasie statycznej
    public static class ApiQueryHelpers
    {
        public static string ConvertToCamelCase(string str)
        {
            if (!string.IsNullOrEmpty(str) && char.IsUpper(str[0]))
            {
                return char.ToLowerInvariant(str[0]) + str.Substring(1);
            }

            return str;
        }

        public static string ConvertValueToString(object rawValue, Type propertyType)
        {
            if (propertyType == typeof(DateTime))
            {
                return ((DateTime)rawValue).ToString("yyyy-MM-dd");
            }
            else if (propertyType.IsEnum)
            {
                var enumValue = Convert.ChangeType(rawValue, Enum.GetUnderlyingType(propertyType));
                return enumValue.ToString();
            }
            else
            {
                return rawValue?.ToString() ?? string.Empty;
            }
        }
    }

    // Przyk³ad klasy implementuj¹cej IApiQuery
    public class ExampleApiQuery : IApiQuery
    {
        public IEnumerable<KeyValuePair<string, string>> GetPropertyKeyValuePairs()
        {
            KeyValuePair<string, string> PropertyToKeyValuePair(PropertyInfo propertyInfo)
            {
                var name = ApiQueryHelpers.ConvertToCamelCase(propertyInfo.Name);
                var rawValue = propertyInfo.GetValue(this);
                var value = ApiQueryHelpers.ConvertValueToString(rawValue, propertyInfo.PropertyType);

                return new KeyValuePair<string, string>(name, value);
            }

            var publicProperties = GetType().GetProperties(BindingFlags.Public | BindingFlags.Instance);
            return publicProperties.Select(PropertyToKeyValuePair).ToArray();
        }
    }
}
