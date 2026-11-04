// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShadowUtils
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001AA")]
public static class ShadowUtils
{
	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly bool m_ForceShadowPointSampling;

	[Token(Token = "0x4000939")]
	internal const int kMinimumPunctualLightHardShadowResolution = 8;

	[Token(Token = "0x400093A")]
	internal const int kMinimumPunctualLightSoftShadowResolution = 16;

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x2C97D80", Offset = "0x2C96380", VA = "0x182C97D80")]
	static ShadowUtils()
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x2C94C80", Offset = "0x2C93280", VA = "0x182C94C80")]
	public static bool ExtractDirectionalLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, int cascadeIndex, int shadowmapWidth, int shadowmapHeight, int shadowResolution, float shadowNearPlane, out Vector4 cascadeSplitDistance, out ShadowSliceData shadowSliceData, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x2C94DD0", Offset = "0x2C933D0", VA = "0x182C94DD0")]
	public static bool ExtractDirectionalLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, int cascadeIndex, int shadowmapWidth, int shadowmapHeight, int shadowResolution, float shadowNearPlane, out Vector4 cascadeSplitDistance, out ShadowSliceData shadowSliceData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x2C94E50", Offset = "0x2C93450", VA = "0x182C94E50")]
	public static bool ExtractDirectionalLightMatrix(ref CullingResults cullResults, UniversalShadowData shadowData, int shadowLightIndex, int cascadeIndex, int shadowmapWidth, int shadowmapHeight, int shadowResolution, float shadowNearPlane, out Vector4 cascadeSplitDistance, out ShadowSliceData shadowSliceData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x2C954B0", Offset = "0x2C93AB0", VA = "0x182C954B0")]
	public static bool ExtractSpotLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x2C95530", Offset = "0x2C93B30", VA = "0x182C95530")]
	public static bool ExtractSpotLightMatrix(ref CullingResults cullResults, UniversalShadowData shadowData, int shadowLightIndex, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x2C95430", Offset = "0x2C93A30", VA = "0x182C95430")]
	public static bool ExtractPointLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x2C95250", Offset = "0x2C93850", VA = "0x182C95250")]
	public static bool ExtractPointLightMatrix(ref CullingResults cullResults, UniversalShadowData shadowData, int shadowLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x2C96680", Offset = "0x2C94C80", VA = "0x182C96680")]
	public static void RenderShadowSlice(CommandBuffer cmd, ref ScriptableRenderContext context, ref ShadowSliceData shadowSliceData, ref ShadowDrawingSettings settings, Matrix4x4 proj, Matrix4x4 view)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x2C96840", Offset = "0x2C94E40", VA = "0x182C96840")]
	internal static void RenderShadowSlice(RasterCommandBuffer cmd, ref ShadowSliceData shadowSliceData, ref RendererList shadowRendererList, Matrix4x4 proj, Matrix4x4 view)
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x2C96430", Offset = "0x2C94A30", VA = "0x182C96430")]
	public static void RenderShadowSlice(CommandBuffer cmd, ref ScriptableRenderContext context, ref ShadowSliceData shadowSliceData, ref ShadowDrawingSettings settings)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x2C95860", Offset = "0x2C93E60", VA = "0x182C95860")]
	public static int GetMaxTileResolutionInAtlas(int atlasWidth, int atlasHeight, int tileCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x2C94B00", Offset = "0x2C93100", VA = "0x182C94B00")]
	public static void ApplySliceTransform(ref ShadowSliceData shadowSliceData, int atlasWidth, int atlasHeight)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x2C95E20", Offset = "0x2C94420", VA = "0x182C95E20")]
	public static Vector4 GetShadowBias(ref VisibleLight shadowLight, int shadowLightIndex, ref ShadowData shadowData, Matrix4x4 lightProjectionMatrix, float shadowResolution)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x2C95D30", Offset = "0x2C94330", VA = "0x182C95D30")]
	public static Vector4 GetShadowBias(ref VisibleLight shadowLight, int shadowLightIndex, UniversalShadowData shadowData, Matrix4x4 lightProjectionMatrix, float shadowResolution)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x2C95930", Offset = "0x2C93F30", VA = "0x182C95930")]
	private static Vector4 GetShadowBias(ref VisibleLight shadowLight, int shadowLightIndex, List<Vector4> bias, bool supportsSoftShadows, Matrix4x4 lightProjectionMatrix, float shadowResolution)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x2C958C0", Offset = "0x2C93EC0", VA = "0x182C958C0")]
	internal static void GetScaleAndBiasForLinearDistanceFade(float fadeDistance, float border, out float scale, out float bias)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x2C96FE0", Offset = "0x2C955E0", VA = "0x182C96FE0")]
	public static void SetupShadowCasterConstantBuffer(CommandBuffer cmd, ref VisibleLight shadowLight, Vector4 shadowBias)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x2C972E0", Offset = "0x2C958E0", VA = "0x182C972E0")]
	internal static void SetupShadowCasterConstantBuffer(RasterCommandBuffer cmd, ref VisibleLight shadowLight, Vector4 shadowBias)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x2C96C70", Offset = "0x2C95270", VA = "0x182C96C70")]
	internal static void SetShadowBias(RasterCommandBuffer cmd, Vector4 shadowBias)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x2C96A80", Offset = "0x2C95080", VA = "0x182C96A80")]
	internal static void SetLightDirection(RasterCommandBuffer cmd, Vector3 lightDirection)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x2C96B30", Offset = "0x2C95130", VA = "0x182C96B30")]
	internal static void SetLightPosition(RasterCommandBuffer cmd, Vector3 lightPosition)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x2C969D0", Offset = "0x2C94FD0", VA = "0x182C969D0")]
	internal static void SetCameraPosition(RasterCommandBuffer cmd, Vector3 worldSpaceCameraPos)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x2C96E00", Offset = "0x2C95400", VA = "0x182C96E00")]
	internal static void SetWorldToCameraAndCameraToWorldMatrices(RasterCommandBuffer cmd, Matrix4x4 viewMatrix)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x2C960E0", Offset = "0x2C946E0", VA = "0x182C960E0")]
	private static RenderTextureDescriptor GetTemporaryShadowTextureDescriptor(int width, int height, int bits)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x2C961B0", Offset = "0x2C947B0", VA = "0x182C961B0")]
	[Obsolete("Use AllocShadowRT or ShadowRTReAllocateIfNeeded. #from(2022.1) #breakingFrom(2023.1)", true)]
	public static RenderTexture GetTemporaryShadowTexture(int width, int height, int bits)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x2C97520", Offset = "0x2C95B20", VA = "0x182C97520")]
	public static bool ShadowRTNeedsReAlloc(RTHandle handle, int width, int height, int bits, int anisoLevel, float mipMapBias, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x2C949D0", Offset = "0x2C92FD0", VA = "0x182C949D0")]
	public static RTHandle AllocShadowRT(int width, int height, int bits, int anisoLevel, float mipMapBias, string name)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x2C977D0", Offset = "0x2C95DD0", VA = "0x182C977D0")]
	public static bool ShadowRTReAllocateIfNeeded(ref RTHandle handle, int width, int height, int bits, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x2C95F10", Offset = "0x2C94510", VA = "0x182C95F10")]
	private static Matrix4x4 GetShadowTransform(Matrix4x4 proj, Matrix4x4 view)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x2C97BF0", Offset = "0x2C961F0", VA = "0x182C97BF0")]
	internal static float SoftShadowQualityToShaderProperty(Light light, bool softShadowsEnabled)
	{
		return default(float);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	internal static bool SupportsPerLightSoftShadowQuality()
	{
		return default(bool);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x2C96BE0", Offset = "0x2C951E0", VA = "0x182C96BE0")]
	internal static void SetPerLightSoftShadowKeyword(RasterCommandBuffer cmd, bool hasSoftShadows)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x2C96D00", Offset = "0x2C95300", VA = "0x182C96D00")]
	internal static void SetSoftShadowQualityShaderKeywords(RasterCommandBuffer cmd, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x2C962E0", Offset = "0x2C948E0", VA = "0x182C962E0")]
	internal static bool IsValidShadowCastingLight(UniversalLightData lightData, int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x2C962A0", Offset = "0x2C948A0", VA = "0x182C962A0")]
	internal static bool IsValidShadowCastingLight(UniversalLightData lightData, int i, LightType lightType, LightShadows lightShadows, float shadowStrength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x2C958A0", Offset = "0x2C93EA0", VA = "0x182C958A0")]
	internal static int GetPunctualLightShadowSlicesCount(in LightType lightType)
	{
		return default(int);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x2C957E0", Offset = "0x2C93DE0", VA = "0x182C957E0")]
	internal static bool FastApproximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x2C956C0", Offset = "0x2C93CC0", VA = "0x182C956C0")]
	internal static bool FastApproximately(Vector4 a, Vector4 b)
	{
		return default(bool);
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x2C96420", Offset = "0x2C94A20", VA = "0x182C96420")]
	internal static int MinimalPunctualLightShadowResolution(bool softShadow)
	{
		return default(int);
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x2C95800", Offset = "0x2C93E00", VA = "0x182C95800")]
	internal static int GetMaxSupportedShadowAtlasResolution()
	{
		return default(int);
	}
}
