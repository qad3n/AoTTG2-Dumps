// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.MailAddressParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x200039B")]
internal static class MailAddressParser
{
	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x2812D50", Offset = "0x2811350", VA = "0x182812D50")]
	internal static MailAddress ParseAddress(string data)
	{
		return null;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x2812810", Offset = "0x2810E10", VA = "0x182812810")]
	private static MailAddress ParseAddress(string data, bool expectMultipleAddresses, ref int index)
	{
		return null;
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x2813630", Offset = "0x2811C30", VA = "0x182813630")]
	private static int ReadCfwsAndThrowIfIncomplete(string data, int index)
	{
		return default(int);
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x28130D0", Offset = "0x28116D0", VA = "0x1828130D0")]
	private static string ParseDomain(string data, ref int index)
	{
		return null;
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x2813260", Offset = "0x2811860", VA = "0x182813260")]
	private static string ParseLocalPart(string data, ref int index, bool expectAngleBracket, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x2812D80", Offset = "0x2811380", VA = "0x182812D80")]
	private static string ParseDisplayName(string data, ref int index, bool expectMultipleAddresses)
	{
		return null;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x2812780", Offset = "0x2810D80", VA = "0x182812780")]
	internal static string NormalizeOrThrow(string input)
	{
		return null;
	}
}
