using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000089")]
internal static class UriHelper
{
	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] HexUpperChars;

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x45D5960", Offset = "0x45D5960", VA = "0x45D5960")]
	internal unsafe static bool TestForSubPath(char* pMe, ushort meLength, char* pShe, ushort sheLength, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x45D5BE0", Offset = "0x45D5BE0", VA = "0x45D5BE0")]
	internal static char[] EscapeString(string input, int start, int end, char[] dest, ref int destPos, bool isUriString, char force1, char force2, char rsvd)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x45D6370", Offset = "0x45D6370", VA = "0x45D6370")]
	private unsafe static char[] EnsureDestinationSize(char* pStr, char[] dest, int currentInputPos, short charsToAdd, short minReallocateChars, ref int destPos, int prevInputPos)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x45D6710", Offset = "0x45D6710", VA = "0x45D6710")]
	internal static char[] UnescapeString(string input, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x45D67E0", Offset = "0x45D67E0", VA = "0x45D67E0")]
	internal unsafe static char[] UnescapeString(char* pStr, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x45D5190", Offset = "0x45D5190", VA = "0x45D5190")]
	internal unsafe static void MatchUTF8Sequence(char* pDest, char[] dest, ref int destOffset, char[] unescapedChars, int charCount, byte[] bytes, int byteCount, bool isQuery, bool iriParsing)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x45D5830", Offset = "0x45D5830", VA = "0x45D5830")]
	internal static void EscapeAsciiChar(char ch, char[] to, ref int pos)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x45D50A0", Offset = "0x45D50A0", VA = "0x45D50A0")]
	internal static char EscapedAscii(char digit, char next)
	{
		return default(char);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x45D5130", Offset = "0x45D5130", VA = "0x45D5130")]
	internal static bool IsNotSafeForUnescape(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x45D65C0", Offset = "0x45D65C0", VA = "0x45D65C0")]
	private static bool IsReservedUnreservedOrHash(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x45D6490", Offset = "0x45D6490", VA = "0x45D6490")]
	internal static bool IsUnreserved(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x45D7690", Offset = "0x45D7690", VA = "0x45D7690")]
	internal static bool Is3986Unreserved(char c)
	{
		return default(bool);
	}
}
