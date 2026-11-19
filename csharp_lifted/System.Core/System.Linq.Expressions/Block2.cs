// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Block2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000069")]
internal sealed class Block2 : BlockExpression
{
	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x17000061")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x5DC44F0", Offset = "0x5DC34F0", VA = "0x5DC44F0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x5DC43A0", Offset = "0x5DC33A0", VA = "0x5DC43A0")]
	internal Block2(Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x5DC4420", Offset = "0x5DC3420", VA = "0x5DC4420", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x5DC4500", Offset = "0x5DC3500", VA = "0x5DC4500", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x5DC4510", Offset = "0x5DC3510", VA = "0x5DC4510", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
