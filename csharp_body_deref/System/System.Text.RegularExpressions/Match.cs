using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Serializable]
[Token(Token = "0x20000A3")]
public class Match : Group
{
	[Token(Token = "0x400027C")]
	[FieldOffset(Offset = "0x40")]
	internal GroupCollection _groupcoll;

	[Token(Token = "0x400027D")]
	[FieldOffset(Offset = "0x48")]
	internal Regex _regex;

	[Token(Token = "0x400027E")]
	[FieldOffset(Offset = "0x50")]
	internal int _textbeg;

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x54")]
	internal int _textpos;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x58")]
	internal int _textend;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x5C")]
	internal int _textstart;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x60")]
	internal int[][] _matches;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x68")]
	internal int[] _matchcount;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x70")]
	internal bool _balancing;

	[Token(Token = "0x1700009C")]
	public static Match Empty
	{
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x45DDDE0", Offset = "0x45DDDE0", VA = "0x45DDDE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public virtual GroupCollection Groups
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x45DDEE0", Offset = "0x45DDEE0", VA = "0x45DDEE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x45DDC50", Offset = "0x45DDC50", VA = "0x45DDC50")]
	internal Match(Regex regex, int capcount, string text, int begpos, int len, int startpos)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x45DDE50", Offset = "0x45DDE50", VA = "0x45DDE50", Slot = "4")]
	internal virtual void Reset(Regex regex, string text, int textbeg, int textend, int textstart)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x45DDF80", Offset = "0x45DDF80", VA = "0x45DDF80")]
	public Match NextMatch()
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x45DE300", Offset = "0x45DE300", VA = "0x45DE300", Slot = "6")]
	internal virtual ReadOnlySpan<char> GroupToStringImpl(int groupnum)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x45DE450", Offset = "0x45DE450", VA = "0x45DE450")]
	internal ReadOnlySpan<char> LastGroupToStringImpl()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x45DE480", Offset = "0x45DE480", VA = "0x45DE480", Slot = "7")]
	internal virtual void AddMatch(int cap, int start, int len)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x45DE6B0", Offset = "0x45DE6B0", VA = "0x45DE6B0", Slot = "8")]
	internal virtual void BalanceMatch(int cap)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x45DE790", Offset = "0x45DE790", VA = "0x45DE790", Slot = "9")]
	internal virtual void RemoveMatch(int cap)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x45DE7C0", Offset = "0x45DE7C0", VA = "0x45DE7C0", Slot = "10")]
	internal virtual bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x45DE820", Offset = "0x45DE820", VA = "0x45DE820", Slot = "11")]
	internal virtual int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x45DE890", Offset = "0x45DE890", VA = "0x45DE890", Slot = "12")]
	internal virtual int MatchLength(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x45DE900", Offset = "0x45DE900", VA = "0x45DE900", Slot = "13")]
	internal virtual void Tidy(int textpos)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x45DEB80", Offset = "0x45DEB80", VA = "0x45DEB80")]
	internal Match()
	{
	}
}
