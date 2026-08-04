// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.UnsafeNclNativeMethods
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x4960A40", Offset = "0x4960A40", VA = "0x4960A40")]
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
		[Address(RVA = "0x497BE50", Offset = "0x497BE50", VA = "0x497BE50")]
		internal static string CreateString(SecureString secureString)
		{
			return null;
		}

		[Token(Token = "0x600096D")]
		[Address(RVA = "0x497BFA0", Offset = "0x497BFA0", VA = "0x497BFA0")]
		internal static SecureString CreateSecureString(string plainString)
		{
			return null;
		}
	}
}
