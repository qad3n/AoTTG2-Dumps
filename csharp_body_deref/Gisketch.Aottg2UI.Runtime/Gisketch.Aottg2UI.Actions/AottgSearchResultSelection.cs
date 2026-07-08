using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A7")]
public sealed class AottgSearchResultSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x20")]
	private AottgSearchPaletteControl _owner;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x3A23B70", Offset = "0x3A23B70", VA = "0x3A23B70")]
	public void Setup(AottgSearchPaletteControl owner, int index)
	{
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x3A24280", Offset = "0x3A24280", VA = "0x3A24280", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x3A24360", Offset = "0x3A24360", VA = "0x3A24360", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x3A24440", Offset = "0x3A24440", VA = "0x3A24440", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x3A244C0", Offset = "0x3A244C0", VA = "0x3A244C0")]
	public AottgSearchResultSelection()
	{
	}
}
