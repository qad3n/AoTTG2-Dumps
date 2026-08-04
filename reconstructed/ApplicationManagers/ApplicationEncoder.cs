using System;
using System.Net;
using System.Text;
using Utility;

namespace ApplicationManagers
{
    internal class ApplicationEncoder
    {
        private const int kEncodeModulus = 452;
        private const int kEncodeSubstringOffset = 5;
        private const int kMaxCredentialLength = 1001;
        private const int kCompressLengthDivisor = 2;
        private const int kCompressValueCap = 15;
        private const int kEncode3Stride = 2;
        private const int kEncode3MinLength = 1;

        // no guard on str so it throws dividebyzeroexception when str is empty and
        // nullreferenceexception when str is null
        public static string Encode(string str)
        {
            string suffix = Convert.ToString(kEncodeModulus % str.Length);
            string combined = string.Concat(str, "jB8a$raC", suffix);
            return string.Concat(combined.Substring(kEncodeSubstringOffset), "F5P*");
        }

        public static NetworkCredential GetTempBuffer()
        {
            string userName = Encode("GGY^hd1bJuD4g@");
            if (userName.Length < kMaxCredentialLength)
                return new NetworkCredential("REa9CMK4mN34Ec#86xN%!psve%J14C1S", Encode1("E^R%4#PXY89*76^snR"));
            return new NetworkCredential(userName, userName);
        }

        public static NetworkCredential Encode1a(string str)
        {
            return new NetworkCredential("REa9CMK4mN34Ec#86xN%!psve%J14C1S", Encode1(str));
        }

        private static string Encode1(string str)
        {
            string combined = string.Concat("u8A5ACZhC^!6", string.Concat(str, "jP3p#", "gqP9$"));
            combined = combined.Substring(0, combined.Length - 1);
            string compressed = string.Concat(Compress3(combined), "Sru3%");
            return Encode3(compressed);
        }

        // present in the binary but never referenced
        private static string Encode2(string str)
        {
            string compressed = string.Concat(Compress3(str), "Sru3%");
            return Encode3(compressed);
        }

        private static string Encode3(string str)
        {
            if (str.Length < kEncode3MinLength)
                return string.Empty;
            string result = string.Empty;
            for (int i = 0; i < str.Length; i += kEncode3Stride)
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
            int value = Math.Min(text.Length / kCompressLengthDivisor, kCompressValueCap);
            return Convert.ToBase64String(Compress(string.Concat(text, Convert.ToString(value))));
        }
    }
}
