// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000063")]
public interface IGraphEventHandler<TArgs>
{
	[Token(Token = "0x60002B1")]
	EventHook GetHook(GraphReference reference);

	[Token(Token = "0x60002B2")]
	void Trigger(GraphReference reference, TArgs args);

	[Token(Token = "0x60002B3")]
	bool IsListening(GraphPointer pointer);
}
