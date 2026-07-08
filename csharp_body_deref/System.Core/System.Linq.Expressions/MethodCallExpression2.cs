using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AC")]
internal sealed class MethodCallExpression2 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x170000D3")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x4198B50", Offset = "0x4198B50", VA = "0x4198B50", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4198A20", Offset = "0x4198A20", VA = "0x4198A20")]
	public MethodCallExpression2(MethodInfo method, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4198AB0", Offset = "0x4198AB0", VA = "0x4198AB0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4198B60", Offset = "0x4198B60", VA = "0x4198B60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
