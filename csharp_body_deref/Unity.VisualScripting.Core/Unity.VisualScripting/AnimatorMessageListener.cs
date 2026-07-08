using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000090")]
[AddComponentMenu("Visual Scripting/Listeners/Animator Message Listener")]
public sealed class AnimatorMessageListener : MonoBehaviour
{
	[Token(Token = "0x600040C")]
	[Address(RVA = "0x498FAA0", Offset = "0x498FAA0", VA = "0x498FAA0")]
	private void OnAnimatorMove()
	{
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x498FB10", Offset = "0x498FB10", VA = "0x498FB10")]
	private void OnAnimatorIK(int layerIndex)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x498FBA0", Offset = "0x498FBA0", VA = "0x498FBA0")]
	public AnimatorMessageListener()
	{
	}
}
