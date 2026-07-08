using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000BF")]
[AddComponentMenu("")]
public sealed class UnityOnEndDragMessageListener : MessageListener, IEndDragHandler, IEventSystemHandler
{
	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4992B60", Offset = "0x4992B60", VA = "0x4992B60", Slot = "4")]
	public void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4992BF0", Offset = "0x4992BF0", VA = "0x4992BF0")]
	public UnityOnEndDragMessageListener()
	{
	}
}
