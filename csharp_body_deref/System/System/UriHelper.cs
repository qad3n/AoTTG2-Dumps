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
	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] HexUpperChars;

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x48FAA60", Offset = "0x48FAA60", VA = "0x48FAA60")]
	internal unsafe static bool TestForSubPath(char* pMe, ushort meLength, char* pShe, ushort sheLength, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x48FACE0", Offset = "0x48FACE0", VA = "0x48FACE0")]
	internal static char[] EscapeString(string input, int start, int end, char[] dest, ref int destPos, bool isUriString, char force1, char force2, char rsvd)
	{
		return null;
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x48FB470", Offset = "0x48FB470", VA = "0x48FB470")]
	private unsafe static char[] EnsureDestinationSize(char* pStr, char[] dest, int currentInputPos, short charsToAdd, short minReallocateChars, ref int destPos, int prevInputPos)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x48FB810", Offset = "0x48FB810", VA = "0x48FB810")]
	internal static char[] UnescapeString(string input, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x48FB8E0", Offset = "0x48FB8E0", VA = "0x48FB8E0")]
	internal unsafe static char[] UnescapeString(char* pStr, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x48FA290", Offset = "0x48FA290", VA = "0x48FA290")]
	internal unsafe static void MatchUTF8Sequence(char* pDest, char[] dest, ref int destOffset, char[] unescapedChars, int charCount, byte[] bytes, int byteCount, bool isQuery, bool iriParsing)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x48FA930", Offset = "0x48FA930", VA = "0x48FA930")]
	internal static void EscapeAsciiChar(char ch, char[] to, ref int pos)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x48FA1A0", Offset = "0x48FA1A0", VA = "0x48FA1A0")]
	internal static char EscapedAscii(char digit, char next)
	{
		return default(char);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x48FA230", Offset = "0x48FA230", VA = "0x48FA230")]
	internal static bool IsNotSafeForUnescape(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x48FB6C0", Offset = "0x48FB6C0", VA = "0x48FB6C0")]
	private static bool IsReservedUnreservedOrHash(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x48FB590", Offset = "0x48FB590", VA = "0x48FB590")]
	internal static bool IsUnreserved(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x48FC790", Offset = "0x48FC790", VA = "0x48FC790")]
	internal static bool Is3986Unreserved(char c)
	{
		return default(bool);
	}
}
