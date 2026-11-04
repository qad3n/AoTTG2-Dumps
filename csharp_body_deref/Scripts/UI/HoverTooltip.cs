// ==================== AoTTG2 cross-reference ====================
// Type: UI.HoverTooltip
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/HoverTooltip.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x20006EC")]
internal class HoverTooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x40022D6")]
	[FieldOffset(Offset = "0x20")]
	public string Message;

	[Token(Token = "0x40022D7")]
	[FieldOffset(Offset = "0x28")]
	public float Offset;

	[Token(Token = "0x40022D8")]
	[FieldOffset(Offset = "0x30")]
	public TooltipPopup PopupOverride;

	[Token(Token = "0x40022D9")]
	[FieldOffset(Offset = "0x38")]
	private TooltipPopup popup;

	[Token(Token = "0x600441D")]
	[Address(RVA = "0x21C33C0", Offset = "0x21C19C0", VA = "0x1821C33C0")]
	private TooltipPopup GetPopup()
	{
		return null;
	}

	[Token(Token = "0x600441E")]
	[Address(RVA = "0x21C3540", Offset = "0x21C1B40", VA = "0x1821C3540", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600441F")]
	[Address(RVA = "0x21C3680", Offset = "0x21C1C80", VA = "0x1821C3680", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004420")]
	[Address(RVA = "0x21C3470", Offset = "0x21C1A70", VA = "0x1821C3470")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004421")]
	[Address(RVA = "0x21C3750", Offset = "0x21C1D50", VA = "0x1821C3750")]
	public HoverTooltip()
	{
	}
}
