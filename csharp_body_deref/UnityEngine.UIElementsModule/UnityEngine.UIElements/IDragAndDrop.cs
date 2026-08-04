// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IDragAndDrop
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000149")]
internal interface IDragAndDrop
{
	[Token(Token = "0x1700019D")]
	DragAndDropData data
	{
		[Token(Token = "0x6000946")]
		get;
	}

	[Token(Token = "0x6000941")]
	void StartDrag(StartDragArgs args, Vector3 pointerPosition);

	[Token(Token = "0x6000942")]
	void UpdateDrag(Vector3 pointerPosition);

	[Token(Token = "0x6000943")]
	void AcceptDrag();

	[Token(Token = "0x6000944")]
	void DragCleanup();

	[Token(Token = "0x6000945")]
	void SetVisualMode(DragVisualMode visualMode);
}
