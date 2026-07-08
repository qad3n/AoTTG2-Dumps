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
	[Address(RVA = "0x45ED100", Offset = "0x45ED100", VA = "0x45ED100")]
	private RegexFCD(Span<int> intStack)
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x45ED1C0", Offset = "0x45ED1C0", VA = "0x45ED1C0")]
	public static RegexPrefix? FirstChars(RegexTree t)
	{
		return null;
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x45ED690", Offset = "0x45ED690", VA = "0x45ED690")]
	public static RegexPrefix Prefix(RegexTree tree)
	{
		return default(RegexPrefix);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x45ED9F0", Offset = "0x45ED9F0", VA = "0x45ED9F0")]
	public static int Anchors(RegexTree tree)
	{
		return default(int);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x45EDBA0", Offset = "0x45EDBA0", VA = "0x45EDBA0")]
	private static int AnchorFromType(int type)
	{
		return default(int);
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x45EDBF0", Offset = "0x45EDBF0", VA = "0x45EDBF0")]
	private void PushInt(int i)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x45EDCA0", Offset = "0x45EDCA0", VA = "0x45EDCA0")]
	private bool IntIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x45EDCD0", Offset = "0x45EDCD0", VA = "0x45EDCD0")]
	private int PopInt()
	{
		return default(int);
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x45EDD10", Offset = "0x45EDD10", VA = "0x45EDD10")]
	private void PushFC(RegexFC fc)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x45EDDB0", Offset = "0x45EDDB0", VA = "0x45EDDB0")]
	private bool FCIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x45EDDF0", Offset = "0x45EDDF0", VA = "0x45EDDF0")]
	private RegexFC PopFC()
	{
		return null;
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x45EDEB0", Offset = "0x45EDEB0", VA = "0x45EDEB0")]
	private RegexFC TopFC()
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x45ED600", Offset = "0x45ED600", VA = "0x45ED600")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x45ED420", Offset = "0x45ED420", VA = "0x45ED420")]
	private RegexFC RegexFCFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x45EE560", Offset = "0x45EE560", VA = "0x45EE560")]
	private void SkipChild()
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x45EDF00", Offset = "0x45EDF00", VA = "0x45EDF00")]
	private void CalculateFC(int NodeType, RegexNode node, int CurIndex)
	{
	}
}
