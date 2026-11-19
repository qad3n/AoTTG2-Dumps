// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000646")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleSyntaxParser
{
	[Token(Token = "0x400180D")]
	[FieldOffset(Offset = "0x10")]
	private List<Expression> m_ProcessExpressionList;

	[Token(Token = "0x400180E")]
	[FieldOffset(Offset = "0x18")]
	private Stack<Expression> m_ExpressionStack;

	[Token(Token = "0x400180F")]
	[FieldOffset(Offset = "0x20")]
	private Stack<ExpressionCombinator> m_CombinatorStack;

	[Token(Token = "0x4001810")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, Expression> m_ParsedExpressionCache;

	[Token(Token = "0x6002DDF")]
	[Address(RVA = "0x6BFA4D0", Offset = "0x6BF94D0", VA = "0x6BFA4D0")]
	public Expression Parse(string syntax)
	{
		return null;
	}

	[Token(Token = "0x6002DE0")]
	[Address(RVA = "0x6BFB2F0", Offset = "0x6BFA2F0", VA = "0x6BFB2F0")]
	private Expression ParseExpression(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE1")]
	[Address(RVA = "0x6BFBF10", Offset = "0x6BFAF10", VA = "0x6BFBF10")]
	private void ProcessCombinatorStack()
	{
	}

	[Token(Token = "0x6002DE2")]
	[Address(RVA = "0x6BFB770", Offset = "0x6BFA770", VA = "0x6BFB770")]
	private Expression ParseTerm(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE3")]
	[Address(RVA = "0x6BFBD40", Offset = "0x6BFAD40", VA = "0x6BFBD40")]
	private ExpressionCombinator ParseCombinatorType(StyleSyntaxTokenizer tokenizer)
	{
		return default(ExpressionCombinator);
	}

	[Token(Token = "0x6002DE4")]
	[Address(RVA = "0x6BFB9A0", Offset = "0x6BFA9A0", VA = "0x6BFB9A0")]
	private Expression ParseGroup(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE5")]
	[Address(RVA = "0x6BFC250", Offset = "0x6BFB250", VA = "0x6BFC250")]
	private Expression ParseDataType(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE6")]
	[Address(RVA = "0x6BFCD80", Offset = "0x6BFBD80", VA = "0x6BFCD80")]
	private Expression ParseNonTerminalValue(string syntax)
	{
		return null;
	}

	[Token(Token = "0x6002DE7")]
	[Address(RVA = "0x6BFCF20", Offset = "0x6BFBF20", VA = "0x6BFCF20")]
	private Expression ParseProperty(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE8")]
	[Address(RVA = "0x6BFCA60", Offset = "0x6BFBA60", VA = "0x6BFCA60")]
	private void ParseMultiplier(StyleSyntaxTokenizer tokenizer, ref ExpressionMultiplier multiplier)
	{
	}

	[Token(Token = "0x6002DE9")]
	[Address(RVA = "0x6BFD300", Offset = "0x6BFC300", VA = "0x6BFD300")]
	private void ParseLimits(StyleSyntaxTokenizer tokenizer, out float min, out float max)
	{
	}

	[Token(Token = "0x6002DEA")]
	[Address(RVA = "0x6BFD510", Offset = "0x6BFC510", VA = "0x6BFD510")]
	private void ParseRanges(StyleSyntaxTokenizer tokenizer, out int min, out int max)
	{
	}

	[Token(Token = "0x6002DEB")]
	[Address(RVA = "0x6BFCCB0", Offset = "0x6BFBCB0", VA = "0x6BFCCB0")]
	private static void EatSpace(StyleSyntaxTokenizer tokenizer)
	{
	}

	[Token(Token = "0x6002DEC")]
	[Address(RVA = "0x6BFC230", Offset = "0x6BFB230", VA = "0x6BFC230")]
	private static bool IsExpressionEnd(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DED")]
	[Address(RVA = "0x6BFCCA0", Offset = "0x6BFBCA0", VA = "0x6BFCCA0")]
	private static bool IsCombinator(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DEE")]
	[Address(RVA = "0x6BFD4F0", Offset = "0x6BFC4F0", VA = "0x6BFD4F0")]
	private static bool IsMultiplier(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DEF")]
	[Address(RVA = "0x6BFD6D0", Offset = "0x6BFC6D0", VA = "0x6BFD6D0")]
	public StyleSyntaxParser()
	{
	}
}
