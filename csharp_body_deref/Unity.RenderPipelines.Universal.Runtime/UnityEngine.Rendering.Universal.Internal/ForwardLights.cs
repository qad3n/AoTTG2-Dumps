// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.ForwardLights
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000220")]
public class ForwardLights
{
	[Token(Token = "0x2000221")]
	private static class LightConstantBuffer
	{
		[Token(Token = "0x4000D46")]
		[FieldOffset(Offset = "0x0")]
		public static int _MainLightPosition;

		[Token(Token = "0x4000D47")]
		[FieldOffset(Offset = "0x4")]
		public static int _MainLightColor;

		[Token(Token = "0x4000D48")]
		[FieldOffset(Offset = "0x8")]
		public static int _MainLightOcclusionProbesChannel;

		[Token(Token = "0x4000D49")]
		[FieldOffset(Offset = "0xC")]
		public static int _MainLightLayerMask;

		[Token(Token = "0x4000D4A")]
		[FieldOffset(Offset = "0x10")]
		public static int _AdditionalLightsCount;

		[Token(Token = "0x4000D4B")]
		[FieldOffset(Offset = "0x14")]
		public static int _AdditionalLightsPosition;

		[Token(Token = "0x4000D4C")]
		[FieldOffset(Offset = "0x18")]
		public static int _AdditionalLightsColor;

		[Token(Token = "0x4000D4D")]
		[FieldOffset(Offset = "0x1C")]
		public static int _AdditionalLightsAttenuation;

		[Token(Token = "0x4000D4E")]
		[FieldOffset(Offset = "0x20")]
		public static int _AdditionalLightsSpotDir;

		[Token(Token = "0x4000D4F")]
		[FieldOffset(Offset = "0x24")]
		public static int _AdditionalLightOcclusionProbeChannel;

		[Token(Token = "0x4000D50")]
		[FieldOffset(Offset = "0x28")]
		public static int _AdditionalLightsLayerMasks;
	}

	[Token(Token = "0x2000222")]
	internal struct InitParams
	{
		[Token(Token = "0x4000D51")]
		[FieldOffset(Offset = "0x0")]
		public LightCookieManager lightCookieManager;

		[Token(Token = "0x4000D52")]
		[FieldOffset(Offset = "0x8")]
		public bool forwardPlus;

		[Token(Token = "0x6000BE2")]
		[Address(RVA = "0x66CC160", Offset = "0x66CB160", VA = "0x66CC160")]
		internal static InitParams Create()
		{
			return default(InitParams);
		}
	}

	[Token(Token = "0x2000223")]
	private class SetupLightPassData
	{
		[Token(Token = "0x4000D53")]
		[FieldOffset(Offset = "0x10")]
		internal UniversalRenderingData renderingData;

		[Token(Token = "0x4000D54")]
		[FieldOffset(Offset = "0x18")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000D55")]
		[FieldOffset(Offset = "0x20")]
		internal UniversalLightData lightData;

		[Token(Token = "0x4000D56")]
		[FieldOffset(Offset = "0x28")]
		internal ForwardLights forwardLights;

		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x66D0FB0", Offset = "0x66CFFB0", VA = "0x66D0FB0")]
		public SetupLightPassData()
		{
		}
	}

	[Token(Token = "0x4000D26")]
	[FieldOffset(Offset = "0x10")]
	private int m_AdditionalLightsBufferId;

	[Token(Token = "0x4000D27")]
	[FieldOffset(Offset = "0x14")]
	private int m_AdditionalLightsIndicesId;

	[Token(Token = "0x4000D28")]
	private const string k_SetupLightConstants = "Setup Light Constants";

