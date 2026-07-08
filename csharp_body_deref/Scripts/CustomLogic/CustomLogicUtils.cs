using System;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000450")]
internal static class CustomLogicUtils
{
	[Token(Token = "0x6002E72")]
	[Address(RVA = "0x3E5ADC0", Offset = "0x3E5ADC0", VA = "0x3E5ADC0")]
	public static Exception OperatorException(string operatorName, object lhs, object rhs)
	{
		return null;
	}

	[Token(Token = "0x6002E73")]
	[Address(RVA = "0x3E5AE70", Offset = "0x3E5AE70", VA = "0x3E5AE70")]
	public static string SerializeAst(CustomLogicBaseAst ast)
	{
		return null;
	}

	[Token(Token = "0x6002E74")]
	[Address(RVA = "0x3E5B780", Offset = "0x3E5B780", VA = "0x3E5B780")]
	public static float BaseAstToFloat(CustomLogicBaseAst ast)
	{
		return default(float);
	}

	[Token(Token = "0x6002E75")]
	[Address(RVA = "0x3E5B650", Offset = "0x3E5B650", VA = "0x3E5B650")]
	public static int BaseAstToInt(CustomLogicBaseAst ast)
	{
		return default(int);
	}
}
