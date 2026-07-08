using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x20000A0")]
[AddComponentMenu("")]
public sealed class UnityOnJointBreak2DMessageListener : MessageListener
{
	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4991360", Offset = "0x4991360", VA = "0x4991360")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x49913F0", Offset = "0x49913F0", VA = "0x49913F0")]
	public UnityOnJointBreak2DMessageListener()
	{
	}
}
