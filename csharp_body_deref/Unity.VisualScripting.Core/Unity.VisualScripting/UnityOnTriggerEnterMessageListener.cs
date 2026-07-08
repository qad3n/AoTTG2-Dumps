using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000AD")]
[AddComponentMenu("")]
public sealed class UnityOnTriggerEnterMessageListener : MessageListener
{
	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4991A60", Offset = "0x4991A60", VA = "0x4991A60")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4991AF0", Offset = "0x4991AF0", VA = "0x4991AF0")]
	public UnityOnTriggerEnterMessageListener()
	{
	}
}
