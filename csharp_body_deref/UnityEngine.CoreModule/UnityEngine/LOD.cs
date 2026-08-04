// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LOD
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000FA")]
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

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x4DD0770", Offset = "0x4DD0770", VA = "0x4DD0770")]
	public LOD(float screenRelativeTransitionHeight, Renderer[] renderers)
	{
	}
}
