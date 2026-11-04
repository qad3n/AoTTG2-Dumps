using ExitGames.Client.Photon;
using UnityEngine;

namespace Photon
{
    internal class CustomSerialization
    {
        private const byte ColorTypeCode = (byte)'C';
        private const int ColorByteCount = 4;
        private const float ColorScale = 255f;

        public static void Init()
        {
            Register();
        }

        internal static void Register()
        {
            PhotonPeer.RegisterType(typeof(Color), ColorTypeCode, SerializeColor, DeserializeColor);
        }

        public static object DeserializeColor(byte[] data)
        {
            return new Color(data[0] / ColorScale, data[1] / ColorScale, data[2] / ColorScale, data[3] / ColorScale);
        }

        public static byte[] SerializeColor(object obj)
        {
            Color color = (Color)obj;
            byte[] data = new byte[ColorByteCount];
            data[0] = (byte)(color.r * ColorScale);
            data[1] = (byte)(color.g * ColorScale);
            data[2] = (byte)(color.b * ColorScale);
            data[3] = (byte)(color.a * ColorScale);
            return data;
        }
    }
}
