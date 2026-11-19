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

[Token(Token = "0x20000D1")]
public sealed class AottgSearchResultSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x20")]
	private AottgSearchPaletteControl _owner;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x529A590", Offset = "0x5299590", VA = "0x529A590")]
	public void Setup(AottgSearchPaletteControl owner, int index)
	{
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x529B4E0", Offset = "0x529A4E0", VA = "0x529B4E0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x529B5C0", Offset = "0x529A5C0", VA = "0x529B5C0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x529B6A0", Offset = "0x529A6A0", VA = "0x529B6A0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x529B720", Offset = "0x529A720", VA = "0x529B720")]
	public AottgSearchResultSelection()
	{
	}
}
