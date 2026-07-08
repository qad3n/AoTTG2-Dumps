using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C1")]
[AddComponentMenu("")]
public sealed class UnityOnPointerClickMessageListener : MessageListener, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x600047F")]
	[Address(RVA = "0x4992CA0", Offset = "0x4992CA0", VA = "0x4992CA0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x4992D30", Offset = "0x4992D30", VA = "0x4992D30")]
	public UnityOnPointerClickMessageListener()
	{
	}
}
