// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4917930", Offset = "0x4917930", VA = "0x4917930")]
	public RegexNode(int type, RegexOptions options)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4917950", Offset = "0x4917950", VA = "0x4917950")]
	public RegexNode(int type, RegexOptions options, char ch)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x4917980", Offset = "0x4917980", VA = "0x4917980")]
	public RegexNode(int type, RegexOptions options, string str)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x49179C0", Offset = "0x49179C0", VA = "0x49179C0")]
	public RegexNode(int type, RegexOptions options, int m)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x49179F0", Offset = "0x49179F0", VA = "0x49179F0")]
	public RegexNode(int type, RegexOptions options, int m, int n)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4917A30", Offset = "0x4917A30", VA = "0x4917A30")]
	public bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4917A40", Offset = "0x4917A40", VA = "0x4917A40")]
	public RegexNode ReverseLeft()
	{
		return null;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4917AA0", Offset = "0x4917AA0", VA = "0x4917AA0")]
	private void MakeRep(int type, int min, int max)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4917AC0", Offset = "0x4917AC0", VA = "0x4917AC0")]
	private RegexNode Reduce()
	{
		return null;
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4918880", Offset = "0x4918880", VA = "0x4918880")]
	private RegexNode StripEnation(int emptyType)
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x49186D0", Offset = "0x49186D0", VA = "0x49186D0")]
	private RegexNode ReduceGroup()
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4918430", Offset = "0x4918430", VA = "0x4918430")]
	private RegexNode ReduceRep()
	{
		return null;
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4918740", Offset = "0x4918740", VA = "0x4918740")]
	private RegexNode ReduceSet()
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4917B80", Offset = "0x4917B80", VA = "0x4917B80")]
	private RegexNode ReduceAlternation()
	{
		return null;
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4917FF0", Offset = "0x4917FF0", VA = "0x4917FF0")]
	private RegexNode ReduceConcatenation()
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4918960", Offset = "0x4918960", VA = "0x4918960")]
	public RegexNode MakeQuantifier(bool lazy, int min, int max)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4918A60", Offset = "0x4918A60", VA = "0x4918A60")]
	public void AddChild(RegexNode newChild)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4912AA0", Offset = "0x4912AA0", VA = "0x4912AA0")]
	public RegexNode Child(int i)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4912A60", Offset = "0x4912A60", VA = "0x4912A60")]
	public int ChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4918BA0", Offset = "0x4918BA0", VA = "0x4918BA0")]
	public int Type()
	{
		return default(int);
	}
}
