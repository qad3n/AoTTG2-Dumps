using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AB")]
internal sealed class MethodCallExpression1 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x170000D2")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600049E")]
		[Address(RVA = "0x4198920", Offset = "0x4198920", VA = "0x4198920", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4198810", Offset = "0x4198810", VA = "0x4198810")]
	public MethodCallExpression1(MethodInfo method, Expression arg0)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4198890", Offset = "0x4198890", VA = "0x4198890", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4198930", Offset = "0x4198930", VA = "0x4198930", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
