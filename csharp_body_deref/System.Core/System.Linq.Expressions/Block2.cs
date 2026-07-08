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
		[Address(RVA = "0x41892E0", Offset = "0x41892E0", VA = "0x41892E0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4189190", Offset = "0x4189190", VA = "0x4189190")]
	internal Block2(Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4189210", Offset = "0x4189210", VA = "0x4189210", Slot = "10")]
	internal override Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x41892F0", Offset = "0x41892F0", VA = "0x41892F0", Slot = "12")]
	internal override ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4189300", Offset = "0x4189300", VA = "0x4189300", Slot = "14")]
	internal override BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}
}
