using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000F8")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct LOD
{
	[Token(Token = "0x400033D")]
	[FieldOffset(Offset = "0x0")]
	public float screenRelativeTransitionHeight;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x4")]
	public float fadeTransitionWidth;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x8")]
	public Renderer[] renderers;

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4AA8E40", Offset = "0x4AA8E40", VA = "0x4AA8E40")]
	public LOD(float screenRelativeTransitionHeight, Renderer[] renderers)
	{
	}
}
