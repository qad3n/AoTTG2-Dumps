using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B3")]
internal sealed class InstanceMethodCallExpression3 : InstanceMethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x170000DA")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x419A170", Offset = "0x419A170", VA = "0x419A170", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x419A000", Offset = "0x419A000", VA = "0x419A000")]
	public InstanceMethodCallExpression3(MethodInfo method, Expression instance, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x419A0C0", Offset = "0x419A0C0", VA = "0x419A0C0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x419A180", Offset = "0x419A180", VA = "0x419A180", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
