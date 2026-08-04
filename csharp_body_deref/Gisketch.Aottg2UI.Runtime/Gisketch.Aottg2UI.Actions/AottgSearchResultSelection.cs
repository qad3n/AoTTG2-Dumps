// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgSearchResultSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgSearchResultSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000AA")]
public sealed class AottgSearchResultSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x20")]
	private AottgSearchPaletteControl _owner;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x3A8FCC0", Offset = "0x3A8FCC0", VA = "0x3A8FCC0")]
	public void Setup(AottgSearchPaletteControl owner, int index)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x3A903D0", Offset = "0x3A903D0", VA = "0x3A903D0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x3A904B0", Offset = "0x3A904B0", VA = "0x3A904B0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x3A90590", Offset = "0x3A90590", VA = "0x3A90590", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x3A90610", Offset = "0x3A90610", VA = "0x3A90610")]
	public AottgSearchResultSelection()
	{
	}
}
