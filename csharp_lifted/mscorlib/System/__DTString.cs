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

[Token(Token = "0x20000BA")]
internal ref struct __DTString
{
	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x0")]
	internal ReadOnlySpan<char> Value;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x10")]
	internal int Index;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x14")]
	internal char m_current;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x18")]
	private CompareInfo m_info;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x20")]
	private bool m_checkDigitToken;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] WhiteSpaceChecks;

	[Token(Token = "0x1700008A")]
	internal int Length
	{
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x54AF730", Offset = "0x54AE730", VA = "0x54AF730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x600073A")]
		[Address(RVA = "0x54AF890", Offset = "0x54AE890", VA = "0x54AF890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x54AF760", Offset = "0x54AE760", VA = "0x54AF760")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi, bool checkDigitToken)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x54AF7D0", Offset = "0x54AE7D0", VA = "0x54AF7D0")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x54AF8A0", Offset = "0x54AE8A0", VA = "0x54AF8A0")]
	internal bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x54AF940", Offset = "0x54AE940", VA = "0x54AF940")]
	internal bool AtEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x54AF9C0", Offset = "0x54AE9C0", VA = "0x54AF9C0")]
	internal bool Advance(int count)
	{
		return default(bool);
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x54AFA70", Offset = "0x54AEA70", VA = "0x54AFA70")]
	internal void GetRegularToken(out System.TokenType tokenType, out int tokenValue, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x54AFE00", Offset = "0x54AEE00", VA = "0x54AFE00")]
	internal System.TokenType GetSeparatorToken(DateTimeFormatInfo dtfi, out int indexBeforeSeparator, out char charBeforeSeparator)
	{
		return default(System.TokenType);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000740")]
	[Address(RVA = "0x54B00A0", Offset = "0x54AF0A0", VA = "0x54B00A0")]
	internal bool MatchSpecifiedWord(string target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x54B01D0", Offset = "0x54AF1D0", VA = "0x54B01D0")]
	internal bool MatchSpecifiedWords(string target, bool checkWordBoundary, ref int matchLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x54B06C0", Offset = "0x54AF6C0", VA = "0x54B06C0")]
	internal bool Match(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x54B0820", Offset = "0x54AF820", VA = "0x54B0820")]
	internal bool Match(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x54B08D0", Offset = "0x54AF8D0", VA = "0x54B08D0")]
	internal int MatchLongestWords(string[] words, ref int maxMatchStrLen)
	{
		return default(int);
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x54B09C0", Offset = "0x54AF9C0", VA = "0x54B09C0")]
	internal int GetRepeatCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000746")]
	[Address(RVA = "0x54B0A80", Offset = "0x54AFA80", VA = "0x54B0A80")]
	internal bool GetNextDigit()
	{
		return default(bool);
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x54B0B50", Offset = "0x54AFB50", VA = "0x54B0B50")]
	internal char GetChar()
	{
		return default(char);
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x54B0B70", Offset = "0x54AFB70", VA = "0x54B0B70")]
	internal int GetDigit()
	{
		return default(int);
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x54B0B90", Offset = "0x54AFB90", VA = "0x54B0B90")]
	internal void SkipWhiteSpaces()
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x54AFF00", Offset = "0x54AEF00", VA = "0x54AFF00")]
	internal bool SkipWhiteSpaceCurrent()
	{
		return default(bool);
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x54B0C90", Offset = "0x54AFC90", VA = "0x54B0C90")]
	internal void TrimTail()
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x54B0DC0", Offset = "0x54AFDC0", VA = "0x54B0DC0")]
	internal void RemoveTrailingInQuoteSpaces()
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x54B1000", Offset = "0x54B0000", VA = "0x54B1000")]
	internal void RemoveLeadingInQuoteSpaces()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x54B12D0", Offset = "0x54B02D0", VA = "0x54B12D0")]
	internal System.DTSubString GetSubString()
	{
		return default(System.DTSubString);
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x54B1450", Offset = "0x54B0450", VA = "0x54B1450")]
	internal void ConsumeSubString(System.DTSubString sub)
	{
	}
}
