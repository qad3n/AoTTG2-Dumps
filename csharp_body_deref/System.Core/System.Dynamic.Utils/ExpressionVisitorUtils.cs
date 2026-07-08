using System.Linq.Expressions;
using Il2CppDummyDll;

namespace System.Dynamic.Utils;

[Token(Token = "0x2000283")]
internal static class ExpressionVisitorUtils
{
	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x41ED270", Offset = "0x41ED270", VA = "0x41ED270")]
	public static Expression[] VisitBlockExpressions(ExpressionVisitor visitor, BlockExpression block)
	{
		return null;
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x41ED4C0", Offset = "0x41ED4C0", VA = "0x41ED4C0")]
	public static ParameterExpression[] VisitParameters(ExpressionVisitor visitor, IParameterProvider nodes, string callerName)
	{
		return null;
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x41ED8A0", Offset = "0x41ED8A0", VA = "0x41ED8A0")]
	public static Expression[] VisitArguments(ExpressionVisitor visitor, IArgumentProvider nodes)
	{
		return null;
	}
}
