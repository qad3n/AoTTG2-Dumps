using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C7")]
[AddComponentMenu("")]
public sealed class UnityOnSelectMessageListener : MessageListener, ISelectHandler, IEventSystemHandler
{
	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4993060", Offset = "0x4993060", VA = "0x4993060", Slot = "4")]
	public void OnSelect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x49930F0", Offset = "0x49930F0", VA = "0x49930F0")]
	public UnityOnSelectMessageListener()
	{
	}
}
