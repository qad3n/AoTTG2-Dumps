using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x2000241")]
internal static class QuotedStringFormatReader
{
	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x46AA140", Offset = "0x46AA140", VA = "0x46AA140")]
	internal static int ReadReverseQuoted(string data, int index, bool permitUnicode)
	{
		return default(int);
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x46AA330", Offset = "0x46AA330", VA = "0x46AA330")]
	internal static int ReadReverseUnQuoted(string data, int index, bool permitUnicode, bool expectCommaDelimiter)
	{
		return default(int);
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x46AA600", Offset = "0x46AA600", VA = "0x46AA600")]
	private static bool IsValidQtext(bool allowUnicode, char ch)
	{
		return default(bool);
	}
}
