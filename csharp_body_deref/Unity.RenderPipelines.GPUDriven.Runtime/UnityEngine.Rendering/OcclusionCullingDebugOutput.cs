// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OcclusionCullingDebugOutput
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200002A")]
internal struct OcclusionCullingDebugOutput
{
	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x0")]
	public RTHandle occluderDepthPyramid;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x8")]
	public GraphicsBuffer occlusionDebugOverlay;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x10")]
	public OcclusionCullingDebugShaderVariables cb;
}
