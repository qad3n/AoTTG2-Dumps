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
		[Address(RVA = "0x4902EE0", Offset = "0x4902EE0", VA = "0x4902EE0")]
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
		[Address(RVA = "0x4902FE0", Offset = "0x4902FE0", VA = "0x4902FE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4902D50", Offset = "0x4902D50", VA = "0x4902D50")]
	internal Match(Regex regex, int capcount, string text, int begpos, int len, int startpos)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4902F50", Offset = "0x4902F50", VA = "0x4902F50", Slot = "4")]
	internal virtual void Reset(Regex regex, string text, int textbeg, int textend, int textstart)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4903080", Offset = "0x4903080", VA = "0x4903080")]
	public Match NextMatch()
	{
		return null;
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4903400", Offset = "0x4903400", VA = "0x4903400", Slot = "6")]
	internal virtual ReadOnlySpan<char> GroupToStringImpl(int groupnum)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4903550", Offset = "0x4903550", VA = "0x4903550")]
	internal ReadOnlySpan<char> LastGroupToStringImpl()
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4903580", Offset = "0x4903580", VA = "0x4903580", Slot = "7")]
	internal virtual void AddMatch(int cap, int start, int len)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x49037B0", Offset = "0x49037B0", VA = "0x49037B0", Slot = "8")]
	internal virtual void BalanceMatch(int cap)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4903890", Offset = "0x4903890", VA = "0x4903890", Slot = "9")]
	internal virtual void RemoveMatch(int cap)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x49038C0", Offset = "0x49038C0", VA = "0x49038C0", Slot = "10")]
	internal virtual bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4903920", Offset = "0x4903920", VA = "0x4903920", Slot = "11")]
	internal virtual int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4903990", Offset = "0x4903990", VA = "0x4903990", Slot = "12")]
	internal virtual int MatchLength(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4903A00", Offset = "0x4903A00", VA = "0x4903A00", Slot = "13")]
	internal virtual void Tidy(int textpos)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4903C80", Offset = "0x4903C80", VA = "0x4903C80")]
	internal Match()
	{
	}
}
