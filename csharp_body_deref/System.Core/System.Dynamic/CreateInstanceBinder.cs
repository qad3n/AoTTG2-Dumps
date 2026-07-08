using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000263")]
public abstract class CreateInstanceBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x41E4730", Offset = "0x41E4730", VA = "0x41E4730")]
	public DynamicMetaObject FallbackCreateInstance(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BC9")]
	public abstract DynamicMetaObject FallbackCreateInstance(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x41E4750", Offset = "0x41E4750", VA = "0x41E4750", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
