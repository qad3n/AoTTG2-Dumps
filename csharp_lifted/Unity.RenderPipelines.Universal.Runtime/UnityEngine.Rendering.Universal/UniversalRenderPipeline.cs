// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipeline
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Experimental.GlobalIllumination;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001D1")]
public sealed class UniversalRenderPipeline : RenderPipeline
{
	[Token(Token = "0x20001D2")]
	internal static class CameraMetadataCache
	{
		[Token(Token = "0x20001D3")]
		public class CameraMetadataCacheEntry
		{
			[Token(Token = "0x4000A2D")]
			[FieldOffset(Offset = "0x10")]
			public ProfilingSampler sampler;

			[Token(Token = "0x6000A72")]
			[Address(RVA = "0x66AD390", Offset = "0x66AC390", VA = "0x66AD390")]
			public CameraMetadataCacheEntry()
			{
			}
		}

		[Token(Token = "0x4000A2B")]
		[FieldOffset(Offset = "0x0")]
		private static Dictionary<int, CameraMetadataCacheEntry> s_MetadataCache;

		[Token(Token = "0x4000A2C")]
		[FieldOffset(Offset = "0x8")]
		private static readonly CameraMetadataCacheEntry k_NoAllocEntry;

		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x66AD1E0", Offset = "0x66AC1E0", VA = "0x66AD1E0")]
		public static CameraMetadataCacheEntry GetCached(Camera camera)
		{
			return null;
		}
	}

	[Token(Token = "0x20001D4")]
	internal static class Profiling
	{
		[Token(Token = "0x20001D5")]
		public static class Pipeline
		{
			[Token(Token = "0x20001D6")]
			public static class Renderer
			{
				[Token(Token = "0x4000A3A")]
				private const string k_Name = "ScriptableRenderer";

				[Token(Token = "0x4000A3B")]
				[FieldOffset(Offset = "0x0")]
				public static readonly ProfilingSampler setupCullingParameters;
			}

			[Token(Token = "0x20001D7")]
			public static class Context
			{
				[Token(Token = "0x4000A3C")]
				private const string k_Name = "ScriptableRenderContext";

				[Token(Token = "0x4000A3D")]
				[FieldOffset(Offset = "0x0")]
				public static readonly ProfilingSampler submit;
			}

			[Token(Token = "0x4000A2E")]
			private const string k_Name = "UniversalRenderPipeline";

			[Token(Token = "0x4000A2F")]
			[FieldOffset(Offset = "0x0")]
			public static readonly ProfilingSampler initializeCameraData;

			[Token(Token = "0x4000A30")]
			[FieldOffset(Offset = "0x8")]
			public static readonly ProfilingSampler initializeStackedCameraData;

			[Token(Token = "0x4000A31")]
			[FieldOffset(Offset = "0x10")]
			public static readonly ProfilingSampler initializeAdditionalCameraData;

			[Token(Token = "0x4000A32")]
			[FieldOffset(Offset = "0x18")]
			public static readonly ProfilingSampler initializeRenderingData;

			[Token(Token = "0x4000A33")]
			[FieldOffset(Offset = "0x20")]
			public static readonly ProfilingSampler initializeShadowData;

			[Token(Token = "0x4000A34")]
			[FieldOffset(Offset = "0x28")]
			public static readonly ProfilingSampler initializeLightData;

			[Token(Token = "0x4000A35")]
			[FieldOffset(Offset = "0x30")]
			public static readonly ProfilingSampler buildAdditionalLightsShadowAtlasLayout;

			[Token(Token = "0x4000A36")]
			[FieldOffset(Offset = "0x38")]
			public static readonly ProfilingSampler getPerObjectLightFlags;

			[Token(Token = "0x4000A37")]
			[FieldOffset(Offset = "0x40")]
			public static readonly ProfilingSampler getMainLightIndex;

			[Token(Token = "0x4000A38")]
			[FieldOffset(Offset = "0x48")]
			public static readonly ProfilingSampler setupPerFrameShaderConstants;

