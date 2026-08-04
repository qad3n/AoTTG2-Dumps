// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.QuotedStringFormatReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x2000241")]
internal static class QuotedStringFormatReader
{
	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x49CF240", Offset = "0x49CF240", VA = "0x49CF240")]
	internal static int ReadReverseQuoted(string data, int index, bool permitUnicode)
	{
		return default(int);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x49CF430", Offset = "0x49CF430", VA = "0x49CF430")]
	internal static int ReadReverseUnQuoted(string data, int index, bool permitUnicode, bool expectCommaDelimiter)
	{
		return default(int);
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x49CF700", Offset = "0x49CF700", VA = "0x49CF700")]
	private static bool IsValidQtext(bool allowUnicode, char ch)
	{
		return default(bool);
	}
}
