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

[Token(Token = "0x200048E")]
internal class CustomLogicParser
{
	[Token(Token = "0x40013A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x40013A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Error;

	[Token(Token = "0x17000944")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003058")]
		[Address(RVA = "0x4162090", Offset = "0x4162090", VA = "0x4162090")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6003059")]
		[Address(RVA = "0x41620A0", Offset = "0x41620A0", VA = "0x41620A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600305A")]
	[Address(RVA = "0x41600D0", Offset = "0x41600D0", VA = "0x41600D0")]
	public CustomLogicParser(List<CustomLogicToken> tokens, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x600305B")]
	[Address(RVA = "0x41620B0", Offset = "0x41620B0", VA = "0x41620B0")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x600305C")]
	[Address(RVA = "0x41601A0", Offset = "0x41601A0", VA = "0x41601A0")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x600305D")]
	[Address(RVA = "0x4163640", Offset = "0x4163640", VA = "0x4163640")]
	public CustomLogicBaseExpressionAst ParseExpression(CustomLogicBaseExpressionAst prev, int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x600305E")]
	[Address(RVA = "0x4164B90", Offset = "0x4164B90", VA = "0x4164B90")]
	public object[] ParseExpressionAst(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x600305F")]
	[Address(RVA = "0x41620E0", Offset = "0x41620E0", VA = "0x41620E0")]
	public int ParseAst(int startIndex, CustomLogicBaseAst prev)
	{
		return default(int);
	}

	[Token(Token = "0x6003060")]
	[Address(RVA = "0x4164140", Offset = "0x4164140", VA = "0x4164140")]
	private int FindLowestBinop(int startIndex, int endIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6003061")]
	[Address(RVA = "0x4164840", Offset = "0x4164840", VA = "0x4164840")]
	private int[] FindCommas(int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x6003062")]
	[Address(RVA = "0x4164590", Offset = "0x4164590", VA = "0x4164590")]
	private int FindClosingParen(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6003063")]
	[Address(RVA = "0x4164CB0", Offset = "0x4164CB0", VA = "0x4164CB0")]
	private int FindSemicolon(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6003064")]
	[Address(RVA = "0x4164D80", Offset = "0x4164D80", VA = "0x4164D80")]
	private bool IsSymbolIn(CustomLogicToken token, HashSet<int> symbols)
	{
		return default(bool);
	}

	[Token(Token = "0x6003065")]
	[Address(RVA = "0x4165080", Offset = "0x4165080", VA = "0x4165080")]
	private bool IsSymbolBinop(CustomLogicToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6003066")]
	[Address(RVA = "0x4164540", Offset = "0x4164540", VA = "0x4164540")]
	private bool IsSymbolValue(CustomLogicToken token, int symbolValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6003067")]
	[Address(RVA = "0x4164470", Offset = "0x4164470", VA = "0x4164470")]
	private bool IsAnySymbolValue(CustomLogicToken token, params int[] symbolValues)
	{
		return default(bool);
	}

	[Token(Token = "0x6003068")]
	[Address(RVA = "0x4164E10", Offset = "0x4164E10", VA = "0x4164E10")]
	private void AssertSymbolValue(CustomLogicToken token, int symbolValue)
	{
	}

	[Token(Token = "0x6003069")]
	[Address(RVA = "0x41646B0", Offset = "0x41646B0", VA = "0x41646B0")]
	private void AssertTokenType(CustomLogicToken token, CustomLogicTokenType type)
	{
	}

	[Token(Token = "0x600306A")]
	[Address(RVA = "0x4164FE0", Offset = "0x4164FE0", VA = "0x4164FE0")]
	private void AssertFalse(CustomLogicToken token)
	{
	}

	[Token(Token = "0x600306B")]
	[Address(RVA = "0x4165140", Offset = "0x4165140", VA = "0x4165140")]
	private string GetTokenString(CustomLogicToken token)
	{
		return null;
	}
}
