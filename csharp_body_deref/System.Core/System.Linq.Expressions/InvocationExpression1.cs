using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008B")]
internal sealed class InvocationExpression1 : InvocationExpression
{
	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x17000097")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x4196B80", Offset = "0x4196B80", VA = "0x4196B80", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x4196A60", Offset = "0x4196A60", VA = "0x4196A60")]
	public InvocationExpression1(Expression lambda, Type returnType, Expression arg0)
	{
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x4196AF0", Offset = "0x4196AF0", VA = "0x4196AF0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4196B90", Offset = "0x4196B90", VA = "0x4196B90", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
