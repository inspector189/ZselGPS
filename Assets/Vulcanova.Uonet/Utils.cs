using System.Net.Http;
using System.Text;
using Newtonsoft.Json;

namespace Vulcanova.Uonet
{
    public static class Utils
    {
        public static StringContent ToJsonStringContent(this object o)
            => new StringContent(JsonConvert.SerializeObject(o), Encoding.UTF8, "application/json");
    }
}
