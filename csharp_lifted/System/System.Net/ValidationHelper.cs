// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ValidationHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200028D")]
internal static class ValidationHelper
{
	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0x0")]
	public static string[] EmptyArray;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] InvalidMethodChars;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] InvalidParamChars;

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x62A5830", Offset = "0x62A4830", VA = "0x62A5830")]
	public static string MakeStringNull(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x62A6490", Offset = "0x62A5490", VA = "0x62A6490")]
	public static bool IsBlankString(string stringValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x62A64A0", Offset = "0x62A54A0", VA = "0x62A64A0")]
	public static bool ValidateTcpPort(int port)
	{
		return default(bool);
	}
}
