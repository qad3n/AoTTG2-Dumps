using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000069")]
internal sealed class Block3 : BlockExpression
{
	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x10")]
	private object _arg0;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x18")]
	private readonly Expression _arg1;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg2;

	[Token(Token = "0x17000060")]
	internal override int ExpressionCount
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x41894F0", Offset = "0x41894F0", VA = "0x41894F0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x41893D0", Offset = "0x41893D0", VA = "0x41893D0")]
	internal Block3(Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4189460", Offset = "0x4189460", VA = "0x4189460", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4189500", Offset = "0x4189500", VA = "0x4189500", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4189510", Offset = "0x4189510", VA = "0x4189510", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
