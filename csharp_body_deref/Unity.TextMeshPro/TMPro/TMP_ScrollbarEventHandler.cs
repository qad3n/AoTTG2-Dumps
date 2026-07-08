using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace TMPro;

[Token(Token = "0x2000061")]
public class TMP_ScrollbarEventHandler : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x20")]
	public bool isSelected;

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x493D5A0", Offset = "0x493D5A0", VA = "0x493D5A0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x493D600", Offset = "0x493D600", VA = "0x493D600", Slot = "5")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x493D660", Offset = "0x493D660", VA = "0x493D660", Slot = "6")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x493D6C0", Offset = "0x493D6C0", VA = "0x493D6C0")]
	public TMP_ScrollbarEventHandler()
	{
	}
}
