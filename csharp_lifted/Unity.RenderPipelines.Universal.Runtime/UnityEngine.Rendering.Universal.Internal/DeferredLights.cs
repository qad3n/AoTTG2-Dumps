// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DeferredLights
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000201")]
internal class DeferredLights
{
	[Token(Token = "0x2000202")]
	internal static class ShaderConstants
	{
		[Token(Token = "0x4000C3D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _LitStencilRef;

		[Token(Token = "0x4000C3E")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _LitStencilReadMask;

		[Token(Token = "0x4000C3F")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _LitStencilWriteMask;

		[Token(Token = "0x4000C40")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _SimpleLitStencilRef;

		[Token(Token = "0x4000C41")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _SimpleLitStencilReadMask;

		[Token(Token = "0x4000C42")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _SimpleLitStencilWriteMask;

		[Token(Token = "0x4000C43")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _StencilRef;

		[Token(Token = "0x4000C44")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _StencilReadMask;

		[Token(Token = "0x4000C45")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _StencilWriteMask;

		[Token(Token = "0x4000C46")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _LitPunctualStencilRef;

		[Token(Token = "0x4000C47")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _LitPunctualStencilReadMask;

		[Token(Token = "0x4000C48")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _LitPunctualStencilWriteMask;

		[Token(Token = "0x4000C49")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _SimpleLitPunctualStencilRef;

		[Token(Token = "0x4000C4A")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _SimpleLitPunctualStencilReadMask;

		[Token(Token = "0x4000C4B")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _SimpleLitPunctualStencilWriteMask;

		[Token(Token = "0x4000C4C")]
		[FieldOffset(Offset = "0x3C")]
		public static readonly int _LitDirStencilRef;

		[Token(Token = "0x4000C4D")]
		[FieldOffset(Offset = "0x40")]
		public static readonly int _LitDirStencilReadMask;

		[Token(Token = "0x4000C4E")]
		[FieldOffset(Offset = "0x44")]
		public static readonly int _LitDirStencilWriteMask;

		[Token(Token = "0x4000C4F")]
		[FieldOffset(Offset = "0x48")]
		public static readonly int _SimpleLitDirStencilRef;

		[Token(Token = "0x4000C50")]
		[FieldOffset(Offset = "0x4C")]
		public static readonly int _SimpleLitDirStencilReadMask;

		[Token(Token = "0x4000C51")]
		[FieldOffset(Offset = "0x50")]
		public static readonly int _SimpleLitDirStencilWriteMask;

		[Token(Token = "0x4000C52")]
		[FieldOffset(Offset = "0x54")]
		public static readonly int _ScreenToWorld;

		[Token(Token = "0x4000C53")]
		[FieldOffset(Offset = "0x58")]
		public static int _MainLightPosition;

		[Token(Token = "0x4000C54")]
		[FieldOffset(Offset = "0x5C")]
		public static int _MainLightColor;

		[Token(Token = "0x4000C55")]
		[FieldOffset(Offset = "0x60")]
		public static int _MainLightLayerMask;

		[Token(Token = "0x4000C56")]
		[FieldOffset(Offset = "0x64")]
		public static int _SpotLightScale;

		[Token(Token = "0x4000C57")]
		[FieldOffset(Offset = "0x68")]
		public static int _SpotLightBias;

		[Token(Token = "0x4000C58")]
		[FieldOffset(Offset = "0x6C")]
		public static int _SpotLightGuard;

		[Token(Token = "0x4000C59")]
		[FieldOffset(Offset = "0x70")]
		public static int _LightPosWS;

		[Token(Token = "0x4000C5A")]
		[FieldOffset(Offset = "0x74")]
		public static int _LightColor;

		[Token(Token = "0x4000C5B")]
		[FieldOffset(Offset = "0x78")]
		public static int _LightAttenuation;

		[Token(Token = "0x4000C5C")]
		[FieldOffset(Offset = "0x7C")]
		public static int _LightOcclusionProbInfo;

		[Token(Token = "0x4000C5D")]
		[FieldOffset(Offset = "0x80")]
		public static int _LightDirection;

		[Token(Token = "0x4000C5E")]
		[FieldOffset(Offset = "0x84")]
		public static int _LightFlags;

		[Token(Token = "0x4000C5F")]
		[FieldOffset(Offset = "0x88")]
		public static int _ShadowLightIndex;

		[Token(Token = "0x4000C60")]
		[FieldOffset(Offset = "0x8C")]
		public static int _LightLayerMask;

		[Token(Token = "0x4000C61")]
		[FieldOffset(Offset = "0x90")]
		public static int _CookieLightIndex;
	}

	[Token(Token = "0x2000203")]
	internal enum StencilDeferredPasses
	{
		[Token(Token = "0x4000C63")]
		StencilVolume,
		[Token(Token = "0x4000C64")]
		PunctualLit,
		[Token(Token = "0x4000C65")]
		PunctualSimpleLit,
		[Token(Token = "0x4000C66")]
		DirectionalLit,
		[Token(Token = "0x4000C67")]
		DirectionalSimpleLit,
		[Token(Token = "0x4000C68")]
		Fog,
		[Token(Token = "0x4000C69")]
		SSAOOnly
	}

	[Token(Token = "0x2000204")]
	internal enum ClusterDeferredPasses
	{
		[Token(Token = "0x4000C6B")]
		ClusteredLightsLit,
		[Token(Token = "0x4000C6C")]
		ClusteredLightsSimpleLit,
		[Token(Token = "0x4000C6D")]
		Fog
	}

	[Token(Token = "0x2000205")]
	internal struct InitParams
	{
		[Token(Token = "0x4000C6E")]
		[FieldOffset(Offset = "0x0")]
		public Material stencilDeferredMaterial;

		[Token(Token = "0x4000C6F")]
		[FieldOffset(Offset = "0x8")]
		public Material clusterDeferredMaterial;

		[Token(Token = "0x4000C70")]
		[FieldOffset(Offset = "0x10")]
		public LightCookieManager lightCookieManager;

		[Token(Token = "0x4000C71")]
		[FieldOffset(Offset = "0x18")]
		public bool deferredPlus;
	}

	[Token(Token = "0x2000206")]
	private class SetupLightPassData
	{
		[Token(Token = "0x4000C72")]
		[FieldOffset(Offset = "0x10")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000C73")]
		[FieldOffset(Offset = "0x18")]
		internal UniversalLightData lightData;

		[Token(Token = "0x4000C74")]
		[FieldOffset(Offset = "0x20")]
		internal DeferredLights deferredLights;

		[Token(Token = "0x4000C75")]
		[FieldOffset(Offset = "0x28")]
		internal Vector2Int cameraTargetSizeCopy;

		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x66BC6A0", Offset = "0x66BB6A0", VA = "0x66BC6A0")]
		public SetupLightPassData()
		{
		}
	}

	[Token(Token = "0x4000C09")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly string[] k_GBufferNames;

	[Token(Token = "0x4000C0A")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int[] k_GBufferShaderPropertyIDs;

	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] k_StencilDeferredPassNames;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string[] k_ClusterDeferredPassNames;

	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ushort k_InvalidLightOffset;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x28")]
	private static readonly string k_SetupLights;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x30")]
	private static readonly string k_DeferredPass;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x38")]
	private static readonly string k_DeferredShadingPass;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x40")]
	private static readonly string k_DeferredStencilPass;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x48")]
	private static readonly string k_DeferredFogPass;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x50")]
	private static readonly string k_SetupLightConstants;

	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x58")]
	private static readonly float kStencilShapeGuard;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x60")]
	private static readonly ProfilingSampler m_ProfilingSetupLights;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x68")]
	private static readonly ProfilingSampler m_ProfilingDeferredPass;

	[Token(Token = "0x4000C17")]
	[FieldOffset(Offset = "0x70")]
	private static readonly ProfilingSampler m_ProfilingSetupLightConstants;

	[Token(Token = "0x4000C24")]
	[FieldOffset(Offset = "0x38")]
	private RTHandle[] GbufferRTHandles;

	[Token(Token = "0x4000C2C")]
	[FieldOffset(Offset = "0x78")]
	private NativeArray<ushort> m_stencilVisLights;

	[Token(Token = "0x4000C2D")]
	[FieldOffset(Offset = "0x88")]
	private NativeArray<ushort> m_stencilVisLightOffsets;

	[Token(Token = "0x4000C2E")]
	[FieldOffset(Offset = "0x98")]
	private AdditionalLightsShadowCasterPass m_AdditionalLightsShadowCasterPass;

	[Token(Token = "0x4000C2F")]
	[FieldOffset(Offset = "0xA0")]
	private Mesh m_SphereMesh;

	[Token(Token = "0x4000C30")]
	[FieldOffset(Offset = "0xA8")]
	private Mesh m_HemisphereMesh;

	[Token(Token = "0x4000C31")]
	[FieldOffset(Offset = "0xB0")]
	private Mesh m_FullscreenMesh;

	[Token(Token = "0x4000C32")]
	[FieldOffset(Offset = "0xB8")]
	private Material m_StencilDeferredMaterial;

	[Token(Token = "0x4000C33")]
	[FieldOffset(Offset = "0xC0")]
	private Material m_ClusterDeferredMaterial;

	[Token(Token = "0x4000C34")]
	[FieldOffset(Offset = "0xC8")]
	private int[] m_StencilDeferredPasses;

	[Token(Token = "0x4000C35")]
	[FieldOffset(Offset = "0xD0")]
	private int[] m_ClusterDeferredPasses;

	[Token(Token = "0x4000C36")]
	[FieldOffset(Offset = "0xD8")]
	private Matrix4x4[] m_ScreenToWorld;

	[Token(Token = "0x4000C37")]
	[FieldOffset(Offset = "0xE0")]
	private ProfilingSampler m_ProfilingSamplerDeferredShadingPass;

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0xE8")]
	private ProfilingSampler m_ProfilingSamplerDeferredStencilPass;

	[Token(Token = "0x4000C39")]
	[FieldOffset(Offset = "0xF0")]
	private ProfilingSampler m_ProfilingSamplerDeferredFogPass;

	[Token(Token = "0x4000C3A")]
	[FieldOffset(Offset = "0xF8")]
	private LightCookieManager m_LightCookieManager;

	[Token(Token = "0x4000C3B")]
	[FieldOffset(Offset = "0x100")]
	private bool m_UseDeferredPlus;

	[Token(Token = "0x4000C3C")]
	[FieldOffset(Offset = "0x78")]
	private static ProfilingSampler s_SetupDeferredLights;

	[Token(Token = "0x170002AF")]
	internal int GBufferAlbedoIndex
	{
		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x66B3140", Offset = "0x66B2140", VA = "0x66B3140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B0")]
	internal int GBufferSpecularMetallicIndex
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x66B3150", Offset = "0x66B2150", VA = "0x66B3150")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B1")]
	internal int GBufferNormalSmoothnessIndex
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x66B3160", Offset = "0x66B2160", VA = "0x66B3160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B2")]
	internal int GBufferLightingIndex
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x66B3170", Offset = "0x66B2170", VA = "0x66B3170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B3")]
	internal int GbufferDepthIndex
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x66B3180", Offset = "0x66B2180", VA = "0x66B3180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B4")]
	internal int GBufferRenderingLayers
	{
		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x66B3190", Offset = "0x66B2190", VA = "0x66B3190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B5")]
	internal int GBufferShadowMask
	{
		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x66B32B0", Offset = "0x66B22B0", VA = "0x66B32B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B6")]
	internal int GBufferSliceCount
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x66B3360", Offset = "0x66B2360", VA = "0x66B3360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B7")]
	internal int GBufferInputAttachmentCount
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x66B3420", Offset = "0x66B2420", VA = "0x66B3420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B8")]
	internal bool UseShadowMask
	{
		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x66B3350", Offset = "0x66B2350", VA = "0x66B3350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B9")]
	internal bool UseRenderingLayers
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x66B3220", Offset = "0x66B2220", VA = "0x66B3220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BA")]
	internal RenderingLayerUtils.MaskSize RenderingLayerMaskSize
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x66B36A0", Offset = "0x66B26A0", VA = "0x66B36A0")]
		[CompilerGenerated]
		get
		{
			return default(RenderingLayerUtils.MaskSize);
		}
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x66B36B0", Offset = "0x66B26B0", VA = "0x66B36B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BB")]
	internal bool UseDecalLayers
	{
		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x66B36C0", Offset = "0x66B26C0", VA = "0x66B36C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x66B36D0", Offset = "0x66B26D0", VA = "0x66B36D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	internal bool UseLightLayers
	{
		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x66B3630", Offset = "0x66B2630", VA = "0x66B3630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BD")]
	internal bool UseFramebufferFetch
	{
		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x66B36E0", Offset = "0x66B26E0", VA = "0x66B36E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x66B36F0", Offset = "0x66B26F0", VA = "0x66B36F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	internal bool HasDepthPrepass
	{
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x66B3700", Offset = "0x66B2700", VA = "0x66B3700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x66B3710", Offset = "0x66B2710", VA = "0x66B3710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BF")]
	internal bool HasNormalPrepass
	{
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x66B3720", Offset = "0x66B2720", VA = "0x66B3720")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x66B3730", Offset = "0x66B2730", VA = "0x66B3730")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	internal bool HasRenderingLayerPrepass
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x66B3740", Offset = "0x66B2740", VA = "0x66B3740")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x66B3750", Offset = "0x66B2750", VA = "0x66B3750")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	internal bool AccurateGbufferNormals
	{
		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x66B3760", Offset = "0x66B2760", VA = "0x66B3760")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x66B3770", Offset = "0x66B2770", VA = "0x66B3770")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	internal MixedLightingSetup MixedLightingSetup
	{
		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x66B3780", Offset = "0x66B2780", VA = "0x66B3780")]
		[CompilerGenerated]
		get
		{
			return default(MixedLightingSetup);
		}
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x66B3790", Offset = "0x66B2790", VA = "0x66B3790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C3")]
	internal bool UseJobSystem
	{
		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x66B37A0", Offset = "0x66B27A0", VA = "0x66B37A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x66B37B0", Offset = "0x66B27B0", VA = "0x66B37B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C4")]
	internal int RenderWidth
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x66B37C0", Offset = "0x66B27C0", VA = "0x66B37C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x66B37D0", Offset = "0x66B27D0", VA = "0x66B37D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C5")]
	internal int RenderHeight
	{
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x66B37E0", Offset = "0x66B27E0", VA = "0x66B37E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x66B37F0", Offset = "0x66B27F0", VA = "0x66B37F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C6")]
	internal RTHandle[] GbufferAttachments
	{
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x66B3800", Offset = "0x66B2800", VA = "0x66B3800")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x66B3810", Offset = "0x66B2810", VA = "0x66B3810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C7")]
	internal TextureHandle[] GbufferTextureHandles
	{
		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x66B3820", Offset = "0x66B2820", VA = "0x66B3820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x66B3830", Offset = "0x66B2830", VA = "0x66B3830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	internal RTHandle[] DeferredInputAttachments
	{
		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x66B3840", Offset = "0x66B2840", VA = "0x66B3840")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x66B3850", Offset = "0x66B2850", VA = "0x66B3850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C9")]
	internal bool[] DeferredInputIsTransient
	{
		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x66B3860", Offset = "0x66B2860", VA = "0x66B3860")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x66B3870", Offset = "0x66B2870", VA = "0x66B3870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	internal RTHandle DepthAttachment
	{
		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x66B3880", Offset = "0x66B2880", VA = "0x66B3880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x66B3890", Offset = "0x66B2890", VA = "0x66B3890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CB")]
	internal RTHandle DepthCopyTexture
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x66B38A0", Offset = "0x66B28A0", VA = "0x66B38A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B17")]
		[Address(RVA = "0x66B38B0", Offset = "0x66B28B0", VA = "0x66B38B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CC")]
	internal GraphicsFormat[] GbufferFormats
	{
		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x66B38C0", Offset = "0x66B28C0", VA = "0x66B38C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x66B38D0", Offset = "0x66B28D0", VA = "0x66B38D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CD")]
	internal RTHandle DepthAttachmentHandle
	{
		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x66B38E0", Offset = "0x66B28E0", VA = "0x66B38E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0x66B38F0", Offset = "0x66B28F0", VA = "0x66B38F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x66B3430", Offset = "0x66B2430", VA = "0x66B3430")]
	internal GraphicsFormat GetGBufferFormat(int index)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x66B3900", Offset = "0x66B2900", VA = "0x66B3900")]
	internal DeferredLights(InitParams initParams, bool useNativeRenderPass = false)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x66B4280", Offset = "0x66B3280", VA = "0x66B4280")]
	internal void SetupRenderGraphLights(RenderGraph renderGraph, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x66B46C0", Offset = "0x66B36C0", VA = "0x66B46C0")]
	internal void SetupLights(CommandBuffer cmd, UniversalCameraData cameraData, Vector2Int cameraTargetSizeCopy, UniversalLightData lightData, bool isRenderGraph = false)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x66B5020", Offset = "0x66B4020", VA = "0x66B5020")]
	internal void ResolveMixedLightingMode(UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x66B5170", Offset = "0x66B4170", VA = "0x66B5170")]
	internal void DisableFramebufferFetchInput()
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x66B5560", Offset = "0x66B4560", VA = "0x66B5560")]
	internal void ReleaseGbufferResources()
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x66B55F0", Offset = "0x66B45F0", VA = "0x66B55F0")]
	internal void ReAllocateGBufferIfNeeded(RenderTextureDescriptor gbufferSlice, int gbufferIndex)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x66B5180", Offset = "0x66B4180", VA = "0x66B5180")]
	internal void CreateGbufferResources()
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x66B57D0", Offset = "0x66B47D0", VA = "0x66B57D0")]
	internal void CreateGbufferResourcesRenderGraph(RenderGraph renderGraph, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x66B5DE0", Offset = "0x66B4DE0", VA = "0x66B5DE0")]
	internal void UpdateDeferredInputAttachments()
	{
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x66B6440", Offset = "0x66B5440", VA = "0x66B6440")]
	internal bool IsRuntimeSupportedThisFrame()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x66B6590", Offset = "0x66B5590", VA = "0x66B6590")]
	public void Setup(AdditionalLightsShadowCasterPass additionalLightsShadowCasterPass, bool hasDepthPrepass, bool hasNormalPrepass, bool hasRenderingLayerPrepass, RTHandle depthCopyTexture, RTHandle depthAttachment, RTHandle colorAttachment)
	{
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x66B68A0", Offset = "0x66B58A0", VA = "0x66B68A0")]
	internal void Setup(AdditionalLightsShadowCasterPass additionalLightsShadowCasterPass)
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x66B68C0", Offset = "0x66B58C0", VA = "0x66B68C0")]
	public void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x66B6980", Offset = "0x66B5980", VA = "0x66B6980")]
	internal static StencilState OverwriteStencil(StencilState s, int stencilWriteMask)
	{
		return default(StencilState);
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x66B6B20", Offset = "0x66B5B20", VA = "0x66B6B20")]
	internal static RenderStateBlock OverwriteStencil(RenderStateBlock block, int stencilWriteMask, int stencilRef)
	{
		return default(RenderStateBlock);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x66B6DB0", Offset = "0x66B5DB0", VA = "0x66B6DB0")]
	internal void ExecuteDeferredPass(RasterCommandBuffer cmd, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x66B5010", Offset = "0x66B4010", VA = "0x66B5010")]
	private void SetupShaderLightConstants(CommandBuffer cmd, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x66B8140", Offset = "0x66B7140", VA = "0x66B8140")]
	private void SetupMainLightConstants(CommandBuffer cmd, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x66B84B0", Offset = "0x66B74B0", VA = "0x66B84B0")]
	internal Matrix4x4[] GetScreenToWorldMatrix(UniversalCameraData cameraData)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x66B7300", Offset = "0x66B6300", VA = "0x66B7300")]
	private void SetupMatrixConstants(RasterCommandBuffer cmd, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x66B4B90", Offset = "0x66B3B90", VA = "0x66B4B90")]
	private void PrecomputeLights(out NativeArray<ushort> stencilVisLights, out NativeArray<ushort> stencilVisLightOffsets, ref NativeArray<VisibleLight> visibleLights, bool hasAdditionalLights)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x66B7390", Offset = "0x66B6390", VA = "0x66B7390")]
	private bool HasStencilLightsOfType(LightType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x66B75A0", Offset = "0x66B65A0", VA = "0x66B75A0")]
	private void RenderClusterLights(RasterCommandBuffer cmd, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x66B7A40", Offset = "0x66B6A40", VA = "0x66B7A40")]
	private void RenderStencilLights(RasterCommandBuffer cmd, UniversalLightData lightData, UniversalShadowData shadowData, bool stripShadowsOffVariants)
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x66B8C80", Offset = "0x66B7C80", VA = "0x66B8C80")]
	private void RenderStencilDirectionalLights(RasterCommandBuffer cmd, bool stripShadowsOffVariants, UniversalLightData lightData, UniversalShadowData shadowData, NativeArray<VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager, int mainLightIndex)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x66B9610", Offset = "0x66B8610", VA = "0x66B9610")]
	private void RenderStencilPointLights(RasterCommandBuffer cmd, bool stripShadowsOffVariants, UniversalLightData lightData, UniversalShadowData shadowData, NativeArray<VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x66B9ED0", Offset = "0x66B8ED0", VA = "0x66B9ED0")]
	private void RenderStencilSpotLights(RasterCommandBuffer cmd, bool stripShadowsOffVariants, UniversalLightData lightData, UniversalShadowData shadowData, NativeArray<VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x66B7400", Offset = "0x66B6400", VA = "0x66B7400")]
	private void RenderSSAOBeforeShading(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x66B7EC0", Offset = "0x66B6EC0", VA = "0x66B7EC0")]
	private void RenderFog(RasterCommandBuffer cmd, bool isOrthographic)
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x66B3E90", Offset = "0x66B2E90", VA = "0x66B3E90")]
	private void InitStencilDeferredMaterial()
	{
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x66B3C20", Offset = "0x66B2C20", VA = "0x66B3C20")]
	private void InitClusterDeferredMaterial()
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x66BAB60", Offset = "0x66B9B60", VA = "0x66BAB60")]
	private static Mesh CreateSphereMesh()
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x66BB1D0", Offset = "0x66BA1D0", VA = "0x66BB1D0")]
	private static Mesh CreateHemisphereMesh()
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x66B8B30", Offset = "0x66B7B30", VA = "0x66B8B30")]
	private static Mesh CreateFullscreenMesh()
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x66B8420", Offset = "0x66B7420", VA = "0x66B8420")]
	private void SetRenderingLayersMask(RasterCommandBuffer cmd, Light light, int shaderPropertyID)
	{
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x66BAA00", Offset = "0x66B9A00", VA = "0x66BAA00")]
	private void SetAdditionalLightsShadowsKeyword(ref RasterCommandBuffer cmd, bool stripShadowsOffVariants, bool additionalLightShadowsEnabled, bool hasDeferredShadows, bool shouldOverride, ref bool lastShadowsKeyword)
	{
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x66BAAA0", Offset = "0x66B9AA0", VA = "0x66BAAA0")]
	private void SetSoftShadowsKeyword(RasterCommandBuffer cmd, UniversalShadowData shadowData, Light light, bool hasDeferredShadows, bool shouldOverride, ref bool lastHasSoftShadow)
	{
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x66BA8E0", Offset = "0x66B98E0", VA = "0x66BA8E0")]
	private void SetLightCookiesKeyword(RasterCommandBuffer cmd, int visLightIndex, bool hasLightCookieManager, bool shouldOverride, ref bool lastLightCookieState, ref int lastCookieLightIndex)
	{
	}
}
