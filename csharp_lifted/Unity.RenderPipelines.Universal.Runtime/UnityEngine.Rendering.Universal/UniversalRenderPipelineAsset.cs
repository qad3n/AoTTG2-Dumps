// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000014")]
[ExcludeFromPreset]
public class UniversalRenderPipelineAsset : RenderPipelineAsset<UniversalRenderPipeline>, ISerializationCallbackReceiver, IProbeVolumeEnabledRenderPipeline, IGPUResidentRenderPipeline, IRenderGraphEnabledRenderPipeline, ISTPEnabledRenderPipeline
{
	[Token(Token = "0x2000015")]
	private static class Strings
	{
		[Token(Token = "0x40000B6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly string notURPRenderer;

		[Token(Token = "0x40000B7")]
		[FieldOffset(Offset = "0x8")]
		public static readonly string renderingModeIncompatible;
	}

	[Serializable]
	[Token(Token = "0x2000016")]
	[ReloadGroup]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeTextures on GraphicsSettings. #from(2023.3)")]
	public sealed class TextureResources
	{
		[Token(Token = "0x40000B8")]
		[FieldOffset(Offset = "0x10")]
		[Reload("Textures/BlueNoise64/L/LDR_LLL1_0.png", ReloadAttribute.Package.Root)]
		public Texture2D blueNoise64LTex;

		[Token(Token = "0x40000B9")]
		[FieldOffset(Offset = "0x18")]
		[Reload("Textures/BayerMatrix.png", ReloadAttribute.Package.Root)]
		public Texture2D bayerMatrixTex;

		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x65F9E70", Offset = "0x65F8E70", VA = "0x65F9E70")]
		public bool NeedsReload()
		{
			return default(bool);
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x65F9980", Offset = "0x65F8980", VA = "0x65F9980")]
		public TextureResources()
		{
		}
	}

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x20")]
	private Shader m_DefaultShader;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x28")]
	private ScriptableRenderer[] m_Renderers;

	[Token(Token = "0x4000058")]
	private const int k_LastVersion = 13;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private int k_AssetVersion;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private int k_AssetPreviousVersion;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private RendererType m_RendererType;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x40")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("Use m_RendererDataList instead. #from(2023.1)")]
	[SerializeField]
	internal ScriptableRendererData m_RendererData;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal ScriptableRendererData[] m_RendererDataList;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	internal int m_DefaultRendererIndex;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private bool m_RequireDepthTexture;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x55")]
	[SerializeField]
	private bool m_RequireOpaqueTexture;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Downsampling m_OpaqueDownsampling;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool m_SupportsTerrainHoles;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x5D")]
	[SerializeField]
	private bool m_SupportsHDR;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private HDRColorBufferPrecision m_HDRColorBufferPrecision;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private MsaaQuality m_MSAA;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private float m_RenderScale;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private UpscalingFilterSelection m_UpscalingFilter;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private bool m_FsrOverrideSharpness;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private float m_FsrSharpness;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private bool m_EnableLODCrossFade;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private LODCrossFadeDitheringType m_LODCrossFadeDitheringType;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private ShEvalMode m_ShEvalMode;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x84")]
	[SerializeField]
	private LightProbeSystem m_LightProbeSystem;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private ProbeVolumeTextureMemoryBudget m_ProbeVolumeMemoryBudget;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x8C")]
	[SerializeField]
	private ProbeVolumeBlendingTextureMemoryBudget m_ProbeVolumeBlendingMemoryBudget;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	[FormerlySerializedAs("m_SupportProbeVolumeStreaming")]
	private bool m_SupportProbeVolumeGPUStreaming;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x91")]
	[SerializeField]
	private bool m_SupportProbeVolumeDiskStreaming;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x92")]
	[SerializeField]
	private bool m_SupportProbeVolumeScenarios;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x93")]
	[SerializeField]
	private bool m_SupportProbeVolumeScenarioBlending;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x94")]
	[SerializeField]
	private ProbeVolumeSHBands m_ProbeVolumeSHBands;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private LightRenderingMode m_MainLightRenderingMode;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x9C")]
	[SerializeField]
	private bool m_MainLightShadowsSupported;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private ShadowResolution m_MainLightShadowmapResolution;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0xA4")]
	[SerializeField]
	private LightRenderingMode m_AdditionalLightsRenderingMode;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private int m_AdditionalLightsPerObjectLimit;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0xAC")]
	[SerializeField]
	private bool m_AdditionalLightShadowsSupported;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private ShadowResolution m_AdditionalLightsShadowmapResolution;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0xB4")]
	[SerializeField]
	private int m_AdditionalLightsShadowResolutionTierLow;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private int m_AdditionalLightsShadowResolutionTierMedium;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0xBC")]
	[SerializeField]
	private int m_AdditionalLightsShadowResolutionTierHigh;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private bool m_ReflectionProbeBlending;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0xC1")]
	[SerializeField]
	private bool m_ReflectionProbeBoxProjection;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0xC2")]
	[SerializeField]
	private bool m_ReflectionProbeAtlas;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0xC4")]
	[SerializeField]
	private float m_ShadowDistance;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private int m_ShadowCascadeCount;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0xCC")]
	[SerializeField]
	private float m_Cascade2Split;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private Vector2 m_Cascade3Split;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private Vector3 m_Cascade4Split;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0xE4")]
	[SerializeField]
	private float m_CascadeBorder;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private float m_ShadowDepthBias;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0xEC")]
	[SerializeField]
	private float m_ShadowNormalBias;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private bool m_SoftShadowsSupported;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0xF1")]
	[SerializeField]
	private bool m_ConservativeEnclosingSphere;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0xF4")]
	[SerializeField]
	private int m_NumIterationsEnclosingSphere;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private SoftShadowQuality m_SoftShadowQuality;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0xFC")]
	[SerializeField]
	private LightCookieResolution m_AdditionalLightsCookieResolution;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private LightCookieFormat m_AdditionalLightsCookieFormat;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x104")]
	[SerializeField]
	private bool m_UseSRPBatcher;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x105")]
	[SerializeField]
	private bool m_SupportsDynamicBatching;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x106")]
	[SerializeField]
	private bool m_MixedLightingSupported;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x107")]
	[SerializeField]
	private bool m_SupportsLightCookies;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private bool m_SupportsLightLayers;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x10C")]
	[SerializeField]
	[Obsolete("#from(2022.1) #breakingFrom(2023.1)", true)]
	private PipelineDebugLevel m_DebugLevel;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private StoreActionsOptimization m_StoreActionsOptimization;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x114")]
	[SerializeField]
	private bool m_UseAdaptivePerformance;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	private ColorGradingMode m_ColorGradingMode;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x11C")]
	[SerializeField]
	private int m_ColorGradingLutSize;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	private bool m_AllowPostProcessAlphaOutput;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x121")]
	[SerializeField]
	private bool m_UseFastSRGBLinearConversion;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x122")]
	[SerializeField]
	private bool m_SupportDataDrivenLensFlare;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x123")]
	[SerializeField]
	private bool m_SupportScreenSpaceLensFlare;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x124")]
	[FormerlySerializedAs("m_MacroBatcherMode")]
	[SerializeField]
	private GPUResidentDrawerMode m_GPUResidentDrawerMode;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	private float m_SmallMeshScreenPercentage;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x12C")]
	[SerializeField]
	private bool m_GPUResidentDrawerEnableOcclusionCullingInCameras;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	private ShadowQuality m_ShadowType;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x134")]
	[SerializeField]
	private bool m_LocalShadowsSupported;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	private ShadowResolution m_LocalShadowsAtlasResolution;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x13C")]
	[SerializeField]
	private int m_MaxPixelLights;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	private ShadowResolution m_ShadowAtlasResolution;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x144")]
	[SerializeField]
	private VolumeFrameworkUpdateMode m_VolumeFrameworkUpdateMode;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	private VolumeProfile m_VolumeProfile;

	[Token(Token = "0x40000A8")]
	public const int k_MinLutSize = 16;

	[Token(Token = "0x40000A9")]
	public const int k_MaxLutSize = 65;

	[Token(Token = "0x40000AA")]
	internal const int k_ShadowCascadeMinCount = 1;

	[Token(Token = "0x40000AB")]
	internal const int k_ShadowCascadeMaxCount = 4;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int AdditionalLightsDefaultShadowResolutionTierLow;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int AdditionalLightsDefaultShadowResolutionTierMedium;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly int AdditionalLightsDefaultShadowResolutionTierHigh;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x10")]
	private static string[] s_Names;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x18")]
	private static int[] s_Values;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x20")]
	private static GraphicsFormat[][] s_LightCookieFormatList;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x150")]
	[SerializeField]
	[Obsolete("Kept for migration. #from(2023.3")]
	internal ProbeVolumeSceneData apvScenesData;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x158")]
	[SerializeField]
	private int m_ShaderVariantLogLevel;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x15C")]
	[Obsolete("This is obsolete, please use shadowCascadeCount instead. #from(2021.1)")]
	[SerializeField]
	private ShadowCascadesOption m_ShadowCascades;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x160")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeTextures on GraphicsSettings. #from(2023.3)")]
	[SerializeField]
	private TextureResources m_Textures;

