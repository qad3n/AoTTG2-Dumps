using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008F")]
internal sealed class InvocationExpression5 : InvocationExpression
{
	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x20")]
	private object _arg0;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x28")]
	private readonly Expression _arg1;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x30")]
	private readonly Expression _arg2;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x38")]
	private readonly Expression _arg3;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x40")]
	private readonly Expression _arg4;

	[Token(Token = "0x1700009B")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000429")]
		[Address(RVA = "0x4197550", Offset = "0x4197550", VA = "0x4197550", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4197380", Offset = "0x4197380", VA = "0x4197380")]
	public InvocationExpression5(Expression lambda, Type returnType, Expression arg0, Expression arg1, Expression arg2, Expression arg3, Expression arg4)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4197480", Offset = "0x4197480", VA = "0x4197480", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4197560", Offset = "0x4197560", VA = "0x4197560", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
