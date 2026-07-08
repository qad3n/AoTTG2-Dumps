using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000B1")]
[AddComponentMenu("")]
public sealed class UnityOnTriggerStayMessageListener : MessageListener
{
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4991CE0", Offset = "0x4991CE0", VA = "0x4991CE0")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4991D70", Offset = "0x4991D70", VA = "0x4991D70")]
	public UnityOnTriggerStayMessageListener()
	{
	}
}
