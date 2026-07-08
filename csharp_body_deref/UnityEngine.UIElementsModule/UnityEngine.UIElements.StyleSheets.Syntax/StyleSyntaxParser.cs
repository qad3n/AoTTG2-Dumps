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
	[Address(RVA = "0x4CA8FC0", Offset = "0x4CA8FC0", VA = "0x4CA8FC0")]
	public Expression Parse(string syntax)
	{
		return null;
	}

	[Token(Token = "0x6002074")]
	[Address(RVA = "0x4CAA020", Offset = "0x4CAA020", VA = "0x4CAA020")]
	private Expression ParseExpression(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002075")]
	[Address(RVA = "0x4CAA900", Offset = "0x4CAA900", VA = "0x4CAA900")]
	private void ProcessCombinatorStack()
	{
	}

	[Token(Token = "0x6002076")]
	[Address(RVA = "0x4CAA370", Offset = "0x4CAA370", VA = "0x4CAA370")]
	private Expression ParseTerm(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002077")]
	[Address(RVA = "0x4CAA7A0", Offset = "0x4CAA7A0", VA = "0x4CAA7A0")]
	private ExpressionCombinator ParseCombinatorType(StyleSyntaxTokenizer tokenizer)
	{
		return default(ExpressionCombinator);
	}

	[Token(Token = "0x6002078")]
	[Address(RVA = "0x4CAA510", Offset = "0x4CAA510", VA = "0x4CAA510")]
	private Expression ParseGroup(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x6002079")]
	[Address(RVA = "0x4CAAC60", Offset = "0x4CAAC60", VA = "0x4CAAC60")]
	private Expression ParseDataType(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x600207A")]
	[Address(RVA = "0x4CAB3E0", Offset = "0x4CAB3E0", VA = "0x4CAB3E0")]
	private Expression ParseNonTerminalValue(string syntax)
	{
		return null;
	}

	[Token(Token = "0x600207B")]
	[Address(RVA = "0x4CAB580", Offset = "0x4CAB580", VA = "0x4CAB580")]
	private Expression ParseProperty(StyleSyntaxTokenizer tokenizer)
	{
		return null;
	}

	[Token(Token = "0x600207C")]
	[Address(RVA = "0x4CAB160", Offset = "0x4CAB160", VA = "0x4CAB160")]
	private void ParseMultiplier(StyleSyntaxTokenizer tokenizer, ref ExpressionMultiplier multiplier)
	{
	}

	[Token(Token = "0x600207D")]
	[Address(RVA = "0x4CAB8F0", Offset = "0x4CAB8F0", VA = "0x4CAB8F0")]
	private void ParseRanges(StyleSyntaxTokenizer tokenizer, out int min, out int max)
	{
	}

	[Token(Token = "0x600207E")]
	[Address(RVA = "0x4CAB3A0", Offset = "0x4CAB3A0", VA = "0x4CAB3A0")]
	private static void EatSpace(StyleSyntaxTokenizer tokenizer)
	{
	}

	[Token(Token = "0x600207F")]
	[Address(RVA = "0x4CAAC40", Offset = "0x4CAAC40", VA = "0x4CAAC40")]
	private static bool IsExpressionEnd(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x4CAB390", Offset = "0x4CAB390", VA = "0x4CAB390")]
	private static bool IsCombinator(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x4CAB8D0", Offset = "0x4CAB8D0", VA = "0x4CAB8D0")]
	private static bool IsMultiplier(StyleSyntaxToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x4CABA10", Offset = "0x4CABA10", VA = "0x4CABA10")]
	public StyleSyntaxParser()
	{
	}
}
