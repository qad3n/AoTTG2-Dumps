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
		[Address(RVA = "0x4FC6A50", Offset = "0x4FC6A50", VA = "0x4FC6A50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x4FC6BB0", Offset = "0x4FC6BB0", VA = "0x4FC6BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x4FC6A80", Offset = "0x4FC6A80", VA = "0x4FC6A80")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi, bool checkDigitToken)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x4FC6AF0", Offset = "0x4FC6AF0", VA = "0x4FC6AF0")]
	internal __DTString(ReadOnlySpan<char> str, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4FC6BC0", Offset = "0x4FC6BC0", VA = "0x4FC6BC0")]
	internal bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4FC6C60", Offset = "0x4FC6C60", VA = "0x4FC6C60")]
	internal bool AtEnd()
	{
		return default(bool);
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4FC6CE0", Offset = "0x4FC6CE0", VA = "0x4FC6CE0")]
	internal bool Advance(int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x4FC6D80", Offset = "0x4FC6D80", VA = "0x4FC6D80")]
	internal void GetRegularToken(out System.TokenType tokenType, out int tokenValue, DateTimeFormatInfo dtfi)
	{
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x4FC7110", Offset = "0x4FC7110", VA = "0x4FC7110")]
	internal System.TokenType GetSeparatorToken(DateTimeFormatInfo dtfi, out int indexBeforeSeparator, out char charBeforeSeparator)
	{
		return default(System.TokenType);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000736")]
	[Address(RVA = "0x4FC7370", Offset = "0x4FC7370", VA = "0x4FC7370")]
	internal bool MatchSpecifiedWord(string target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4FC7490", Offset = "0x4FC7490", VA = "0x4FC7490")]
	internal bool MatchSpecifiedWords(string target, bool checkWordBoundary, ref int matchLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x4FC7950", Offset = "0x4FC7950", VA = "0x4FC7950")]
	internal bool Match(string str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x4FC7AB0", Offset = "0x4FC7AB0", VA = "0x4FC7AB0")]
	internal bool Match(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x4FC7B60", Offset = "0x4FC7B60", VA = "0x4FC7B60")]
	internal int MatchLongestWords(string[] words, ref int maxMatchStrLen)
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4FC7C60", Offset = "0x4FC7C60", VA = "0x4FC7C60")]
	internal int GetRepeatCount()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4FC7D30", Offset = "0x4FC7D30", VA = "0x4FC7D30")]
	internal bool GetNextDigit()
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4FC7E00", Offset = "0x4FC7E00", VA = "0x4FC7E00")]
	internal char GetChar()
	{
		return default(char);
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4FC7E20", Offset = "0x4FC7E20", VA = "0x4FC7E20")]
	internal int GetDigit()
	{
		return default(int);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4FC7E40", Offset = "0x4FC7E40", VA = "0x4FC7E40")]
	internal void SkipWhiteSpaces()
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4FC7210", Offset = "0x4FC7210", VA = "0x4FC7210")]
	internal bool SkipWhiteSpaceCurrent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4FC7F30", Offset = "0x4FC7F30", VA = "0x4FC7F30")]
	internal void TrimTail()
	{
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4FC8080", Offset = "0x4FC8080", VA = "0x4FC8080")]
	internal void RemoveTrailingInQuoteSpaces()
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x4FC8300", Offset = "0x4FC8300", VA = "0x4FC8300")]
	internal void RemoveLeadingInQuoteSpaces()
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4FC85E0", Offset = "0x4FC85E0", VA = "0x4FC85E0")]
	internal System.DTSubString GetSubString()
	{
		return default(System.DTSubString);
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x4FC8750", Offset = "0x4FC8750", VA = "0x4FC8750")]
	internal void ConsumeSubString(System.DTSubString sub)
	{
	}
}
