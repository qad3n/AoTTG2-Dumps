using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Unity.VisualScripting;

[Token(Token = "0x20000C0")]
[AddComponentMenu("")]
public sealed class UnityOnMoveMessageListener : MessageListener, IMoveHandler, IEventSystemHandler
{
	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4992C00", Offset = "0x4992C00", VA = "0x4992C00", Slot = "4")]
	public void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4992C90", Offset = "0x4992C90", VA = "0x4992C90")]
	public UnityOnMoveMessageListener()
	{
	}
}
