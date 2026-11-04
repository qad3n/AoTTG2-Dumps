// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x31F9870", Offset = "0x31F7E70", VA = "0x1831F9870")]
	public Expression Parse(string syntax)
	{
		return null;
	}

	[Token(Token = "0x6002DE0")]
	[Address(RVA = "0x31F84D0", Offset = "0x31F6AD0", VA = "0x1831F84D0")]
	private Expression ParseExpression(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE1")]
	[Address(RVA = "0x31F9A20", Offset = "0x31F8020", VA = "0x1831F9A20")]
	private void ProcessCombinatorStack()
	{
	}

	[Token(Token = "0x6002DE2")]
	[Address(RVA = "0x31F96C0", Offset = "0x31F7CC0", VA = "0x1831F96C0")]
	private Expression ParseTerm(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE3")]
	[Address(RVA = "0x31F7C30", Offset = "0x31F6230", VA = "0x1831F7C30")]
	private ExpressionCombinator ParseCombinatorType(StyleSyntaxTokenizer tokenizer)
	{
		return default(ExpressionCombinator);
	}

	[Token(Token = "0x6002DE4")]
	[Address(RVA = "0x31F8760", Offset = "0x31F6D60", VA = "0x1831F8760")]
	private Expression ParseGroup(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE5")]
	[Address(RVA = "0x31F7E60", Offset = "0x31F6460", VA = "0x1831F7E60")]
	private Expression ParseDataType(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE6")]
	[Address(RVA = "0x31F8F60", Offset = "0x31F7560", VA = "0x1831F8F60")]
	private Expression ParseNonTerminalValue(string syntax)
	{
		return null;
	}

	[Token(Token = "0x6002DE7")]
	[Address(RVA = "0x31F9100", Offset = "0x31F7700", VA = "0x1831F9100")]
	private Expression ParseProperty(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002DE8")]
	[Address(RVA = "0x31F8D00", Offset = "0x31F7300", VA = "0x1831F8D00")]
	private void ParseMultiplier(StyleSyntaxTokenizer tokenizer, ref ExpressionMultiplier multiplier)
	{
	}

	[Token(Token = "0x6002DE9")]
	[Address(RVA = "0x31F8A60", Offset = "0x31F7060", VA = "0x1831F8A60")]
	private void ParseLimits(StyleSyntaxTokenizer tokenizer, out float min, out float max)
	{
	}

	[Token(Token = "0x6002DEA")]
	[Address(RVA = "0x31F9580", Offset = "0x31F7B80", VA = "0x1831F9580")]
	private void ParseRanges(StyleSyntaxTokenizer tokenizer, out int min, out int max)
	{
	}

	[Token(Token = "0x6002DEB")]
	[Address(RVA = "0x31F7BA0", Offset = "0x31F61A0", VA = "0x1831F7BA0")]
	private static void EatSpace(StyleSyntaxTokenizer tokenizer)
	{
	}

	[Token(Token = "0x6002DEC")]
	[Address(RVA = "0x31F7BF0", Offset = "0x31F61F0", VA = "0x1831F7BF0")]
	private static bool IsExpressionEnd(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DED")]
	[Address(RVA = "0x31F7BE0", Offset = "0x31F61E0", VA = "0x1831F7BE0")]
	private static bool IsCombinator(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DEE")]
	[Address(RVA = "0x31F7C10", Offset = "0x31F6210", VA = "0x1831F7C10")]
	private static bool IsMultiplier(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DEF")]
	[Address(RVA = "0x31F9D70", Offset = "0x31F8370", VA = "0x1831F9D70")]
	public StyleSyntaxParser()
	{
	}
}
