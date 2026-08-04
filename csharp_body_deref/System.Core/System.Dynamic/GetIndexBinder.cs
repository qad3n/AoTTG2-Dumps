// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.GetIndexBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000275")]
public abstract class GetIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x45108D0", Offset = "0x45108D0", VA = "0x45108D0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x45109A0", Offset = "0x45109A0", VA = "0x45109A0")]
	public DynamicMetaObject FallbackGetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	public abstract DynamicMetaObject FallbackGetIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject errorSuggestion);
}
