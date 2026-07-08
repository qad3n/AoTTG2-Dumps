using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027A")]
public abstract class SetIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x41EBCC0", Offset = "0x41EBCC0", VA = "0x41EBCC0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x41EBE60", Offset = "0x41EBE60", VA = "0x41EBE60")]
	public DynamicMetaObject FallbackSetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	public abstract DynamicMetaObject FallbackSetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject value, DynamicMetaObject errorSuggestion);
}
