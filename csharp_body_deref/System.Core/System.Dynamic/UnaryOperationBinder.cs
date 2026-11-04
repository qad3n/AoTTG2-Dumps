// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.UnaryOperationBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027C")]
public abstract class UnaryOperationBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700")]
	public DynamicMetaObject FallbackUnaryOperation(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	public abstract DynamicMetaObject FallbackUnaryOperation(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x248E1E0", Offset = "0x248C7E0", VA = "0x18248E1E0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
