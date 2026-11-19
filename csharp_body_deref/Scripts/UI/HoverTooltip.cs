// ==================== AoTTG2 cross-reference ====================
// Type: UI.HoverTooltip
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HoverTooltip.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x2000795")]
internal class HoverTooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4002650")]
	[FieldOffset(Offset = "0x20")]
	public string Message;

	[Token(Token = "0x4002651")]
	[FieldOffset(Offset = "0x28")]
	public float Offset;

	[Token(Token = "0x4002652")]
	[FieldOffset(Offset = "0x30")]
	public TooltipPopup PopupOverride;

	[Token(Token = "0x4002653")]
	[FieldOffset(Offset = "0x38")]
	private TooltipPopup popup;

	[Token(Token = "0x6004942")]
	[Address(RVA = "0x5BBEDA0", Offset = "0x5BBDDA0", VA = "0x5BBEDA0")]
	private TooltipPopup GetPopup()
	{
		return null;
	}

	[Token(Token = "0x6004943")]
	[Address(RVA = "0x5BBEE40", Offset = "0x5BBDE40", VA = "0x5BBEE40", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004944")]
	[Address(RVA = "0x5BBF1E0", Offset = "0x5BBE1E0", VA = "0x5BBF1E0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004945")]
	[Address(RVA = "0x5BBF2B0", Offset = "0x5BBE2B0", VA = "0x5BBF2B0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004946")]
	[Address(RVA = "0x5BBF380", Offset = "0x5BBE380", VA = "0x5BBF380")]
	public HoverTooltip()
	{
	}
}
