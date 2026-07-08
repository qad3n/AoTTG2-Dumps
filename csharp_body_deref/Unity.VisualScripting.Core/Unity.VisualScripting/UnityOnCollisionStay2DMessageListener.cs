using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200009D")]
[AddComponentMenu("")]
public sealed class UnityOnCollisionStay2DMessageListener : MessageListener
{
	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4991180", Offset = "0x4991180", VA = "0x4991180")]
	private void OnCollisionStay2D(Collision2D collision)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4991210", Offset = "0x4991210", VA = "0x4991210")]
	public UnityOnCollisionStay2DMessageListener()
	{
	}
}