			[Token(Token = "0x4000A39")]
			[FieldOffset(Offset = "0x50")]
			public static readonly ProfilingSampler setupPerCameraShaderConstants;
		}
	}

	[Token(Token = "0x20001D8")]
	private readonly struct CameraRenderingScope : IDisposable
	{
		[Token(Token = "0x4000A3E")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ProfilingSampler beginCameraRenderingSampler;

		[Token(Token = "0x4000A3F")]
		[FieldOffset(Offset = "0x8")]
		private static readonly ProfilingSampler endCameraRenderingSampler;

		[Token(Token = "0x4000A40")]
		[FieldOffset(Offset = "0x0")]
		private readonly ScriptableRenderContext m_Context;

		[Token(Token = "0x4000A41")]
		[FieldOffset(Offset = "0x8")]
		private readonly Camera m_Camera;

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x66AD930", Offset = "0x66AC930", VA = "0x66AD930")]
		public CameraRenderingScope(ScriptableRenderContext context, Camera camera)
		{
		}

		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x66ADA40", Offset = "0x66ACA40", VA = "0x66ADA40", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001D9")]
	private readonly struct ContextRenderingScope : IDisposable
	{
		[Token(Token = "0x4000A42")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ProfilingSampler beginContextRenderingSampler;

		[Token(Token = "0x4000A43")]
		[FieldOffset(Offset = "0x8")]
		private static readonly ProfilingSampler endContextRenderingSampler;

		[Token(Token = "0x4000A44")]
		[FieldOffset(Offset = "0x0")]
		private readonly ScriptableRenderContext m_Context;

		[Token(Token = "0x4000A45")]
		[FieldOffset(Offset = "0x8")]
		private readonly List<Camera> m_Cameras;

		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x66ADBF0", Offset = "0x66ACBF0", VA = "0x66ADBF0")]
		public ContextRenderingScope(ScriptableRenderContext context, List<Camera> cameras)
		{
		}

		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x66ADCF0", Offset = "0x66ACCF0", VA = "0x66ADCF0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001DA")]
	public class SingleCameraRequest
	{
		[Token(Token = "0x4000A46")]
		[FieldOffset(Offset = "0x10")]
		public RenderTexture destination;

		[Token(Token = "0x4000A47")]
		[FieldOffset(Offset = "0x18")]
		public int mipLevel;

		[Token(Token = "0x4000A48")]
		[FieldOffset(Offset = "0x1C")]
		public CubemapFace face;

		[Token(Token = "0x4000A49")]
		[FieldOffset(Offset = "0x20")]
		public int slice;

		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x66ADEA0", Offset = "0x66ACEA0", VA = "0x66ADEA0")]
		public SingleCameraRequest()
		{
		}
	}

	[Token(Token = "0x4000A11")]
	public const string k_ShaderTagName = "UniversalPipeline";

	[Token(Token = "0x4000A12")]
	internal const int k_DefaultRenderingLayerMask = 1;

	[Token(Token = "0x4000A13")]
	[FieldOffset(Offset = "0x18")]
	private readonly DebugDisplaySettingsUI m_DebugDisplaySettingsUI;

	[Token(Token = "0x4000A14")]
	[FieldOffset(Offset = "0x20")]
	private UniversalRenderPipelineGlobalSettings m_GlobalSettings;

	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x4")]
	internal static bool stackedOverlayCamerasRequireDepthForPostProcessing;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x8")]
	internal static RenderGraph s_RenderGraph;

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x10")]
	internal static RTHandleResourcePool s_RTHandlePool;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0x30")]
	internal bool apvIsEnabled;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0x18")]
	internal static bool requireOffscreenUICoverPrepass;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x19")]
	internal static bool offscreenUIRenderedInCurrentFrame;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x38")]
	private readonly UniversalRenderPipelineAsset pipelineAsset;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x40")]
	internal bool enableHDROutputOnce;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0x41")]
	internal bool warnedRuntimeSwitchHDROutputToSDROutput;

	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0x20")]
	private static Vector4 k_DefaultLightPosition;

	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x30")]
	private static Vector4 k_DefaultLightColor;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x40")]
	private static Vector4 k_DefaultLightAttenuation;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x50")]
	private static Vector4 k_DefaultLightSpotDirection;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x60")]
	private static Vector4 k_DefaultLightsProbeChannel;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x70")]
	private static List<Vector4> m_ShadowBiasData;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x78")]
	private static List<int> m_ShadowResolutionData;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x48")]
	private Comparison<Camera> cameraComparison;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x80")]
	private static Lightmapping.RequestLightsDelegate lightsDelegate;

	[Token(Token = "0x17000266")]
	public static float maxShadowBias
	{
		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x66A0190", Offset = "0x669F190", VA = "0x66A0190")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000267")]
	public static float minRenderScale
	{
		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x66A01A0", Offset = "0x669F1A0", VA = "0x66A01A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000268")]
	public static float maxRenderScale
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x66A01B0", Offset = "0x669F1B0", VA = "0x66A01B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000269")]
	public static int maxNumIterationsEnclosingSphere
	{
		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x66A01C0", Offset = "0x669F1C0", VA = "0x66A01C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026A")]
	public static int maxPerObjectLights
	{
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x66A01D0", Offset = "0x669F1D0", VA = "0x66A01D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026B")]
	public static int maxVisibleAdditionalLights
	{
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x66A01E0", Offset = "0x669F1E0", VA = "0x66A01E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026C")]
	internal static int lightsPerTile
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x66A02A0", Offset = "0x669F2A0", VA = "0x66A02A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026D")]
	internal static int maxZBinWords
	{
		[Token(Token = "0x6000A21")]
		[Address(RVA = "0x66A02F0", Offset = "0x669F2F0", VA = "0x66A02F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026E")]
	internal static int maxTileWords
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x66A0300", Offset = "0x669F300", VA = "0x66A0300")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026F")]
	internal static int maxVisibleReflectionProbes
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x66A0350", Offset = "0x669F350", VA = "0x66A0350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	internal UniversalRenderPipelineRuntimeTextures runtimeTextures
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x66A03C0", Offset = "0x669F3C0", VA = "0x66A03C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x66A03D0", Offset = "0x669F3D0", VA = "0x66A03D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000271")]
	internal static RenderTextureUVOriginStrategy renderTextureUVOriginStrategy
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x66A03E0", Offset = "0x669F3E0", VA = "0x66A03E0")]
		[CompilerGenerated]
		private get
		{
			return default(RenderTextureUVOriginStrategy);
		}
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x66A0450", Offset = "0x669F450", VA = "0x66A0450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000272")]
	public override RenderPipelineGlobalSettings defaultSettings
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x66A04A0", Offset = "0x669F4A0", VA = "0x66A04A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000273")]
	internal static bool canOptimizeScreenMSAASamples
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x66A04B0", Offset = "0x669F4B0", VA = "0x66A04B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x66A0520", Offset = "0x669F520", VA = "0x66A0520")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000274")]
	internal static int startFrameScreenMSAASamples
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x66A0570", Offset = "0x669F570", VA = "0x66A0570")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x66A05E0", Offset = "0x669F5E0", VA = "0x66A05E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000275")]
	public static UniversalRenderPipelineAsset asset
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x668E6F0", Offset = "0x668D6F0", VA = "0x668E6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x66A0630", Offset = "0x669F630", VA = "0x66A0630", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x66A0650", Offset = "0x669F650", VA = "0x66A0650")]
	public UniversalRenderPipeline(UniversalRenderPipelineAsset asset)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x66A0FE0", Offset = "0x669FFE0", VA = "0x66A0FE0", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x66A1450", Offset = "0x66A0450", VA = "0x66A1450")]
	private void DisposeAdditionalCameraData()
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x66A1500", Offset = "0x66A0500", VA = "0x66A1500", Slot = "7")]
	protected override void Render(ScriptableRenderContext renderContext, List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000A32")]
	protected override bool IsRenderRequestSupported<RequestData>(Camera camera, RequestData data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A33")]
	protected override void ProcessRenderRequests<RequestData>(ScriptableRenderContext context, Camera camera, RequestData renderRequest)
	{
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x66A46C0", Offset = "0x66A36C0", VA = "0x66A46C0")]
	[Obsolete("RenderSingleCamera is obsolete, please use RenderPipeline.SubmitRenderRequest with UniversalRenderer.SingleCameraRequest as RequestData type. #from(2023.1)")]
	public static void RenderSingleCamera(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x66A45E0", Offset = "0x66A35E0", VA = "0x66A45E0")]
	internal static void RenderSingleCameraInternal(ScriptableRenderContext context, Camera camera, bool isLastBaseCamera = true)
	{
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x66A4720", Offset = "0x66A3720", VA = "0x66A4720")]
	internal static void RenderSingleCameraInternal(ScriptableRenderContext context, Camera camera, ref UniversalAdditionalCameraData additionalCameraData, bool isLastBaseCamera = true)
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x66A7B60", Offset = "0x66A6B60", VA = "0x66A7B60")]
	private static bool TryGetCullingParameters(UniversalCameraData cameraData, out ScriptableCullingParameters cullingParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x66A6410", Offset = "0x66A5410", VA = "0x66A6410")]
	private static void RenderSingleCamera(ScriptableRenderContext context, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x66AA090", Offset = "0x66A9090", VA = "0x66AA090")]
	private static void CreateShadowAtlasAndCullShadowCasters(UniversalLightData lightData, UniversalShadowData shadowData, UniversalCameraData cameraData, ref CullingResults cullResults, ref ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x66A2A00", Offset = "0x66A1A00", VA = "0x66A2A00")]
	private static void RenderCameraStack(ScriptableRenderContext context, Camera baseCamera, bool isLastBaseCamera)
	{
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x66AA960", Offset = "0x66A9960", VA = "0x66AA960")]
	private static void UpdateCameraData(UniversalCameraData baseCameraData, in XRPass xr)
	{
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x66A4250", Offset = "0x66A3250", VA = "0x66A4250")]
	private static void UpdateVolumeFramework(Camera camera, UniversalAdditionalCameraData additionalCameraData)
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x66AAE70", Offset = "0x66A9E70", VA = "0x66AAE70")]
	private static bool CheckPostProcessForDepth(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x66AA650", Offset = "0x66A9650", VA = "0x66AA650")]
	private static bool CheckPostProcessForDepth()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x66A0EE0", Offset = "0x669FEE0", VA = "0x66A0EE0")]
	private static void SetSupportedRenderingFeatures(UniversalRenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x66A4C10", Offset = "0x66A3C10", VA = "0x66A4C10")]
	private static ScriptableRenderer GetRenderer(Camera camera, UniversalAdditionalCameraData additionalCameraData)
	{
		return null;
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x66AAEF0", Offset = "0x66A9EF0", VA = "0x66AAEF0")]
	internal static void InitializeScaledDimensions(Camera camera, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x66A4D80", Offset = "0x66A3D80", VA = "0x66A4D80")]
	private static UniversalCameraData CreateCameraData(ContextContainer frameData, Camera camera, UniversalAdditionalCameraData additionalCameraData)
	{
		return null;
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x66AAF60", Offset = "0x66A9F60", VA = "0x66AAF60")]
	private static void InitializeStackedCameraData(Camera baseCamera, UniversalAdditionalCameraData baseAdditionalCameraData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x66A55C0", Offset = "0x66A45C0", VA = "0x66A55C0")]
	private static void InitializeAdditionalCameraData(Camera camera, UniversalAdditionalCameraData additionalCameraData, bool resolveFinalTarget, bool isLastBaseCamera, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x66A9820", Offset = "0x66A8820", VA = "0x66A9820")]
	private static UniversalRenderingData CreateRenderingData(ContextContainer frameData, UniversalRenderPipelineAsset settings, CommandBuffer cmd, RenderingMode? renderingMode, ScriptableRenderer renderer)
	{
		return null;
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x66A85F0", Offset = "0x66A75F0", VA = "0x66A85F0")]
	private static UniversalShadowData CreateShadowData(ContextContainer frameData, UniversalRenderPipelineAsset urpAsset, RenderingMode? renderingMode)
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x66A9960", Offset = "0x66A8960", VA = "0x66A9960")]
	private static CullContextData CreateCullContextData(ContextContainer frameData, ScriptableRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x66AC090", Offset = "0x66AB090", VA = "0x66AC090")]
	private static Vector3 GetMainLightCascadeSplit(int mainLightShadowCascadesCount, UniversalRenderPipelineAsset urpAsset)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x66AA390", Offset = "0x66A9390", VA = "0x66AA390")]
	private static void InitializeMainLightShadowResolution(UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x66A9740", Offset = "0x66A8740", VA = "0x66A9740")]
	private static UniversalPostProcessingData CreatePostProcessingData(ContextContainer frameData, UniversalRenderPipelineAsset settings)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x66A82B0", Offset = "0x66A72B0", VA = "0x66A82B0")]
	private static UniversalResourceData CreateUniversalResourceData(ContextContainer frameData)
	{
		return null;
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x66A82F0", Offset = "0x66A72F0", VA = "0x66A82F0")]
	private static UniversalLightData CreateLightData(ContextContainer frameData, UniversalRenderPipelineAsset settings, NativeArray<VisibleLight> visibleLights, RenderingMode? renderingMode)
	{
		return null;
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x66ABE30", Offset = "0x66AAE30", VA = "0x66ABE30")]
	private static void ApplyTaaRenderingDebugOverrides(ref TemporalAA.Settings taaSettings)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x66ABCD0", Offset = "0x66AACD0", VA = "0x66ABCD0")]
	private static void UpdateTemporalAAData(UniversalCameraData cameraData, UniversalAdditionalCameraData additionalCameraData)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x66A8170", Offset = "0x66A7170", VA = "0x66A8170")]
	private static void UpdateTemporalAATargets(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x66AA730", Offset = "0x66A9730", VA = "0x66AA730")]
	private static void UpdateCameraStereoMatrices(Camera camera, XRPass xr)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x66ABED0", Offset = "0x66AAED0", VA = "0x66ABED0")]
	private static PerObjectData GetPerObjectLightFlags(UniversalLightData universalLightData, UniversalRenderPipelineAsset settings, RenderingMode? renderingMode)
	{
		return default(PerObjectData);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x66AC240", Offset = "0x66AB240", VA = "0x66AC240")]
	private static int GetBrightestDirectionalLightIndex(UniversalRenderPipelineAsset settings, NativeArray<VisibleLight> visibleLights)
	{
		return default(int);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x66AC100", Offset = "0x66AB100", VA = "0x66AC100")]
	private static int GetMainLightIndex(UniversalRenderPipelineAsset settings, NativeArray<VisibleLight> visibleLights)
	{
		return default(int);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x66A2370", Offset = "0x66A1370", VA = "0x66A2370")]
	private void SetupPerFrameShaderConstants()
	{
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x66A7D10", Offset = "0x66A6D10", VA = "0x66A7D10")]
	private static void SetupPerCameraShaderConstants(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x66A99D0", Offset = "0x66A89D0", VA = "0x66A99D0")]
	private static void CheckAndApplyDebugSettings(ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x66ABAE0", Offset = "0x66AAAE0", VA = "0x66ABAE0")]
	private static ImageUpscalingFilter ResolveUpscalingFilterSelection(Vector2 imageSize, float renderScale, UpscalingFilterSelection selection, bool enableRenderGraph)
	{
		return default(ImageUpscalingFilter);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x66A20C0", Offset = "0x66A10C0", VA = "0x66A20C0")]
	internal static bool HDROutputForMainDisplayIsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x66AC400", Offset = "0x66AB400", VA = "0x66AC400")]
	internal static bool HDROutputForAnyDisplayIsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x66A1C40", Offset = "0x66A0C40", VA = "0x66A1C40")]
	private void SetHDRState(List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x66AC4A0", Offset = "0x66AB4A0", VA = "0x66AC4A0")]
	internal static void GetHDROutputLuminanceParameters(HDROutputUtils.HDRDisplayInformation hdrDisplayInformation, ColorGamut hdrDisplayColorGamut, Tonemapping tonemapping, out Vector4 hdrOutputParameters)
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x66AC5C0", Offset = "0x66AB5C0", VA = "0x66AC5C0")]
	internal static void GetHDROutputGradingParameters(Tonemapping tonemapping, out Vector4 hdrOutputParameters)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x66A6190", Offset = "0x66A5190", VA = "0x66A6190")]
	private static void ApplyAdaptivePerformance(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x66A9D90", Offset = "0x66A8D90", VA = "0x66A9D90")]
	private static void ApplyAdaptivePerformance(ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x66AA4B0", Offset = "0x66A94B0", VA = "0x66AA4B0")]
	private static AdditionalLightsShadowAtlasLayout BuildAdditionalLightsShadowAtlasLayout(UniversalLightData lightData, UniversalShadowData shadowData, UniversalCameraData cameraData)
	{
		return default(AdditionalLightsShadowAtlasLayout);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x66A2020", Offset = "0x66A1020", VA = "0x66A2020")]
	private static void AdjustUIOverlayOwnership(int cameraCount)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x66A2240", Offset = "0x66A1240", VA = "0x66A2240")]
	private static void SetupScreenMSAASamplesState(int cameraCount)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x66A2940", Offset = "0x66A1940", VA = "0x66A2940")]
	public static bool IsGameCamera(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x66A27C0", Offset = "0x66A17C0", VA = "0x66A27C0")]
	private void SortCameras(List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x66A2830", Offset = "0x66A1830", VA = "0x66A2830")]
	private int GetLastBaseCameraIndex(List<Camera> cameras)
	{
		return default(int);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x66AC3A0", Offset = "0x66AB3A0", VA = "0x66AC3A0")]
	internal static GraphicsFormat MakeRenderTextureGraphicsFormat(bool isHdrEnabled, HDRColorBufferPrecision requestHDRColorBufferPrecision, bool needsAlpha)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x66AC680", Offset = "0x66AB680", VA = "0x66AC680")]
	internal static GraphicsFormat MakeUnormRenderTextureGraphicsFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x66AB7A0", Offset = "0x66AA7A0", VA = "0x66AB7A0")]
	internal static RenderTextureDescriptor CreateRenderTextureDescriptor(Camera camera, UniversalCameraData cameraData, bool isHdrEnabled, HDRColorBufferPrecision requestHDRColorBufferPrecision, int msaaSamples, bool needsAlpha, bool requiresOpaqueTexture)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x66AC6B0", Offset = "0x66AB6B0", VA = "0x66AC6B0")]
	public static void GetLightAttenuationAndSpotDirection(LightType lightType, float lightRange, Matrix4x4 lightLocalToWorldMatrix, float spotAngle, float? innerSpotAngle, out Vector4 lightAttenuation, out Vector4 lightSpotDir)
	{
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x66AC800", Offset = "0x66AB800", VA = "0x66AC800")]
	internal static void GetPunctualLightDistanceAttenuation(float lightRange, ref Vector4 lightAttenuation)
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x66AC870", Offset = "0x66AB870", VA = "0x66AC870")]
	internal static void GetSpotAngleAttenuation(float spotAngle, float? innerSpotAngle, ref Vector4 lightAttenuation)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x66AC840", Offset = "0x66AB840", VA = "0x66AC840")]
	internal static void GetSpotDirection(ref Matrix4x4 lightLocalToWorldMatrix, out Vector4 lightSpotDir)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x66AC9F0", Offset = "0x66AB9F0", VA = "0x66AC9F0")]
	public static void InitializeLightConstants_Common(NativeArray<VisibleLight> lights, int lightIndex, out Vector4 lightPos, out Vector4 lightColor, out Vector4 lightAttenuation, out Vector4 lightSpotDir, out Vector4 lightOcclusionProbeChannel)
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x66AA1C0", Offset = "0x66A91C0", VA = "0x66AA1C0")]
	private static void RecordAndExecuteRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context, ScriptableRenderer renderer, CommandBuffer cmd, Camera camera, RenderTextureUVOriginStrategy uvOriginStrategy)
	{
	}
}
