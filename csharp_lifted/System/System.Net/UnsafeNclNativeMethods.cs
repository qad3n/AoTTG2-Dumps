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

[Token(Token = "0x20002C9")]
internal static class UnsafeNclNativeMethods
{
	[Token(Token = "0x20002CA")]
	internal static class HttpApi
	{
		[Token(Token = "0x20002CB")]
		internal static class HTTP_REQUEST_HEADER_ID
		{
			[Token(Token = "0x4000AE8")]
			[FieldOffset(Offset = "0x0")]
			private static string[] m_Strings;

			[Token(Token = "0x600136C")]
			[Address(RVA = "0x617DE50", Offset = "0x617CE50", VA = "0x617DE50")]
			internal static string ToString(int position)
			{
				return null;
			}
		}

		[Token(Token = "0x4000AE7")]
		[FieldOffset(Offset = "0x0")]
		private static string[] m_Strings;
	}

	[Token(Token = "0x20002CC")]
	internal static class SecureStringHelper
	{
		[Token(Token = "0x600136E")]
		[Address(RVA = "0x617E750", Offset = "0x617D750", VA = "0x617E750")]
		internal static string CreateString(SecureString secureString)
		{
			return null;
		}

		[Token(Token = "0x600136F")]
		[Address(RVA = "0x617E890", Offset = "0x617D890", VA = "0x617E890")]
		internal static SecureString CreateSecureString(string plainString)
		{
			return null;
		}
	}
}
