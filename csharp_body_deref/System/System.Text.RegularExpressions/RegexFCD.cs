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

[Token(Token = "0x20000F2")]
internal ref struct RegexFCD
{
	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<RegexFC> _fcStack;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x8")]
	private System.Collections.Generic.ValueListBuilder<int> _intStack;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x28")]
	private bool _skipAllChildren;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x29")]
	private bool _skipchild;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x2A")]
	private bool _failed;

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x2858130", Offset = "0x2856730", VA = "0x182858130")]
	private RegexFCD(Span<int> intStack)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x28575D0", Offset = "0x2855BD0", VA = "0x1828575D0")]
	public static RegexPrefix? FirstChars(RegexTree t)
	{
		return null;
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x2857A90", Offset = "0x2856090", VA = "0x182857A90")]
	public static RegexPrefix Prefix(RegexTree tree)
	{
		return default(RegexPrefix);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x2856B00", Offset = "0x2855100", VA = "0x182856B00")]
	public static int Anchors(RegexTree tree)
	{
		return default(int);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x2856A80", Offset = "0x2855080", VA = "0x182856A80")]
	private static int AnchorFromType(int type)
	{
		return default(int);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x2857DB0", Offset = "0x28563B0", VA = "0x182857DB0")]
	private void PushInt(int i)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x2857950", Offset = "0x2855F50", VA = "0x182857950")]
	private bool IntIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x2857A40", Offset = "0x2856040", VA = "0x182857A40")]
	private int PopInt()
	{
		return default(int);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x2857D00", Offset = "0x2856300", VA = "0x182857D00")]
	private void PushFC(RegexFC fc)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x2857590", Offset = "0x2855B90", VA = "0x182857590")]
	private bool FCIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x2857990", Offset = "0x2855F90", VA = "0x182857990")]
	private RegexFC PopFC()
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x28580D0", Offset = "0x28566D0", VA = "0x1828580D0")]
	private RegexFC TopFC()
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x2857440", Offset = "0x2855A40", VA = "0x182857440")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x2857E50", Offset = "0x2856450", VA = "0x182857E50")]
	private RegexFC RegexFCFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x27F1A70", Offset = "0x27F0070", VA = "0x1827F1A70")]
	private void SkipChild()
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x2856CE0", Offset = "0x28552E0", VA = "0x182856CE0")]
	private void CalculateFC(int NodeType, RegexNode node, int CurIndex)
	{
	}
}