	[Token(Token = "0x1700000B")]
	public override Material defaultMaterial
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x65F6F10", Offset = "0x65F5F10", VA = "0x65F6F10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public override Material defaultParticleMaterial
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x65F6F20", Offset = "0x65F5F20", VA = "0x65F6F20", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public override Material defaultLineMaterial
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x65F6F30", Offset = "0x65F5F30", VA = "0x65F6F30", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Material defaultTerrainMaterial
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x65F6F40", Offset = "0x65F5F40", VA = "0x65F6F40", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public override Material default2DMaterial
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x65F6F50", Offset = "0x65F5F50", VA = "0x65F6F50", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public override Material default2DMaskMaterial
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x65F6F60", Offset = "0x65F5F60", VA = "0x65F6F60", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	public Material decalMaterial
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x65F6F70", Offset = "0x65F5F70", VA = "0x65F6F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public override Shader defaultShader
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x65F6F80", Offset = "0x65F5F80", VA = "0x65F6F80", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public override Shader terrainDetailLitShader
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x65F7030", Offset = "0x65F6030", VA = "0x65F7030", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public override Shader terrainDetailGrassShader
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x65F70B0", Offset = "0x65F60B0", VA = "0x65F70B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public override Shader terrainDetailGrassBillboardShader
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x65F7130", Offset = "0x65F6130", VA = "0x65F7130", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	private GPUResidentDrawerSettings UnityEngine_002ERendering_002EIGPUResidentRenderPipeline_002EgpuResidentDrawerSettings
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x65F71C0", Offset = "0x65F61C0", VA = "0x65F71C0", Slot = "38")]
		get
		{
			return default(GPUResidentDrawerSettings);
		}
	}

