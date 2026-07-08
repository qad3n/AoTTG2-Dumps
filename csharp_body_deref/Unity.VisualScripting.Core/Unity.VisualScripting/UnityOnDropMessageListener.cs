using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000BE")]
[AddComponentMenu("")]
public sealed class UnityOnDropMessageListener : MessageListener, IDropHandler, IEventSystemHandler
{
	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4992AC0", Offset = "0x4992AC0", VA = "0x4992AC0", Slot = "4")]
	public void OnDrop(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4992B50", Offset = "0x4992B50", VA = "0x4992B50")]
	public UnityOnDropMessageListener()
	{
	}
}
