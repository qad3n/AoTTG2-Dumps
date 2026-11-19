// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.GetIndexBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000276")]
public abstract class GetIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x5E25510", Offset = "0x5E24510", VA = "0x5E25510", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x5E255E0", Offset = "0x5E245E0", VA = "0x5E255E0")]
	public DynamicMetaObject FallbackGetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000C6E")]
	public abstract DynamicMetaObject FallbackGetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject errorSuggestion);
}
