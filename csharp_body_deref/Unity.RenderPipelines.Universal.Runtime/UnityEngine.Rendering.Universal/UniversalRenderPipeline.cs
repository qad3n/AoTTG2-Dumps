// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipeline
// Update status: NEW in this game update
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
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2CB7040", Offset = "0x2CB5640", VA = "0x182CB7040")]
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
		[Address(RVA = "0x2CB74E0", Offset = "0x2CB5AE0", VA = "0x182CB74E0")]
		public CameraRenderingScope(ScriptableRenderContext context, Camera camera)
		{
		}

		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x2CB7340", Offset = "0x2CB5940", VA = "0x182CB7340", Slot = "4")]
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
		[Address(RVA = "0x2CB9D30", Offset = "0x2CB8330", VA = "0x182CB9D30")]
		public ContextRenderingScope(ScriptableRenderContext context, List<Camera> cameras)
		{
		}

		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x2CB9B90", Offset = "0x2CB8190", VA = "0x182CB9B90", Slot = "4")]
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
		[Address(RVA = "0x2CC8AF0", Offset = "0x2CC70F0", VA = "0x182CC8AF0")]
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
		[Address(RVA = "0x20B9980", Offset = "0x20B7F80", VA = "0x1820B9980")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000267")]
	public static float minRenderScale
	{
		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x21BC890", Offset = "0x21BAE90", VA = "0x1821BC890")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000268")]
	public static float maxRenderScale
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x2161410", Offset = "0x215FA10", VA = "0x182161410")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000269")]
	public static int maxNumIterationsEnclosingSphere
	{
		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x2168BB0", Offset = "0x21671B0", VA = "0x182168BB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026A")]
	public static int maxPerObjectLights
	{
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026B")]
	public static int maxVisibleAdditionalLights
	{
		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x2CB11F0", Offset = "0x2CAF7F0", VA = "0x182CB11F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026C")]
	internal static int lightsPerTile
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x2CB1140", Offset = "0x2CAF740", VA = "0x182CB1140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026D")]
	internal static int maxZBinWords
	{
		[Token(Token = "0x6000A21")]
		[Address(RVA = "0x868140", Offset = "0x866740", VA = "0x180868140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026E")]
	internal static int maxTileWords
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x2CB1190", Offset = "0x2CAF790", VA = "0x182CB1190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026F")]
	internal static int maxVisibleReflectionProbes
	{
		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x2CB12C0", Offset = "0x2CAF8C0", VA = "0x182CB12C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	internal UniversalRenderPipelineRuntimeTextures runtimeTextures
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000271")]
	internal static RenderTextureUVOriginStrategy renderTextureUVOriginStrategy
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x2CB1340", Offset = "0x2CAF940", VA = "0x182CB1340")]
		[CompilerGenerated]
		private get
		{
			return default(RenderTextureUVOriginStrategy);
		}
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x2CB1440", Offset = "0x2CAFA40", VA = "0x182CB1440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000272")]
	public override RenderPipelineGlobalSettings defaultSettings
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000273")]
	internal static bool canOptimizeScreenMSAASamples
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x2CB10F0", Offset = "0x2CAF6F0", VA = "0x182CB10F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x2CB13E0", Offset = "0x2CAF9E0", VA = "0x182CB13E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000274")]
	internal static int startFrameScreenMSAASamples
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x2CB1390", Offset = "0x2CAF990", VA = "0x182CB1390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x2CB14A0", Offset = "0x2CAFAA0", VA = "0x182CB14A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000275")]
	public static UniversalRenderPipelineAsset asset
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x2CB1050", Offset = "0x2CAF650", VA = "0x182CB1050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x2CAF870", Offset = "0x2CADE70", VA = "0x182CAF870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x2CB0750", Offset = "0x2CAED50", VA = "0x182CB0750")]
	public UniversalRenderPipeline(UniversalRenderPipelineAsset asset)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x2CA7DD0", Offset = "0x2CA63D0", VA = "0x182CA7DD0", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x2CA7D20", Offset = "0x2CA6320", VA = "0x182CA7D20")]
	private void DisposeAdditionalCameraData()
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x2CAE130", Offset = "0x2CAC730", VA = "0x182CAE130", Slot = "7")]
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
	[Address(RVA = "0x2CAE0D0", Offset = "0x2CAC6D0", VA = "0x182CAE0D0")]
	[Obsolete("RenderSingleCamera is obsolete, please use RenderPipeline.SubmitRenderRequest with UniversalRenderer.SingleCameraRequest as RequestData type. #from(2023.1)")]
	public static void RenderSingleCamera(ScriptableRenderContext context, Camera camera)
	{
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x2CAC6A0", Offset = "0x2CAACA0", VA = "0x182CAC6A0")]
	internal static void RenderSingleCameraInternal(ScriptableRenderContext context, Camera camera, bool isLastBaseCamera = true)
	{
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x2CAC780", Offset = "0x2CAAD80", VA = "0x182CAC780")]
	internal static void RenderSingleCameraInternal(ScriptableRenderContext context, Camera camera, ref UniversalAdditionalCameraData additionalCameraData, bool isLastBaseCamera = true)
	{
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x2CAF890", Offset = "0x2CADE90", VA = "0x182CAF890")]
	private static bool TryGetCullingParameters(UniversalCameraData cameraData, out ScriptableCullingParameters cullingParams)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x2CACC50", Offset = "0x2CAB250", VA = "0x182CACC50")]
	private static void RenderSingleCamera(ScriptableRenderContext context, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x2CA69F0", Offset = "0x2CA4FF0", VA = "0x182CA69F0")]
	private static void CreateShadowAtlasAndCullShadowCasters(UniversalLightData lightData, UniversalShadowData shadowData, UniversalCameraData cameraData, ref CullingResults cullResults, ref ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x2CAB160", Offset = "0x2CA9760", VA = "0x182CAB160")]
	private static void RenderCameraStack(ScriptableRenderContext context, Camera baseCamera, bool isLastBaseCamera)
	{
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x2CAFA50", Offset = "0x2CAE050", VA = "0x182CAFA50")]
	private static void UpdateCameraData(UniversalCameraData baseCameraData, in XRPass xr)
	{
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x2CB0200", Offset = "0x2CAE800", VA = "0x182CB0200")]
	private static void UpdateVolumeFramework(Camera camera, UniversalAdditionalCameraData additionalCameraData)
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x2CA59D0", Offset = "0x2CA3FD0", VA = "0x182CA59D0")]
	private static bool CheckPostProcessForDepth(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x2CA5A60", Offset = "0x2CA4060", VA = "0x182CA5A60")]
	private static bool CheckPostProcessForDepth()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x2CAEE40", Offset = "0x2CAD440", VA = "0x182CAEE40")]
	private static void SetSupportedRenderingFeatures(UniversalRenderPipelineAsset pipelineAsset)
	{
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x2CA8D80", Offset = "0x2CA7380", VA = "0x182CA8D80")]
	private static ScriptableRenderer GetRenderer(Camera camera, UniversalAdditionalCameraData additionalCameraData)
	{
		return null;
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x2CAA690", Offset = "0x2CA8C90", VA = "0x182CAA690")]
	internal static void InitializeScaledDimensions(Camera camera, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x2CA5B30", Offset = "0x2CA4130", VA = "0x182CA5B30")]
	private static UniversalCameraData CreateCameraData(ContextContainer frameData, Camera camera, UniversalAdditionalCameraData additionalCameraData)
	{
		return null;
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x2CAA720", Offset = "0x2CA8D20", VA = "0x182CAA720")]
	private static void InitializeStackedCameraData(Camera baseCamera, UniversalAdditionalCameraData baseAdditionalCameraData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x2CA9180", Offset = "0x2CA7780", VA = "0x182CA9180")]
	private static void InitializeAdditionalCameraData(Camera camera, UniversalAdditionalCameraData additionalCameraData, bool resolveFinalTarget, bool isLastBaseCamera, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x2CA68A0", Offset = "0x2CA4EA0", VA = "0x182CA68A0")]
	private static UniversalRenderingData CreateRenderingData(ContextContainer frameData, UniversalRenderPipelineAsset settings, CommandBuffer cmd, RenderingMode? renderingMode, ScriptableRenderer renderer)
	{
		return null;
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x2CA6CF0", Offset = "0x2CA52F0", VA = "0x182CA6CF0")]
	private static UniversalShadowData CreateShadowData(ContextContainer frameData, UniversalRenderPipelineAsset urpAsset, RenderingMode? renderingMode)
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x2CA61A0", Offset = "0x2CA47A0", VA = "0x182CA61A0")]
	private static CullContextData CreateCullContextData(ContextContainer frameData, ScriptableRenderContext context)
	{
		return null;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x2CA8880", Offset = "0x2CA6E80", VA = "0x182CA8880")]
	private static Vector3 GetMainLightCascadeSplit(int mainLightShadowCascadesCount, UniversalRenderPipelineAsset urpAsset)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x2CAA570", Offset = "0x2CA8B70", VA = "0x182CAA570")]
	private static void InitializeMainLightShadowResolution(UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x2CA64E0", Offset = "0x2CA4AE0", VA = "0x182CA64E0")]
	private static UniversalPostProcessingData CreatePostProcessingData(ContextContainer frameData, UniversalRenderPipelineAsset settings)
	{
		return null;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x2CA7CD0", Offset = "0x2CA62D0", VA = "0x182CA7CD0")]
	private static UniversalResourceData CreateUniversalResourceData(ContextContainer frameData)
	{
		return null;
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x2CA6210", Offset = "0x2CA4810", VA = "0x182CA6210")]
	private static UniversalLightData CreateLightData(ContextContainer frameData, UniversalRenderPipelineAsset settings, NativeArray<VisibleLight> visibleLights, RenderingMode? renderingMode)
	{
		return null;
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x2CA55B0", Offset = "0x2CA3BB0", VA = "0x182CA55B0")]
	private static void ApplyTaaRenderingDebugOverrides(ref TemporalAA.Settings taaSettings)
	{
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x2CAFF70", Offset = "0x2CAE570", VA = "0x182CAFF70")]
	private static void UpdateTemporalAAData(UniversalCameraData cameraData, UniversalAdditionalCameraData additionalCameraData)
	{
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x2CB00C0", Offset = "0x2CAE6C0", VA = "0x182CB00C0")]
	private static void UpdateTemporalAATargets(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x2CAFDC0", Offset = "0x2CAE3C0", VA = "0x182CAFDC0")]
	private static void UpdateCameraStereoMatrices(Camera camera, XRPass xr)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x2CA8BB0", Offset = "0x2CA71B0", VA = "0x182CA8BB0")]
	private static PerObjectData GetPerObjectLightFlags(UniversalLightData universalLightData, UniversalRenderPipelineAsset settings, RenderingMode? renderingMode)
	{
		return default(PerObjectData);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x2CA82B0", Offset = "0x2CA68B0", VA = "0x182CA82B0")]
	private static int GetBrightestDirectionalLightIndex(UniversalRenderPipelineAsset settings, NativeArray<VisibleLight> visibleLights)
	{
		return default(int);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x2CA8920", Offset = "0x2CA6F20", VA = "0x182CA8920")]
	private static int GetMainLightIndex(UniversalRenderPipelineAsset settings, NativeArray<VisibleLight> visibleLights)
	{
		return default(int);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x2CAF410", Offset = "0x2CADA10", VA = "0x182CAF410")]
	private void SetupPerFrameShaderConstants()
	{
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x2CAEF30", Offset = "0x2CAD530", VA = "0x182CAEF30")]
	private static void SetupPerCameraShaderConstants(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x2CA57A0", Offset = "0x2CA3DA0", VA = "0x182CA57A0")]
	private static void CheckAndApplyDebugSettings(ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x2CAEA00", Offset = "0x2CAD000", VA = "0x182CAEA00")]
	private static ImageUpscalingFilter ResolveUpscalingFilterSelection(Vector2 imageSize, float renderScale, UpscalingFilterSelection selection, bool enableRenderGraph)
	{
		return default(ImageUpscalingFilter);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x2CA90A0", Offset = "0x2CA76A0", VA = "0x182CA90A0")]
	internal static bool HDROutputForMainDisplayIsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x2CA9000", Offset = "0x2CA7600", VA = "0x182CA9000")]
	internal static bool HDROutputForAnyDisplayIsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x2CAEBD0", Offset = "0x2CAD1D0", VA = "0x182CAEBD0")]
	private void SetHDRState(List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x2CA84F0", Offset = "0x2CA6AF0", VA = "0x182CA84F0")]
	internal static void GetHDROutputLuminanceParameters(HDROutputUtils.HDRDisplayInformation hdrDisplayInformation, ColorGamut hdrDisplayColorGamut, Tonemapping tonemapping, out Vector4 hdrOutputParameters)
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x2CA8410", Offset = "0x2CA6A10", VA = "0x182CA8410")]
	internal static void GetHDROutputGradingParameters(Tonemapping tonemapping, out Vector4 hdrOutputParameters)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x2CA53A0", Offset = "0x2CA39A0", VA = "0x182CA53A0")]
	private static void ApplyAdaptivePerformance(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x2CA50F0", Offset = "0x2CA36F0", VA = "0x182CA50F0")]
	private static void ApplyAdaptivePerformance(ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x2CA5650", Offset = "0x2CA3C50", VA = "0x182CA5650")]
	private static AdditionalLightsShadowAtlasLayout BuildAdditionalLightsShadowAtlasLayout(UniversalLightData lightData, UniversalShadowData shadowData, UniversalCameraData cameraData)
	{
		return default(AdditionalLightsShadowAtlasLayout);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x2CA5040", Offset = "0x2CA3640", VA = "0x182CA5040")]
	private static void AdjustUIOverlayOwnership(int cameraCount)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x2CAF710", Offset = "0x2CADD10", VA = "0x182CAF710")]
	private static void SetupScreenMSAASamplesState(int cameraCount)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x2CAAE70", Offset = "0x2CA9470", VA = "0x182CAAE70")]
	public static bool IsGameCamera(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x2CAF800", Offset = "0x2CADE00", VA = "0x182CAF800")]
	private void SortCameras(List<Camera> cameras)
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x2CA8610", Offset = "0x2CA6C10", VA = "0x182CA8610")]
	private int GetLastBaseCameraIndex(List<Camera> cameras)
	{
		return default(int);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x2CAAF40", Offset = "0x2CA9540", VA = "0x182CAAF40")]
	internal static GraphicsFormat MakeRenderTextureGraphicsFormat(bool isHdrEnabled, HDRColorBufferPrecision requestHDRColorBufferPrecision, bool needsAlpha)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x2CAAFB0", Offset = "0x2CA95B0", VA = "0x182CAAFB0")]
	internal static GraphicsFormat MakeUnormRenderTextureGraphicsFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x2CA65D0", Offset = "0x2CA4BD0", VA = "0x182CA65D0")]
	internal static RenderTextureDescriptor CreateRenderTextureDescriptor(Camera camera, UniversalCameraData cameraData, bool isHdrEnabled, HDRColorBufferPrecision requestHDRColorBufferPrecision, int msaaSamples, bool needsAlpha, bool requiresOpaqueTexture)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x2CA8710", Offset = "0x2CA6D10", VA = "0x182CA8710")]
	public static void GetLightAttenuationAndSpotDirection(LightType lightType, float lightRange, Matrix4x4 lightLocalToWorldMatrix, float spotAngle, float? innerSpotAngle, out Vector4 lightAttenuation, out Vector4 lightSpotDir)
	{
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x2CA8D30", Offset = "0x2CA7330", VA = "0x182CA8D30")]
	internal static void GetPunctualLightDistanceAttenuation(float lightRange, ref Vector4 lightAttenuation)
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x2CA8E50", Offset = "0x2CA7450", VA = "0x182CA8E50")]
	internal static void GetSpotAngleAttenuation(float spotAngle, float? innerSpotAngle, ref Vector4 lightAttenuation)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x2CA8FC0", Offset = "0x2CA75C0", VA = "0x182CA8FC0")]
	internal static void GetSpotDirection(ref Matrix4x4 lightLocalToWorldMatrix, out Vector4 lightSpotDir)
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x2CAA0D0", Offset = "0x2CA86D0", VA = "0x182CAA0D0")]
	public static void InitializeLightConstants_Common(NativeArray<VisibleLight> lights, int lightIndex, out Vector4 lightPos, out Vector4 lightColor, out Vector4 lightAttenuation, out Vector4 lightSpotDir, out Vector4 lightOcclusionProbeChannel)
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x2CAAFE0", Offset = "0x2CA95E0", VA = "0x182CAAFE0")]
	private static void RecordAndExecuteRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context, ScriptableRenderer renderer, CommandBuffer cmd, Camera camera, RenderTextureUVOriginStrategy uvOriginStrategy)
	{
	}
}
