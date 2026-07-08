using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000099")]
internal class ExpressionN<TDelegate> : Expression<TDelegate>
{
	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x0")]
	private IReadOnlyList<ParameterExpression> _parameters;

	[Token(Token = "0x170000B4")]
	internal override int ParameterCount
	{
		[Token(Token = "0x600045E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600045D")]
	public ExpressionN(Expression body, IReadOnlyList<ParameterExpression> parameters)
	{
	}

	[Token(Token = "0x600045F")]
	internal override ParameterExpression GetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000460")]
	internal override Expression<TDelegate> Rewrite(Expression body, ParameterExpression[] parameters)
	{
		return null;
	}
}
