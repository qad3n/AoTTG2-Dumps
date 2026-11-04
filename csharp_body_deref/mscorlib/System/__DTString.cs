// ==================== AoTTG2 cross-reference ====================
// Type: System.__DTString
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E2")]
internal ref struct __DTString
{
	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x0")]
	internal ReadOnlySpan<char> Value;

	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x10")]
	internal int Index;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x14")]
	internal char m_current;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x18")]
	private CompareInfo m_info;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x20")]
	private bool m_checkDigitToken;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] WhiteSpaceChecks;

	[Token(Token = "0x1700008A")]
	internal int Length
	{
		[Token(Token = "0x600075C")]
		[Address(RVA = "0x1B3DDD0", Offset = "0x1B3C3D0", VA = "0x181B3DDD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x1B3DC10", Offset = "0x1B3C210", VA = "0x181B3DC10")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi, bool checkDigitToken)
	{
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x1B3DD00", Offset = "0x1B3C300", VA = "0x181B3DD00")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x1B3C270", Offset = "0x1B3A870", VA = "0x181B3C270")]
	internal bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x1B3C030", Offset = "0x1B3A630", VA = "0x181B3C030")]
	internal bool AtEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x1B3BF90", Offset = "0x1B3A590", VA = "0x181B3BF90")]
	internal bool Advance(int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x1B3C310", Offset = "0x1B3A910", VA = "0x181B3C310")]
	internal void GetRegularToken(out System.TokenType tokenType, out int tokenValue, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x1B3C6D0", Offset = "0x1B3ACD0", VA = "0x181B3C6D0")]
	internal System.TokenType GetSeparatorToken(DateTimeFormatInfo dtfi, out int indexBeforeSeparator, out char charBeforeSeparator)
	{
		return default(System.TokenType);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000765")]
	[Address(RVA = "0x1B3CB00", Offset = "0x1B3B100", VA = "0x181B3CB00")]
	internal bool MatchSpecifiedWord(string target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x1B3CC50", Offset = "0x1B3B250", VA = "0x181B3CC50")]
	internal bool MatchSpecifiedWords(string target, bool checkWordBoundary, ref int matchLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x1B3D110", Offset = "0x1B3B710", VA = "0x181B3D110")]
	internal bool Match(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x1B3D280", Offset = "0x1B3B880", VA = "0x181B3D280")]
	internal bool Match(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x1B3CA10", Offset = "0x1B3B010", VA = "0x181B3CA10")]
	internal int MatchLongestWords(string[] words, ref int maxMatchStrLen)
	{
		return default(int);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x1B3C610", Offset = "0x1B3AC10", VA = "0x181B3C610")]
	internal int GetRepeatCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x1B3C1A0", Offset = "0x1B3A7A0", VA = "0x181B3C1A0")]
	internal bool GetNextDigit()
	{
		return default(bool);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x1B3C140", Offset = "0x1B3A740", VA = "0x181B3C140")]
	internal char GetChar()
	{
		return default(char);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x1B3C170", Offset = "0x1B3A770", VA = "0x181B3C170")]
	internal int GetDigit()
	{
		return default(int);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x1B3D9A0", Offset = "0x1B3BFA0", VA = "0x181B3D9A0")]
	internal void SkipWhiteSpaces()
	{
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x1B3D870", Offset = "0x1B3BE70", VA = "0x181B3D870")]
	internal bool SkipWhiteSpaceCurrent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x1B3DA60", Offset = "0x1B3C060", VA = "0x181B3DA60")]
	internal void TrimTail()
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x1B3D610", Offset = "0x1B3BC10", VA = "0x181B3D610")]
	internal void RemoveTrailingInQuoteSpaces()
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x1B3D340", Offset = "0x1B3B940", VA = "0x181B3D340")]
	internal void RemoveLeadingInQuoteSpaces()
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x1B3C8F0", Offset = "0x1B3AEF0", VA = "0x181B3C8F0")]
	internal System.DTSubString GetSubString()
	{
		return default(System.DTSubString);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x1B3C0A0", Offset = "0x1B3A6A0", VA = "0x181B3C0A0")]
	internal void ConsumeSubString(System.DTSubString sub)
	{
	}
}
