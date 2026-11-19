// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ShadowUtils
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x668BB90", Offset = "0x668AB90", VA = "0x668BB90")]
	static ShadowUtils()
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x668BC40", Offset = "0x668AC40", VA = "0x668BC40")]
	public static bool ExtractDirectionalLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, int cascadeIndex, int shadowmapWidth, int shadowmapHeight, int shadowResolution, float shadowNearPlane, out Vector4 cascadeSplitDistance, out ShadowSliceData shadowSliceData, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix)
	{
		return default(bool);
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x668BDC0", Offset = "0x668ADC0", VA = "0x668BDC0")]
	public static bool ExtractDirectionalLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, int cascadeIndex, int shadowmapWidth, int shadowmapHeight, int shadowResolution, float shadowNearPlane, out Vector4 cascadeSplitDistance, out ShadowSliceData shadowSliceData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x668B3A0", Offset = "0x668A3A0", VA = "0x668B3A0")]
	public static bool ExtractDirectionalLightMatrix(ref CullingResults cullResults, UniversalShadowData shadowData, int shadowLightIndex, int cascadeIndex, int shadowmapWidth, int shadowmapHeight, int shadowResolution, float shadowNearPlane, out Vector4 cascadeSplitDistance, out ShadowSliceData shadowSliceData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x668C720", Offset = "0x668B720", VA = "0x668C720")]
	public static bool ExtractSpotLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x668B870", Offset = "0x668A870", VA = "0x668B870")]
	public static bool ExtractSpotLightMatrix(ref CullingResults cullResults, UniversalShadowData shadowData, int shadowLightIndex, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x668C920", Offset = "0x668B920", VA = "0x668C920")]
	public static bool ExtractPointLightMatrix(ref CullingResults cullResults, ref ShadowData shadowData, int shadowLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x668B670", Offset = "0x668A670", VA = "0x668B670")]
	public static bool ExtractPointLightMatrix(ref CullingResults cullResults, UniversalShadowData shadowData, int shadowLightIndex, CubemapFace cubemapFace, float fovBias, out Matrix4x4 shadowMatrix, out Matrix4x4 viewMatrix, out Matrix4x4 projMatrix, out ShadowSplitData splitData)
	{
		return default(bool);
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x668CB80", Offset = "0x668BB80", VA = "0x668CB80")]
	public static void RenderShadowSlice(CommandBuffer cmd, ref ScriptableRenderContext context, ref ShadowSliceData shadowSliceData, ref ShadowDrawingSettings settings, Matrix4x4 proj, Matrix4x4 view)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x668CD10", Offset = "0x668BD10", VA = "0x668CD10")]
	internal static void RenderShadowSlice(RasterCommandBuffer cmd, ref ShadowSliceData shadowSliceData, ref RendererList shadowRendererList, Matrix4x4 proj, Matrix4x4 view)
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x668CE70", Offset = "0x668BE70", VA = "0x668CE70")]
	public static void RenderShadowSlice(CommandBuffer cmd, ref ScriptableRenderContext context, ref ShadowSliceData shadowSliceData, ref ShadowDrawingSettings settings)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x668CFB0", Offset = "0x668BFB0", VA = "0x668CFB0")]
	public static int GetMaxTileResolutionInAtlas(int atlasWidth, int atlasHeight, int tileCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x668C540", Offset = "0x668B540", VA = "0x668C540")]
	public static void ApplySliceTransform(ref ShadowSliceData shadowSliceData, int atlasWidth, int atlasHeight)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x668CFE0", Offset = "0x668BFE0", VA = "0x668CFE0")]
	public static Vector4 GetShadowBias(ref VisibleLight shadowLight, int shadowLightIndex, ref ShadowData shadowData, Matrix4x4 lightProjectionMatrix, float shadowResolution)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x668D400", Offset = "0x668C400", VA = "0x668D400")]
	public static Vector4 GetShadowBias(ref VisibleLight shadowLight, int shadowLightIndex, UniversalShadowData shadowData, Matrix4x4 lightProjectionMatrix, float shadowResolution)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x668D070", Offset = "0x668C070", VA = "0x668D070")]
	private static Vector4 GetShadowBias(ref VisibleLight shadowLight, int shadowLightIndex, List<Vector4> bias, bool supportsSoftShadows, Matrix4x4 lightProjectionMatrix, float shadowResolution)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x668D490", Offset = "0x668C490", VA = "0x668D490")]
	internal static void GetScaleAndBiasForLinearDistanceFade(float fadeDistance, float border, out float scale, out float bias)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x668D4F0", Offset = "0x668C4F0", VA = "0x668D4F0")]
	public static void SetupShadowCasterConstantBuffer(CommandBuffer cmd, ref VisibleLight shadowLight, Vector4 shadowBias)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x668D640", Offset = "0x668C640", VA = "0x668D640")]
	internal static void SetupShadowCasterConstantBuffer(RasterCommandBuffer cmd, ref VisibleLight shadowLight, Vector4 shadowBias)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x668D890", Offset = "0x668C890", VA = "0x668D890")]
	internal static void SetShadowBias(RasterCommandBuffer cmd, Vector4 shadowBias)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x668D940", Offset = "0x668C940", VA = "0x668D940")]
	internal static void SetLightDirection(RasterCommandBuffer cmd, Vector3 lightDirection)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x668D9F0", Offset = "0x668C9F0", VA = "0x668D9F0")]
	internal static void SetLightPosition(RasterCommandBuffer cmd, Vector3 lightPosition)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x668DAB0", Offset = "0x668CAB0", VA = "0x668DAB0")]
	internal static void SetCameraPosition(RasterCommandBuffer cmd, Vector3 worldSpaceCameraPos)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x668DB60", Offset = "0x668CB60", VA = "0x668DB60")]
	internal static void SetWorldToCameraAndCameraToWorldMatrices(RasterCommandBuffer cmd, Matrix4x4 viewMatrix)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x668DE40", Offset = "0x668CE40", VA = "0x668DE40")]
	private static RenderTextureDescriptor GetTemporaryShadowTextureDescriptor(int width, int height, int bits)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x668DF40", Offset = "0x668CF40", VA = "0x668DF40")]
	[Obsolete("Use AllocShadowRT or ShadowRTReAllocateIfNeeded. #from(2022.1) #breakingFrom(2023.1)", true)]
	public static RenderTexture GetTemporaryShadowTexture(int width, int height, int bits)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x668E010", Offset = "0x668D010", VA = "0x668E010")]
	public static bool ShadowRTNeedsReAlloc(RTHandle handle, int width, int height, int bits, int anisoLevel, float mipMapBias, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x668E2F0", Offset = "0x668D2F0", VA = "0x668E2F0")]
	public static RTHandle AllocShadowRT(int width, int height, int bits, int anisoLevel, float mipMapBias, string name)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x668E3E0", Offset = "0x668D3E0", VA = "0x668E3E0")]
	public static bool ShadowRTReAllocateIfNeeded(ref RTHandle handle, int width, int height, int bits, int anisoLevel = 1, float mipMapBias = 0f, string name = "")
	{
		return default(bool);
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x668BE70", Offset = "0x668AE70", VA = "0x668BE70")]
	private static Matrix4x4 GetShadowTransform(Matrix4x4 proj, Matrix4x4 view)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x668E4D0", Offset = "0x668D4D0", VA = "0x668E4D0")]
	internal static float SoftShadowQualityToShaderProperty(Light light, bool softShadowsEnabled)
	{
		return default(float);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x668E780", Offset = "0x668D780", VA = "0x668E780")]
	internal static bool SupportsPerLightSoftShadowQuality()
	{
		return default(bool);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x668E790", Offset = "0x668D790", VA = "0x668E790")]
	internal static void SetPerLightSoftShadowKeyword(RasterCommandBuffer cmd, bool hasSoftShadows)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x668E830", Offset = "0x668D830", VA = "0x668E830")]
	internal static void SetSoftShadowQualityShaderKeywords(RasterCommandBuffer cmd, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x668E920", Offset = "0x668D920", VA = "0x668E920")]
	internal static bool IsValidShadowCastingLight(UniversalLightData lightData, int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x668EA50", Offset = "0x668DA50", VA = "0x668EA50")]
	internal static bool IsValidShadowCastingLight(UniversalLightData lightData, int i, LightType lightType, LightShadows lightShadows, float shadowStrength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x668B650", Offset = "0x668A650", VA = "0x668B650")]
	internal static int GetPunctualLightShadowSlicesCount(in LightType lightType)
	{
		return default(int);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x668EA80", Offset = "0x668DA80", VA = "0x668EA80")]
	internal static bool FastApproximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x668EAA0", Offset = "0x668DAA0", VA = "0x668EAA0")]
	internal static bool FastApproximately(Vector4 a, Vector4 b)
	{
		return default(bool);
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x668EBD0", Offset = "0x668DBD0", VA = "0x668EBD0")]
	internal static int MinimalPunctualLightShadowResolution(bool softShadow)
	{
		return default(int);
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x668EBE0", Offset = "0x668DBE0", VA = "0x668EBE0")]
	internal static int GetMaxSupportedShadowAtlasResolution()
	{
		return default(int);
	}
}
