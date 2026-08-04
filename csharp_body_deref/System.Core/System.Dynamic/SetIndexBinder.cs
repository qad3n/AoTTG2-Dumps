// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.SetIndexBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027A")]
public abstract class SetIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4510DC0", Offset = "0x4510DC0", VA = "0x4510DC0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4510F60", Offset = "0x4510F60", VA = "0x4510F60")]
	public DynamicMetaObject FallbackSetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	public abstract DynamicMetaObject FallbackSetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject value, DynamicMetaObject errorSuggestion);
}
