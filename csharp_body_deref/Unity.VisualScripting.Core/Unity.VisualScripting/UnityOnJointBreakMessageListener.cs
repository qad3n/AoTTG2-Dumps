using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000A1")]
[AddComponentMenu("")]
public sealed class UnityOnJointBreakMessageListener : MessageListener
{
	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4991400", Offset = "0x4991400", VA = "0x4991400")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4991490", Offset = "0x4991490", VA = "0x4991490")]
	public UnityOnJointBreakMessageListener()
	{
	}
}
