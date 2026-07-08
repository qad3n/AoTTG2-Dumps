using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000095")]
internal sealed class Expression0<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x170000B0")]
	internal override int ParameterCount
	{
		[Token(Token = "0x600044E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600044D")]
	public Expression0(Expression body)
	{
	}

	[Token(Token = "0x600044F")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000450")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
