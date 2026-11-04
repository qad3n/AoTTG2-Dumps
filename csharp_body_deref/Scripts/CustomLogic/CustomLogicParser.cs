// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicParser
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicParser.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicParser.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005E5")]
internal class CustomLogicParser
{
	[Token(Token = "0x40019EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected List<CustomLogicToken> _tokens;

	[Token(Token = "0x40019EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string Error;

	[Token(Token = "0x17000A3B")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x60039D7")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60039D8")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60039D9")]
	[Address(RVA = "0x20E8400", Offset = "0x20E6A00", VA = "0x1820E8400")]
	public CustomLogicParser(List<CustomLogicToken> tokens, [Optional] CustomLogicCompiler compiler)
	{
	}

	[Token(Token = "0x60039DA")]
	[Address(RVA = "0x20E5270", Offset = "0x20E3870", VA = "0x1820E5270")]
	public string GetLineNumberString(int line)
	{
		return null;
	}

	[Token(Token = "0x60039DB")]
	[Address(RVA = "0x20E52B0", Offset = "0x20E38B0", VA = "0x1820E52B0")]
	public CustomLogicStartAst GetStartAst()
	{
		return null;
	}

	[Token(Token = "0x60039DC")]
	[Address(RVA = "0x20E7940", Offset = "0x20E5F40", VA = "0x1820E7940")]
	public CustomLogicBaseExpressionAst ParseExpression(CustomLogicBaseExpressionAst prev, int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x60039DD")]
	[Address(RVA = "0x20E77F0", Offset = "0x20E5DF0", VA = "0x1820E77F0")]
	public object[] ParseExpressionAst(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039DE")]
	[Address(RVA = "0x20E57A0", Offset = "0x20E3DA0", VA = "0x1820E57A0")]
	public int ParseAst(int startIndex, CustomLogicBaseAst prev)
	{
		return default(int);
	}

	[Token(Token = "0x60039DF")]
	[Address(RVA = "0x20E72F0", Offset = "0x20E58F0", VA = "0x1820E72F0")]
	private object[] ParseDecorator(int startIndex)
	{
		return null;
	}

	[Token(Token = "0x60039E0")]
	[Address(RVA = "0x20E6E80", Offset = "0x20E5480", VA = "0x1820E6E80")]
	private object ParseDecoratorParameter(int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x60039E1")]
	[Address(RVA = "0x20E4E90", Offset = "0x20E3490", VA = "0x1820E4E90")]
	private int FindLowestBinop(int startIndex, int endIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60039E2")]
	[Address(RVA = "0x20E4CA0", Offset = "0x20E32A0", VA = "0x1820E4CA0")]
	private int[] FindCommas(int startIndex, int endIndex)
	{
		return null;
	}

	[Token(Token = "0x60039E3")]
	[Address(RVA = "0x20E4B60", Offset = "0x20E3160", VA = "0x1820E4B60")]
	private int FindClosingParen(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60039E4")]
	[Address(RVA = "0x20E51A0", Offset = "0x20E37A0", VA = "0x1820E51A0")]
	private int FindSemicolon(int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60039E5")]
	[Address(RVA = "0x20E56A0", Offset = "0x20E3CA0", VA = "0x1820E56A0")]
	private bool IsSymbolIn(CustomLogicToken token, HashSet<int> symbols)
	{
		return default(bool);
	}

	[Token(Token = "0x60039E6")]
	[Address(RVA = "0x20E55D0", Offset = "0x20E3BD0", VA = "0x1820E55D0")]
	private bool IsSymbolBinop(CustomLogicToken token)
	{
		return default(bool);
	}

	[Token(Token = "0x60039E7")]
	[Address(RVA = "0x20E5740", Offset = "0x20E3D40", VA = "0x1820E5740")]
	private bool IsSymbolValue(CustomLogicToken token, int symbolValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60039E8")]
	[Address(RVA = "0x20E5540", Offset = "0x20E3B40", VA = "0x1820E5540")]
	private bool IsAnySymbolValue(CustomLogicToken token, params int[] symbolValues)
	{
		return default(bool);
	}

	[Token(Token = "0x60039E9")]
	[Address(RVA = "0x20E47D0", Offset = "0x20E2DD0", VA = "0x1820E47D0")]
	private void AssertSymbolValue(CustomLogicToken token, int symbolValue)
	{
	}

	[Token(Token = "0x60039EA")]
	[Address(RVA = "0x20E49B0", Offset = "0x20E2FB0", VA = "0x1820E49B0")]
	private void AssertTokenType(CustomLogicToken token, CustomLogicTokenType type)
	{
	}

	[Token(Token = "0x60039EB")]
	[Address(RVA = "0x20E4710", Offset = "0x20E2D10", VA = "0x1820E4710")]
	private void AssertFalse(CustomLogicToken token)
	{
	}

	[Token(Token = "0x60039EC")]
	[Address(RVA = "0x20E5470", Offset = "0x20E3A70", VA = "0x1820E5470")]
	private string GetTokenString(CustomLogicToken token)
	{
		return null;
	}
}
