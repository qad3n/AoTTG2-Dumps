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

[Token(Token = "0x200011E")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct LOD
{
	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x0")]
	public float screenRelativeTransitionHeight;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x4")]
	public float fadeTransitionWidth;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x8")]
	public Renderer[] renderers;

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x68E50D0", Offset = "0x68E40D0", VA = "0x68E50D0")]
	public LOD(float screenRelativeTransitionHeight, Renderer[] renderers)
	{
	}
}
