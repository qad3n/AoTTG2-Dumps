using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200002C")]
public class ButtonInsideScrollList : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x20")]
	private ScrollRect scrollRect;

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3BF4B10", Offset = "0x3BF4B10", VA = "0x3BF4B10")]
	private void Start()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3BF4B60", Offset = "0x3BF4B60", VA = "0x3BF4B60", Slot = "4")]
	private void UnityEngine_002EEventSystems_002EIPointerDownHandler_002EOnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3BF4BF0", Offset = "0x3BF4BF0", VA = "0x3BF4BF0", Slot = "5")]
	private void UnityEngine_002EEventSystems_002EIPointerUpHandler_002EOnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3BF4C80", Offset = "0x3BF4C80", VA = "0x3BF4C80")]
	public ButtonInsideScrollList()
	{
	}
}
