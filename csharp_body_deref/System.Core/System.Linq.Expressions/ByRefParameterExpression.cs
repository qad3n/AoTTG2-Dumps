using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B9")]
internal sealed class ByRefParameterExpression : TypedParameterExpression
{
	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x419AE80", Offset = "0x419AE80", VA = "0x419AE80")]
	internal ByRefParameterExpression(Type type, string name)
	{
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x419B020", Offset = "0x419B020", VA = "0x419B020", Slot = "10")]
	internal override bool GetIsByRef()
	{
		return default(bool);
	}
}
