using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B0")]
internal sealed class InstanceMethodCallExpression0 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x170000D7")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x4199A50", Offset = "0x4199A50", VA = "0x4199A50", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4199980", Offset = "0x4199980", VA = "0x4199980")]
	public InstanceMethodCallExpression0(MethodInfo method, Expression instance)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4199A00", Offset = "0x4199A00", VA = "0x4199A00", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4199A60", Offset = "0x4199A60", VA = "0x4199A60", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
