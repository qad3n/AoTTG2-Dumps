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

[Token(Token = "0x20000CB")]
public sealed class AottgSearchResultSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x20")]
	private AottgSearchPaletteControl _owner;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x18F7330", Offset = "0x18F5930", VA = "0x1818F7330")]
	public void Setup(AottgSearchPaletteControl owner, int index)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x18F9FE0", Offset = "0x18F85E0", VA = "0x1818F9FE0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x18F9FE0", Offset = "0x18F85E0", VA = "0x1818F9FE0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x18FA070", Offset = "0x18F8670", VA = "0x1818FA070", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgSearchResultSelection()
	{
	}
}
