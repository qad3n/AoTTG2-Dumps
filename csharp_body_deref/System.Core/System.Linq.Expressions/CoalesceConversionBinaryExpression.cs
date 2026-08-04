// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.CoalesceConversionBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000047")]
internal sealed class CoalesceConversionBinaryExpression : BinaryExpression
{
	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x20")]
	private readonly LambdaExpression _conversion;

	[Token(Token = "0x17000053")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x4496D10", Offset = "0x4496D10", VA = "0x4496D10", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000054")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4496D20", Offset = "0x4496D20", VA = "0x4496D20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4496C70", Offset = "0x4496C70", VA = "0x4496C70")]
	internal CoalesceConversionBinaryExpression(Expression left, Expression right, LambdaExpression conversion)
	{
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4496D00", Offset = "0x4496D00", VA = "0x4496D00", Slot = "11")]
	internal override LambdaExpression GetConversion()
	{
		return null;
	}
}
