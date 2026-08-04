// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IFocusRing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000204")]
public interface IFocusRing
{
	[Token(Token = "0x6000D1D")]
	FocusChangeDirection GetFocusChangeDirection(Focusable currentFocusable, EventBase e);

	[Token(Token = "0x6000D1E")]
	Focusable GetNextFocusable(Focusable currentFocusable, FocusChangeDirection direction);
}
