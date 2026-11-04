// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IDragAndDrop
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018E")]
internal interface IDragAndDrop
{
	[Token(Token = "0x1700021A")]
	DragAndDropData data
	{
		[Token(Token = "0x6000B39")]
		get;
	}

	[Token(Token = "0x6000B34")]
	void StartDrag(StartDragArgs args, Vector3 pointerPosition);

	[Token(Token = "0x6000B35")]
	void UpdateDrag(Vector3 pointerPosition);

	[Token(Token = "0x6000B36")]
	void AcceptDrag();

	[Token(Token = "0x6000B37")]
	void DragCleanup();

	[Token(Token = "0x6000B38")]
	void SetVisualMode(DragVisualMode visualMode);
}
