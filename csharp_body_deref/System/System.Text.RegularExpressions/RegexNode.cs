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

[Token(Token = "0x20000F6")]
internal sealed class RegexNode
{
	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x10")]
	public int NType;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x18")]
	public List<RegexNode> Children;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x20")]
	public string Str;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x28")]
	public char Ch;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x2C")]
	public int M;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x30")]
	public int N;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x34")]
	public readonly RegexOptions Options;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x38")]
	public RegexNode Next;

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x2869380", Offset = "0x2867980", VA = "0x182869380")]
	public RegexNode(int type, RegexOptions options)
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x28693C0", Offset = "0x28679C0", VA = "0x1828693C0")]
	public RegexNode(int type, RegexOptions options, char ch)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x28692D0", Offset = "0x28678D0", VA = "0x1828692D0")]
	public RegexNode(int type, RegexOptions options, string str)
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x2869310", Offset = "0x2867910", VA = "0x182869310")]
	public RegexNode(int type, RegexOptions options, int m)
	{
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x2869340", Offset = "0x2867940", VA = "0x182869340")]
	public RegexNode(int type, RegexOptions options, int m, int n)
	{
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x28692C0", Offset = "0x28678C0", VA = "0x1828692C0")]
	public bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x2869160", Offset = "0x2867760", VA = "0x182869160")]
	public RegexNode ReverseLeft()
	{
		return null;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x28683C0", Offset = "0x28669C0", VA = "0x1828683C0")]
	private void MakeRep(int type, int min, int max)
	{
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x2868F20", Offset = "0x2867520", VA = "0x182868F20")]
	private RegexNode Reduce()
	{
		return null;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x28691D0", Offset = "0x28677D0", VA = "0x1828691D0")]
	private RegexNode StripEnation(int emptyType)
	{
		return null;
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x2868BB0", Offset = "0x28671B0", VA = "0x182868BB0")]
	private RegexNode ReduceGroup()
	{
		return null;
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x2868C20", Offset = "0x2867220", VA = "0x182868C20")]
	private RegexNode ReduceRep()
	{
		return null;
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x2868DC0", Offset = "0x28673C0", VA = "0x182868DC0")]
	private RegexNode ReduceSet()
	{
		return null;
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x28683D0", Offset = "0x28669D0", VA = "0x1828683D0")]
	private RegexNode ReduceAlternation()
	{
		return null;
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x28687E0", Offset = "0x2866DE0", VA = "0x1828687E0")]
	private RegexNode ReduceConcatenation()
	{
		return null;
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x28682B0", Offset = "0x28668B0", VA = "0x1828682B0")]
	public RegexNode MakeQuantifier(bool lazy, int min, int max)
	{
		return null;
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x28680D0", Offset = "0x28666D0", VA = "0x1828680D0")]
	public void AddChild(RegexNode newChild)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x2868250", Offset = "0x2866850", VA = "0x182868250")]
	public RegexNode Child(int i)
	{
		return null;
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x2868200", Offset = "0x2866800", VA = "0x182868200")]
	public int ChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
	public int Type()
	{
		return default(int);
	}
}
