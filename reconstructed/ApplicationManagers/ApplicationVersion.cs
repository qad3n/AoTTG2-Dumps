using System;
using System.Net;
using UnityEngine;

namespace ApplicationManagers
{
    internal class ApplicationVersion
    {
        public static bool UseServerHash = true;
        public static Func<NetworkCredential> VersionProvider = GetPrivateVersion;
        public static Func<string, string> HashProvider = GetPrivateHashCode;

        public static NetworkCredential GetVersion()
        {
            if (VersionProvider != null)
                return VersionProvider();
            return new NetworkCredential("TestVersion", "TestVersion");
        }

        public static string GetHashCode(string key)
        {
            if (HashProvider != null)
                return HashProvider(key);
            return string.Empty;
        }

        public static string GetHashKey(string key)
        {
            return UseServerHash ? key : string.Empty;
        }

        public static string GetSessionID()
        {
            return string.Concat("eWire7HpInEhOO7r", SystemInfo.deviceUniqueIdentifier);
        }

        private static NetworkCredential GetPrivateVersion()
        {
            return ApplicationEncoder.GetTempBuffer();
        }

        private static string GetPrivateHashCode(string key)
        {
            return ApplicationEncoder.Encode1a(string.Concat(key, "PtzsW")).Password;
        }
    }
}