	[Token(Token = "0x17000017")]
	public ReadOnlySpan<ScriptableRendererData> rendererDataList
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x65F72A0", Offset = "0x65F62A0", VA = "0x65F72A0")]
		get
		{
			return default(ReadOnlySpan<ScriptableRendererData>);
		}
	}

	[Token(Token = "0x17000018")]
	public ReadOnlySpan<ScriptableRenderer> renderers
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x65F72E0", Offset = "0x65F62E0", VA = "0x65F72E0")]
		get
		{
			return default(ReadOnlySpan<ScriptableRenderer>);
		}
	}

	[Token(Token = "0x17000019")]
	public bool isImmediateModeSupported
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x65F7320", Offset = "0x65F6320", VA = "0x65F7320", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public ScriptableRenderer scriptableRenderer
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x65F7920", Offset = "0x65F6920", VA = "0x65F7920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	internal ScriptableRendererData scriptableRendererData
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x65F7B80", Offset = "0x65F6B80", VA = "0x65F7B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	internal GraphicsFormat additionalLightsCookieFormat
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x65F7F70", Offset = "0x65F6F70", VA = "0x65F7F70")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x1700001D")]
	internal Vector2Int additionalLightsCookieResolution
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x65F81A0", Offset = "0x65F71A0", VA = "0x65F81A0")]
		get
		{
			return default(Vector2Int);
		}
	}

	[Token(Token = "0x1700001E")]
	internal int[] rendererIndexList
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x65F81C0", Offset = "0x65F71C0", VA = "0x65F81C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public bool supportsCameraDepthTexture
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x65F82A0", Offset = "0x65F72A0", VA = "0x65F82A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x65F82B0", Offset = "0x65F72B0", VA = "0x65F82B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool supportsCameraOpaqueTexture
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x65F82C0", Offset = "0x65F72C0", VA = "0x65F82C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x65F82D0", Offset = "0x65F72D0", VA = "0x65F82D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Downsampling opaqueDownsampling
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x65F82E0", Offset = "0x65F72E0", VA = "0x65F82E0")]
		get
		{
			return default(Downsampling);
		}
	}

	[Token(Token = "0x17000022")]
	public bool supportsTerrainHoles
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x65F82F0", Offset = "0x65F72F0", VA = "0x65F82F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public StoreActionsOptimization storeActionsOptimization
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x65F8300", Offset = "0x65F7300", VA = "0x65F8300")]
		get
		{
			return default(StoreActionsOptimization);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x65F8310", Offset = "0x65F7310", VA = "0x65F8310")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public bool supportsHDR
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x65F8320", Offset = "0x65F7320", VA = "0x65F8320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x65F8330", Offset = "0x65F7330", VA = "0x65F8330")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public HDRColorBufferPrecision hdrColorBufferPrecision
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x65F8340", Offset = "0x65F7340", VA = "0x65F8340")]
		get
		{
			return default(HDRColorBufferPrecision);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x65F8350", Offset = "0x65F7350", VA = "0x65F8350")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public int msaaSampleCount
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x65F8360", Offset = "0x65F7360", VA = "0x65F8360")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x65F8370", Offset = "0x65F7370", VA = "0x65F8370")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public float renderScale
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x65F8380", Offset = "0x65F7380", VA = "0x65F8380")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x65F8390", Offset = "0x65F7390", VA = "0x65F8390")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool enableLODCrossFade
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x65F8480", Offset = "0x65F7480", VA = "0x65F8480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public LODCrossFadeDitheringType lodCrossFadeDitheringType
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x65F8490", Offset = "0x65F7490", VA = "0x65F8490")]
		get
		{
			return default(LODCrossFadeDitheringType);
		}
	}

	[Token(Token = "0x1700002A")]
	public UpscalingFilterSelection upscalingFilter
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x65F84A0", Offset = "0x65F74A0", VA = "0x65F84A0")]
		get
		{
			return default(UpscalingFilterSelection);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x65F84B0", Offset = "0x65F74B0", VA = "0x65F84B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public string upscalerName
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x65F84C0", Offset = "0x65F74C0", VA = "0x65F84C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public bool fsrOverrideSharpness
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x65F84E0", Offset = "0x65F74E0", VA = "0x65F84E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x65F84F0", Offset = "0x65F74F0", VA = "0x65F84F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public float fsrSharpness
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x65F8500", Offset = "0x65F7500", VA = "0x65F8500")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x65F8510", Offset = "0x65F7510", VA = "0x65F8510")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public ShEvalMode shEvalMode
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x65F8520", Offset = "0x65F7520", VA = "0x65F8520")]
		get
		{
			return default(ShEvalMode);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x65F8530", Offset = "0x65F7530", VA = "0x65F8530")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public LightProbeSystem lightProbeSystem
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x65F8540", Offset = "0x65F7540", VA = "0x65F8540")]
		get
		{
			return default(LightProbeSystem);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x65F8550", Offset = "0x65F7550", VA = "0x65F8550")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public ProbeVolumeTextureMemoryBudget probeVolumeMemoryBudget
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x65F8560", Offset = "0x65F7560", VA = "0x65F8560")]
		get
		{
			return default(ProbeVolumeTextureMemoryBudget);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x65F8570", Offset = "0x65F7570", VA = "0x65F8570")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public ProbeVolumeBlendingTextureMemoryBudget probeVolumeBlendingMemoryBudget
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x65F8580", Offset = "0x65F7580", VA = "0x65F8580")]
		get
		{
			return default(ProbeVolumeBlendingTextureMemoryBudget);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x65F8590", Offset = "0x65F7590", VA = "0x65F8590")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[Obsolete("This is obsolete, use supportProbeVolumeGPUStreaming instead. #from(2023.3)")]
	public bool supportProbeVolumeStreaming
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x65F85A0", Offset = "0x65F75A0", VA = "0x65F85A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x65F85B0", Offset = "0x65F75B0", VA = "0x65F85B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public bool supportProbeVolumeGPUStreaming
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x65F85C0", Offset = "0x65F75C0", VA = "0x65F85C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x65F85D0", Offset = "0x65F75D0", VA = "0x65F85D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public bool supportProbeVolumeDiskStreaming
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x65F85E0", Offset = "0x65F75E0", VA = "0x65F85E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x65F85F0", Offset = "0x65F75F0", VA = "0x65F85F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool supportProbeVolumeScenarios
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x65F8600", Offset = "0x65F7600", VA = "0x65F8600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x65F8610", Offset = "0x65F7610", VA = "0x65F8610")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool supportProbeVolumeScenarioBlending
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x65F8620", Offset = "0x65F7620", VA = "0x65F8620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x65F8630", Offset = "0x65F7630", VA = "0x65F8630")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public ProbeVolumeSHBands probeVolumeSHBands
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0x65F8640", Offset = "0x65F7640", VA = "0x65F8640")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
		[Token(Token = "0x600007D")]
		[Address(RVA = "0x65F8650", Offset = "0x65F7650", VA = "0x65F8650")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public LightRenderingMode mainLightRenderingMode
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0x65F8660", Offset = "0x65F7660", VA = "0x65F8660")]
		get
		{
			return default(LightRenderingMode);
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0x65F8670", Offset = "0x65F7670", VA = "0x65F8670")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool supportsMainLightShadows
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x65F8680", Offset = "0x65F7680", VA = "0x65F8680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x65F8690", Offset = "0x65F7690", VA = "0x65F8690")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public int mainLightShadowmapResolution
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x65F86A0", Offset = "0x65F76A0", VA = "0x65F86A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x65F86B0", Offset = "0x65F76B0", VA = "0x65F86B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public LightRenderingMode additionalLightsRenderingMode
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x65F86C0", Offset = "0x65F76C0", VA = "0x65F86C0")]
		get
		{
			return default(LightRenderingMode);
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x65F86D0", Offset = "0x65F76D0", VA = "0x65F86D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int maxAdditionalLightsCount
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x65F86E0", Offset = "0x65F76E0", VA = "0x65F86E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x65F86F0", Offset = "0x65F76F0", VA = "0x65F86F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public bool supportsAdditionalLightShadows
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x65F87A0", Offset = "0x65F77A0", VA = "0x65F87A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x65F87B0", Offset = "0x65F77B0", VA = "0x65F87B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public int additionalLightsShadowmapResolution
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x65F87C0", Offset = "0x65F77C0", VA = "0x65F87C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x65F87D0", Offset = "0x65F77D0", VA = "0x65F87D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public int additionalLightsShadowResolutionTierLow
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x65F87E0", Offset = "0x65F77E0", VA = "0x65F87E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x65F87F0", Offset = "0x65F77F0", VA = "0x65F87F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int additionalLightsShadowResolutionTierMedium
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x65F8800", Offset = "0x65F7800", VA = "0x65F8800")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x65F8810", Offset = "0x65F7810", VA = "0x65F8810")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int additionalLightsShadowResolutionTierHigh
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x65F8820", Offset = "0x65F7820", VA = "0x65F8820")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x65F8830", Offset = "0x65F7830", VA = "0x65F8830")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public bool reflectionProbeBlending
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x65F8920", Offset = "0x65F7920", VA = "0x65F8920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x65F8930", Offset = "0x65F7930", VA = "0x65F8930")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool reflectionProbeBoxProjection
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x65F8960", Offset = "0x65F7960", VA = "0x65F8960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x65F8970", Offset = "0x65F7970", VA = "0x65F8970")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool reflectionProbeAtlas
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x65F8980", Offset = "0x65F7980", VA = "0x65F8980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x65F8990", Offset = "0x65F7990", VA = "0x65F8990")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public float shadowDistance
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x65F89D0", Offset = "0x65F79D0", VA = "0x65F89D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x65F89E0", Offset = "0x65F79E0", VA = "0x65F89E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public int shadowCascadeCount
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x65F89F0", Offset = "0x65F79F0", VA = "0x65F89F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x65F8A00", Offset = "0x65F7A00", VA = "0x65F8A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public float cascade2Split
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x65F8AD0", Offset = "0x65F7AD0", VA = "0x65F8AD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x65F8AE0", Offset = "0x65F7AE0", VA = "0x65F8AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public Vector2 cascade3Split
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x65F8AF0", Offset = "0x65F7AF0", VA = "0x65F8AF0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x65F8B00", Offset = "0x65F7B00", VA = "0x65F8B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Vector3 cascade4Split
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x65F8B10", Offset = "0x65F7B10", VA = "0x65F8B10")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x65F8B30", Offset = "0x65F7B30", VA = "0x65F8B30")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public float cascadeBorder
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x65F8B40", Offset = "0x65F7B40", VA = "0x65F8B40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x65F8B50", Offset = "0x65F7B50", VA = "0x65F8B50")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public float shadowDepthBias
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x65F8B60", Offset = "0x65F7B60", VA = "0x65F8B60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x65F8B70", Offset = "0x65F7B70", VA = "0x65F8B70")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public float shadowNormalBias
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x65F8C40", Offset = "0x65F7C40", VA = "0x65F8C40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x65F8C50", Offset = "0x65F7C50", VA = "0x65F8C50")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public bool supportsSoftShadows
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x65F8CC0", Offset = "0x65F7CC0", VA = "0x65F8CC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x65F8CD0", Offset = "0x65F7CD0", VA = "0x65F8CD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	internal SoftShadowQuality softShadowQuality
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x65F8CE0", Offset = "0x65F7CE0", VA = "0x65F8CE0")]
		get
		{
			return default(SoftShadowQuality);
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x65F8CF0", Offset = "0x65F7CF0", VA = "0x65F8CF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public bool supportsDynamicBatching
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x65F8D00", Offset = "0x65F7D00", VA = "0x65F8D00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x65F8D10", Offset = "0x65F7D10", VA = "0x65F8D10")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool supportsMixedLighting
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x65F8D20", Offset = "0x65F7D20", VA = "0x65F8D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public bool supportsLightCookies
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x65F8D30", Offset = "0x65F7D30", VA = "0x65F8D30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000052")]
	[Obsolete("This is obsolete, use useRenderingLayers instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public bool supportsLightLayers
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x65F8D40", Offset = "0x65F7D40", VA = "0x65F8D40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000053")]
	public bool useRenderingLayers
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x65F8D50", Offset = "0x65F7D50", VA = "0x65F8D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000054")]
	public VolumeFrameworkUpdateMode volumeFrameworkUpdateMode
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x65F8D60", Offset = "0x65F7D60", VA = "0x65F8D60")]
		get
		{
			return default(VolumeFrameworkUpdateMode);
		}
	}

	[Token(Token = "0x17000055")]
	public VolumeProfile volumeProfile
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x65F8D70", Offset = "0x65F7D70", VA = "0x65F8D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x65F8D80", Offset = "0x65F7D80", VA = "0x65F8D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[Obsolete("PipelineDebugLevel is deprecated and replaced to use the profiler. Calling debugLevel is not necessary. #from(2022.2) #breakingFrom(2023.1)", true)]
	public PipelineDebugLevel debugLevel
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x65F8DA0", Offset = "0x65F7DA0", VA = "0x65F8DA0")]
		get
		{
			return default(PipelineDebugLevel);
		}
	}

	[Token(Token = "0x17000057")]
	public bool useSRPBatcher
	{
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x65F8DB0", Offset = "0x65F7DB0", VA = "0x65F8DB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x65F8DC0", Offset = "0x65F7DC0", VA = "0x65F8DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	[Obsolete("This has been deprecated, please use GraphicsSettings.GetRenderPipelineSettings<RenderGraphSettings>().enableRenderCompatibilityMode instead. #from(2023.3)")]
	public bool enableRenderGraph
	{
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x65F8DD0", Offset = "0x65F7DD0", VA = "0x65F8DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000059")]
	public ColorGradingMode colorGradingMode
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x65F8E00", Offset = "0x65F7E00", VA = "0x65F8E00")]
		get
		{
			return default(ColorGradingMode);
		}
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x65F8E10", Offset = "0x65F7E10", VA = "0x65F8E10")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public int colorGradingLutSize
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x65F8E20", Offset = "0x65F7E20", VA = "0x65F8E20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x65F8E30", Offset = "0x65F7E30", VA = "0x65F8E30")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool allowPostProcessAlphaOutput
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x65F8E50", Offset = "0x65F7E50", VA = "0x65F8E50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	public bool useFastSRGBLinearConversion
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x65F8E60", Offset = "0x65F7E60", VA = "0x65F8E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005D")]
	public bool supportScreenSpaceLensFlare
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x65F8E70", Offset = "0x65F7E70", VA = "0x65F8E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public bool supportDataDrivenLensFlare
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x65F8E80", Offset = "0x65F7E80", VA = "0x65F8E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public bool useAdaptivePerformance
	{
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x65F8E90", Offset = "0x65F7E90", VA = "0x65F8E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x65F8EA0", Offset = "0x65F7EA0", VA = "0x65F8EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public bool conservativeEnclosingSphere
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x65F8EB0", Offset = "0x65F7EB0", VA = "0x65F8EB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x65F8EC0", Offset = "0x65F7EC0", VA = "0x65F8EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public int numIterationsEnclosingSphere
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x65F8ED0", Offset = "0x65F7ED0", VA = "0x65F8ED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x65F8EE0", Offset = "0x65F7EE0", VA = "0x65F8EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public override string renderPipelineShaderTag
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x65F8EF0", Offset = "0x65F7EF0", VA = "0x65F8EF0", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	protected override bool requiresCompatibleRenderPipelineGlobalSettings
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x65F8F20", Offset = "0x65F7F20", VA = "0x65F8F20", Slot = "29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000064")]
	[Obsolete("This property is obsolete. Use RenderingLayerMask API and Tags & Layers project settings instead. #from(2023.3)")]
	public override string[] renderingLayerMaskNames
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x65F8F30", Offset = "0x65F7F30", VA = "0x65F8F30", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000065")]
	[Obsolete("This property is obsolete. Use RenderingLayerMask API and Tags & Layers project settings instead. #from(2023.3)")]
	public override string[] prefixedRenderingLayerMaskNames
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x65F8F90", Offset = "0x65F7F90", VA = "0x65F8F90", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	[Obsolete("This is obsolete, please use renderingLayerMaskNames instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public string[] lightLayerMaskNames
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x65F9050", Offset = "0x65F8050", VA = "0x65F9050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	public GPUResidentDrawerMode gpuResidentDrawerMode
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x65F9080", Offset = "0x65F8080", VA = "0x65F9080", Slot = "39")]
		get
		{
			return default(GPUResidentDrawerMode);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x65F9090", Offset = "0x65F8090", VA = "0x65F9090", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public bool gpuResidentDrawerEnableOcclusionCullingInCameras
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x65F90C0", Offset = "0x65F80C0", VA = "0x65F90C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x65F90D0", Offset = "0x65F80D0", VA = "0x65F90D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public float smallMeshScreenPercentage
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x65F9250", Offset = "0x65F8250", VA = "0x65F9250")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x65F9260", Offset = "0x65F8260", VA = "0x65F9260")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public bool supportProbeVolume
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x65F9700", Offset = "0x65F8700", VA = "0x65F9700", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public ProbeVolumeSHBands maxSHBands
	{
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x65F9710", Offset = "0x65F8710", VA = "0x65F9710", Slot = "36")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
	}

	[Token(Token = "0x1700006C")]
	[Obsolete("This property is no longer necessary. #from(2023.3)")]
	public ProbeVolumeSceneData probeVolumeSceneData
	{
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x65F9730", Offset = "0x65F8730", VA = "0x65F9730", Slot = "37")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public bool isStpUsed
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x65F9740", Offset = "0x65F8740", VA = "0x65F9740", Slot = "44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006E")]
	[Obsolete("Use GraphicsSettings.GetRenderPipelineSettings<ShaderStrippingSetting>().shaderVariantLogLevel instead. #from(2022.2)")]
	public ShaderVariantLogLevel shaderVariantLogLevel
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x65F9750", Offset = "0x65F8750", VA = "0x65F9750")]
		get
		{
			return default(ShaderVariantLogLevel);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x65F97B0", Offset = "0x65F87B0", VA = "0x65F97B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	[Obsolete("This is obsolete, please use shadowCascadeCount instead. #from(2021.1) #breakingFrom(2023.1)", true)]
	public ShadowCascadesOption shadowCascadeOption
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x65F9820", Offset = "0x65F8820", VA = "0x65F9820")]
		get
		{
			return default(ShadowCascadesOption);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x65F9890", Offset = "0x65F8890", VA = "0x65F9890")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeTextures on GraphicsSettings. #from(2023.3)")]
	public TextureResources textures
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x65F9900", Offset = "0x65F8900", VA = "0x65F9900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	[Obsolete("This property is not used. #from(6000.3)", false)]
	public IntermediateTextureMode intermediateTextureMode
	{
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x65F9990", Offset = "0x65F8990", VA = "0x65F9990")]
		get
		{
			return default(IntermediateTextureMode);
		}
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x65F99A0", Offset = "0x65F89A0", VA = "0x65F99A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x65F6F00", Offset = "0x65F5F00", VA = "0x65F6F00")]
	private Material GetMaterial(DefaultMaterialType materialType)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x65F71B0", Offset = "0x65F61B0", VA = "0x65F71B0")]
	internal bool IsAtLastVersion()
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x65F7330", Offset = "0x65F6330", VA = "0x65F7330")]
	public ScriptableRendererData LoadBuiltinRendererData(RendererType type = RendererType.UniversalRenderer)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x65F7380", Offset = "0x65F6380", VA = "0x65F7380", Slot = "26")]
	protected override void EnsureGlobalSettings()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x65F7390", Offset = "0x65F6390", VA = "0x65F7390", Slot = "24")]
	protected override RenderPipeline CreatePipeline()
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x65F7590", Offset = "0x65F6590", VA = "0x65F7590")]
	internal void DestroyRenderers()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x65F7860", Offset = "0x65F6860", VA = "0x65F7860")]
	private void DestroyRenderer(ref ScriptableRenderer renderer)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x65F7890", Offset = "0x65F6890", VA = "0x65F7890", Slot = "28")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x65F7610", Offset = "0x65F6610", VA = "0x65F7610")]
	private void CreateRenderers()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x65F7C20", Offset = "0x65F6C20", VA = "0x65F7C20")]
	public ScriptableRenderer GetRenderer(int index)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x65F8840", Offset = "0x65F7840", VA = "0x65F8840")]
	internal int GetAdditionalLightsShadowResolution(int additionalLightsShadowResolutionTier)
	{
		return default(int);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x65F8940", Offset = "0x65F7940", VA = "0x65F8940")]
	internal bool ShouldUseReflectionProbeBlending()
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x65F89A0", Offset = "0x65F79A0", VA = "0x65F89A0")]
	internal bool ShouldUseReflectionProbeAtlasBlending(RenderingMode renderingMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x65F8DE0", Offset = "0x65F7DE0", VA = "0x65F8DE0")]
	internal void OnEnableRenderGraphChanged()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x65F9100", Offset = "0x65F8100", VA = "0x65F9100", Slot = "42")]
	public bool IsGPUResidentDrawerSupportedBySRP(out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x65F9320", Offset = "0x65F8320", VA = "0x65F9320", Slot = "33")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x65F9330", Offset = "0x65F8330", VA = "0x65F9330", Slot = "34")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x65F8BE0", Offset = "0x65F7BE0", VA = "0x65F8BE0")]
	private float ValidateShadowBias(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x65F8710", Offset = "0x65F7710", VA = "0x65F8710")]
	private int ValidatePerObjectLights(int value)
	{
		return default(int);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x65F8410", Offset = "0x65F7410", VA = "0x65F8410")]
	private float ValidateRenderScale(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x65F9590", Offset = "0x65F8590", VA = "0x65F9590")]
	internal bool ValidateRendererDataList(bool partial = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x65F9660", Offset = "0x65F8660", VA = "0x65F9660")]
	internal bool ValidateRendererData(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x65F99B0", Offset = "0x65F89B0", VA = "0x65F99B0")]
	public UniversalRenderPipelineAsset()
	{
	}
}
