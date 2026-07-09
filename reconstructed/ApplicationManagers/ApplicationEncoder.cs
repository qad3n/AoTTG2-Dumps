using System;
using System.Net;
using System.Text;
using Utility;

namespace ApplicationManagers
{
    internal class ApplicationEncoder
    {
        // no guard on str so it throws dividebyzeroexception when str is empty and
        // nullreferenceexception when str is null
        public static string Encode(string str)
        {
            string suffix = Convert.ToString(452 % str.Length);
            string combined = string.Concat(str, "drBx2c", suffix);
            return string.Concat(combined.Substring(5), "35s");
        }

        public static NetworkCredential GetTempBuffer()
        {
            string userName = Encode("vf8Wk1vU5xnrzGCd");
            if (userName.Length < 1001)
                return new NetworkCredential("t8u0RuT8w2EM5GqMGjfWreS", Encode1("wK5gxS6RYsrZEmHpF"));
            return new NetworkCredential(userName, userName);
        }

        public static NetworkCredential Encode1a(string str)
        {
            return new NetworkCredential("t8u0RuT8w2EM5GqMGjfWreS", Encode1(str));
        }

        private static string Encode1(string str)
        {
            string combined = string.Concat("zpof12", string.Concat(str, "cf23", "412b"));
            combined = combined.Substring(0, combined.Length - 1);
            string compressed = string.Concat(Compress3(combined), "bwfwoj");
            return Encode3(compressed);
        }

        // present in the binary but never referenced
        private static string Encode2(string str)
        {
            string compressed = string.Concat(Compress3(str), "bwfwoj");
            return Encode3(compressed);
        }

        private static string Encode3(string str)
        {
            if (str.Length < 1)
                return string.Empty;
            string result = string.Empty;
            for (int i = 0; i < str.Length; i += 2)
                result = string.Concat(result, str[i].ToString());
            return result;
        }

        private static byte[] Compress(string text)
        {
            if (text == string.Empty)
                return Array.Empty<byte>();
            return CLZF2.Compress(Encoding.UTF8.GetBytes(text));
        }

        private static string Compress3(string text)
        {
            if (text == string.Empty)
                return string.Empty;
            int value = Math.Min(text.Length / 2, 15);
            return Convert.ToBase64String(Compress(string.Concat(text, Convert.ToString(value))));
        }
    }
}
