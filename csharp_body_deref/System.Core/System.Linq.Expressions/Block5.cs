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
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x4189990", Offset = "0x4189990", VA = "0x4189990", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x4189820", Offset = "0x4189820", VA = "0x4189820")]
	internal Block5(Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x41898E0", Offset = "0x41898E0", VA = "0x41898E0", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x41899A0", Offset = "0x41899A0", VA = "0x41899A0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x41899B0", Offset = "0x41899B0", VA = "0x41899B0", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
