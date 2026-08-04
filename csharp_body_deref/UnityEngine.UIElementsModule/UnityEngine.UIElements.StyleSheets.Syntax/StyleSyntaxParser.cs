// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000550")]
internal class StyleSyntaxParser
{
	[Token(Token = "0x4001260")]
	[FieldOffset(Offset = "0x10")]
	private List<Expression> m_ProcessExpressionList;

	[Token(Token = "0x4001261")]
	[FieldOffset(Offset = "0x18")]
	private Stack<Expression> m_ExpressionStack;

	[Token(Token = "0x4001262")]
	[FieldOffset(Offset = "0x20")]
	private Stack<ExpressionCombinator> m_CombinatorStack;

	[Token(Token = "0x4001263")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, Expression> m_ParsedExpressionCache;

	[Token(Token = "0x6002073")]
	[Address(RVA = "0x4FD08F0", Offset = "0x4FD08F0", VA = "0x4FD08F0")]
	public Expression Parse(string syntax)
	{
		return null;
	}

	[Token(Token = "0x6002074")]
	[Address(RVA = "0x4FD1950", Offset = "0x4FD1950", VA = "0x4FD1950")]
	private Expression ParseExpression(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002075")]
	[Address(RVA = "0x4FD2230", Offset = "0x4FD2230", VA = "0x4FD2230")]
	private void ProcessCombinatorStack()
	{
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x4FD1CA0", Offset = "0x4FD1CA0", VA = "0x4FD1CA0")]
	private Expression ParseTerm(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002077")]
	[Address(RVA = "0x4FD20D0", Offset = "0x4FD20D0", VA = "0x4FD20D0")]
	private ExpressionCombinator ParseCombinatorType(StyleSyntaxTokenizer tokenizer)
	{
		return default(ExpressionCombinator);
	}

	[Token(Token = "0x6002078")]
	[Address(RVA = "0x4FD1E40", Offset = "0x4FD1E40", VA = "0x4FD1E40")]
	private Expression ParseGroup(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x4FD2590", Offset = "0x4FD2590", VA = "0x4FD2590")]
	private Expression ParseDataType(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x600207A")]
	[Address(RVA = "0x4FD2D10", Offset = "0x4FD2D10", VA = "0x4FD2D10")]
	private Expression ParseNonTerminalValue(string syntax)
	{
		return null;
	}

	[Token(Token = "0x600207B")]
	[Address(RVA = "0x4FD2EB0", Offset = "0x4FD2EB0", VA = "0x4FD2EB0")]
	private Expression ParseProperty(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x600207C")]
	[Address(RVA = "0x4FD2A90", Offset = "0x4FD2A90", VA = "0x4FD2A90")]
	private void ParseMultiplier(StyleSyntaxTokenizer tokenizer, ref ExpressionMultiplier multiplier)
	{
	}

	[Token(Token = "0x600207D")]
	[Address(RVA = "0x4FD3220", Offset = "0x4FD3220", VA = "0x4FD3220")]
	private void ParseRanges(StyleSyntaxTokenizer tokenizer, out int min, out int max)
	{
	}

	[Token(Token = "0x600207E")]
	[Address(RVA = "0x4FD2CD0", Offset = "0x4FD2CD0", VA = "0x4FD2CD0")]
	private static void EatSpace(StyleSyntaxTokenizer tokenizer)
	{
	}

	[Token(Token = "0x600207F")]
	[Address(RVA = "0x4FD2570", Offset = "0x4FD2570", VA = "0x4FD2570")]
	private static bool IsExpressionEnd(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x4FD2CC0", Offset = "0x4FD2CC0", VA = "0x4FD2CC0")]
	private static bool IsCombinator(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x4FD3200", Offset = "0x4FD3200", VA = "0x4FD3200")]
	private static bool IsMultiplier(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x4FD3340", Offset = "0x4FD3340", VA = "0x4FD3340")]
	public StyleSyntaxParser()
	{
	}
}
