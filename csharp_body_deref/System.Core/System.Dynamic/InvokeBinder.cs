// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.InvokeBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000278")]
public abstract class InvokeBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x4510BE0", Offset = "0x4510BE0", VA = "0x4510BE0")]
	public DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	public abstract DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4510C00", Offset = "0x4510C00", VA = "0x4510C00", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
