using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000096")]
internal sealed class Expression1<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x0")]
	private object _par0;

	[Token(Token = "0x170000B1")]
	internal override int ParameterCount
	{
		[Token(Token = "0x6000452")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000451")]
	public Expression1(Expression body, ParameterExpression par0)
	{
	}

	[Token(Token = "0x6000453")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000454")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
