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

[Token(Token = "0x20000FE")]
internal ref struct RegexWriter
{
	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x0")]
	private System.Collections.Generic.ValueListBuilder<int> _emitted;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x20")]
	private System.Collections.Generic.ValueListBuilder<int> _intStack;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<string, int> _stringHash;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<string> _stringTable;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x50")]
	private Hashtable _caps;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x58")]
	private int _trackCount;

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x2873830", Offset = "0x2871E30", VA = "0x182873830")]
	private RegexWriter(Span<int> emittedSpan, Span<int> intStackSpan)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x28735D0", Offset = "0x2871BD0", VA = "0x1828735D0")]
	public static RegexCode Write(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x2872240", Offset = "0x2870840", VA = "0x182872240")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x2872EF0", Offset = "0x28714F0", VA = "0x182872EF0")]
	public RegexCode RegexCodeFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x2872E90", Offset = "0x2871490", VA = "0x182872E90")]
	private void PatchJump(int offset, int jumpDest)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x2872D10", Offset = "0x2871310", VA = "0x182872D10")]
	private void Emit(int op)
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x2872C90", Offset = "0x2871290", VA = "0x182872C90")]
	private void Emit(int op, int opd1)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x2872D70", Offset = "0x2871370", VA = "0x182872D70")]
	private void Emit(int op, int opd1, int opd2)
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x28734E0", Offset = "0x2871AE0", VA = "0x1828734E0")]
	private int StringCode(string str)
	{
		return default(int);
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x2872DF0", Offset = "0x28713F0", VA = "0x182872DF0")]
	private int MapCapnum(int capnum)
	{
		return default(int);
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x2872290", Offset = "0x2870890", VA = "0x182872290")]
	private void EmitFragment(int nodetype, RegexNode node, int curIndex)
	{
	}
}
