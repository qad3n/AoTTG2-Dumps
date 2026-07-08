using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000AD")]
internal sealed class MethodCallExpression3 : MethodCallExpression, IArgumentProvider
{
	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x18")]
	private object _arg0;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _arg1;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg2;

	[Token(Token = "0x170000D4")]
	public override int ArgumentCount
	{
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x4198E60", Offset = "0x4198E60", VA = "0x4198E60", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4198D00", Offset = "0x4198D00", VA = "0x4198D00")]
	public MethodCallExpression3(MethodInfo method, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4198DB0", Offset = "0x4198DB0", VA = "0x4198DB0", Slot = "14")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4198E70", Offset = "0x4198E70", VA = "0x4198E70", Slot = "13")]
	internal override MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}
}
