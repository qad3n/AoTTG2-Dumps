using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B6")]
internal sealed class RegexNode
{
	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x10")]
	public int NType;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x18")]
	public List<RegexNode> Children;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x20")]
	public string Str;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x28")]
	public char Ch;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x2C")]
	public int M;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x30")]
	public int N;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x34")]
	public readonly RegexOptions Options;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x38")]
	public RegexNode Next;

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x45F2830", Offset = "0x45F2830", VA = "0x45F2830")]
	public RegexNode(int type, RegexOptions options)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x45F2850", Offset = "0x45F2850", VA = "0x45F2850")]
	public RegexNode(int type, RegexOptions options, char ch)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x45F2880", Offset = "0x45F2880", VA = "0x45F2880")]
	public RegexNode(int type, RegexOptions options, string str)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x45F28C0", Offset = "0x45F28C0", VA = "0x45F28C0")]
	public RegexNode(int type, RegexOptions options, int m)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x45F28F0", Offset = "0x45F28F0", VA = "0x45F28F0")]
	public RegexNode(int type, RegexOptions options, int m, int n)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x45F2930", Offset = "0x45F2930", VA = "0x45F2930")]
	public bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x45F2940", Offset = "0x45F2940", VA = "0x45F2940")]
	public RegexNode ReverseLeft()
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x45F29A0", Offset = "0x45F29A0", VA = "0x45F29A0")]
	private void MakeRep(int type, int min, int max)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x45F29C0", Offset = "0x45F29C0", VA = "0x45F29C0")]
	private RegexNode Reduce()
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x45F3780", Offset = "0x45F3780", VA = "0x45F3780")]
	private RegexNode StripEnation(int emptyType)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x45F35D0", Offset = "0x45F35D0", VA = "0x45F35D0")]
	private RegexNode ReduceGroup()
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x45F3330", Offset = "0x45F3330", VA = "0x45F3330")]
	private RegexNode ReduceRep()
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x45F3640", Offset = "0x45F3640", VA = "0x45F3640")]
	private RegexNode ReduceSet()
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x45F2A80", Offset = "0x45F2A80", VA = "0x45F2A80")]
	private RegexNode ReduceAlternation()
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x45F2EF0", Offset = "0x45F2EF0", VA = "0x45F2EF0")]
	private RegexNode ReduceConcatenation()
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x45F3860", Offset = "0x45F3860", VA = "0x45F3860")]
	public RegexNode MakeQuantifier(bool lazy, int min, int max)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x45F3960", Offset = "0x45F3960", VA = "0x45F3960")]
	public void AddChild(RegexNode newChild)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x45ED9A0", Offset = "0x45ED9A0", VA = "0x45ED9A0")]
	public RegexNode Child(int i)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x45ED960", Offset = "0x45ED960", VA = "0x45ED960")]
	public int ChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x45F3AA0", Offset = "0x45F3AA0", VA = "0x45F3AA0")]
	public int Type()
	{
		return default(int);
	}
}
