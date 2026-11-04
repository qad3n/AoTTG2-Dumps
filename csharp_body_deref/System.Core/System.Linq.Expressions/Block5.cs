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

[Token(Token = "0x200006B")]
internal sealed class Block5 : BlockExpression
{
	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg3;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg4;

	[Token(Token = "0x17000062")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x2428AD0", Offset = "0x24270D0", VA = "0x182428AD0")]
	internal Block5(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x24288A0", Offset = "0x2426EA0", VA = "0x1824288A0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2428240", Offset = "0x2426840", VA = "0x182428240", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x2428970", Offset = "0x2426F70", VA = "0x182428970", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
