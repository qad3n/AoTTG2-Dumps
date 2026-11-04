// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000648")]
internal struct StyleSyntaxToken
{
	[Token(Token = "0x4001827")]
	[FieldOffset(Offset = "0x0")]
	public StyleSyntaxTokenType type;

	[Token(Token = "0x4001828")]
	[FieldOffset(Offset = "0x8")]
	public string text;

	[Token(Token = "0x4001829")]
	[FieldOffset(Offset = "0x10")]
	public float number;

	[Token(Token = "0x6002DF0")]
	[Address(RVA = "0x31F9F00", Offset = "0x31F8500", VA = "0x1831F9F00")]
	public StyleSyntaxToken(StyleSyntaxTokenType t)
	{
	}

	[Token(Token = "0x6002DF1")]
	[Address(RVA = "0x31F9F30", Offset = "0x31F8530", VA = "0x1831F9F30")]
	public StyleSyntaxToken(StyleSyntaxTokenType type, string text)
	{
	}

	[Token(Token = "0x6002DF2")]
	[Address(RVA = "0x31F9EC0", Offset = "0x31F84C0", VA = "0x1831F9EC0")]
	public StyleSyntaxToken(StyleSyntaxTokenType type, float number)
	{
	}
}
