// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Block3
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006A")]
internal sealed class Block3 : BlockExpression
{
	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x17000062")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x5DC4700", Offset = "0x5DC3700", VA = "0x5DC4700", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5DC45E0", Offset = "0x5DC35E0", VA = "0x5DC45E0")]
	internal Block3(Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x5DC4670", Offset = "0x5DC3670", VA = "0x5DC4670", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x5DC4710", Offset = "0x5DC3710", VA = "0x5DC4710", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x5DC4720", Offset = "0x5DC3720", VA = "0x5DC4720", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
