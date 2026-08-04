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

[Token(Token = "0x20000A5")]
public sealed class AottgChoiceOptionSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _owner;

	[Token(Token = "0x400034C")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x3A8C6E0", Offset = "0x3A8C6E0", VA = "0x3A8C6E0")]
	public void Setup(AottgChoiceControl owner, int index)
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x3A8DAD0", Offset = "0x3A8DAD0", VA = "0x3A8DAD0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x3A8DB10", Offset = "0x3A8DB10", VA = "0x3A8DB10", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x3A8DB50", Offset = "0x3A8DB50", VA = "0x3A8DB50", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x3A8DB80", Offset = "0x3A8DB80", VA = "0x3A8DB80")]
	public AottgChoiceOptionSelection()
	{
	}
}
