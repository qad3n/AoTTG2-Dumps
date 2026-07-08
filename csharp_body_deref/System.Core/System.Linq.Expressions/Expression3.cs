using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000098")]
internal sealed class Expression3<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x0")]
	private object _par0;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x0")]
	private readonly ParameterExpression _par1;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x0")]
	private readonly ParameterExpression _par2;

	[Token(Token = "0x170000B3")]
	internal override int ParameterCount
	{
		[Token(Token = "0x600045A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000459")]
	public Expression3(Expression body, ParameterExpression par0, ParameterExpression par1, ParameterExpression par2)
	{
	}

	[Token(Token = "0x600045B")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x600045C")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
