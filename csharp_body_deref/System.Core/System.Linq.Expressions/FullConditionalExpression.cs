using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000078")]
internal class FullConditionalExpression : ConditionalExpression
{
	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x20")]
	private readonly Expression _false;

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x418B670", Offset = "0x418B670", VA = "0x418B670")]
	internal FullConditionalExpression(Expression test, Expression ifTrue, Expression ifFalse)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x418B8D0", Offset = "0x418B8D0", VA = "0x418B8D0", Slot = "10")]
	internal override Expression GetFalse()
	{
		return null;
	}
}
