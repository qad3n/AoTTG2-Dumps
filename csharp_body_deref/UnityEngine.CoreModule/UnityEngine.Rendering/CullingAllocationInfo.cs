// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CullingAllocationInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003AA")]
internal struct CullingAllocationInfo
{
	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x0")]
	public unsafe VisibleLight* visibleLightsPtr;

	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x8")]
	public unsafe VisibleLight* visibleOffscreenVertexLightsPtr;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x10")]
	public unsafe VisibleReflectionProbe* visibleReflectionProbesPtr;

	[Token(Token = "0x4000B8F")]
	[FieldOffset(Offset = "0x18")]
	public int visibleLightCount;

	[Token(Token = "0x4000B90")]
	[FieldOffset(Offset = "0x1C")]
	public int visibleOffscreenVertexLightCount;

	[Token(Token = "0x4000B91")]
	[FieldOffset(Offset = "0x20")]
	public int visibleReflectionProbeCount;
}
