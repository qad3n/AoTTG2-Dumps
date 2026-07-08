using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008C")]
internal sealed class InvocationExpression2 : InvocationExpression
{
	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x17000098")]
	public override int ArgumentCount
	{
		[Token(Token = "0x600041D")]
		[Address(RVA = "0x4196D80", Offset = "0x4196D80", VA = "0x4196D80", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x4196C30", Offset = "0x4196C30", VA = "0x4196C30")]
	public InvocationExpression2(Expression lambda, Type returnType, Expression arg0, Expression arg1)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4196CE0", Offset = "0x4196CE0", VA = "0x4196CE0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4196D90", Offset = "0x4196D90", VA = "0x4196D90", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
