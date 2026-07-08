using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000A1")]
public sealed class AottgChoiceOptionSelection : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerMoveHandler, ISelectHandler
{
	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x20")]
	private AottgChoiceControl _owner;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x28")]
	private int _index;

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x3A20520", Offset = "0x3A20520", VA = "0x3A20520")]
	public void Setup(AottgChoiceControl owner, int index)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x3A217A0", Offset = "0x3A217A0", VA = "0x3A217A0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x3A217E0", Offset = "0x3A217E0", VA = "0x3A217E0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x3A21820", Offset = "0x3A21820", VA = "0x3A21820", Slot = "6")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x3A21850", Offset = "0x3A21850", VA = "0x3A21850")]
	public AottgChoiceOptionSelection()
	{
	}
}
