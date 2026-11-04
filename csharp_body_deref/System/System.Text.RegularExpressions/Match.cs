// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.Match
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Serializable]
[Token(Token = "0x20000E3")]
public class Match : Group
{
	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x40")]
	internal GroupCollection _groupcoll;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x48")]
	internal Regex _regex;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x50")]
	internal int _textbeg;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x54")]
	internal int _textpos;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x58")]
	internal int _textend;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x5C")]
	internal int _textstart;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x60")]
	internal int[][] _matches;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x68")]
	internal int[] _matchcount;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x70")]
	internal bool _balancing;

	[Token(Token = "0x170000D5")]
	public static Match Empty
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x284E110", Offset = "0x284C710", VA = "0x18284E110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	public virtual GroupCollection Groups
	{
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x284E160", Offset = "0x284C760", VA = "0x18284E160", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x284DF60", Offset = "0x284C560", VA = "0x18284DF60")]
	internal Match(Regex regex, int capcount, string text, int begpos, int len, int startpos)
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x284DC60", Offset = "0x284C260", VA = "0x18284DC60", Slot = "4")]
	internal virtual void Reset(Regex regex, string text, int textbeg, int textend, int textstart)
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x284DBE0", Offset = "0x284C1E0", VA = "0x18284DBE0")]
	public Match NextMatch()
	{
		return null;
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x284D850", Offset = "0x284BE50", VA = "0x18284D850", Slot = "6")]
	internal virtual ReadOnlySpan<char> GroupToStringImpl(int groupnum)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x284DA70", Offset = "0x284C070", VA = "0x18284DA70")]
	internal ReadOnlySpan<char> LastGroupToStringImpl()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x284D510", Offset = "0x284BB10", VA = "0x18284D510", Slot = "7")]
	internal virtual void AddMatch(int cap, int start, int len)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x284D700", Offset = "0x284BD00", VA = "0x18284D700", Slot = "8")]
	internal virtual void BalanceMatch(int cap)
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x284DC30", Offset = "0x284C230", VA = "0x18284DC30", Slot = "9")]
	internal virtual void RemoveMatch(int cap)
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x284D9F0", Offset = "0x284BFF0", VA = "0x18284D9F0", Slot = "10")]
	internal virtual bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x284DAC0", Offset = "0x284C0C0", VA = "0x18284DAC0", Slot = "11")]
	internal virtual int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x284DB50", Offset = "0x284C150", VA = "0x18284DB50", Slot = "12")]
	internal virtual int MatchLength(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x284DD10", Offset = "0x284C310", VA = "0x18284DD10", Slot = "13")]
	internal virtual void Tidy(int textpos)
	{
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x284E0E0", Offset = "0x284C6E0", VA = "0x18284E0E0")]
	internal Match()
	{
	}
}
