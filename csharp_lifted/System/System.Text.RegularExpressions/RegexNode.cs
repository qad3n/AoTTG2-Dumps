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

[Token(Token = "0x20000B7")]
internal sealed class RegexNode
{
	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x10")]
	public int NType;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x18")]
	public List<RegexNode> Children;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x20")]
	public string Str;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x28")]
	public char Ch;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x2C")]
	public int M;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x30")]
	public int N;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x34")]
	public readonly RegexOptions Options;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x38")]
	public RegexNode Next;

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x61F49B0", Offset = "0x61F39B0", VA = "0x61F49B0")]
	public RegexNode(int type, RegexOptions options)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x61F49D0", Offset = "0x61F39D0", VA = "0x61F49D0")]
	public RegexNode(int type, RegexOptions options, char ch)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x61F4A00", Offset = "0x61F3A00", VA = "0x61F4A00")]
	public RegexNode(int type, RegexOptions options, string str)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x61F4A40", Offset = "0x61F3A40", VA = "0x61F4A40")]
	public RegexNode(int type, RegexOptions options, int m)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x61F4A70", Offset = "0x61F3A70", VA = "0x61F4A70")]
	public RegexNode(int type, RegexOptions options, int m, int n)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x61F4AB0", Offset = "0x61F3AB0", VA = "0x61F4AB0")]
	public bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x61F4AC0", Offset = "0x61F3AC0", VA = "0x61F4AC0")]
	public RegexNode ReverseLeft()
	{
		return null;
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x61F4B20", Offset = "0x61F3B20", VA = "0x61F4B20")]
	private void MakeRep(int type, int min, int max)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x61F4B40", Offset = "0x61F3B40", VA = "0x61F4B40")]
	private RegexNode Reduce()
	{
		return null;
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x61F57B0", Offset = "0x61F47B0", VA = "0x61F57B0")]
	private RegexNode StripEnation(int emptyType)
	{
		return null;
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x61F5600", Offset = "0x61F4600", VA = "0x61F5600")]
	private RegexNode ReduceGroup()
	{
		return null;
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x61F5460", Offset = "0x61F4460", VA = "0x61F5460")]
	private RegexNode ReduceRep()
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x61F5670", Offset = "0x61F4670", VA = "0x61F5670")]
	private RegexNode ReduceSet()
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x61F4BF0", Offset = "0x61F3BF0", VA = "0x61F4BF0")]
	private RegexNode ReduceAlternation()
	{
		return null;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x61F5030", Offset = "0x61F4030", VA = "0x61F5030")]
	private RegexNode ReduceConcatenation()
	{
		return null;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x61F5890", Offset = "0x61F4890", VA = "0x61F5890")]
	public RegexNode MakeQuantifier(bool lazy, int min, int max)
	{
		return null;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x61F5980", Offset = "0x61F4980", VA = "0x61F5980")]
	public void AddChild(RegexNode newChild)
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x61F00B0", Offset = "0x61EF0B0", VA = "0x61F00B0")]
	public RegexNode Child(int i)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x61F0070", Offset = "0x61EF070", VA = "0x61F0070")]
	public int ChildCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x61F5AB0", Offset = "0x61F4AB0", VA = "0x61F5AB0")]
	public int Type()
	{
		return default(int);
	}
}
