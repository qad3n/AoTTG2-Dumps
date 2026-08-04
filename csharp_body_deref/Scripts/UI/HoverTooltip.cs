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

[Token(Token = "0x200057A")]
internal class HoverTooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x4001B1F")]
	[FieldOffset(Offset = "0x20")]
	public string Message;

	[Token(Token = "0x4001B20")]
	[FieldOffset(Offset = "0x28")]
	public float Offset;

	[Token(Token = "0x4001B21")]
	[FieldOffset(Offset = "0x30")]
	public TooltipPopup PopupOverride;

	[Token(Token = "0x4001B22")]
	[FieldOffset(Offset = "0x38")]
	private TooltipPopup popup;

	[Token(Token = "0x60038F4")]
	[Address(RVA = "0x424D030", Offset = "0x424D030", VA = "0x424D030")]
	private TooltipPopup GetPopup()
	{
		return null;
	}

	[Token(Token = "0x60038F5")]
	[Address(RVA = "0x424D0D0", Offset = "0x424D0D0", VA = "0x424D0D0", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60038F6")]
	[Address(RVA = "0x424D2B0", Offset = "0x424D2B0", VA = "0x424D2B0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60038F7")]
	[Address(RVA = "0x424D380", Offset = "0x424D380", VA = "0x424D380")]
	public HoverTooltip()
	{
	}
}
