// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceOptionSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CA")]
public sealed class AottgChoiceOptionSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _owner;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x5296FF0", Offset = "0x5295FF0", VA = "0x5296FF0")]
	public void Setup(AottgChoiceControl owner, int index)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x5298340", Offset = "0x5297340", VA = "0x5298340", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x5298380", Offset = "0x5297380", VA = "0x5298380", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x52983C0", Offset = "0x52973C0", VA = "0x52983C0", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x5298430", Offset = "0x5297430", VA = "0x5298430")]
	public AottgChoiceOptionSelection()
	{
	}
}
