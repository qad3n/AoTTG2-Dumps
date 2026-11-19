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

[Token(Token = "0x20000B3")]
internal ref struct RegexFCD
{
	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x0")]
	private readonly List<RegexFC> _fcStack;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x8")]
	private System.Collections.Generic.ValueListBuilder<int> _intStack;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x28")]
	private bool _skipAllChildren;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x29")]
	private bool _skipchild;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x2A")]
	private bool _failed;

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x61EF820", Offset = "0x61EE820", VA = "0x61EF820")]
	private RegexFCD(Span<int> intStack)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x61EF8E0", Offset = "0x61EE8E0", VA = "0x61EF8E0")]
	public static RegexPrefix? FirstChars(RegexTree t)
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x61EFDA0", Offset = "0x61EEDA0", VA = "0x61EFDA0")]
	public static RegexPrefix Prefix(RegexTree tree)
	{
		return default(RegexPrefix);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x61F0100", Offset = "0x61EF100", VA = "0x61F0100")]
	public static int Anchors(RegexTree tree)
	{
		return default(int);
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x61F02B0", Offset = "0x61EF2B0", VA = "0x61F02B0")]
	private static int AnchorFromType(int type)
	{
		return default(int);
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x61F0300", Offset = "0x61EF300", VA = "0x61F0300")]
	private void PushInt(int i)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x61F03B0", Offset = "0x61EF3B0", VA = "0x61F03B0")]
	private bool IntIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x61F03E0", Offset = "0x61EF3E0", VA = "0x61F03E0")]
	private int PopInt()
	{
		return default(int);
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x61F0420", Offset = "0x61EF420", VA = "0x61F0420")]
	private void PushFC(RegexFC fc)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x61F04C0", Offset = "0x61EF4C0", VA = "0x61F04C0")]
	private bool FCIsEmpty()
	{
		return default(bool);
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x61F0500", Offset = "0x61EF500", VA = "0x61F0500")]
	private RegexFC PopFC()
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x61F05C0", Offset = "0x61EF5C0", VA = "0x61F05C0")]
	private RegexFC TopFC()
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x61EFD10", Offset = "0x61EED10", VA = "0x61EFD10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x61EFB30", Offset = "0x61EEB30", VA = "0x61EFB30")]
	private RegexFC RegexFCFromRegexTree(RegexTree tree)
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x61F0B60", Offset = "0x61EFB60", VA = "0x61F0B60")]
	private void SkipChild()
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x61F0610", Offset = "0x61EF610", VA = "0x61F0610")]
	private void CalculateFC(int NodeType, RegexNode node, int CurIndex)
	{
	}
}
