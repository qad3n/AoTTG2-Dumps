// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.DeleteIndexBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000264")]
public abstract class DeleteIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x45098F0", Offset = "0x45098F0", VA = "0x45098F0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x4509990", Offset = "0x4509990", VA = "0x4509990")]
	public DynamicMetaObject FallbackDeleteIndex(DynamicMetaObject target, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BCD")]
	public abstract DynamicMetaObject FallbackDeleteIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject errorSuggestion);
}
