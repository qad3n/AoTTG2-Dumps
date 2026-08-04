// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4921000", Offset = "0x4921000", VA = "0x4921000")]
	private RegexWriter(Span<int> emittedSpan, Span<int> intStackSpan)
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4921140", Offset = "0x4921140", VA = "0x4921140")]
	public static RegexCode Write(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x49217F0", Offset = "0x49217F0", VA = "0x49217F0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4921280", Offset = "0x4921280", VA = "0x4921280")]
	public RegexCode RegexCodeFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x49227E0", Offset = "0x49227E0", VA = "0x49227E0")]
	private void PatchJump(int offset, int jumpDest)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4922830", Offset = "0x4922830", VA = "0x4922830")]
	private void Emit(int op)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4921840", Offset = "0x4921840", VA = "0x4921840")]
	private void Emit(int op, int opd1)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4922900", Offset = "0x4922900", VA = "0x4922900")]
	private void Emit(int op, int opd1, int opd2)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x4922AD0", Offset = "0x4922AD0", VA = "0x4922AD0")]
	private int StringCode(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4922C30", Offset = "0x4922C30", VA = "0x4922C30")]
	private int MapCapnum(int capnum)
	{
		return default(int);
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4921990", Offset = "0x4921990", VA = "0x4921990")]
	private void EmitFragment(int nodetype, RegexNode node, int curIndex)
	{
	}
}
