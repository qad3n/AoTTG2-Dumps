using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008E")]
internal sealed class InvocationExpression4 : InvocationExpression
{
	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg3;

	[Token(Token = "0x1700009A")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000425")]
		[Address(RVA = "0x4197270", Offset = "0x4197270", VA = "0x4197270", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x41970D0", Offset = "0x41970D0", VA = "0x41970D0")]
	public InvocationExpression4(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2, Expression arg3)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x41971B0", Offset = "0x41971B0", VA = "0x41971B0", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4197280", Offset = "0x4197280", VA = "0x4197280", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
