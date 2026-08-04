// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ValidationHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000144")]
internal static class ValidationHelper
{
	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x0")]
	public static string[] EmptyArray;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] InvalidMethodChars;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] InvalidParamChars;

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x495DCE0", Offset = "0x495DCE0", VA = "0x495DCE0")]
	public static string MakeStringNull(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x495E8F0", Offset = "0x495E8F0", VA = "0x495E8F0")]
	public static bool IsBlankString(string stringValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x495E900", Offset = "0x495E900", VA = "0x495E900")]
	public static bool ValidateTcpPort(int port)
	{
		return default(bool);
	}
}
