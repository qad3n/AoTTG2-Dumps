// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.CreateInstanceBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000264")]
public abstract class CreateInstanceBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x5E1E8F0", Offset = "0x5E1D8F0", VA = "0x5E1E8F0")]
	public DynamicMetaObject FallbackCreateInstance(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	public abstract DynamicMetaObject FallbackCreateInstance(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x5E1E910", Offset = "0x5E1D910", VA = "0x5E1E910", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
