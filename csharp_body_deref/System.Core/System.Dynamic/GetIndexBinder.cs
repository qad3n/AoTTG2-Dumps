using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000275")]
public abstract class GetIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x41EB7D0", Offset = "0x41EB7D0", VA = "0x41EB7D0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x41EB8A0", Offset = "0x41EB8A0", VA = "0x41EB8A0")]
	public DynamicMetaObject FallbackGetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	public abstract DynamicMetaObject FallbackGetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject errorSuggestion);
}
