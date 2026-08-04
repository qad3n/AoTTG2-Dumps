// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IGraphEventListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000092")]
public interface IGraphEventListener
{
	[Token(Token = "0x6000415")]
	void StartListening(GraphStack stack);

	[Token(Token = "0x6000416")]
	void StopListening(GraphStack stack);

	[Token(Token = "0x6000417")]
	bool IsListening(GraphPointer pointer);
}
