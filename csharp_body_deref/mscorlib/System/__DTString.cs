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
	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x0")]
	internal ReadOnlySpan<char> Value;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x10")]
	internal int Index;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x14")]
	internal char m_current;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x18")]
	private CompareInfo m_info;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x20")]
	private bool m_checkDigitToken;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] WhiteSpaceChecks;

	[Token(Token = "0x1700008A")]
	internal int Length
	{
		[Token(Token = "0x600072D")]
		[Address(RVA = "0x3CAC570", Offset = "0x3CAC570", VA = "0x3CAC570")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x3CAC6D0", Offset = "0x3CAC6D0", VA = "0x3CAC6D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x3CAC5A0", Offset = "0x3CAC5A0", VA = "0x3CAC5A0")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi, bool checkDigitToken)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x3CAC610", Offset = "0x3CAC610", VA = "0x3CAC610")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x3CAC6E0", Offset = "0x3CAC6E0", VA = "0x3CAC6E0")]
	internal bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x3CAC780", Offset = "0x3CAC780", VA = "0x3CAC780")]
	internal bool AtEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x3CAC800", Offset = "0x3CAC800", VA = "0x3CAC800")]
	internal bool Advance(int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x3CAC8A0", Offset = "0x3CAC8A0", VA = "0x3CAC8A0")]
	internal void GetRegularToken(out System.TokenType tokenType, out int tokenValue, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x3CACC30", Offset = "0x3CACC30", VA = "0x3CACC30")]
	internal System.TokenType GetSeparatorToken(DateTimeFormatInfo dtfi, out int indexBeforeSeparator, out char charBeforeSeparator)
	{
		return default(System.TokenType);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x3CACE90", Offset = "0x3CACE90", VA = "0x3CACE90")]
	internal bool MatchSpecifiedWord(string target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x3CACFB0", Offset = "0x3CACFB0", VA = "0x3CACFB0")]
	internal bool MatchSpecifiedWords(string target, bool checkWordBoundary, ref int matchLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x3CAD470", Offset = "0x3CAD470", VA = "0x3CAD470")]
	internal bool Match(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x3CAD5D0", Offset = "0x3CAD5D0", VA = "0x3CAD5D0")]
	internal bool Match(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x3CAD680", Offset = "0x3CAD680", VA = "0x3CAD680")]
	internal int MatchLongestWords(string[] words, ref int maxMatchStrLen)
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x3CAD780", Offset = "0x3CAD780", VA = "0x3CAD780")]
	internal int GetRepeatCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x3CAD850", Offset = "0x3CAD850", VA = "0x3CAD850")]
	internal bool GetNextDigit()
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x3CAD920", Offset = "0x3CAD920", VA = "0x3CAD920")]
	internal char GetChar()
	{
		return default(char);
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x3CAD940", Offset = "0x3CAD940", VA = "0x3CAD940")]
	internal int GetDigit()
	{
		return default(int);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x3CAD960", Offset = "0x3CAD960", VA = "0x3CAD960")]
	internal void SkipWhiteSpaces()
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x3CACD30", Offset = "0x3CACD30", VA = "0x3CACD30")]
	internal bool SkipWhiteSpaceCurrent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x3CADA50", Offset = "0x3CADA50", VA = "0x3CADA50")]
	internal void TrimTail()
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x3CADBA0", Offset = "0x3CADBA0", VA = "0x3CADBA0")]
	internal void RemoveTrailingInQuoteSpaces()
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x3CADE20", Offset = "0x3CADE20", VA = "0x3CADE20")]
	internal void RemoveLeadingInQuoteSpaces()
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x3CAE100", Offset = "0x3CAE100", VA = "0x3CAE100")]
	internal System.DTSubString GetSubString()
	{
		return default(System.DTSubString);
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x3CAE270", Offset = "0x3CAE270", VA = "0x3CAE270")]
	internal void ConsumeSubString(System.DTSubString sub)
	{
	}
}
