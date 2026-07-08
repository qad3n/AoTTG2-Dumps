using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AE")]
internal sealed class MethodCallExpression4 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg3;

	[Token(Token = "0x170000D5")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x4199200", Offset = "0x4199200", VA = "0x4199200", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4199080", Offset = "0x4199080", VA = "0x4199080")]
	public MethodCallExpression4(MethodInfo method, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4199140", Offset = "0x4199140", VA = "0x4199140", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4199210", Offset = "0x4199210", VA = "0x4199210", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
