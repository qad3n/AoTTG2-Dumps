using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C4")]
[AddComponentMenu("")]
public sealed class UnityOnPointerExitMessageListener : MessageListener, IPointerExitHandler, IEventSystemHandler
{
	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4992E80", Offset = "0x4992E80", VA = "0x4992E80", Slot = "4")]
	public void OnPointerExit(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4992F10", Offset = "0x4992F10", VA = "0x4992F10")]
	public UnityOnPointerExitMessageListener()
	{
	}
}
