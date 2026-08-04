// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000552")]
internal struct StyleSyntaxToken
{
	[Token(Token = "0x400127A")]
	[FieldOffset(Offset = "0x0")]
	public StyleSyntaxTokenType type;

	[Token(Token = "0x400127B")]
	[FieldOffset(Offset = "0x8")]
	public string text;

	[Token(Token = "0x400127C")]
	[FieldOffset(Offset = "0x10")]
	public int number;

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x4FD34A0", Offset = "0x4FD34A0", VA = "0x4FD34A0")]
	public StyleSyntaxToken(StyleSyntaxTokenType t)
	{
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x4FD34D0", Offset = "0x4FD34D0", VA = "0x4FD34D0")]
	public StyleSyntaxToken(StyleSyntaxTokenType type, string text)
	{
	}

	[Token(Token = "0x6002085")]
	[Address(RVA = "0x4FD34F0", Offset = "0x4FD34F0", VA = "0x4FD34F0")]
	public StyleSyntaxToken(StyleSyntaxTokenType type, int number)
	{
	}
}
