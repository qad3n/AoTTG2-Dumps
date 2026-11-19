// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.DeleteIndexBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000265")]
public abstract class DeleteIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x5E1E9B0", Offset = "0x5E1D9B0", VA = "0x5E1E9B0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x5E1EA50", Offset = "0x5E1DA50", VA = "0x5E1EA50")]
	public DynamicMetaObject FallbackDeleteIndex(DynamicMetaObject target, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BD7")]
	public abstract DynamicMetaObject FallbackDeleteIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject errorSuggestion);
}
