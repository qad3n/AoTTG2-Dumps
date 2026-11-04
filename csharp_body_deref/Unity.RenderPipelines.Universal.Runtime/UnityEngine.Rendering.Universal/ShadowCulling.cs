// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShadowCulling
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001A8")]
internal static class ShadowCulling
{
	[Token(Token = "0x4000930")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilingSampler computeShadowCasterCullingInfosMarker;

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x2C946F0", Offset = "0x2C92CF0", VA = "0x182C946F0")]
	public static NativeArray<URPLightShadowCullingInfos> CullShadowCasters(ref ScriptableRenderContext context, UniversalShadowData shadowData, ref AdditionalLightsShadowAtlasLayout shadowAtlasLayout, ref CullingResults cullResults)
	{
		return default(NativeArray<URPLightShadowCullingInfos>);
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x2C93780", Offset = "0x2C91D80", VA = "0x182C93780")]
	private static void ComputeShadowCasterCullingInfos(UniversalShadowData shadowData, ref AdditionalLightsShadowAtlasLayout shadowAtlasLayout, ref CullingResults cullingResults, out ShadowCastersCullingInfos shadowCullingInfos, out NativeArray<URPLightShadowCullingInfos> urpVisibleLightsShadowCullingInfos)
	{
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x2C94810", Offset = "0x2C92E10", VA = "0x182C94810")]
	private static BatchCullingProjectionType GetCullingProjectionType(LightType type)
	{
		return default(BatchCullingProjectionType);
	}
}
