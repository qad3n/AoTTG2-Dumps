using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C6")]
[AddComponentMenu("")]
public sealed class UnityOnScrollMessageListener : MessageListener, IScrollHandler, IEventSystemHandler
{
	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4992FC0", Offset = "0x4992FC0", VA = "0x4992FC0", Slot = "4")]
	public void OnScroll(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4993050", Offset = "0x4993050", VA = "0x4993050")]
	public UnityOnScrollMessageListener()
	{
	}
}
