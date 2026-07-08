using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000BC")]
[AddComponentMenu("")]
public sealed class UnityOnDeselectMessageListener : MessageListener, IDeselectHandler, IEventSystemHandler
{
	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4992980", Offset = "0x4992980", VA = "0x4992980", Slot = "4")]
	public void OnDeselect(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4992A10", Offset = "0x4992A10", VA = "0x4992A10")]
	public UnityOnDeselectMessageListener()
	{
	}
}
