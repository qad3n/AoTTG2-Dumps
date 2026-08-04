// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexFCD
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B2")]
internal ref struct RegexFCD
{
	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<RegexFC> _fcStack;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x8")]
	private System.Collections.Generic.ValueListBuilder<int> _intStack;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x28")]
	private bool _skipAllChildren;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x29")]
	private bool _skipchild;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x2A")]
	private bool _failed;

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x4912200", Offset = "0x4912200", VA = "0x4912200")]
	private RegexFCD(Span<int> intStack)
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x49122C0", Offset = "0x49122C0", VA = "0x49122C0")]
	public static RegexPrefix? FirstChars(RegexTree t)
	{
		return null;
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x4912790", Offset = "0x4912790", VA = "0x4912790")]
	public static RegexPrefix Prefix(RegexTree tree)
	{
		return default(RegexPrefix);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x4912AF0", Offset = "0x4912AF0", VA = "0x4912AF0")]
	public static int Anchors(RegexTree tree)
	{
		return default(int);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x4912CA0", Offset = "0x4912CA0", VA = "0x4912CA0")]
	private static int AnchorFromType(int type)
	{
		return default(int);
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4912CF0", Offset = "0x4912CF0", VA = "0x4912CF0")]
	private void PushInt(int i)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4912DA0", Offset = "0x4912DA0", VA = "0x4912DA0")]
	private bool IntIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x4912DD0", Offset = "0x4912DD0", VA = "0x4912DD0")]
	private int PopInt()
	{
		return default(int);
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4912E10", Offset = "0x4912E10", VA = "0x4912E10")]
	private void PushFC(RegexFC fc)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x4912EB0", Offset = "0x4912EB0", VA = "0x4912EB0")]
	private bool FCIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x4912EF0", Offset = "0x4912EF0", VA = "0x4912EF0")]
	private RegexFC PopFC()
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4912FB0", Offset = "0x4912FB0", VA = "0x4912FB0")]
	private RegexFC TopFC()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4912700", Offset = "0x4912700", VA = "0x4912700")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x4912520", Offset = "0x4912520", VA = "0x4912520")]
	private RegexFC RegexFCFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x4913660", Offset = "0x4913660", VA = "0x4913660")]
	private void SkipChild()
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x4913000", Offset = "0x4913000", VA = "0x4913000")]
	private void CalculateFC(int NodeType, RegexNode node, int CurIndex)
	{
	}
}
