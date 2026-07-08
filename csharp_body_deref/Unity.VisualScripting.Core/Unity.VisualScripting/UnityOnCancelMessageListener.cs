using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000BB")]
[AddComponentMenu("")]
public sealed class UnityOnCancelMessageListener : MessageListener, ICancelHandler, IEventSystemHandler
{
	[Token(Token = "0x6000473")]
	[Address(RVA = "0x49928E0", Offset = "0x49928E0", VA = "0x49928E0", Slot = "4")]
	public void OnCancel(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4992970", Offset = "0x4992970", VA = "0x4992970")]
	public UnityOnCancelMessageListener()
	{
	}
}
