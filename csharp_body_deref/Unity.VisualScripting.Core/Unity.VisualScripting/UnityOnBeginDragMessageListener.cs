using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000BA")]
[AddComponentMenu("")]
public sealed class UnityOnBeginDragMessageListener : MessageListener, IBeginDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4992840", Offset = "0x4992840", VA = "0x4992840", Slot = "4")]
	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x49928D0", Offset = "0x49928D0", VA = "0x49928D0")]
	public UnityOnBeginDragMessageListener()
	{
	}
}
