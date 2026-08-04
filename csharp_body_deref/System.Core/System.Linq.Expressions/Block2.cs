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

[Token(Token = "0x2000068")]
internal sealed class Block2 : BlockExpression
{
	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x1700005F")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x44AE3E0", Offset = "0x44AE3E0", VA = "0x44AE3E0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x44AE290", Offset = "0x44AE290", VA = "0x44AE290")]
	internal Block2(Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x44AE310", Offset = "0x44AE310", VA = "0x44AE310", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x44AE3F0", Offset = "0x44AE3F0", VA = "0x44AE3F0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x44AE400", Offset = "0x44AE400", VA = "0x44AE400", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
