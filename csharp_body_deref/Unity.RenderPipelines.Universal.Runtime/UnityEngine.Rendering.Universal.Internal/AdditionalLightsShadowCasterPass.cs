// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000208")]
public class AdditionalLightsShadowCasterPass : ScriptableRenderPass
{
	[Token(Token = "0x2000209")]
	private static class AdditionalShadowsConstantBuffer
	{
		[Token(Token = "0x4000C9B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _AdditionalLightsWorldToShadow;

		[Token(Token = "0x4000C9C")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _AdditionalShadowParams;

		[Token(Token = "0x4000C9D")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _AdditionalShadowOffset0;

		[Token(Token = "0x4000C9E")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _AdditionalShadowOffset1;

		[Token(Token = "0x4000C9F")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _AdditionalShadowFadeParams;

		[Token(Token = "0x4000CA0")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _AdditionalShadowmapSize;

		[Token(Token = "0x4000CA1")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _AdditionalLightsShadowmapID;

		[Token(Token = "0x4000CA2")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _AdditionalLightsWorldToShadow_SSBO;

		[Token(Token = "0x4000CA3")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _AdditionalShadowParams_SSBO;
	}

	[Token(Token = "0x200020A")]
	private class PassData
	{
		[Token(Token = "0x4000CA4")]
		[FieldOffset(Offset = "0x10")]
		internal int shadowmapID;

		[Token(Token = "0x4000CA5")]
		[FieldOffset(Offset = "0x14")]
		internal bool emptyShadowmap;

		[Token(Token = "0x4000CA6")]
		[FieldOffset(Offset = "0x15")]
		internal bool setKeywordForEmptyShadowmap;

		[Token(Token = "0x4000CA7")]
		[FieldOffset(Offset = "0x16")]
		internal bool useStructuredBuffer;

		[Token(Token = "0x4000CA8")]
		[FieldOffset(Offset = "0x17")]
		internal bool stripShadowsOffVariants;

		[Token(Token = "0x4000CA9")]
		[FieldOffset(Offset = "0x18")]
		internal Matrix4x4 viewMatrix;

		[Token(Token = "0x4000CAA")]
		[FieldOffset(Offset = "0x58")]
		internal Vector2Int allocatedShadowAtlasSize;

		[Token(Token = "0x4000CAB")]
		[FieldOffset(Offset = "0x60")]
		internal TextureHandle shadowmapTexture;

		[Token(Token = "0x4000CAC")]
		[FieldOffset(Offset = "0x70")]
		internal UniversalLightData lightData;

		[Token(Token = "0x4000CAD")]
		[FieldOffset(Offset = "0x78")]
		internal UniversalShadowData shadowData;

		[Token(Token = "0x4000CAE")]
		[FieldOffset(Offset = "0x80")]
		internal AdditionalLightsShadowCasterPass pass;

		[Token(Token = "0x4000CAF")]
		[FieldOffset(Offset = "0x88")]
		internal readonly RendererList[] shadowRendererLists;

		[Token(Token = "0x4000CB0")]
		[FieldOffset(Offset = "0x90")]
		internal readonly RendererListHandle[] shadowRendererListsHdl;

		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x2CC49A0", Offset = "0x2CC2FA0", VA = "0x182CC49A0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000C78")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("AdditionalLightsShadowCasterPass.m_AdditionalShadowsBufferId was deprecated. Shadow slice matrix is now passed to the GPU using an entry in buffer m_AdditionalLightsWorldToShadow_SSBO #from(2021.1) #breakingFrom(2023.1)", true)]
	public static int m_AdditionalShadowsBufferId;

	[Token(Token = "0x4000C79")]
	[FieldOffset(Offset = "0x4")]
	[Obsolete("AdditionalLightsShadowCasterPass.m_AdditionalShadowsIndicesId was deprecated. Shadow slice index is now passed to the GPU using last member of an entry in buffer m_AdditionalShadowParams_SSBO #from(2021.1) #breakingFrom(2023.1)", true)]
	public static int m_AdditionalShadowsIndicesId;

	[Token(Token = "0x4000C7A")]
	[FieldOffset(Offset = "0x60")]
	internal RTHandle m_AdditionalLightsShadowmapHandle;

	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x68")]
	private int renderTargetWidth;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x6C")]
	private int renderTargetHeight;

	[Token(Token = "0x4000C7D")]
	[FieldOffset(Offset = "0x70")]
	private bool m_CreateEmptyShadowmap;

	[Token(Token = "0x4000C7E")]
	[FieldOffset(Offset = "0x71")]
	private bool m_SetKeywordForEmptyShadowmap;

	[Token(Token = "0x4000C7F")]
	[FieldOffset(Offset = "0x72")]
	private bool m_IssuedMessageAboutShadowSlicesTooMany;

	[Token(Token = "0x4000C80")]
	[FieldOffset(Offset = "0x73")]
	private bool m_IssuedMessageAboutShadowMapsRescale;

	[Token(Token = "0x4000C81")]
	[FieldOffset(Offset = "0x74")]
	private bool m_IssuedMessageAboutShadowMapsTooBig;

	[Token(Token = "0x4000C82")]
	[FieldOffset(Offset = "0x75")]
	private bool m_IssuedMessageAboutRemovedShadowSlices;

	[Token(Token = "0x4000C83")]
	[FieldOffset(Offset = "0x8")]
	private static bool m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall;

	[Token(Token = "0x4000C84")]
	[FieldOffset(Offset = "0x9")]
	private static bool m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall;

	[Token(Token = "0x4000C85")]
	[FieldOffset(Offset = "0x76")]
	private readonly bool m_UseStructuredBuffer;

	[Token(Token = "0x4000C86")]
	[FieldOffset(Offset = "0x78")]
	private float m_MaxShadowDistanceSq;

	[Token(Token = "0x4000C87")]
	[FieldOffset(Offset = "0x7C")]
	private float m_CascadeBorder;

	[Token(Token = "0x4000C88")]
	[FieldOffset(Offset = "0x80")]
	private bool[] m_VisibleLightIndexToIsCastingShadows;

	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x88")]
	private short[] m_VisibleLightIndexToAdditionalLightIndex;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x90")]
	private short[] m_AdditionalLightIndexToVisibleLightIndex;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x98")]
	private Vector4[] m_AdditionalLightIndexToShadowParams;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0xA0")]
	private Matrix4x4[] m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0xA8")]
	private ShadowSliceData[] m_AdditionalLightsShadowSlices;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0xB0")]
	private readonly List<byte> m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0xB8")]
	private readonly List<short> m_ShadowSliceToAdditionalLightIndex;

	[Token(Token = "0x4000C90")]
	[FieldOffset(Offset = "0xC0")]
	private readonly Dictionary<int, ulong> m_ShadowRequestsHashes;

	[Token(Token = "0x4000C91")]
	[FieldOffset(Offset = "0xC8")]
	private readonly ProfilingSampler m_ProfilingSetupSampler;

	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0xD0")]
	private RenderTextureDescriptor m_AdditionalLightShadowDescriptor;

	[Token(Token = "0x4000C93")]
	private const int k_ShadowmapBufferBits = 16;

	[Token(Token = "0x4000C94")]
	private const float k_LightTypeIdentifierInShadowParams_Spot = 0f;

	[Token(Token = "0x4000C95")]
	private const float k_LightTypeIdentifierInShadowParams_Point = 1f;

	[Token(Token = "0x4000C96")]
	private const string k_AdditionalLightShadowMapTextureName = "_AdditionalLightsShadowmapTexture";

	[Token(Token = "0x4000C97")]
	[FieldOffset(Offset = "0xC")]
	private static readonly Vector4 c_DefaultShadowParams;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x1C")]
	private static Vector4 s_EmptyAdditionalShadowFadeParams;

	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0x30")]
	private static Vector4[] s_EmptyAdditionalLightIndexToShadowParams;

	[Token(Token = "0x4000C9A")]
	[FieldOffset(Offset = "0x38")]
	private static bool isAdditionalShadowParamsDirty;

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x2CB6A80", Offset = "0x2CB5080", VA = "0x182CB6A80")]
	public AdditionalLightsShadowCasterPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x2C582D0", Offset = "0x2C568D0", VA = "0x182C582D0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x2CB1980", Offset = "0x2CAFF80", VA = "0x182CB1980")]
	internal static float CalcGuardAngle(float frustumAngleInDegrees, float guardBandSizeInTexels, float sliceResolutionInTexels)
	{
		return default(float);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x2CB1E40", Offset = "0x2CB0440", VA = "0x182CB1E40")]
	internal static float GetPointLightShadowFrustumFovBiasInDegrees(int shadowSliceResolution, bool shadowFiltering)
	{
		return default(float);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x2CB3BB0", Offset = "0x2CB21B0", VA = "0x182CB3BB0")]
	private ulong ResolutionLog2ForHash(int resolution)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x2CB1A80", Offset = "0x2CB0080", VA = "0x182CB1A80")]
	private ulong ComputeShadowRequestHash(UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x2CB1E20", Offset = "0x2CB0420", VA = "0x182CB1E20")]
	private float GetLightTypeIdentifierForShadowParams(LightType lightType)
	{
		return default(float);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x2CB6A00", Offset = "0x2CB5000", VA = "0x182CB6A00")]
	private bool UsesBakedShadows(Light light)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x2CB6840", Offset = "0x2CB4E40", VA = "0x182CB6840")]
	public bool Setup(ref RenderingData renderingData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x2CB4890", Offset = "0x2CB2E90", VA = "0x182CB4890")]
	public bool Setup(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x2CB6940", Offset = "0x2CB4F40", VA = "0x182CB6940")]
	private void UpdateTextureDescriptorIfNeeded()
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x2CB1830", Offset = "0x2CAFE30", VA = "0x182CB1830")]
	private bool AnyAdditionalLightHasMixedShadows(UniversalLightData lightData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x2CB4280", Offset = "0x2CB2880", VA = "0x182CB4280")]
	private bool SetupForEmptyRendering(bool stripShadowsOffVariants, bool shadowsEnabled, UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x2CB2160", Offset = "0x2CB0760", VA = "0x182CB2160")]
	public int GetShadowLightIndexFromLightIndex(int visibleLightIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x2CB1A10", Offset = "0x2CB0010", VA = "0x182CB1A10")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x2CB3C00", Offset = "0x2CB2200", VA = "0x182CB3C00")]
	internal static void SetShadowParamsForEmptyShadowmap(RasterCommandBuffer rasterCommandBuffer)
	{
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x2CB2600", Offset = "0x2CB0C00", VA = "0x182CB2600")]
	private void RenderAdditionalShadowmapAtlas(RasterCommandBuffer cmd, ref PassData data, bool useRenderGraph)
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x2CB3E60", Offset = "0x2CB2460", VA = "0x182CB3E60")]
	private void SetupAdditionalLightsShadowReceiverConstants(RasterCommandBuffer cmd, Vector2Int allocatedShadowAtlasSize, bool useStructuredBuffer, bool softShadows)
	{
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x2CB21D0", Offset = "0x2CB07D0", VA = "0x182CB21D0")]
	private void InitPassData(ref PassData passData, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x2CB22E0", Offset = "0x2CB08E0", VA = "0x182CB22E0")]
	private void InitRendererLists(ref CullingResults cullResults, ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x2CB3250", Offset = "0x2CB1850", VA = "0x182CB3250")]
	internal TextureHandle Render(RenderGraph graph, ContextContainer frameData)
	{
		return default(TextureHandle);
	}
}
