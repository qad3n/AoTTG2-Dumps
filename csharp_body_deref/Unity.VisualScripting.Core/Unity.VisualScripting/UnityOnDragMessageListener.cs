using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000BD")]
[AddComponentMenu("")]
public sealed class UnityOnDragMessageListener : MessageListener, IDragHandler, IEventSystemHandler
{
	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4992A20", Offset = "0x4992A20", VA = "0x4992A20", Slot = "4")]
	public void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x4992AB0", Offset = "0x4992AB0", VA = "0x4992AB0")]
	public UnityOnDragMessageListener()
	{
	}
}
