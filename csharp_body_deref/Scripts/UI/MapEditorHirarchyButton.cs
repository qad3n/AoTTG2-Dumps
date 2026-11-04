// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHirarchyButton
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000827")]
internal class MapEditorHirarchyButton : Button, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler, IPointerDownHandler
{
	[Token(Token = "0x40028DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private UnityAction _onButtonRelease;

	[Token(Token = "0x40028DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private UnityAction<PointerEventData> _onRightClick;

	[Token(Token = "0x40028DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private UnityAction<PointerEventData> _onPointerDown;

	[Token(Token = "0x40028E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private UnityAction<PointerEventData> _onBeginDrag;

	[Token(Token = "0x40028E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private UnityAction<PointerEventData> _onDrag;

	[Token(Token = "0x40028E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private UnityAction<PointerEventData> _onEndDrag;

	[Token(Token = "0x6004EB7")]
	[Address(RVA = "0x22B8A30", Offset = "0x22B7030", VA = "0x1822B8A30")]
	public void Setup(UnityAction onButtonClick, UnityAction onButtonRelease, [Optional] UnityAction<PointerEventData> onRightClick, [Optional] UnityAction<PointerEventData> onPointerDown, [Optional] UnityAction<PointerEventData> onBeginDrag, [Optional] UnityAction<PointerEventData> onDrag, [Optional] UnityAction<PointerEventData> onEndDrag)
	{
	}

	[Token(Token = "0x6004EB8")]
	[Address(RVA = "0x22B8950", Offset = "0x22B6F50", VA = "0x1822B8950", Slot = "41")]
	public override void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EB9")]
	[Address(RVA = "0x22B89A0", Offset = "0x22B6FA0", VA = "0x1822B89A0", Slot = "18")]
	public new void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EBA")]
	[Address(RVA = "0x22B8890", Offset = "0x22B6E90", VA = "0x1822B8890", Slot = "43")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EBB")]
	[Address(RVA = "0x22B88D0", Offset = "0x22B6ED0", VA = "0x1822B88D0", Slot = "44")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EBC")]
	[Address(RVA = "0x22B8910", Offset = "0x22B6F10", VA = "0x1822B8910", Slot = "45")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EBD")]
	[Address(RVA = "0x22B89E0", Offset = "0x22B6FE0", VA = "0x1822B89E0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EBE")]
	[Address(RVA = "0x18F43B0", Offset = "0x18F29B0", VA = "0x1818F43B0")]
	public MapEditorHirarchyButton()
	{
	}
}
