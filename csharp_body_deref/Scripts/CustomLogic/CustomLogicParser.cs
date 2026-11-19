// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicParser.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicParser.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000644")]
internal class CustomLogicParser
{
	[Token(Token = "0x4001B8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x4001B90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Error;

	[Token(Token = "0x17000A83")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003C65")]
		[Address(RVA = "0x5A7BEC0", Offset = "0x5A7AEC0", VA = "0x5A7BEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003C66")]
		[Address(RVA = "0x5A7BED0", Offset = "0x5A7AED0", VA = "0x5A7BED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003C67")]
	[Address(RVA = "0x5A77F20", Offset = "0x5A76F20", VA = "0x5A77F20")]
	public CustomLogicParser(List<CustomLogicToken> tokens, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6003C68")]
	[Address(RVA = "0x5A7BEE0", Offset = "0x5A7AEE0", VA = "0x5A7BEE0")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x6003C69")]
	[Address(RVA = "0x5A77FF0", Offset = "0x5A76FF0", VA = "0x5A77FF0")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6003C6A")]
	[Address(RVA = "0x5A7D3E0", Offset = "0x5A7C3E0", VA = "0x5A7D3E0")]
	public CustomLogicBaseExpressionAst ParseExpression(CustomLogicBaseExpressionAst prev, int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C6B")]
	[Address(RVA = "0x5A7E540", Offset = "0x5A7D540", VA = "0x5A7E540")]
	public object[] ParseExpressionAst(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C6C")]
	[Address(RVA = "0x5A7BF10", Offset = "0x5A7AF10", VA = "0x5A7BF10")]
	public int ParseAst(int startIndex, CustomLogicBaseAst prev)
	{
		return default(int);
	}

	[Token(Token = "0x6003C6D")]
	[Address(RVA = "0x5A7E9F0", Offset = "0x5A7D9F0", VA = "0x5A7E9F0")]
	private object[] ParseDecorator(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C6E")]
	[Address(RVA = "0x5A7EEB0", Offset = "0x5A7DEB0", VA = "0x5A7EEB0")]
	private object ParseDecoratorParameter(int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C6F")]
	[Address(RVA = "0x5A7DCA0", Offset = "0x5A7CCA0", VA = "0x5A7DCA0")]
	private int FindLowestBinop(int startIndex, int endIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6003C70")]
	[Address(RVA = "0x5A7E320", Offset = "0x5A7D320", VA = "0x5A7E320")]
	private int[] FindCommas(int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x6003C71")]
	[Address(RVA = "0x5A7E0B0", Offset = "0x5A7D0B0", VA = "0x5A7E0B0")]
	private int FindClosingParen(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6003C72")]
	[Address(RVA = "0x5A7E660", Offset = "0x5A7D660", VA = "0x5A7E660")]
	private int FindSemicolon(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6003C73")]
	[Address(RVA = "0x5A7E720", Offset = "0x5A7D720", VA = "0x5A7E720")]
	private bool IsSymbolIn(CustomLogicToken token, HashSet<int> symbols)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C74")]
	[Address(RVA = "0x5A7F220", Offset = "0x5A7E220", VA = "0x5A7F220")]
	private bool IsSymbolBinop(CustomLogicToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C75")]
	[Address(RVA = "0x5A7E060", Offset = "0x5A7D060", VA = "0x5A7E060")]
	private bool IsSymbolValue(CustomLogicToken token, int symbolValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C76")]
	[Address(RVA = "0x5A7DFC0", Offset = "0x5A7CFC0", VA = "0x5A7DFC0")]
	private bool IsAnySymbolValue(CustomLogicToken token, params int[] symbolValues)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C77")]
	[Address(RVA = "0x5A7E7B0", Offset = "0x5A7D7B0", VA = "0x5A7E7B0")]
	private void AssertSymbolValue(CustomLogicToken token, int symbolValue)
	{
	}

	[Token(Token = "0x6003C78")]
	[Address(RVA = "0x5A7E1C0", Offset = "0x5A7D1C0", VA = "0x5A7E1C0")]
	private void AssertTokenType(CustomLogicToken token, CustomLogicTokenType type)
	{
	}

	[Token(Token = "0x6003C79")]
	[Address(RVA = "0x5A7E950", Offset = "0x5A7D950", VA = "0x5A7E950")]
	private void AssertFalse(CustomLogicToken token)
	{
	}

	[Token(Token = "0x6003C7A")]
	[Address(RVA = "0x5A7F2E0", Offset = "0x5A7E2E0", VA = "0x5A7F2E0")]
	private string GetTokenString(CustomLogicToken token)
	{
		return null;
	}
}
