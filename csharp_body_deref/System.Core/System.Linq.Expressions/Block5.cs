// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Block5
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200006C")]
internal sealed class Block5 : BlockExpression
{
	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg3;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg4;

	[Token(Token = "0x17000064")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x5DC4BA0", Offset = "0x5DC3BA0", VA = "0x5DC4BA0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x5DC4A30", Offset = "0x5DC3A30", VA = "0x5DC4A30")]
	internal Block5(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x5DC4AF0", Offset = "0x5DC3AF0", VA = "0x5DC4AF0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5DC4BB0", Offset = "0x5DC3BB0", VA = "0x5DC4BB0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5DC4BC0", Offset = "0x5DC3BC0", VA = "0x5DC4BC0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
