// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHirarchyButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHirarchyButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyButton.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006C9")]
internal class MapEditorHirarchyButton : Button
{
	[Token(Token = "0x40020F7")]
	[FieldOffset(Offset = "0x108")]
	private UnityAction _onButtonRelease;

	[Token(Token = "0x60043AB")]
	[Address(RVA = "0x4326650", Offset = "0x4326650", VA = "0x4326650")]
	public void Setup(UnityAction onButtonClick, UnityAction onButtonRelease)
	{
	}

	[Token(Token = "0x60043AC")]
	[Address(RVA = "0x43266A0", Offset = "0x43266A0", VA = "0x43266A0", Slot = "33")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60043AD")]
	[Address(RVA = "0x43266D0", Offset = "0x43266D0", VA = "0x43266D0")]
	public MapEditorHirarchyButton()
	{
	}
}
