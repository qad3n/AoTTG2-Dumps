// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.QuotedStringFormatReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x200039D")]
internal static class QuotedStringFormatReader
{
	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x2818D90", Offset = "0x2817390", VA = "0x182818D90")]
	internal static int ReadReverseQuoted(string data, int index, bool permitUnicode)
	{
		return default(int);
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x2818FC0", Offset = "0x28175C0", VA = "0x182818FC0")]
	internal static int ReadReverseUnQuoted(string data, int index, bool permitUnicode, bool expectCommaDelimiter)
	{
		return default(int);
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x2818CE0", Offset = "0x28172E0", VA = "0x182818CE0")]
	private static bool IsValidQtext(bool allowUnicode, char ch)
	{
		return default(bool);
	}
}
