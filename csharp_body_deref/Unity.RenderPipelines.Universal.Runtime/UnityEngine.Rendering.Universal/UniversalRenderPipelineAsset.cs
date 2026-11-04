// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C0CA10", Offset = "0x2C0B010", VA = "0x182C0CA10")]
		public bool NeedsReload()
		{
			return default(bool);
		}

		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public override Material defaultParticleMaterial
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public override Material defaultLineMaterial
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Material defaultTerrainMaterial
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	public override Material default2DMaterial
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public override Material default2DMaskMaterial
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	public Material decalMaterial
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public override Shader defaultShader
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x2C118D0", Offset = "0x2C0FED0", VA = "0x182C118D0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public override Shader terrainDetailLitShader
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x2C121F0", Offset = "0x2C107F0", VA = "0x182C121F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public override Shader terrainDetailGrassShader
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2C12170", Offset = "0x2C10770", VA = "0x182C12170", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public override Shader terrainDetailGrassBillboardShader
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x2C120F0", Offset = "0x2C106F0", VA = "0x182C120F0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	private GPUResidentDrawerSettings UnityEngine_002ERendering_002EIGPUResidentRenderPipeline_002EgpuResidentDrawerSettings
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x2C10DF0", Offset = "0x2C0F3F0", VA = "0x182C10DF0", Slot = "38")]
		get
		{
			return default(GPUResidentDrawerSettings);
		}
	}

	[Token(Token = "0x17000017")]
	public ReadOnlySpan<ScriptableRendererData> rendererDataList
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x2C11A90", Offset = "0x2C10090", VA = "0x182C11A90")]
		get
		{
			return default(ReadOnlySpan<ScriptableRendererData>);
		}
	}

	[Token(Token = "0x17000018")]
	public ReadOnlySpan<ScriptableRenderer> renderers
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x2C11B80", Offset = "0x2C10180", VA = "0x182C11B80")]
		get
		{
			return default(ReadOnlySpan<ScriptableRenderer>);
		}
	}

	[Token(Token = "0x17000019")]
	public bool isImmediateModeSupported
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700001A")]
	public ScriptableRenderer scriptableRenderer
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x2C11CD0", Offset = "0x2C102D0", VA = "0x182C11CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	internal ScriptableRendererData scriptableRendererData
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2C11C20", Offset = "0x2C10220", VA = "0x182C11C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001C")]
	internal GraphicsFormat additionalLightsCookieFormat
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x2C11660", Offset = "0x2C0FC60", VA = "0x182C11660")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x1700001D")]
	internal Vector2Int additionalLightsCookieResolution
	{
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x2C11860", Offset = "0x2C0FE60", VA = "0x182C11860")]
		get
		{
			return default(Vector2Int);
		}
	}

	[Token(Token = "0x1700001E")]
	internal int[] rendererIndexList
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x2C11AF0", Offset = "0x2C100F0", VA = "0x182C11AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001F")]
	public bool supportsCameraDepthTexture
	{
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2C00A50", Offset = "0x2BFF050", VA = "0x182C00A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2C00A70", Offset = "0x2BFF070", VA = "0x182C00A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public bool supportsCameraOpaqueTexture
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x27363B0", Offset = "0x27349B0", VA = "0x1827363B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2C00A60", Offset = "0x2BFF060", VA = "0x182C00A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Downsampling opaqueDownsampling
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(Downsampling);
		}
	}

	[Token(Token = "0x17000022")]
	public bool supportsTerrainHoles
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x1B020E0", Offset = "0x1B006E0", VA = "0x181B020E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000023")]
	public StoreActionsOptimization storeActionsOptimization
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x1CD3470", Offset = "0x1CD1A70", VA = "0x181CD3470")]
		get
		{
			return default(StoreActionsOptimization);
		}
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x1CD3E60", Offset = "0x1CD2460", VA = "0x181CD3E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public bool supportsHDR
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2C120B0", Offset = "0x2C106B0", VA = "0x182C120B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x2C12970", Offset = "0x2C10F70", VA = "0x182C12970")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public HDRColorBufferPrecision hdrColorBufferPrecision
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(HDRColorBufferPrecision);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public int msaaSampleCount
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0xCDE980", Offset = "0xCDCF80", VA = "0x180CDE980")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0xCDEA50", Offset = "0xCDD050", VA = "0x180CDEA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public float renderScale
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x12BF160", Offset = "0x12BD760", VA = "0x1812BF160")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x2C12510", Offset = "0x2C10B10", VA = "0x182C12510")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool enableLODCrossFade
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x1D2B360", Offset = "0x1D29960", VA = "0x181D2B360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000029")]
	public LODCrossFadeDitheringType lodCrossFadeDitheringType
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(LODCrossFadeDitheringType);
		}
	}

	[Token(Token = "0x1700002A")]
	public UpscalingFilterSelection upscalingFilter
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(UpscalingFilterSelection);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0xACB520", Offset = "0xAC9B20", VA = "0x180ACB520")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public string upscalerName
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	public bool fsrOverrideSharpness
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000067")]
		[Address(RVA = "0xABD3A0", Offset = "0xABB9A0", VA = "0x180ABD3A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public float fsrSharpness
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x58A550", Offset = "0x588B50", VA = "0x18058A550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x58A8E0", Offset = "0x588EE0", VA = "0x18058A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public ShEvalMode shEvalMode
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0")]
		get
		{
			return default(ShEvalMode);
		}
		[Token(Token = "0x600006B")]
		[Address(RVA = "0xB5BE20", Offset = "0xB5A420", VA = "0x180B5BE20")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public LightProbeSystem lightProbeSystem
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0")]
		get
		{
			return default(LightProbeSystem);
		}
		[Token(Token = "0x600006D")]
		[Address(RVA = "0xA4D5B0", Offset = "0xA4BBB0", VA = "0x180A4D5B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public ProbeVolumeTextureMemoryBudget probeVolumeMemoryBudget
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		get
		{
			return default(ProbeVolumeTextureMemoryBudget);
		}
		[Token(Token = "0x600006F")]
		[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public ProbeVolumeBlendingTextureMemoryBudget probeVolumeBlendingMemoryBudget
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0xA4D580", Offset = "0xA4BB80", VA = "0x180A4D580")]
		get
		{
			return default(ProbeVolumeBlendingTextureMemoryBudget);
		}
		[Token(Token = "0x6000071")]
		[Address(RVA = "0xA4D730", Offset = "0xA4BD30", VA = "0x180A4D730")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000032")]
	[Obsolete("This is obsolete, use supportProbeVolumeGPUStreaming instead. #from(2023.3)")]
	public bool supportProbeVolumeStreaming
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000073")]
		[Address(RVA = "0xB5BDB0", Offset = "0xB5A3B0", VA = "0x180B5BDB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public bool supportProbeVolumeGPUStreaming
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000075")]
		[Address(RVA = "0xB5BDB0", Offset = "0xB5A3B0", VA = "0x180B5BDB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public bool supportProbeVolumeDiskStreaming
	{
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x24C53F0", Offset = "0x24C39F0", VA = "0x1824C53F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x2C12940", Offset = "0x2C10F40", VA = "0x182C12940")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool supportProbeVolumeScenarios
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x24C53E0", Offset = "0x24C39E0", VA = "0x1824C53E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000079")]
		[Address(RVA = "0x2C12950", Offset = "0x2C10F50", VA = "0x182C12950")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool supportProbeVolumeScenarioBlending
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x24C5400", Offset = "0x24C3A00", VA = "0x1824C5400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x2703FD0", Offset = "0x27025D0", VA = "0x182703FD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public ProbeVolumeSHBands probeVolumeSHBands
	{
		[Token(Token = "0x600007C")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
		[Token(Token = "0x600007D")]
		[Address(RVA = "0xB5BC30", Offset = "0xB5A230", VA = "0x180B5BC30")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public LightRenderingMode mainLightRenderingMode
	{
		[Token(Token = "0x600007E")]
		[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
		get
		{
			return default(LightRenderingMode);
		}
		[Token(Token = "0x600007F")]
		[Address(RVA = "0xB5BE70", Offset = "0xB5A470", VA = "0x180B5BE70")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool supportsMainLightShadows
	{
		[Token(Token = "0x6000080")]
		[Address(RVA = "0x2602BF0", Offset = "0x26011F0", VA = "0x182602BF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x2C12980", Offset = "0x2C10F80", VA = "0x182C12980")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public int mainLightShadowmapResolution
	{
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x25EDB20", Offset = "0x25EC120", VA = "0x1825EDB20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x2B0A850", Offset = "0x2B08E50", VA = "0x182B0A850")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public LightRenderingMode additionalLightsRenderingMode
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x25EDB30", Offset = "0x25EC130", VA = "0x1825EDB30")]
		get
		{
			return default(LightRenderingMode);
		}
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x2C12330", Offset = "0x2C10930", VA = "0x182C12330")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public int maxAdditionalLightsCount
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x266C1E0", Offset = "0x266A7E0", VA = "0x18266C1E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x2C12430", Offset = "0x2C10A30", VA = "0x182C12430")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public bool supportsAdditionalLightShadows
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x1D90420", Offset = "0x1D8EA20", VA = "0x181D90420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x1D910E0", Offset = "0x1D8F6E0", VA = "0x181D910E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public int additionalLightsShadowmapResolution
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x1AAAA90", Offset = "0x1AA9090", VA = "0x181AAAA90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x1C5E460", Offset = "0x1C5CA60", VA = "0x181C5E460")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public int additionalLightsShadowResolutionTierLow
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x1AAAB30", Offset = "0x1AA9130", VA = "0x181AAAB30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x2C12350", Offset = "0x2C10950", VA = "0x182C12350")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public int additionalLightsShadowResolutionTierMedium
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x1AAAB20", Offset = "0x1AA9120", VA = "0x181AAAB20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x2C12360", Offset = "0x2C10960", VA = "0x182C12360")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public int additionalLightsShadowResolutionTierHigh
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x1AAAE00", Offset = "0x1AA9400", VA = "0x181AAAE00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x2C12340", Offset = "0x2C10940", VA = "0x182C12340")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public bool reflectionProbeBlending
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x24BD3F0", Offset = "0x24BB9F0", VA = "0x1824BD3F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x2C124F0", Offset = "0x2C10AF0", VA = "0x182C124F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool reflectionProbeBoxProjection
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x2C11A50", Offset = "0x2C10050", VA = "0x182C11A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x2C12500", Offset = "0x2C10B00", VA = "0x182C12500")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public bool reflectionProbeAtlas
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x2C11A40", Offset = "0x2C10040", VA = "0x182C11A40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x2C124E0", Offset = "0x2C10AE0", VA = "0x182C124E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public float shadowDistance
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x2C12030", Offset = "0x2C10630", VA = "0x182C12030")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x2C12800", Offset = "0x2C10E00", VA = "0x182C12800")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public int shadowCascadeCount
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x1AAAE10", Offset = "0x1AA9410", VA = "0x181AAAE10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x2C12600", Offset = "0x2C10C00", VA = "0x182C12600")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public float cascade2Split
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0xB5BA70", Offset = "0xB5A070", VA = "0x180B5BA70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0xB5BEC0", Offset = "0xB5A4C0", VA = "0x180B5BEC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public Vector2 cascade3Split
	{
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x2C11880", Offset = "0x2C0FE80", VA = "0x182C11880")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x2C12370", Offset = "0x2C10970", VA = "0x182C12370")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Vector3 cascade4Split
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x2C118A0", Offset = "0x2C0FEA0", VA = "0x182C118A0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x2C12380", Offset = "0x2C10980", VA = "0x182C12380")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public float cascadeBorder
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x2C118C0", Offset = "0x2C0FEC0", VA = "0x182C118C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x2C123A0", Offset = "0x2C109A0", VA = "0x182C123A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public float shadowDepthBias
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x2C12020", Offset = "0x2C10620", VA = "0x182C12020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x2C12790", Offset = "0x2C10D90", VA = "0x182C12790")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public float shadowNormalBias
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x2C12040", Offset = "0x2C10640", VA = "0x182C12040")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x2C12820", Offset = "0x2C10E20", VA = "0x182C12820")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public bool supportsSoftShadows
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x1C3F930", Offset = "0x1C3DF30", VA = "0x181C3F930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x2C12990", Offset = "0x2C10F90", VA = "0x182C12990")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	internal SoftShadowQuality softShadowQuality
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x2C12060", Offset = "0x2C10660", VA = "0x182C12060")]
		get
		{
			return default(SoftShadowQuality);
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0xB5BDA0", Offset = "0xB5A3A0", VA = "0x180B5BDA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public bool supportsDynamicBatching
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x2C120A0", Offset = "0x2C106A0", VA = "0x182C120A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x2C12960", Offset = "0x2C10F60", VA = "0x182C12960")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool supportsMixedLighting
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x2C120E0", Offset = "0x2C106E0", VA = "0x182C120E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public bool supportsLightCookies
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x2C120C0", Offset = "0x2C106C0", VA = "0x182C120C0")]
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
		[Address(RVA = "0x2C120D0", Offset = "0x2C106D0", VA = "0x182C120D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000053")]
	public bool useRenderingLayers
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x2C120D0", Offset = "0x2C106D0", VA = "0x182C120D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000054")]
	public VolumeFrameworkUpdateMode volumeFrameworkUpdateMode
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x2C12320", Offset = "0x2C10920", VA = "0x182C12320")]
		get
		{
			return default(VolumeFrameworkUpdateMode);
		}
	}

	[Token(Token = "0x17000055")]
	public VolumeProfile volumeProfile
	{
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0xA29A50", Offset = "0xA28050", VA = "0x180A29A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x1D1FE20", Offset = "0x1D1E420", VA = "0x181D1FE20")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[Obsolete("PipelineDebugLevel is deprecated and replaced to use the profiler. Calling debugLevel is not necessary. #from(2022.2) #breakingFrom(2023.1)", true)]
	public PipelineDebugLevel debugLevel
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(PipelineDebugLevel);
		}
	}

	[Token(Token = "0x17000057")]
	public bool useSRPBatcher
	{
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x2C12310", Offset = "0x2C10910", VA = "0x182C12310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x2C129B0", Offset = "0x2C10FB0", VA = "0x182C129B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	[Obsolete("This has been deprecated, please use GraphicsSettings.GetRenderPipelineSettings<RenderGraphSettings>().enableRenderCompatibilityMode instead. #from(2023.3)")]
	public bool enableRenderGraph
	{
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000059")]
	public ColorGradingMode colorGradingMode
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x1D1FB90", Offset = "0x1D1E190", VA = "0x181D1FB90")]
		get
		{
			return default(ColorGradingMode);
		}
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x1D1FE90", Offset = "0x1D1E490", VA = "0x181D1FE90")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public int colorGradingLutSize
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x1D1FB80", Offset = "0x1D1E180", VA = "0x181D1FB80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x2C123B0", Offset = "0x2C109B0", VA = "0x182C123B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool allowPostProcessAlphaOutput
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x1C41CE0", Offset = "0x1C402E0", VA = "0x181C41CE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	public bool useFastSRGBLinearConversion
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x2C12300", Offset = "0x2C10900", VA = "0x182C12300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005D")]
	public bool supportScreenSpaceLensFlare
	{
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2C12090", Offset = "0x2C10690", VA = "0x182C12090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005E")]
	public bool supportDataDrivenLensFlare
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x2C12070", Offset = "0x2C10670", VA = "0x182C12070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005F")]
	public bool useAdaptivePerformance
	{
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x2C122F0", Offset = "0x2C108F0", VA = "0x182C122F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x2C129A0", Offset = "0x2C10FA0", VA = "0x182C129A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public bool conservativeEnclosingSphere
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x1C3FA20", Offset = "0x1C3E020", VA = "0x181C3FA20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x2C123E0", Offset = "0x2C109E0", VA = "0x182C123E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public int numIterationsEnclosingSphere
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x2C11A00", Offset = "0x2C10000", VA = "0x182C11A00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x2C124D0", Offset = "0x2C10AD0", VA = "0x182C124D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public override string renderPipelineShaderTag
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x2C11A60", Offset = "0x2C10060", VA = "0x182C11A60", Slot = "23")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000063")]
	protected override bool requiresCompatibleRenderPipelineGlobalSettings
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "29")]
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
		[Address(RVA = "0x2C11BE0", Offset = "0x2C101E0", VA = "0x182C11BE0", Slot = "31")]
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
		[Address(RVA = "0x2C11A10", Offset = "0x2C10010", VA = "0x182C11A10", Slot = "32")]
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
		[Address(RVA = "0x2C119A0", Offset = "0x2C0FFA0", VA = "0x182C119A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	public GPUResidentDrawerMode gpuResidentDrawerMode
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x27E5630", Offset = "0x27E3C30", VA = "0x1827E5630", Slot = "39")]
		get
		{
			return default(GPUResidentDrawerMode);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x2C12410", Offset = "0x2C10A10", VA = "0x182C12410", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public bool gpuResidentDrawerEnableOcclusionCullingInCameras
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x2C11980", Offset = "0x2C0FF80", VA = "0x182C11980")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x2C123F0", Offset = "0x2C109F0", VA = "0x182C123F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public float smallMeshScreenPercentage
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x2C12050", Offset = "0x2C10650", VA = "0x182C12050")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x2C12890", Offset = "0x2C10E90", VA = "0x182C12890")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public bool supportProbeVolume
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x2C12080", Offset = "0x2C10680", VA = "0x182C12080", Slot = "35")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public ProbeVolumeSHBands maxSHBands
	{
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x2C119E0", Offset = "0x2C0FFE0", VA = "0x182C119E0", Slot = "36")]
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "37")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public bool isStpUsed
	{
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x2C11990", Offset = "0x2C0FF90", VA = "0x182C11990", Slot = "44")]
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
		[Address(RVA = "0x2C11F30", Offset = "0x2C10530", VA = "0x182C11F30")]
		get
		{
			return default(ShaderVariantLogLevel);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x2C12590", Offset = "0x2C10B90", VA = "0x182C12590")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	[Obsolete("This is obsolete, please use shadowCascadeCount instead. #from(2021.1) #breakingFrom(2023.1)", true)]
	public ShadowCascadesOption shadowCascadeOption
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x2C11F90", Offset = "0x2C10590", VA = "0x182C11F90")]
		get
		{
			return default(ShadowCascadesOption);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x2C126F0", Offset = "0x2C10CF0", VA = "0x182C126F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeTextures on GraphicsSettings. #from(2023.3)")]
	public TextureResources textures
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x2C12270", Offset = "0x2C10870", VA = "0x182C12270")]
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(IntermediateTextureMode);
		}
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	private Material GetMaterial(DefaultMaterialType materialType)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2C108B0", Offset = "0x2C0EEB0", VA = "0x182C108B0")]
	internal bool IsAtLastVersion()
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2C10A30", Offset = "0x2C0F030", VA = "0x182C10A30")]
	public ScriptableRendererData LoadBuiltinRendererData(RendererType type = RendererType.UniversalRenderer)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890", Slot = "26")]
	protected override void EnsureGlobalSettings()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2C0FFF0", Offset = "0x2C0E5F0", VA = "0x182C0FFF0", Slot = "24")]
	protected override RenderPipeline CreatePipeline()
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2C10440", Offset = "0x2C0EA40", VA = "0x182C10440")]
	internal void DestroyRenderers()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2C10400", Offset = "0x2C0EA00", VA = "0x182C10400")]
	private void DestroyRenderer(ref ScriptableRenderer renderer)
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2C10D60", Offset = "0x2C0F360", VA = "0x182C10D60", Slot = "28")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2C101A0", Offset = "0x2C0E7A0", VA = "0x182C101A0")]
	private void CreateRenderers()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2C105C0", Offset = "0x2C0EBC0", VA = "0x182C105C0")]
	public ScriptableRenderer GetRenderer(int index)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2C104F0", Offset = "0x2C0EAF0", VA = "0x182C104F0")]
	internal int GetAdditionalLightsShadowResolution(int additionalLightsShadowResolutionTier)
	{
		return default(int);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2C10DD0", Offset = "0x2C0F3D0", VA = "0x182C10DD0")]
	internal bool ShouldUseReflectionProbeBlending()
	{
		return default(bool);
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2C10DA0", Offset = "0x2C0F3A0", VA = "0x182C10DA0")]
	internal bool ShouldUseReflectionProbeAtlasBlending(RenderingMode renderingMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2C10D80", Offset = "0x2C0F380", VA = "0x182C10D80")]
	internal void OnEnableRenderGraphChanged()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2C108C0", Offset = "0x2C0EEC0", VA = "0x182C108C0", Slot = "42")]
	public bool IsGPUResidentDrawerSupportedBySRP(out string message, out LogType severity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "33")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2C10A80", Offset = "0x2C0F080", VA = "0x182C10A80", Slot = "34")]
	public void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2C11140", Offset = "0x2C0F740", VA = "0x182C11140")]
	private float ValidateShadowBias(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2C10EB0", Offset = "0x2C0F4B0", VA = "0x182C10EB0")]
	private int ValidatePerObjectLights(int value)
	{
		return default(int);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x2C10F40", Offset = "0x2C0F540", VA = "0x182C10F40")]
	private float ValidateRenderScale(float value)
	{
		return default(float);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2C10FB0", Offset = "0x2C0F5B0", VA = "0x182C10FB0")]
	internal bool ValidateRendererDataList(bool partial = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2C110A0", Offset = "0x2C0F6A0", VA = "0x182C110A0")]
	internal bool ValidateRendererData(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2C113E0", Offset = "0x2C0F9E0", VA = "0x182C113E0")]
	public UniversalRenderPipelineAsset()
	{
	}
}
