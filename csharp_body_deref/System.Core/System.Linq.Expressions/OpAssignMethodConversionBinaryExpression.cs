// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.OpAssignMethodConversionBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000049")]
internal sealed class OpAssignMethodConversionBinaryExpression : MethodBinaryExpression
{
	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x38")]
	private readonly LambdaExpression _conversion;

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x5DAD220", Offset = "0x5DAC220", VA = "0x5DAD220")]
	internal OpAssignMethodConversionBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type, MethodInfo method, LambdaExpression conversion)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x5DAD300", Offset = "0x5DAC300", VA = "0x5DAD300", Slot = "11")]
	internal override LambdaExpression GetConversion()
	{
		return null;
	}
}
