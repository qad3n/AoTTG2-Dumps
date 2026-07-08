using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000099")]
[AddComponentMenu("")]
public sealed class UnityOnCollisionEnter2DMessageListener : MessageListener
{
	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4990F00", Offset = "0x4990F00", VA = "0x4990F00")]
	private void OnCollisionEnter2D(Collision2D collision)
	{
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4990F90", Offset = "0x4990F90", VA = "0x4990F90")]
	public UnityOnCollisionEnter2DMessageListener()
	{
	}
}
