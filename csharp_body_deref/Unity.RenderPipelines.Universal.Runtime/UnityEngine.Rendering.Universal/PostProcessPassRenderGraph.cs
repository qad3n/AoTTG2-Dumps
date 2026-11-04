// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000131")]
internal class PostProcessPassRenderGraph
{
	[Token(Token = "0x2000132")]
	internal static class ShaderConstants
	{
		[Token(Token = "0x400069E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _CameraDepthTextureID;

		[Token(Token = "0x400069F")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _StencilRef;

		[Token(Token = "0x40006A0")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _StencilMask;

		[Token(Token = "0x40006A1")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _ColorTexture;

		[Token(Token = "0x40006A2")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _Params;

		[Token(Token = "0x40006A3")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _Params2;

		[Token(Token = "0x40006A4")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _ViewProjM;

		[Token(Token = "0x40006A5")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _PrevViewProjM;

		[Token(Token = "0x40006A6")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _ViewProjMStereo;

		[Token(Token = "0x40006A7")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _PrevViewProjMStereo;

		[Token(Token = "0x40006A8")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _FullscreenProjMat;

		[Token(Token = "0x40006A9")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _FullCoCTexture;

		[Token(Token = "0x40006AA")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _HalfCoCTexture;

		[Token(Token = "0x40006AB")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _DofTexture;

		[Token(Token = "0x40006AC")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _CoCParams;

		[Token(Token = "0x40006AD")]
		[FieldOffset(Offset = "0x3C")]
		public static readonly int _BokehKernel;

		[Token(Token = "0x40006AE")]
		[FieldOffset(Offset = "0x40")]
		public static readonly int _BokehConstants;

		[Token(Token = "0x40006AF")]
		[FieldOffset(Offset = "0x44")]
		public static readonly int _DownSampleScaleFactor;

		[Token(Token = "0x40006B0")]
		[FieldOffset(Offset = "0x48")]
		public static readonly int _Metrics;

		[Token(Token = "0x40006B1")]
		[FieldOffset(Offset = "0x4C")]
		public static readonly int _AreaTexture;

		[Token(Token = "0x40006B2")]
		[FieldOffset(Offset = "0x50")]
		public static readonly int _SearchTexture;

		[Token(Token = "0x40006B3")]
		[FieldOffset(Offset = "0x54")]
		public static readonly int _BlendTexture;

		[Token(Token = "0x40006B4")]
		[FieldOffset(Offset = "0x58")]
		public static readonly int _SourceTexLowMip;

		[Token(Token = "0x40006B5")]
		[FieldOffset(Offset = "0x5C")]
		public static readonly int _Bloom_Params;

		[Token(Token = "0x40006B6")]
		[FieldOffset(Offset = "0x60")]
		public static readonly int _Bloom_Texture;

		[Token(Token = "0x40006B7")]
		[FieldOffset(Offset = "0x64")]
		public static readonly int _LensDirt_Texture;

		[Token(Token = "0x40006B8")]
		[FieldOffset(Offset = "0x68")]
		public static readonly int _LensDirt_Params;

		[Token(Token = "0x40006B9")]
		[FieldOffset(Offset = "0x6C")]
		public static readonly int _LensDirt_Intensity;

		[Token(Token = "0x40006BA")]
		[FieldOffset(Offset = "0x70")]
		public static readonly int _Distortion_Params1;

		[Token(Token = "0x40006BB")]
		[FieldOffset(Offset = "0x74")]
		public static readonly int _Distortion_Params2;

		[Token(Token = "0x40006BC")]
		[FieldOffset(Offset = "0x78")]
		public static readonly int _Chroma_Params;

		[Token(Token = "0x40006BD")]
		[FieldOffset(Offset = "0x7C")]
		public static readonly int _Vignette_Params1;

		[Token(Token = "0x40006BE")]
		[FieldOffset(Offset = "0x80")]
		public static readonly int _Vignette_Params2;

		[Token(Token = "0x40006BF")]
		[FieldOffset(Offset = "0x84")]
		public static readonly int _Vignette_ParamsXR;

		[Token(Token = "0x40006C0")]
		[FieldOffset(Offset = "0x88")]
		public static readonly int _InternalLut;

		[Token(Token = "0x40006C1")]
		[FieldOffset(Offset = "0x8C")]
		public static readonly int _Lut_Params;

		[Token(Token = "0x40006C2")]
		[FieldOffset(Offset = "0x90")]
		public static readonly int _UserLut;

		[Token(Token = "0x40006C3")]
		[FieldOffset(Offset = "0x94")]
		public static readonly int _UserLut_Params;
	}

	[Token(Token = "0x2000133")]
	internal static class Constants
	{
		[Token(Token = "0x40006C4")]
		public const int k_MaxPyramidSize = 16;

		[Token(Token = "0x40006C5")]
		public const int k_GaussianDoFPassComputeCoc = 0;

		[Token(Token = "0x40006C6")]
		public const int k_GaussianDoFPassDownscalePrefilter = 1;

		[Token(Token = "0x40006C7")]
		public const int k_GaussianDoFPassBlurH = 2;

		[Token(Token = "0x40006C8")]
		public const int k_GaussianDoFPassBlurV = 3;

		[Token(Token = "0x40006C9")]
		public const int k_GaussianDoFPassComposite = 4;

		[Token(Token = "0x40006CA")]
		public const int k_BokehDoFPassComputeCoc = 0;

		[Token(Token = "0x40006CB")]
		public const int k_BokehDoFPassDownscalePrefilter = 1;

		[Token(Token = "0x40006CC")]
		public const int k_BokehDoFPassBlur = 2;

		[Token(Token = "0x40006CD")]
		public const int k_BokehDoFPassPostFilter = 3;

		[Token(Token = "0x40006CE")]
		public const int k_BokehDoFPassComposite = 4;
	}

	[Token(Token = "0x2000134")]
	private class UpdateCameraResolutionPassData
	{
		[Token(Token = "0x40006CF")]
		[FieldOffset(Offset = "0x10")]
		internal Vector2Int newCameraTargetSize;

		[Token(Token = "0x6000770")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UpdateCameraResolutionPassData()
		{
		}
	}

	[Token(Token = "0x2000135")]
	private class StopNaNsPassData
	{
		[Token(Token = "0x40006D0")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x40006D1")]
		[FieldOffset(Offset = "0x20")]
		internal Material stopNaN;

		[Token(Token = "0x6000771")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public StopNaNsPassData()
		{
		}
	}

	[Token(Token = "0x2000136")]
	private class SMAASetupPassData
	{
		[Token(Token = "0x40006D2")]
		[FieldOffset(Offset = "0x10")]
		internal Vector4 metrics;

		[Token(Token = "0x40006D3")]
		[FieldOffset(Offset = "0x20")]
		internal Texture2D areaTexture;

		[Token(Token = "0x40006D4")]
		[FieldOffset(Offset = "0x28")]
		internal Texture2D searchTexture;

		[Token(Token = "0x40006D5")]
		[FieldOffset(Offset = "0x30")]
		internal float stencilRef;

		[Token(Token = "0x40006D6")]
		[FieldOffset(Offset = "0x34")]
		internal float stencilMask;

		[Token(Token = "0x40006D7")]
		[FieldOffset(Offset = "0x38")]
		internal AntialiasingQuality antialiasingQuality;

		[Token(Token = "0x40006D8")]
		[FieldOffset(Offset = "0x40")]
		internal Material material;

		[Token(Token = "0x6000772")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SMAASetupPassData()
		{
		}
	}

	[Token(Token = "0x2000137")]
	private class SMAAPassData
	{
		[Token(Token = "0x40006D9")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x40006DA")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle blendTexture;

		[Token(Token = "0x40006DB")]
		[FieldOffset(Offset = "0x30")]
		internal Material material;

		[Token(Token = "0x6000773")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SMAAPassData()
		{
		}
	}

	[Token(Token = "0x2000138")]
	private class UberSetupBloomPassData
	{
		[Token(Token = "0x40006DC")]
		[FieldOffset(Offset = "0x10")]
		internal Vector4 bloomParams;

		[Token(Token = "0x40006DD")]
		[FieldOffset(Offset = "0x20")]
		internal Vector4 dirtScaleOffset;

		[Token(Token = "0x40006DE")]
		[FieldOffset(Offset = "0x30")]
		internal float dirtIntensity;

		[Token(Token = "0x40006DF")]
		[FieldOffset(Offset = "0x38")]
		internal Texture dirtTexture;

		[Token(Token = "0x40006E0")]
		[FieldOffset(Offset = "0x40")]
		internal bool highQualityFilteringValue;

		[Token(Token = "0x40006E1")]
		[FieldOffset(Offset = "0x44")]
		internal TextureHandle bloomTexture;

		[Token(Token = "0x40006E2")]
		[FieldOffset(Offset = "0x58")]
		internal Material uberMaterial;

		[Token(Token = "0x6000774")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UberSetupBloomPassData()
		{
		}
	}

	[Token(Token = "0x2000139")]
	private class BloomPassData
	{
		[Token(Token = "0x40006E3")]
		[FieldOffset(Offset = "0x10")]
		internal int mipCount;

		[Token(Token = "0x40006E4")]
		[FieldOffset(Offset = "0x18")]
		internal Material material;

		[Token(Token = "0x40006E5")]
		[FieldOffset(Offset = "0x20")]
		internal Material[] upsampleMaterials;

		[Token(Token = "0x40006E6")]
		[FieldOffset(Offset = "0x28")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x40006E7")]
		[FieldOffset(Offset = "0x38")]
		internal TextureHandle[] bloomMipUp;

		[Token(Token = "0x40006E8")]
		[FieldOffset(Offset = "0x40")]
		internal TextureHandle[] bloomMipDown;

		[Token(Token = "0x6000775")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public BloomPassData()
		{
		}
	}

	[Token(Token = "0x200013A")]
	internal struct BloomMaterialParams
	{
		[Token(Token = "0x40006E9")]
		[FieldOffset(Offset = "0x0")]
		internal Vector4 parameters;

		[Token(Token = "0x40006EA")]
		[FieldOffset(Offset = "0x10")]
		internal Vector4 parameters2;

		[Token(Token = "0x40006EB")]
		[FieldOffset(Offset = "0x20")]
		internal BloomFilterMode bloomFilter;

		[Token(Token = "0x40006EC")]
		[FieldOffset(Offset = "0x24")]
		internal bool highQualityFiltering;

		[Token(Token = "0x40006ED")]
		[FieldOffset(Offset = "0x25")]
		internal bool enableAlphaOutput;

		[Token(Token = "0x6000776")]
		[Address(RVA = "0x2C70370", Offset = "0x2C6E970", VA = "0x182C70370")]
		internal bool Equals(ref BloomMaterialParams other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200013B")]
	private class DoFGaussianPassData
	{
		[Token(Token = "0x40006EE")]
		[FieldOffset(Offset = "0x10")]
		internal int downsample;

		[Token(Token = "0x40006EF")]
		[FieldOffset(Offset = "0x18")]
		internal RenderingData renderingData;

		[Token(Token = "0x40006F0")]
		[FieldOffset(Offset = "0x40")]
		internal Vector3 cocParams;

		[Token(Token = "0x40006F1")]
		[FieldOffset(Offset = "0x4C")]
		internal bool highQualitySamplingValue;

		[Token(Token = "0x40006F2")]
		[FieldOffset(Offset = "0x50")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x40006F3")]
		[FieldOffset(Offset = "0x60")]
		internal TextureHandle depthTexture;

		[Token(Token = "0x40006F4")]
		[FieldOffset(Offset = "0x70")]
		internal Material material;

		[Token(Token = "0x40006F5")]
		[FieldOffset(Offset = "0x78")]
		internal Material materialCoC;

		[Token(Token = "0x40006F6")]
		[FieldOffset(Offset = "0x80")]
		internal TextureHandle halfCoCTexture;

		[Token(Token = "0x40006F7")]
		[FieldOffset(Offset = "0x90")]
		internal TextureHandle fullCoCTexture;

		[Token(Token = "0x40006F8")]
		[FieldOffset(Offset = "0xA0")]
		internal TextureHandle pingTexture;

		[Token(Token = "0x40006F9")]
		[FieldOffset(Offset = "0xB0")]
		internal TextureHandle pongTexture;

		[Token(Token = "0x40006FA")]
		[FieldOffset(Offset = "0xC0")]
		internal RenderTargetIdentifier[] multipleRenderTargets;

		[Token(Token = "0x40006FB")]
		[FieldOffset(Offset = "0xC8")]
		internal TextureHandle destination;

		[Token(Token = "0x6000777")]
		[Address(RVA = "0x2C70460", Offset = "0x2C6EA60", VA = "0x182C70460")]
		public DoFGaussianPassData()
		{
		}
	}

	[Token(Token = "0x200013C")]
	private class DoFBokehPassData
	{
		[Token(Token = "0x40006FC")]
		[FieldOffset(Offset = "0x10")]
		internal Vector4[] bokehKernel;

		[Token(Token = "0x40006FD")]
		[FieldOffset(Offset = "0x18")]
		internal int downSample;

		[Token(Token = "0x40006FE")]
		[FieldOffset(Offset = "0x1C")]
		internal float uvMargin;

		[Token(Token = "0x40006FF")]
		[FieldOffset(Offset = "0x20")]
		internal Vector4 cocParams;

		[Token(Token = "0x4000700")]
		[FieldOffset(Offset = "0x30")]
		internal bool useFastSRGBLinearConversion;

		[Token(Token = "0x4000701")]
		[FieldOffset(Offset = "0x34")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x4000702")]
		[FieldOffset(Offset = "0x44")]
		internal TextureHandle depthTexture;

		[Token(Token = "0x4000703")]
		[FieldOffset(Offset = "0x58")]
		internal Material material;

		[Token(Token = "0x4000704")]
		[FieldOffset(Offset = "0x60")]
		internal Material materialCoC;

		[Token(Token = "0x4000705")]
		[FieldOffset(Offset = "0x68")]
		internal TextureHandle halfCoCTexture;

		[Token(Token = "0x4000706")]
		[FieldOffset(Offset = "0x78")]
		internal TextureHandle fullCoCTexture;

		[Token(Token = "0x4000707")]
		[FieldOffset(Offset = "0x88")]
		internal TextureHandle pingTexture;

		[Token(Token = "0x4000708")]
		[FieldOffset(Offset = "0x98")]
		internal TextureHandle pongTexture;

		[Token(Token = "0x4000709")]
		[FieldOffset(Offset = "0xA8")]
		internal TextureHandle destination;

		[Token(Token = "0x6000778")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DoFBokehPassData()
		{
		}
	}

	[Token(Token = "0x200013D")]
	private class PaniniProjectionPassData
	{
		[Token(Token = "0x400070A")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle destinationTexture;

		[Token(Token = "0x400070B")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x400070C")]
		[FieldOffset(Offset = "0x30")]
		internal Material material;

		[Token(Token = "0x400070D")]
		[FieldOffset(Offset = "0x38")]
		internal Vector4 paniniParams;

		[Token(Token = "0x400070E")]
		[FieldOffset(Offset = "0x48")]
		internal bool isPaniniGeneric;

		[Token(Token = "0x6000779")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PaniniProjectionPassData()
		{
		}
	}

	[Token(Token = "0x200013E")]
	private class MotionBlurPassData
	{
		[Token(Token = "0x400070F")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x4000710")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle motionVectors;

		[Token(Token = "0x4000711")]
		[FieldOffset(Offset = "0x30")]
		internal Material material;

		[Token(Token = "0x4000712")]
		[FieldOffset(Offset = "0x38")]
		internal int passIndex;

		[Token(Token = "0x4000713")]
		[FieldOffset(Offset = "0x40")]
		internal Camera camera;

		[Token(Token = "0x4000714")]
		[FieldOffset(Offset = "0x48")]
		internal XRPass xr;

		[Token(Token = "0x4000715")]
		[FieldOffset(Offset = "0x50")]
		internal float intensity;

		[Token(Token = "0x4000716")]
		[FieldOffset(Offset = "0x54")]
		internal float clamp;

		[Token(Token = "0x4000717")]
		[FieldOffset(Offset = "0x58")]
		internal bool enableAlphaOutput;

		[Token(Token = "0x600077A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MotionBlurPassData()
		{
		}
	}

	[Token(Token = "0x200013F")]
	private class LensFlarePassData
	{
		[Token(Token = "0x4000718")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle destinationTexture;

		[Token(Token = "0x4000719")]
		[FieldOffset(Offset = "0x20")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x400071A")]
		[FieldOffset(Offset = "0x28")]
		internal Material material;

		[Token(Token = "0x400071B")]
		[FieldOffset(Offset = "0x30")]
		internal Rect viewport;

		[Token(Token = "0x400071C")]
		[FieldOffset(Offset = "0x40")]
		internal float paniniDistance;

		[Token(Token = "0x400071D")]
		[FieldOffset(Offset = "0x44")]
		internal float paniniCropToFit;

		[Token(Token = "0x400071E")]
		[FieldOffset(Offset = "0x48")]
		internal float width;

		[Token(Token = "0x400071F")]
		[FieldOffset(Offset = "0x4C")]
		internal float height;

		[Token(Token = "0x4000720")]
		[FieldOffset(Offset = "0x50")]
		internal bool usePanini;

		[Token(Token = "0x600077B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LensFlarePassData()
		{
		}
	}

	[Token(Token = "0x2000140")]
	private class LensFlareScreenSpacePassData
	{
		[Token(Token = "0x4000721")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle streakTmpTexture;

		[Token(Token = "0x4000722")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle streakTmpTexture2;

		[Token(Token = "0x4000723")]
		[FieldOffset(Offset = "0x30")]
		internal TextureHandle originalBloomTexture;

		[Token(Token = "0x4000724")]
		[FieldOffset(Offset = "0x40")]
		internal TextureHandle screenSpaceLensFlareBloomMipTexture;

		[Token(Token = "0x4000725")]
		[FieldOffset(Offset = "0x50")]
		internal TextureHandle result;

		[Token(Token = "0x4000726")]
		[FieldOffset(Offset = "0x60")]
		internal int actualWidth;

		[Token(Token = "0x4000727")]
		[FieldOffset(Offset = "0x64")]
		internal int actualHeight;

		[Token(Token = "0x4000728")]
		[FieldOffset(Offset = "0x68")]
		internal Camera camera;

		[Token(Token = "0x4000729")]
		[FieldOffset(Offset = "0x70")]
		internal Material material;

		[Token(Token = "0x400072A")]
		[FieldOffset(Offset = "0x78")]
		internal ScreenSpaceLensFlare lensFlareScreenSpace;

		[Token(Token = "0x400072B")]
		[FieldOffset(Offset = "0x80")]
		internal int downsample;

		[Token(Token = "0x600077C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LensFlareScreenSpacePassData()
		{
		}
	}

	[Token(Token = "0x2000141")]
	private class PostProcessingFinalSetupPassData
	{
		[Token(Token = "0x400072C")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle destinationTexture;

		[Token(Token = "0x400072D")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x400072E")]
		[FieldOffset(Offset = "0x30")]
		internal Material material;

		[Token(Token = "0x400072F")]
		[FieldOffset(Offset = "0x38")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000730")]
		[FieldOffset(Offset = "0x40")]
		internal bool isActiveTargetBackBuffer;

		[Token(Token = "0x600077D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PostProcessingFinalSetupPassData()
		{
		}
	}

	[Token(Token = "0x2000142")]
	private class PostProcessingFinalFSRScalePassData
	{
		[Token(Token = "0x4000731")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x4000732")]
		[FieldOffset(Offset = "0x20")]
		internal Material material;

		[Token(Token = "0x4000733")]
		[FieldOffset(Offset = "0x28")]
		internal bool enableAlphaOutput;

		[Token(Token = "0x4000734")]
		[FieldOffset(Offset = "0x2C")]
		internal Vector2 fsrInputSize;

		[Token(Token = "0x4000735")]
		[FieldOffset(Offset = "0x34")]
		internal Vector2 fsrOutputSize;

		[Token(Token = "0x600077E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PostProcessingFinalFSRScalePassData()
		{
		}
	}

	[Token(Token = "0x2000143")]
	private class PostProcessingFinalBlitPassData
	{
		[Token(Token = "0x4000736")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle destinationTexture;

		[Token(Token = "0x4000737")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x4000738")]
		[FieldOffset(Offset = "0x30")]
		internal Material material;

		[Token(Token = "0x4000739")]
		[FieldOffset(Offset = "0x38")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x400073A")]
		[FieldOffset(Offset = "0x40")]
		internal FinalBlitSettings settings;

		[Token(Token = "0x600077F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PostProcessingFinalBlitPassData()
		{
		}
	}

	[Token(Token = "0x2000144")]
	public struct FinalBlitSettings
	{
		[Token(Token = "0x400073B")]
		[FieldOffset(Offset = "0x0")]
		public bool isFxaaEnabled;

		[Token(Token = "0x400073C")]
		[FieldOffset(Offset = "0x1")]
		public bool isFsrEnabled;

		[Token(Token = "0x400073D")]
		[FieldOffset(Offset = "0x2")]
		public bool isTaaSharpeningEnabled;

		[Token(Token = "0x400073E")]
		[FieldOffset(Offset = "0x3")]
		public bool requireHDROutput;

		[Token(Token = "0x400073F")]
		[FieldOffset(Offset = "0x4")]
		public bool isAlphaOutputEnabled;

		[Token(Token = "0x4000740")]
		[FieldOffset(Offset = "0x8")]
		public HDROutputUtils.Operation hdrOperations;

		[Token(Token = "0x6000780")]
		[Address(RVA = "0xB62B70", Offset = "0xB61170", VA = "0x180B62B70")]
		public static FinalBlitSettings Create()
		{
			return default(FinalBlitSettings);
		}
	}

	[Token(Token = "0x2000145")]
	private class UberPostPassData
	{
		[Token(Token = "0x4000741")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle destinationTexture;

		[Token(Token = "0x4000742")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle sourceTexture;

		[Token(Token = "0x4000743")]
		[FieldOffset(Offset = "0x30")]
		internal TextureHandle lutTexture;

		[Token(Token = "0x4000744")]
		[FieldOffset(Offset = "0x40")]
		internal TextureHandle bloomTexture;

		[Token(Token = "0x4000745")]
		[FieldOffset(Offset = "0x50")]
		internal Vector4 lutParams;

		[Token(Token = "0x4000746")]
		[FieldOffset(Offset = "0x60")]
		internal TextureHandle userLutTexture;

		[Token(Token = "0x4000747")]
		[FieldOffset(Offset = "0x70")]
		internal Vector4 userLutParams;

		[Token(Token = "0x4000748")]
		[FieldOffset(Offset = "0x80")]
		internal Material material;

		[Token(Token = "0x4000749")]
		[FieldOffset(Offset = "0x88")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x400074A")]
		[FieldOffset(Offset = "0x90")]
		internal TonemappingMode toneMappingMode;

		[Token(Token = "0x400074B")]
		[FieldOffset(Offset = "0x94")]
		internal bool isHdrGrading;

		[Token(Token = "0x400074C")]
		[FieldOffset(Offset = "0x95")]
		internal bool isBackbuffer;

		[Token(Token = "0x400074D")]
		[FieldOffset(Offset = "0x96")]
		internal bool enableAlphaOutput;

		[Token(Token = "0x400074E")]
		[FieldOffset(Offset = "0x97")]
		internal bool isActiveTargetBackBuffer;

		[Token(Token = "0x6000781")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UberPostPassData()
		{
		}
	}

	[Token(Token = "0x2000146")]
	private class PostFXSetupPassData
	{
		[Token(Token = "0x6000782")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PostFXSetupPassData()
		{
		}
	}

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x10")]
	private PostProcessMaterialLibrary m_Materials;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x18")]
	private DepthOfField m_DepthOfField;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x20")]
	private MotionBlur m_MotionBlur;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x28")]
	private PaniniProjection m_PaniniProjection;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x30")]
	private Bloom m_Bloom;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x38")]
	private ScreenSpaceLensFlare m_LensFlareScreenSpace;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x40")]
	private LensDistortion m_LensDistortion;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x48")]
	private ChromaticAberration m_ChromaticAberration;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x50")]
	private Vignette m_Vignette;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x58")]
	private ColorLookup m_ColorLookup;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x60")]
	private ColorAdjustments m_ColorAdjustments;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x68")]
	private Tonemapping m_Tonemapping;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x70")]
	private FilmGrain m_FilmGrain;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x78")]
	private string[] m_BloomMipDownName;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x80")]
	private string[] m_BloomMipUpName;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x88")]
	private TextureHandle[] _BloomMipUp;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x90")]
	private TextureHandle[] _BloomMipDown;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x98")]
	private RTHandle m_UserLut;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0xA0")]
	private RTHandle m_InternalLut;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0xA8")]
	private readonly GraphicsFormat m_SMAAEdgeFormat;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0xAC")]
	private readonly GraphicsFormat m_BloomColorFormat;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0xB0")]
	private BloomMaterialParams m_BloomParamsPrev;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0xD8")]
	private readonly GraphicsFormat m_GaussianCoCFormat;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0xDC")]
	private readonly GraphicsFormat m_GaussianDoFColorFormat;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0xE0")]
	private Vector4[] m_BokehKernel;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0xE8")]
	private int m_BokehHash;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0xEC")]
	private float m_BokehMaxRadius;

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0xF0")]
	private float m_BokehRCPAspect;

	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0xF4")]
	private readonly GraphicsFormat m_LensFlareScreenSpaceColorFormat;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0xF8")]
	private int m_DitheringTextureIndex;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0xFC")]
	private bool m_HasFinalPass;

	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0xFD")]
	private bool m_EnableColorEncodingIfNeeded;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0xFE")]
	private bool m_UseFastSRGBLinearConversion;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0xFF")]
	private bool m_SupportScreenSpaceLensFlare;

	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x100")]
	private bool m_SupportDataDrivenLensFlare;

	[Token(Token = "0x400069C")]
	private const string _TemporalAATargetName = "_TemporalAATarget";

	[Token(Token = "0x400069D")]
	private const string _UpscaledColorTargetName = "_CameraColorUpscaledSTP";

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x2C6D520", Offset = "0x2C6BB20", VA = "0x182C6D520")]
	public PostProcessPassRenderGraph(PostProcessData data, GraphicsFormat requestPostProColorFormat)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x2C5F380", Offset = "0x2C5D980", VA = "0x182C5F380")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x2C5F620", Offset = "0x2C5DC20", VA = "0x182C5F620")]
	public void Dispose()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073B")]
	[Address(RVA = "0x2C5FA20", Offset = "0x2C5E020", VA = "0x182C5FA20")]
	private static bool IsHDRFormat(GraphicsFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073C")]
	[Address(RVA = "0x2C5F9D0", Offset = "0x2C5DFD0", VA = "0x182C5F9D0")]
	private static bool IsAlphaFormat(GraphicsFormat format)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073D")]
	[Address(RVA = "0x2C6B510", Offset = "0x2C69B10", VA = "0x182C6B510")]
	private bool RequireSRGBConversionBlitToBackBuffer(bool requireSrgbConversion)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600073E")]
	[Address(RVA = "0x2C6B4D0", Offset = "0x2C69AD0", VA = "0x182C6B4D0")]
	private static bool RequireHDROutput(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x2C6CF30", Offset = "0x2C6B530", VA = "0x182C6CF30")]
	private void UpdateCameraResolution(RenderGraph renderGraph, UniversalCameraData cameraData, Vector2Int newCameraTargetSize)
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x2C5F4D0", Offset = "0x2C5DAD0", VA = "0x182C5F4D0")]
	internal static TextureHandle CreateCompatibleTexture(RenderGraph renderGraph, in TextureHandle source, string name, bool clear, FilterMode filterMode)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x2C5F3C0", Offset = "0x2C5D9C0", VA = "0x182C5F3C0")]
	internal static TextureHandle CreateCompatibleTexture(RenderGraph renderGraph, in TextureDesc desc, string name, bool clear, FilterMode filterMode)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x2C5F640", Offset = "0x2C5DC40", VA = "0x182C5F640")]
	internal static TextureDesc GetCompatibleDescriptor(TextureDesc desc, int width, int height, GraphicsFormat format)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x2C5F710", Offset = "0x2C5DD10", VA = "0x182C5F710")]
	internal static TextureDesc GetCompatibleDescriptor(TextureDesc desc)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x2C600D0", Offset = "0x2C5E6D0", VA = "0x182C600D0")]
	internal static void MakeCompatible(ref TextureDesc desc)
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x2C5F6B0", Offset = "0x2C5DCB0", VA = "0x182C5F6B0")]
	internal static RenderTextureDescriptor GetCompatibleDescriptor(RenderTextureDescriptor desc, int width, int height, GraphicsFormat format, GraphicsFormat depthStencilFormat = GraphicsFormat.None)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x2C6A300", Offset = "0x2C68900", VA = "0x182C6A300")]
	public void RenderStopNaN(RenderGraph renderGraph, in TextureHandle activeCameraColor, out TextureHandle stopNaNTarget)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x2C68900", Offset = "0x2C66F00", VA = "0x182C68900")]
	public void RenderSMAA(RenderGraph renderGraph, UniversalResourceData resourceData, AntialiasingQuality antialiasingQuality, in TextureHandle source, out TextureHandle SMAATarget)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x2C6C8B0", Offset = "0x2C6AEB0", VA = "0x182C6C8B0")]
	public void UberPostSetupBloomPass(RenderGraph rendergraph, Material uberMaterial, in TextureDesc srcDesc)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x2C5F180", Offset = "0x2C5D780", VA = "0x182C5F180")]
	public Vector2Int CalcBloomResolution(Bloom bloom, in TextureDesc bloomSourceDesc)
	{
		return default(Vector2Int);
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x2C5F060", Offset = "0x2C5D660", VA = "0x182C5F060")]
	public int CalcBloomMipCount(Bloom bloom, Vector2Int bloomResolution)
	{
		return default(int);
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x2C604A0", Offset = "0x2C5EAA0", VA = "0x182C604A0")]
	public void RenderBloomTexture(RenderGraph renderGraph, in TextureHandle source, out TextureHandle destination, bool enableAlphaOutput)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x2C5E5F0", Offset = "0x2C5CBF0", VA = "0x182C5E5F0")]
	private TextureHandle BloomGaussian(RenderGraph renderGraph, TextureHandle source, int mipCount)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x2C5EBB0", Offset = "0x2C5D1B0", VA = "0x182C5EBB0")]
	private TextureHandle BloomKawase(RenderGraph renderGraph, TextureHandle source, int mipCount)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x2C5E030", Offset = "0x2C5C630", VA = "0x182C5E030")]
	private TextureHandle BloomDual(RenderGraph renderGraph, TextureHandle source, int mipCount)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x2C631D0", Offset = "0x2C617D0", VA = "0x182C631D0")]
	public void RenderDoF(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, in TextureHandle source, out TextureHandle destination)
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x2C62260", Offset = "0x2C60860", VA = "0x182C62260")]
	public void RenderDoFGaussian(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, in TextureHandle source, TextureHandle destination, ref Material dofMaterial)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x2C600F0", Offset = "0x2C5E6F0", VA = "0x182C600F0")]
	private void PrepareBokehKernel(float maxRadius, float rcpAspect)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000752")]
	[Address(RVA = "0x2C5F9B0", Offset = "0x2C5DFB0", VA = "0x182C5F9B0")]
	private static float GetMaxBokehRadiusInPixels(float viewportHeight)
	{
		return default(float);
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x2C613C0", Offset = "0x2C5F9C0", VA = "0x182C613C0")]
	public void RenderDoFBokeh(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, in TextureHandle source, in TextureHandle destination, ref Material dofMaterial)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x2C66950", Offset = "0x2C64F50", VA = "0x182C66950")]
	public void RenderPaniniProjection(RenderGraph renderGraph, Camera camera, in TextureHandle source, out TextureHandle destination)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000755")]
	[Address(RVA = "0x2C5F320", Offset = "0x2C5D920", VA = "0x182C5F320")]
	private static Vector2 CalcViewExtents(Camera camera, int width, int height)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000756")]
	[Address(RVA = "0x2C5F230", Offset = "0x2C5D830", VA = "0x182C5F230")]
	private static Vector2 CalcCropExtents(Camera camera, float d, int width, int height)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x2C6A760", Offset = "0x2C68D60", VA = "0x182C6A760")]
	private void RenderTemporalAA(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, ref TextureHandle source, out TextureHandle destination)
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x2C69EC0", Offset = "0x2C684C0", VA = "0x182C69EC0")]
	private void RenderSTP(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, ref TextureHandle source, out TextureHandle destination)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x2C660F0", Offset = "0x2C646F0", VA = "0x182C660F0")]
	public void RenderMotionBlur(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, in TextureHandle source, out TextureHandle destination)
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x2C6D220", Offset = "0x2C6B820", VA = "0x182C6D220")]
	internal static void UpdateMotionBlurMatrices(ref Material material, Camera camera, XRPass xr)
	{
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x2C5FAA0", Offset = "0x2C5E0A0", VA = "0x182C5FAA0")]
	private void LensFlareDataDrivenComputeOcclusion(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, in TextureDesc srcDesc)
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x2C64F10", Offset = "0x2C63510", VA = "0x182C64F10")]
	public void RenderLensFlareDataDriven(RenderGraph renderGraph, UniversalResourceData resourceData, UniversalCameraData cameraData, in TextureHandle destination, in TextureDesc srcDesc)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x2C5F770", Offset = "0x2C5DD70", VA = "0x182C5F770")]
	private static float GetLensFlareLightAttenuation(Light light, Camera cam, Vector3 wo)
	{
		return default(float);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x2C65610", Offset = "0x2C63C10", VA = "0x182C65610")]
	public TextureHandle RenderLensFlareScreenSpace(RenderGraph renderGraph, Camera camera, in TextureDesc srcDesc, TextureHandle originalBloomTexture, TextureHandle screenSpaceLensFlareBloomMipTexture, bool sameBloomInputOutputTex)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x2C6B910", Offset = "0x2C69F10", VA = "0x182C6B910")]
	private static void ScaleViewport(RasterCommandBuffer cmd, RTHandle sourceTextureHdl, RTHandle dest, UniversalCameraData cameraData, bool isActiveTargetBackBuffer)
	{
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x2C6B520", Offset = "0x2C69B20", VA = "0x182C6B520")]
	private static void ScaleViewportAndBlit(in RasterGraphContext context, in TextureHandle source, in TextureHandle destination, UniversalCameraData cameraData, Material material, bool isActiveTargetBackBuffer)
	{
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x2C6B690", Offset = "0x2C69C90", VA = "0x182C6B690")]
	private static void ScaleViewportAndDrawVisibilityMesh(in RasterGraphContext context, in TextureHandle source, in TextureHandle destination, UniversalCameraData cameraData, Material material, bool isActiveTargetBackBuffer)
	{
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x2C648B0", Offset = "0x2C62EB0", VA = "0x182C648B0")]
	public void RenderFinalSetup(RenderGraph renderGraph, UniversalCameraData cameraData, in TextureHandle source, in TextureHandle destination, ref FinalBlitSettings settings, bool isActiveTargetBackBuffer)
	{
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x2C63A60", Offset = "0x2C62060", VA = "0x182C63A60")]
	public void RenderFinalFSRScale(RenderGraph renderGraph, in TextureHandle source, in TextureDesc srcDesc, in TextureHandle destination, in TextureDesc dstDesc, bool enableAlphaOutput)
	{
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x2C63410", Offset = "0x2C61A10", VA = "0x182C63410")]
	public void RenderFinalBlit(RenderGraph renderGraph, UniversalCameraData cameraData, in TextureHandle source, in TextureHandle overlayUITexture, in TextureHandle postProcessingTarget, ref FinalBlitSettings settings)
	{
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x2C63F50", Offset = "0x2C62550", VA = "0x182C63F50")]
	public void RenderFinalPassRenderGraph(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle source, in TextureHandle overlayUITexture, in TextureHandle postProcessingTarget, bool enableColorEncodingIfNeeded)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x2C6C650", Offset = "0x2C6AC50", VA = "0x182C6C650")]
	private TextureHandle TryGetCachedUserLutTextureHandle(RenderGraph renderGraph)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x2C6A8A0", Offset = "0x2C68EA0", VA = "0x182C6A8A0")]
	public void RenderUberPost(RenderGraph renderGraph, ContextContainer frameData, UniversalCameraData cameraData, UniversalPostProcessingData postProcessingData, in TextureHandle sourceTexture, in TextureHandle destTexture, in TextureHandle lutTexture, in TextureHandle bloomTexture, in TextureHandle overlayUITexture, bool requireHDROutput, bool enableAlphaOutput)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x2C67060", Offset = "0x2C65660", VA = "0x182C67060")]
	public void RenderPostProcessingRenderGraph(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle activeCameraColorTexture, in TextureHandle lutTexture, in TextureHandle overlayUITexture, in TextureHandle postProcessingTarget, bool hasFinalPass, bool resolveToDebugScreen, bool enableColorEndingIfNeeded)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000769")]
	[Address(RVA = "0x2C6BF30", Offset = "0x2C6A530", VA = "0x182C6BF30")]
	private void SetupLensDistortion(Material material, bool isSceneView)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076A")]
	[Address(RVA = "0x2C6BB70", Offset = "0x2C6A170", VA = "0x182C6BB70")]
	private void SetupChromaticAberration(Material material)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076B")]
	[Address(RVA = "0x2C6C300", Offset = "0x2C6A900", VA = "0x182C6C300")]
	private void SetupVignette(Material material, XRPass xrPass, int width, int height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076C")]
	[Address(RVA = "0x2C6BD30", Offset = "0x2C6A330", VA = "0x182C6BD30")]
	private void SetupGrain(UniversalCameraData cameraData, Material material)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076D")]
	[Address(RVA = "0x2C6BC70", Offset = "0x2C6A270", VA = "0x182C6BC70")]
	private void SetupDithering(UniversalCameraData cameraData, Material material)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600076E")]
	[Address(RVA = "0x2C6BDF0", Offset = "0x2C6A3F0", VA = "0x182C6BDF0")]
	private void SetupHDROutput(HDROutputUtils.HDRDisplayInformation hdrDisplayInformation, ColorGamut hdrDisplayColorGamut, Material material, HDROutputUtils.Operation hdrOperations, bool rendersOverlayUI)
	{
	}
}
