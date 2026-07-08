using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C2")]
[AddComponentMenu("")]
public sealed class UnityOnPointerDownMessageListener : MessageListener, IPointerDownHandler, IEventSystemHandler
{
	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4992D40", Offset = "0x4992D40", VA = "0x4992D40", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4992DD0", Offset = "0x4992DD0", VA = "0x4992DD0")]
	public UnityOnPointerDownMessageListener()
	{
	}
}
