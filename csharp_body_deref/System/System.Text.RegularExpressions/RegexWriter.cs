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

[Token(Token = "0x20000BF")]
internal ref struct RegexWriter
{
	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x0")]
	private System.Collections.Generic.ValueListBuilder<int> _emitted;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x20")]
	private System.Collections.Generic.ValueListBuilder<int> _intStack;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x40")]
	private readonly Dictionary<string, int> _stringHash;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x48")]
	private readonly List<string> _stringTable;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x50")]
	private Hashtable _caps;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x58")]
	private int _trackCount;

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x61FDE00", Offset = "0x61FCE00", VA = "0x61FDE00")]
	private RegexWriter(Span<int> emittedSpan, Span<int> intStackSpan)
	{
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x61FDF40", Offset = "0x61FCF40", VA = "0x61FDF40")]
	public static RegexCode Write(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x61FE5C0", Offset = "0x61FD5C0", VA = "0x61FE5C0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x61FE080", Offset = "0x61FD080", VA = "0x61FE080")]
	public RegexCode RegexCodeFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x61FEFF0", Offset = "0x61FDFF0", VA = "0x61FEFF0")]
	private void PatchJump(int offset, int jumpDest)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x61FF040", Offset = "0x61FE040", VA = "0x61FF040")]
	private void Emit(int op)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x61FE610", Offset = "0x61FD610", VA = "0x61FE610")]
	private void Emit(int op, int opd1)
	{
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x61FF110", Offset = "0x61FE110", VA = "0x61FF110")]
	private void Emit(int op, int opd1, int opd2)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x61FF2E0", Offset = "0x61FE2E0", VA = "0x61FF2E0")]
	private int StringCode(string str)
	{
		return default(int);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x61FF440", Offset = "0x61FE440", VA = "0x61FF440")]
	private int MapCapnum(int capnum)
	{
		return default(int);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x61FE760", Offset = "0x61FD760", VA = "0x61FE760")]
	private void EmitFragment(int nodetype, RegexNode node, int curIndex)
	{
	}
}
