// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.QuotedStringFormatReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x2000359")]
internal static class QuotedStringFormatReader
{
	[Token(Token = "0x6001722")]
	[Address(RVA = "0x61BD4D0", Offset = "0x61BC4D0", VA = "0x61BD4D0")]
	internal static int ReadReverseQuoted(string data, int index, bool permitUnicode)
	{
		return default(int);
	}

	[Token(Token = "0x6001723")]
	[Address(RVA = "0x61BD6C0", Offset = "0x61BC6C0", VA = "0x61BD6C0")]
	internal static int ReadReverseUnQuoted(string data, int index, bool permitUnicode, bool expectCommaDelimiter)
	{
		return default(int);
	}

	[Token(Token = "0x6001724")]
	[Address(RVA = "0x61BD9B0", Offset = "0x61BC9B0", VA = "0x61BD9B0")]
	private static bool IsValidQtext(bool allowUnicode, char ch)
	{
		return default(bool);
	}
}
