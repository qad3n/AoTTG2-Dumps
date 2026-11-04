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

[Token(Token = "0x2000308")]
internal static class UnsafeNclNativeMethods
{
	[Token(Token = "0x2000309")]
	internal static class HttpApi
	{
		[Token(Token = "0x200030A")]
		internal static class HTTP_REQUEST_HEADER_ID
		{
			[Token(Token = "0x4000BB7")]
			[FieldOffset(Offset = "0x0")]
			private static string[] m_Strings;

			[Token(Token = "0x600152A")]
			[Address(RVA = "0x27E1300", Offset = "0x27DF900", VA = "0x1827E1300")]
			internal static string ToString(int position)
			{
				return null;
			}
		}

		[Token(Token = "0x4000BB6")]
		[FieldOffset(Offset = "0x0")]
		private static string[] m_Strings;
	}

	[Token(Token = "0x200030B")]
	internal static class SecureStringHelper
	{
		[Token(Token = "0x600152C")]
		[Address(RVA = "0x27E81A0", Offset = "0x27E67A0", VA = "0x1827E81A0")]
		internal static string CreateString(SecureString secureString)
		{
			return null;
		}

		[Token(Token = "0x600152D")]
		[Address(RVA = "0x27E8100", Offset = "0x27E6700", VA = "0x1827E8100")]
		internal static SecureString CreateSecureString(string plainString)
		{
			return null;
		}
	}
}
