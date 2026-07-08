using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200009E")]
[AddComponentMenu("")]
public sealed class UnityOnCollisionStayMessageListener : MessageListener
{
	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4991220", Offset = "0x4991220", VA = "0x4991220")]
	private void OnCollisionStay(Collision collision)
	{
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x49912B0", Offset = "0x49912B0", VA = "0x49912B0")]
	public UnityOnCollisionStayMessageListener()
	{
	}
}
