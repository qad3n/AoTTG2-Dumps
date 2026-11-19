// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.InvokeBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000279")]
public abstract class InvokeBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x5E25800", Offset = "0x5E24800", VA = "0x5E25800")]
	public DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	public abstract DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x5E25820", Offset = "0x5E24820", VA = "0x5E25820", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
