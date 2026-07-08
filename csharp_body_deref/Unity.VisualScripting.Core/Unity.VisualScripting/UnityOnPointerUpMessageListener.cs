using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C5")]
[AddComponentMenu("")]
public sealed class UnityOnPointerUpMessageListener : MessageListener, IPointerUpHandler, IEventSystemHandler
{
	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4992F20", Offset = "0x4992F20", VA = "0x4992F20", Slot = "4")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4992FB0", Offset = "0x4992FB0", VA = "0x4992FB0")]
	public UnityOnPointerUpMessageListener()
	{
	}
}
