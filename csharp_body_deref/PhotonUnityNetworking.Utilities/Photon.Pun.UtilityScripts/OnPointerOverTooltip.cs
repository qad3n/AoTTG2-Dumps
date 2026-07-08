using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200002F")]
public class OnPointerOverTooltip : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler
{
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3BF5090", Offset = "0x3BF5090", VA = "0x3BF5090")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3BF5110", Offset = "0x3BF5110", VA = "0x3BF5110", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerExitHandler_002EOnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3BF5190", Offset = "0x3BF5190", VA = "0x3BF5190", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerEnterHandler_002EOnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3BF5210", Offset = "0x3BF5210", VA = "0x3BF5210")]
	public OnPointerOverTooltip()
	{
	}
}
