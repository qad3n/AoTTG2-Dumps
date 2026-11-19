// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x66C2130", Offset = "0x66C1130", VA = "0x66C2130")]
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
	[Address(RVA = "0x66BC7C0", Offset = "0x66BB7C0", VA = "0x66BC7C0", Slot = "7")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Configure(CommandBuffer cmd, RenderTextureDescriptor cameraTextureDescriptor)
	{
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x66BC7D0", Offset = "0x66BB7D0", VA = "0x66BC7D0", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x66BC7E0", Offset = "0x66BB7E0", VA = "0x66BC7E0")]
	public AdditionalLightsShadowCasterPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x66BCC30", Offset = "0x66BBC30", VA = "0x66BCC30")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x66BCC50", Offset = "0x66BBC50", VA = "0x66BCC50")]
	internal static float CalcGuardAngle(float frustumAngleInDegrees, float guardBandSizeInTexels, float sliceResolutionInTexels)
	{
		return default(float);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x66BCCD0", Offset = "0x66BBCD0", VA = "0x66BCCD0")]
	internal static float GetPointLightShadowFrustumFovBiasInDegrees(int shadowSliceResolution, bool shadowFiltering)
	{
		return default(float);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x66BD020", Offset = "0x66BC020", VA = "0x66BD020")]
	private ulong ResolutionLog2ForHash(int resolution)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x66BD070", Offset = "0x66BC070", VA = "0x66BD070")]
	private ulong ComputeShadowRequestHash(UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x66BD460", Offset = "0x66BC460", VA = "0x66BD460")]
	private float GetLightTypeIdentifierForShadowParams(LightType lightType)
	{
		return default(float);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x66BD480", Offset = "0x66BC480", VA = "0x66BD480")]
	private bool UsesBakedShadows(Light light)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x66BD4B0", Offset = "0x66BC4B0", VA = "0x66BD4B0")]
	public bool Setup(ref RenderingData renderingData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x66BD580", Offset = "0x66BC580", VA = "0x66BD580")]
	public bool Setup(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x66BFE40", Offset = "0x66BEE40", VA = "0x66BFE40")]
	private void UpdateTextureDescriptorIfNeeded()
	{
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x66BF640", Offset = "0x66BE640", VA = "0x66BF640")]
	private bool AnyAdditionalLightHasMixedShadows(UniversalLightData lightData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x66BF7C0", Offset = "0x66BE7C0", VA = "0x66BF7C0")]
	private bool SetupForEmptyRendering(bool stripShadowsOffVariants, bool shadowsEnabled, UniversalLightData lightData, UniversalShadowData shadowData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x66BA890", Offset = "0x66B9890", VA = "0x66BA890")]
	public int GetShadowLightIndexFromLightIndex(int visibleLightIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x66BFDE0", Offset = "0x66BEDE0", VA = "0x66BFDE0")]
	private void Clear()
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x66BFEF0", Offset = "0x66BEEF0", VA = "0x66BFEF0")]
	internal static void SetShadowParamsForEmptyShadowmap(RasterCommandBuffer rasterCommandBuffer)
	{
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x66C0150", Offset = "0x66BF150", VA = "0x66C0150")]
	private void RenderAdditionalShadowmapAtlas(RasterCommandBuffer cmd, ref PassData data, bool useRenderGraph)
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x66C0D90", Offset = "0x66BFD90", VA = "0x66C0D90")]
	private void SetupAdditionalLightsShadowReceiverConstants(RasterCommandBuffer cmd, Vector2Int allocatedShadowAtlasSize, bool useStructuredBuffer, bool softShadows)
	{
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x66C1100", Offset = "0x66C0100", VA = "0x66C1100")]
	private void InitPassData(ref PassData passData, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x66C1210", Offset = "0x66C0210", VA = "0x66C1210")]
	private void InitRendererLists(ref CullingResults cullResults, ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, bool useRenderGraph)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x66C1480", Offset = "0x66C0480", VA = "0x66C1480")]
	internal TextureHandle Render(RenderGraph graph, ContextContainer frameData)
	{
		return default(TextureHandle);
	}
}
