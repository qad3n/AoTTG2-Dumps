using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000278")]
public abstract class InvokeBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x41EBAE0", Offset = "0x41EBAE0", VA = "0x41EBAE0")]
	public DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	public abstract DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x41EBB00", Offset = "0x41EBB00", VA = "0x41EBB00", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
