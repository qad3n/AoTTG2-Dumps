using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008D")]
internal sealed class InvocationExpression3 : InvocationExpression
{
	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x17000099")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x4196FD0", Offset = "0x4196FD0", VA = "0x4196FD0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4196E60", Offset = "0x4196E60", VA = "0x4196E60")]
	public InvocationExpression3(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2)
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4196F20", Offset = "0x4196F20", VA = "0x4196F20", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4196FE0", Offset = "0x4196FE0", VA = "0x4196FE0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
