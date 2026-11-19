// ==================== AoTTG2 cross-reference ====================
// Type: System.UriHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000089")]
internal static class UriHelper
{
	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] HexUpperChars;

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x61D7300", Offset = "0x61D6300", VA = "0x61D7300")]
	internal unsafe static bool TestForSubPath(char* pMe, ushort meLength, char* pShe, ushort sheLength, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x61D7560", Offset = "0x61D6560", VA = "0x61D7560")]
	internal static char[] EscapeString(string input, int start, int end, char[] dest, ref int destPos, bool isUriString, char force1, char force2, char rsvd)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x61D7D50", Offset = "0x61D6D50", VA = "0x61D7D50")]
	private unsafe static char[] EnsureDestinationSize(char* pStr, char[] dest, int currentInputPos, short charsToAdd, short minReallocateChars, ref int destPos, int prevInputPos)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x61D80F0", Offset = "0x61D70F0", VA = "0x61D80F0")]
	internal static char[] UnescapeString(string input, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x61D81D0", Offset = "0x61D71D0", VA = "0x61D81D0")]
	internal unsafe static char[] UnescapeString(char* pStr, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x61D68E0", Offset = "0x61D58E0", VA = "0x61D68E0")]
	internal unsafe static void MatchUTF8Sequence(char* pDest, char[] dest, ref int destOffset, char[] unescapedChars, int charCount, byte[] bytes, int byteCount, bool isQuery, bool iriParsing)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x61D71D0", Offset = "0x61D61D0", VA = "0x61D71D0")]
	internal static void EscapeAsciiChar(char ch, char[] to, ref int pos)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x61D67F0", Offset = "0x61D57F0", VA = "0x61D67F0")]
	internal static char EscapedAscii(char digit, char next)
	{
		return default(char);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x61D6880", Offset = "0x61D5880", VA = "0x61D6880")]
	internal static bool IsNotSafeForUnescape(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x61D7FA0", Offset = "0x61D6FA0", VA = "0x61D7FA0")]
	private static bool IsReservedUnreservedOrHash(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x61D7E70", Offset = "0x61D6E70", VA = "0x61D7E70")]
	internal static bool IsUnreserved(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x61D9010", Offset = "0x61D8010", VA = "0x61D9010")]
	internal static bool Is3986Unreserved(char c)
	{
		return default(bool);
	}
}
