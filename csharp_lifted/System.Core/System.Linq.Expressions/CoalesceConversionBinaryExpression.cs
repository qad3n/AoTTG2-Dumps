// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.CoalesceConversionBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000048")]
internal sealed class CoalesceConversionBinaryExpression : BinaryExpression
{
	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x20")]
	private readonly LambdaExpression _conversion;

	[Token(Token = "0x17000055")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x5DAD1E0", Offset = "0x5DAC1E0", VA = "0x5DAD1E0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000056")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x5DAD1F0", Offset = "0x5DAC1F0", VA = "0x5DAD1F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x5DAD140", Offset = "0x5DAC140", VA = "0x5DAD140")]
	internal CoalesceConversionBinaryExpression(Expression left, Expression right, LambdaExpression conversion)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x5DAD1D0", Offset = "0x5DAC1D0", VA = "0x5DAD1D0", Slot = "11")]
	internal override LambdaExpression GetConversion()
	{
		return null;
	}
}
