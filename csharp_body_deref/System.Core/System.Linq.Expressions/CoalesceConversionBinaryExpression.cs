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
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x106DD80", Offset = "0x106C380", VA = "0x18106DD80", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000054")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x1C702C0", Offset = "0x1C6E8C0", VA = "0x181C702C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x2409A70", Offset = "0x2408070", VA = "0x182409A70")]
	internal CoalesceConversionBinaryExpression(Expression left, Expression right, LambdaExpression conversion)
	{
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "11")]
	internal override LambdaExpression GetConversion()
	{
		return null;
	}
}
