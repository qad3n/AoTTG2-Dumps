using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C8")]
[AddComponentMenu("")]
public sealed class UnityOnSubmitMessageListener : MessageListener, ISubmitHandler, IEventSystemHandler
{
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4993100", Offset = "0x4993100", VA = "0x4993100", Slot = "4")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4993190", Offset = "0x4993190", VA = "0x4993190")]
	public UnityOnSubmitMessageListener()
	{
	}
}
