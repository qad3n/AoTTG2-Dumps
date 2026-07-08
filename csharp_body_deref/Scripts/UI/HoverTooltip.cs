using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000535")]
internal class HoverTooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4001A0C")]
	[FieldOffset(Offset = "0x20")]
	public string Message;

	[Token(Token = "0x4001A0D")]
	[FieldOffset(Offset = "0x28")]
	public float Offset;

	[Token(Token = "0x4001A0E")]
	[FieldOffset(Offset = "0x30")]
	public TooltipPopup PopupOverride;

	[Token(Token = "0x4001A0F")]
	[FieldOffset(Offset = "0x38")]
	private TooltipPopup popup;

	[Token(Token = "0x60036E6")]
	[Address(RVA = "0x3F23880", Offset = "0x3F23880", VA = "0x3F23880")]
	private TooltipPopup GetPopup()
	{
		return null;
	}

	[Token(Token = "0x60036E7")]
	[Address(RVA = "0x3F23920", Offset = "0x3F23920", VA = "0x3F23920", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60036E8")]
	[Address(RVA = "0x3F23B00", Offset = "0x3F23B00", VA = "0x3F23B00", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60036E9")]
	[Address(RVA = "0x3F23BD0", Offset = "0x3F23BD0", VA = "0x3F23BD0")]
	public HoverTooltip()
	{
	}
}
