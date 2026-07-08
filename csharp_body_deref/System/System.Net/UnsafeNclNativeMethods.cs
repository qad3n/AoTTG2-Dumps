using System.Security;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000180")]
internal static class UnsafeNclNativeMethods
{
	[Token(Token = "0x2000181")]
	internal static class HttpApi
	{
		[Token(Token = "0x2000182")]
		internal static class HTTP_REQUEST_HEADER_ID
		{
			[Token(Token = "0x40007A1")]
			[FieldOffset(Offset = "0x0")]
			private static string[] m_Strings;

			[Token(Token = "0x600096A")]
			[Address(RVA = "0x463B940", Offset = "0x463B940", VA = "0x463B940")]
			internal static string ToString(int position)
			{
				return null;
			}
		}

		[Token(Token = "0x40007A0")]
		[FieldOffset(Offset = "0x0")]
		private static string[] m_Strings;
	}

	[Token(Token = "0x2000183")]
	internal static class SecureStringHelper
	{
		[Token(Token = "0x600096C")]
		[Address(RVA = "0x4656D50", Offset = "0x4656D50", VA = "0x4656D50")]
		internal static string CreateString(SecureString secureString)
		{
			return null;
		}

		[Token(Token = "0x600096D")]
		[Address(RVA = "0x4656EA0", Offset = "0x4656EA0", VA = "0x4656EA0")]
		internal static SecureString CreateSecureString(string plainString)
		{
			return null;
		}
	}
}
