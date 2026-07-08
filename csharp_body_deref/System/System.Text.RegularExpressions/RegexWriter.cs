using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000BE")]
internal ref struct RegexWriter
{
	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x0")]
	private System.Collections.Generic.ValueListBuilder<int> _emitted;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x20")]
	private System.Collections.Generic.ValueListBuilder<int> _intStack;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<string, int> _stringHash;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<string> _stringTable;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x50")]
	private Hashtable _caps;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x58")]
	private int _trackCount;

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x45FBF00", Offset = "0x45FBF00", VA = "0x45FBF00")]
	private RegexWriter(Span<int> emittedSpan, Span<int> intStackSpan)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x45FC040", Offset = "0x45FC040", VA = "0x45FC040")]
	public static RegexCode Write(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x45FC6F0", Offset = "0x45FC6F0", VA = "0x45FC6F0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x45FC180", Offset = "0x45FC180", VA = "0x45FC180")]
	public RegexCode RegexCodeFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x45FD6E0", Offset = "0x45FD6E0", VA = "0x45FD6E0")]
	private void PatchJump(int offset, int jumpDest)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x45FD730", Offset = "0x45FD730", VA = "0x45FD730")]
	private void Emit(int op)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x45FC740", Offset = "0x45FC740", VA = "0x45FC740")]
	private void Emit(int op, int opd1)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x45FD800", Offset = "0x45FD800", VA = "0x45FD800")]
	private void Emit(int op, int opd1, int opd2)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x45FD9D0", Offset = "0x45FD9D0", VA = "0x45FD9D0")]
	private int StringCode(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x45FDB30", Offset = "0x45FDB30", VA = "0x45FDB30")]
	private int MapCapnum(int capnum)
	{
		return default(int);
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x45FC890", Offset = "0x45FC890", VA = "0x45FC890")]
	private void EmitFragment(int nodetype, RegexNode node, int curIndex)
	{
	}
}
