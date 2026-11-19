// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHirarchyButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHirarchyButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyButton.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008A5")]
internal class MapEditorHirarchyButton : Button, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, IPointerDownHandler
{
	[Token(Token = "0x4002B96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private UnityAction _onButtonRelease;

	[Token(Token = "0x4002B97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private UnityAction<PointerEventData> _onRightClick;

	[Token(Token = "0x4002B98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private UnityAction<PointerEventData> _onPointerDown;

	[Token(Token = "0x4002B99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private UnityAction<PointerEventData> _onBeginDrag;

	[Token(Token = "0x4002B9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private UnityAction<PointerEventData> _onDrag;

	[Token(Token = "0x4002B9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private UnityAction<PointerEventData> _onEndDrag;

	[Token(Token = "0x6005254")]
	[Address(RVA = "0x5C71880", Offset = "0x5C70880", VA = "0x5C71880")]
	public void Setup(UnityAction onButtonClick, UnityAction onButtonRelease, [Optional] UnityAction<PointerEventData> onRightClick, [Optional] UnityAction<PointerEventData> onPointerDown, [Optional] UnityAction<PointerEventData> onBeginDrag, [Optional] UnityAction<PointerEventData> onDrag, [Optional] UnityAction<PointerEventData> onEndDrag)
	{
	}

	[Token(Token = "0x6005255")]
	[Address(RVA = "0x5C71990", Offset = "0x5C70990", VA = "0x5C71990", Slot = "41")]
	public override void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005256")]
	[Address(RVA = "0x5C719D0", Offset = "0x5C709D0", VA = "0x5C719D0", Slot = "18")]
	public new void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005257")]
	[Address(RVA = "0x5C71A10", Offset = "0x5C70A10", VA = "0x5C71A10", Slot = "43")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005258")]
	[Address(RVA = "0x5C71A50", Offset = "0x5C70A50", VA = "0x5C71A50", Slot = "44")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005259")]
	[Address(RVA = "0x5C71A90", Offset = "0x5C70A90", VA = "0x5C71A90", Slot = "45")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600525A")]
	[Address(RVA = "0x5C71AD0", Offset = "0x5C70AD0", VA = "0x5C71AD0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600525B")]
	[Address(RVA = "0x5C71B20", Offset = "0x5C70B20", VA = "0x5C71B20")]
	public MapEditorHirarchyButton()
	{
	}
}
