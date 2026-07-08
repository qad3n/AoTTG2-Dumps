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
