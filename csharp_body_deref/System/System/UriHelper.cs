// ==================== AoTTG2 cross-reference ====================
// Type: System.UriHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C8")]
internal static class UriHelper
{
	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] HexUpperChars;

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x2843DE0", Offset = "0x28423E0", VA = "0x182843DE0")]
	internal unsafe static bool TestForSubPath(char* pMe, ushort meLength, char* pShe, ushort sheLength, bool ignoreCase)
	{
		return default(bool);
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x2842E60", Offset = "0x2841460", VA = "0x182842E60")]
	internal static char[] EscapeString(string input, int start, int end, char[] dest, ref int destPos, bool isUriString, char force1, char force2, char rsvd)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x2842C50", Offset = "0x2841250", VA = "0x182842C50")]
	private unsafe static char[] EnsureDestinationSize(char* pStr, char[] dest, int currentInputPos, short charsToAdd, short minReallocateChars, ref int destPos, int prevInputPos)
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x2843F70", Offset = "0x2842570", VA = "0x182843F70")]
	internal static char[] UnescapeString(string input, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x2844040", Offset = "0x2842640", VA = "0x182844040")]
	internal unsafe static char[] UnescapeString(char* pStr, int start, int end, char[] dest, ref int destPosition, char rsvd1, char rsvd2, char rsvd3, UnescapeMode unescapeMode, UriParser syntax, bool isQuery)
	{
		return null;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x2843910", Offset = "0x2841F10", VA = "0x182843910")]
	internal unsafe static void MatchUTF8Sequence(char* pDest, char[] dest, ref int destOffset, char[] unescapedChars, int charCount, byte[] bytes, int byteCount, bool isQuery, bool iriParsing)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x2842D50", Offset = "0x2841350", VA = "0x182842D50")]
	internal static void EscapeAsciiChar(char ch, char[] to, ref int pos)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x2843550", Offset = "0x2841B50", VA = "0x182843550")]
	internal static char EscapedAscii(char digit, char next)
	{
		return default(char);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x2843670", Offset = "0x2841C70", VA = "0x182843670")]
	internal static bool IsNotSafeForUnescape(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x28436C0", Offset = "0x2841CC0", VA = "0x1828436C0")]
	private static bool IsReservedUnreservedOrHash(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x28437F0", Offset = "0x2841DF0", VA = "0x1828437F0")]
	internal static bool IsUnreserved(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x28435E0", Offset = "0x2841BE0", VA = "0x1828435E0")]
	internal static bool Is3986Unreserved(char c)
	{
		return default(bool);
	}
}
