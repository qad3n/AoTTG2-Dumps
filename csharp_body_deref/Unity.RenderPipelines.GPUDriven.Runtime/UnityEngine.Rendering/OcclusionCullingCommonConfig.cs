// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.OcclusionCullingCommonConfig
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000CA")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\GPUDriven\\OcclusionCullingCommon.cs")]
internal enum OcclusionCullingCommonConfig
{
	[Token(Token = "0x40003AE")]
	MaxOccluderMips = 8,
	[Token(Token = "0x40003AF")]
	MaxOccluderSilhouettePlanes = 6,
	[Token(Token = "0x40003B0")]
	MaxSubviewsPerView = MaxOccluderSilhouettePlanes,
	[Token(Token = "0x40003B1")]
	DebugPyramidOffset = 4
}
