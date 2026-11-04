// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ValidationHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002CC")]
internal static class ValidationHelper
{
	[Token(Token = "0x4000AA4")]
	[FieldOffset(Offset = "0x0")]
	public static string[] EmptyArray;

	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] InvalidMethodChars;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] InvalidParamChars;

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x27D4D10", Offset = "0x27D3310", VA = "0x1827D4D10")]
	public static string MakeStringNull(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x6001394")]
	[Address(RVA = "0x27D4D00", Offset = "0x27D3300", VA = "0x1827D4D00")]
	public static bool IsBlankString(string stringValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x27D4D20", Offset = "0x27D3320", VA = "0x1827D4D20")]
	public static bool ValidateTcpPort(int port)
	{
		return default(bool);
	}
}
