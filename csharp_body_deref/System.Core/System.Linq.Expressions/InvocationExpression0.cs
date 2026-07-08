using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200008A")]
internal sealed class InvocationExpression0 : InvocationExpression
{
	[Token(Token = "0x17000096")]
	public override int ArgumentCount
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x41969E0", Offset = "0x41969E0", VA = "0x41969E0", Slot = "13")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4196910", Offset = "0x4196910", VA = "0x4196910")]
	public InvocationExpression0(Expression lambda, Type returnType)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4196990", Offset = "0x4196990", VA = "0x4196990", Slot = "12")]
	public override Expression GetArgument(int index)
	{
		return null;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x41969F0", Offset = "0x41969F0", VA = "0x41969F0", Slot = "14")]
	internal override InvocationExpression Rewrite(Expression lambda, Expression[] arguments)
	{
		return null;
	}
}