	[Token(Token = "0x4000D29")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilingSampler m_ProfilingSampler;

	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilingSampler m_ProfilingSamplerFPSetup;

	[Token(Token = "0x4000D2B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilingSampler m_ProfilingSamplerFPComplete;

	[Token(Token = "0x4000D2C")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilingSampler m_ProfilingSamplerFPUpload;

	[Token(Token = "0x4000D2D")]
	[FieldOffset(Offset = "0x18")]
	private MixedLightingSetup m_MixedLightingSetup;

	[Token(Token = "0x4000D2E")]
	[FieldOffset(Offset = "0x20")]
	private Vector4[] m_AdditionalLightPositions;

	[Token(Token = "0x4000D2F")]
	[FieldOffset(Offset = "0x28")]
	private Vector4[] m_AdditionalLightColors;

	[Token(Token = "0x4000D30")]
	[FieldOffset(Offset = "0x30")]
	private Vector4[] m_AdditionalLightAttenuations;

	[Token(Token = "0x4000D31")]
	[FieldOffset(Offset = "0x38")]
	private Vector4[] m_AdditionalLightSpotDirections;

	[Token(Token = "0x4000D32")]
	[FieldOffset(Offset = "0x40")]
	private Vector4[] m_AdditionalLightOcclusionProbeChannels;

	[Token(Token = "0x4000D33")]
	[FieldOffset(Offset = "0x48")]
	private float[] m_AdditionalLightsLayerMasks;

	[Token(Token = "0x4000D34")]
	[FieldOffset(Offset = "0x50")]
	private bool m_UseStructuredBuffer;

	[Token(Token = "0x4000D35")]
	[FieldOffset(Offset = "0x51")]
	private bool m_UseForwardPlus;

	[Token(Token = "0x4000D36")]
	[FieldOffset(Offset = "0x54")]
	private int m_DirectionalLightCount;

	[Token(Token = "0x4000D37")]
	[FieldOffset(Offset = "0x58")]
	private int m_ActualTileWidth;

	[Token(Token = "0x4000D38")]
	[FieldOffset(Offset = "0x5C")]
	private int2 m_TileResolution;

	[Token(Token = "0x4000D39")]
	[FieldOffset(Offset = "0x68")]
	private JobHandle m_CullingHandle;

	[Token(Token = "0x4000D3A")]
	[FieldOffset(Offset = "0x78")]
	private NativeArray<uint> m_ZBins;

	[Token(Token = "0x4000D3B")]
	[FieldOffset(Offset = "0x88")]
	private GraphicsBuffer m_ZBinsBuffer;

	[Token(Token = "0x4000D3C")]
	[FieldOffset(Offset = "0x90")]
	private NativeArray<uint> m_TileMasks;

	[Token(Token = "0x4000D3D")]
	[FieldOffset(Offset = "0xA0")]
	private GraphicsBuffer m_TileMasksBuffer;

	[Token(Token = "0x4000D3E")]
	[FieldOffset(Offset = "0xA8")]
	private LightCookieManager m_LightCookieManager;

	[Token(Token = "0x4000D3F")]
	[FieldOffset(Offset = "0xB0")]
	private ReflectionProbeManager m_ReflectionProbeManager;

	[Token(Token = "0x4000D40")]
	[FieldOffset(Offset = "0x140")]
	private int m_WordsPerTile;

	[Token(Token = "0x4000D41")]
	[FieldOffset(Offset = "0x144")]
	private float m_ZBinScale;

	[Token(Token = "0x4000D42")]
	[FieldOffset(Offset = "0x148")]
	private float m_ZBinOffset;

	[Token(Token = "0x4000D43")]
	[FieldOffset(Offset = "0x14C")]
	private int m_LightCount;

	[Token(Token = "0x4000D44")]
	[FieldOffset(Offset = "0x150")]
	private int m_BinCount;

	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilingSampler s_SetupForwardLights;

	[Token(Token = "0x170002D6")]
	internal ReflectionProbeManager reflectionProbeManager
	{
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x66CC860", Offset = "0x66CB860", VA = "0x66CC860")]
		get
		{
			return default(ReflectionProbeManager);
		}
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x66CC130", Offset = "0x66CB130", VA = "0x66CC130")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Setup(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x66CC140", Offset = "0x66CB140", VA = "0x66CC140")]
	public ForwardLights()
	{
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x66CC270", Offset = "0x66CB270", VA = "0x66CC270")]
	internal ForwardLights(InitParams initParams)
	{
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x66CC680", Offset = "0x66CB680", VA = "0x66CC680")]
	private void CreateForwardPlusBuffers()
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x66CC880", Offset = "0x66CB880", VA = "0x66CC880")]
	private static int AlignByteCount(int count, int align)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x66CC890", Offset = "0x66CB890", VA = "0x66CC890")]
	private static void GetViewParams(bool isOrthographic, float4x4 viewToClip, out float viewPlaneBot, out float viewPlaneTop, out float4 viewToViewportScaleBias)
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x66CC9E0", Offset = "0x66CB9E0", VA = "0x66CC9E0")]
	internal static JobHandle ScheduleClusteringJobs(bool hasMainLight, bool supportsAdditionalLights, NativeArray<VisibleLight> lights, NativeArray<VisibleReflectionProbe> probes, NativeArray<uint> zBins, NativeArray<uint> tileMasks, Fixed2<float4x4> worldToViews, Fixed2<float4x4> viewToClips, int viewCount, int2 screenResolution, float nearClipPlane, float farClipPlane, bool isOrthographic, out int localLightCount, out int directionalLightCount, out int binCount, out float zBinScale, out float zBinOffset, out int2 tileResolution, out int actualTileWidth, out int wordsPerTile)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x66CE0A0", Offset = "0x66CD0A0", VA = "0x66CE0A0")]
	internal void PreSetup(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x66CED00", Offset = "0x66CDD00", VA = "0x66CED00")]
	internal void SetupRenderGraphLights(RenderGraph renderGraph, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x66CF150", Offset = "0x66CE150", VA = "0x66CF150")]
	internal void SetupLights(UnsafeCommandBuffer cmd, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x66CFF20", Offset = "0x66CEF20", VA = "0x66CFF20")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x66D0030", Offset = "0x66CF030", VA = "0x66D0030")]
	private void InitializeLightConstants(NativeArray<VisibleLight> lights, int lightIndex, bool supportsLightLayers, out Vector4 lightPos, out Vector4 lightColor, out Vector4 lightAttenuation, out Vector4 lightSpotDir, out Vector4 lightOcclusionProbeChannel, out uint lightLayerMask, out bool isSubtractive)
	{
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x66CFEE0", Offset = "0x66CEEE0", VA = "0x66CFEE0")]
	private void SetupShaderLightConstants(UnsafeCommandBuffer cmd, ref CullingResults cullResults, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x66D0270", Offset = "0x66CF270", VA = "0x66D0270")]
	private void SetupMainLightConstants(UnsafeCommandBuffer cmd, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x66D03F0", Offset = "0x66CF3F0", VA = "0x66D03F0")]
	private void SetupAdditionalLightConstants(UnsafeCommandBuffer cmd, ref CullingResults cullResults, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x66D0A40", Offset = "0x66CFA40", VA = "0x66D0A40")]
	private int SetupPerObjectLightIndices(CullingResults cullResults, UniversalLightData lightData)
	{
		return default(int);
	}
}
