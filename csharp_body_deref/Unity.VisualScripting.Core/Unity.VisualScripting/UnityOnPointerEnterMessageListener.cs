using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C3")]
[AddComponentMenu("")]
public sealed class UnityOnPointerEnterMessageListener : MessageListener, IPointerEnterHandler, IEventSystemHandler
{
	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4992DE0", Offset = "0x4992DE0", VA = "0x4992DE0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4992E70", Offset = "0x4992E70", VA = "0x4992E70")]
	public UnityOnPointerEnterMessageListener()
	{
	}
}
