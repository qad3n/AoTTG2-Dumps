using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000048")]
internal sealed class OpAssignMethodConversionBinaryExpression : MethodBinaryExpression
{
	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x38")]
	private readonly LambdaExpression _conversion;

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4171C50", Offset = "0x4171C50", VA = "0x4171C50")]
	internal OpAssignMethodConversionBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type, MethodInfo method, LambdaExpression conversion)
	{
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4171D30", Offset = "0x4171D30", VA = "0x4171D30", Slot = "11")]
	internal override LambdaExpression GetConversion()
	{
		return null;
	}
}
