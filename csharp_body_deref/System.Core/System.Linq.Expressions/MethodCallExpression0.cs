using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AA")]
internal sealed class MethodCallExpression0 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x170000D1")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x41987A0", Offset = "0x41987A0", VA = "0x41987A0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x41986E0", Offset = "0x41986E0", VA = "0x41986E0")]
	public MethodCallExpression0(MethodInfo method)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4198750", Offset = "0x4198750", VA = "0x4198750", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x41987B0", Offset = "0x41987B0", VA = "0x41987B0", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
