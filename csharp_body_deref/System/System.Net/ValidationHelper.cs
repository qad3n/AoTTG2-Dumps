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
	[Address(RVA = "0x4638BE0", Offset = "0x4638BE0", VA = "0x4638BE0")]
	public static string MakeStringNull(string stringValue)
	{
		return null;
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x46397F0", Offset = "0x46397F0", VA = "0x46397F0")]
	public static bool IsBlankString(string stringValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x4639800", Offset = "0x4639800", VA = "0x4639800")]
	public static bool ValidateTcpPort(int port)
	{
		return default(bool);
	}
}
