using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A9")]
internal sealed class InstanceMethodCallExpressionN : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x20")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000D0")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000496")]
		[Address(RVA = "0x41985C0", Offset = "0x41985C0", VA = "0x41985C0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4198480", Offset = "0x4198480", VA = "0x4198480")]
	public InstanceMethodCallExpressionN(MethodInfo method, Expression instance, IReadOnlyList<Expression> args)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4198510", Offset = "0x4198510", VA = "0x4198510", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4198650", Offset = "0x4198650", VA = "0x4198650", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
