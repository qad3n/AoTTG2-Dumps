using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000089")]
internal sealed class InvocationExpressionN : InvocationExpression
{
	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x20")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x17000095")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x4196800", Offset = "0x4196800", VA = "0x4196800", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x41966C0", Offset = "0x41966C0", VA = "0x41966C0")]
	public InvocationExpressionN(Expression lambda, IReadOnlyList<Expression> arguments, Type returnType)
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x4196750", Offset = "0x4196750", VA = "0x4196750", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4196890", Offset = "0x4196890", VA = "0x4196890", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
