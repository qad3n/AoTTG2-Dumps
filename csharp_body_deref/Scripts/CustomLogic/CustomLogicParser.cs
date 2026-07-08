using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000449")]
internal class CustomLogicParser
{
	[Token(Token = "0x4001299")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x400129A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Error;

	[Token(Token = "0x170008DA")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6002E4B")]
		[Address(RVA = "0x3E55F40", Offset = "0x3E55F40", VA = "0x3E55F40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E4C")]
		[Address(RVA = "0x3E55F50", Offset = "0x3E55F50", VA = "0x3E55F50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002E4D")]
	[Address(RVA = "0x3E55F60", Offset = "0x3E55F60", VA = "0x3E55F60")]
	public CustomLogicParser(List<CustomLogicToken> tokens, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x6002E4E")]
	[Address(RVA = "0x3E56030", Offset = "0x3E56030", VA = "0x3E56030")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x6002E4F")]
	[Address(RVA = "0x3E56060", Offset = "0x3E56060", VA = "0x3E56060")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x6002E50")]
	[Address(RVA = "0x3E57630", Offset = "0x3E57630", VA = "0x3E57630")]
	public CustomLogicBaseExpressionAst ParseExpression(CustomLogicBaseExpressionAst prev, int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E51")]
	[Address(RVA = "0x3E58B80", Offset = "0x3E58B80", VA = "0x3E58B80")]
	public object[] ParseExpressionAst(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E52")]
	[Address(RVA = "0x3E56280", Offset = "0x3E56280", VA = "0x3E56280")]
	public int ParseAst(int startIndex, CustomLogicBaseAst prev)
	{
		return default(int);
	}

	[Token(Token = "0x6002E53")]
	[Address(RVA = "0x3E58130", Offset = "0x3E58130", VA = "0x3E58130")]
	private int FindLowestBinop(int startIndex, int endIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6002E54")]
	[Address(RVA = "0x3E58830", Offset = "0x3E58830", VA = "0x3E58830")]
	private int[] FindCommas(int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x6002E55")]
	[Address(RVA = "0x3E58580", Offset = "0x3E58580", VA = "0x3E58580")]
	private int FindClosingParen(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6002E56")]
	[Address(RVA = "0x3E58CA0", Offset = "0x3E58CA0", VA = "0x3E58CA0")]
	private int FindSemicolon(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6002E57")]
	[Address(RVA = "0x3E58D70", Offset = "0x3E58D70", VA = "0x3E58D70")]
	private bool IsSymbolIn(CustomLogicToken token, HashSet<int> symbols)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E58")]
	[Address(RVA = "0x3E59070", Offset = "0x3E59070", VA = "0x3E59070")]
	private bool IsSymbolBinop(CustomLogicToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E59")]
	[Address(RVA = "0x3E58530", Offset = "0x3E58530", VA = "0x3E58530")]
	private bool IsSymbolValue(CustomLogicToken token, int symbolValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E5A")]
	[Address(RVA = "0x3E58460", Offset = "0x3E58460", VA = "0x3E58460")]
	private bool IsAnySymbolValue(CustomLogicToken token, params int[] symbolValues)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E5B")]
	[Address(RVA = "0x3E58E00", Offset = "0x3E58E00", VA = "0x3E58E00")]
	private void AssertSymbolValue(CustomLogicToken token, int symbolValue)
	{
	}

	[Token(Token = "0x6002E5C")]
	[Address(RVA = "0x3E586A0", Offset = "0x3E586A0", VA = "0x3E586A0")]
	private void AssertTokenType(CustomLogicToken token, CustomLogicTokenType type)
	{
	}

	[Token(Token = "0x6002E5D")]
	[Address(RVA = "0x3E58FD0", Offset = "0x3E58FD0", VA = "0x3E58FD0")]
	private void AssertFalse(CustomLogicToken token)
	{
	}

	[Token(Token = "0x6002E5E")]
	[Address(RVA = "0x3E59130", Offset = "0x3E59130", VA = "0x3E59130")]
	private string GetTokenString(CustomLogicToken token)
	{
		return null;
	}
}
