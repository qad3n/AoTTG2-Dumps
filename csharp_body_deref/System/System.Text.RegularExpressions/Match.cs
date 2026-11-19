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
[Token(Token = "0x20000A4")]
public class Match : Group
{
	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x40")]
	internal GroupCollection _groupcoll;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x48")]
	internal Regex _regex;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x50")]
	internal int _textbeg;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x54")]
	internal int _textpos;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x58")]
	internal int _textend;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x5C")]
	internal int _textstart;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x60")]
	internal int[][] _matches;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x68")]
	internal int[] _matchcount;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x70")]
	internal bool _balancing;

	[Token(Token = "0x170000A6")]
	public static Match Empty
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x61E0450", Offset = "0x61DF450", VA = "0x61E0450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	public virtual GroupCollection Groups
	{
		[Token(Token = "0x6000312")]
		[Address(RVA = "0x61E0580", Offset = "0x61DF580", VA = "0x61E0580", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x61E02C0", Offset = "0x61DF2C0", VA = "0x61E02C0")]
	internal Match(Regex regex, int capcount, string text, int begpos, int len, int startpos)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x61E04C0", Offset = "0x61DF4C0", VA = "0x61E04C0", Slot = "4")]
	internal virtual void Reset(Regex regex, string text, int textbeg, int textend, int textstart)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x61E0620", Offset = "0x61DF620", VA = "0x61E0620")]
	public Match NextMatch()
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x61E09C0", Offset = "0x61DF9C0", VA = "0x61E09C0", Slot = "6")]
	internal virtual ReadOnlySpan<char> GroupToStringImpl(int groupnum)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x61E0B10", Offset = "0x61DFB10", VA = "0x61E0B10")]
	internal ReadOnlySpan<char> LastGroupToStringImpl()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x61E0B40", Offset = "0x61DFB40", VA = "0x61E0B40", Slot = "7")]
	internal virtual void AddMatch(int cap, int start, int len)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x61E0D70", Offset = "0x61DFD70", VA = "0x61E0D70", Slot = "8")]
	internal virtual void BalanceMatch(int cap)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x61E0E40", Offset = "0x61DFE40", VA = "0x61E0E40", Slot = "9")]
	internal virtual void RemoveMatch(int cap)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x61E0E70", Offset = "0x61DFE70", VA = "0x61E0E70", Slot = "10")]
	internal virtual bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x61E0ED0", Offset = "0x61DFED0", VA = "0x61E0ED0", Slot = "11")]
	internal virtual int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x61E0F40", Offset = "0x61DFF40", VA = "0x61E0F40", Slot = "12")]
	internal virtual int MatchLength(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x61E0FB0", Offset = "0x61DFFB0", VA = "0x61E0FB0", Slot = "13")]
	internal virtual void Tidy(int textpos)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x61E1220", Offset = "0x61E0220", VA = "0x61E1220")]
	internal Match()
	{
	}
}
