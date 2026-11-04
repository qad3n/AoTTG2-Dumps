// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DeferredLights
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B0")]
	internal int GBufferSpecularMetallicIndex
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B1")]
	internal int GBufferNormalSmoothnessIndex
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B2")]
	internal int GBufferLightingIndex
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B3")]
	internal int GbufferDepthIndex
	{
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x2CC44B0", Offset = "0x2CC2AB0", VA = "0x182CC44B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B4")]
	internal int GBufferRenderingLayers
	{
		[Token(Token = "0x6000AEE")]
		[Address(RVA = "0x2CC42F0", Offset = "0x2CC28F0", VA = "0x182CC42F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B5")]
	internal int GBufferShadowMask
	{
		[Token(Token = "0x6000AEF")]
		[Address(RVA = "0x2CC4370", Offset = "0x2CC2970", VA = "0x182CC4370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B6")]
	internal int GBufferSliceCount
	{
		[Token(Token = "0x6000AF0")]
		[Address(RVA = "0x2CC4410", Offset = "0x2CC2A10", VA = "0x182CC4410")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B7")]
	internal int GBufferInputAttachmentCount
	{
		[Token(Token = "0x6000AF1")]
		[Address(RVA = "0x2CC42E0", Offset = "0x2CC28E0", VA = "0x182CC42E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002B8")]
	internal bool UseShadowMask
	{
		[Token(Token = "0x6000AF3")]
		[Address(RVA = "0x2CC45B0", Offset = "0x2CC2BB0", VA = "0x182CC45B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B9")]
	internal bool UseRenderingLayers
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x2CC4540", Offset = "0x2CC2B40", VA = "0x182CC4540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BA")]
	internal RenderingLayerUtils.MaskSize RenderingLayerMaskSize
	{
		[Token(Token = "0x6000AF5")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(RenderingLayerUtils.MaskSize);
		}
		[Token(Token = "0x6000AF6")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BB")]
	internal bool UseDecalLayers
	{
		[Token(Token = "0x6000AF7")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AF8")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BC")]
	internal bool UseLightLayers
	{
		[Token(Token = "0x6000AF9")]
		[Address(RVA = "0x2CC44E0", Offset = "0x2CC2AE0", VA = "0x182CC44E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002BD")]
	internal bool UseFramebufferFetch
	{
		[Token(Token = "0x6000AFA")]
		[Address(RVA = "0x1A78700", Offset = "0x1A76D00", VA = "0x181A78700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x1A78720", Offset = "0x1A76D20", VA = "0x181A78720")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	internal bool HasDepthPrepass
	{
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x29532F0", Offset = "0x29518F0", VA = "0x1829532F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x2CC45C0", Offset = "0x2CC2BC0", VA = "0x182CC45C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BF")]
	internal bool HasNormalPrepass
	{
		[Token(Token = "0x6000AFE")]
		[Address(RVA = "0x2CC44D0", Offset = "0x2CC2AD0", VA = "0x182CC44D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x2CC45D0", Offset = "0x2CC2BD0", VA = "0x182CC45D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	internal bool HasRenderingLayerPrepass
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	internal bool AccurateGbufferNormals
	{
		[Token(Token = "0x6000B02")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	internal MixedLightingSetup MixedLightingSetup
	{
		[Token(Token = "0x6000B04")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(MixedLightingSetup);
		}
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C3")]
	internal bool UseJobSystem
	{
		[Token(Token = "0x6000B06")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C4")]
	internal int RenderWidth
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C5")]
	internal int RenderHeight
	{
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C6")]
	internal RTHandle[] GbufferAttachments
	{
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C7")]
	internal TextureHandle[] GbufferTextureHandles
	{
		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	internal RTHandle[] DeferredInputAttachments
	{
		[Token(Token = "0x6000B10")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B11")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C9")]
	internal bool[] DeferredInputIsTransient
	{
		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	internal RTHandle DepthAttachment
	{
		[Token(Token = "0x6000B14")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B15")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CB")]
	internal RTHandle DepthCopyTexture
	{
		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B17")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CC")]
	internal GraphicsFormat[] GbufferFormats
	{
		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002CD")]
	internal RTHandle DepthAttachmentHandle
	{
		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x2CBE150", Offset = "0x2CBC750", VA = "0x182CBE150")]
	internal GraphicsFormat GetGBufferFormat(int index)
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x2CC3FA0", Offset = "0x2CC25A0", VA = "0x182CC3FA0")]
	internal DeferredLights(InitParams initParams, bool useNativeRenderPass = false)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x2CC2BB0", Offset = "0x2CC11B0", VA = "0x182CC2BB0")]
	internal void SetupRenderGraphLights(RenderGraph renderGraph, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x2CC23F0", Offset = "0x2CC09F0", VA = "0x182CC23F0")]
	internal void SetupLights(CommandBuffer cmd, UniversalCameraData cameraData, Vector2Int cameraTargetSizeCopy, UniversalLightData lightData, bool isRenderGraph = false)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x2CC1FA0", Offset = "0x2CC05A0", VA = "0x182CC1FA0")]
	internal void ResolveMixedLightingMode(UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x2CBDB40", Offset = "0x2CBC140", VA = "0x182CBDB40")]
	internal void DisableFramebufferFetchInput()
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x2CBF950", Offset = "0x2CBDF50", VA = "0x182CBF950")]
	internal void ReleaseGbufferResources()
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x2CBF750", Offset = "0x2CBDD50", VA = "0x182CBF750")]
	internal void ReAllocateGBufferIfNeeded(RenderTextureDescriptor gbufferSlice, int gbufferIndex)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x2CBC9B0", Offset = "0x2CBAFB0", VA = "0x182CBC9B0")]
	internal void CreateGbufferResources()
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x2CBC5B0", Offset = "0x2CBABB0", VA = "0x182CBC5B0")]
	internal void CreateGbufferResourcesRenderGraph(RenderGraph renderGraph, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x2CC3260", Offset = "0x2CC1860", VA = "0x182CC3260")]
	internal void UpdateDeferredInputAttachments()
	{
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x2CBED70", Offset = "0x2CBD370", VA = "0x182CBED70")]
	internal bool IsRuntimeSupportedThisFrame()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x2CC2F70", Offset = "0x2CC1570", VA = "0x182CC2F70")]
	public void Setup(AdditionalLightsShadowCasterPass additionalLightsShadowCasterPass, bool hasDepthPrepass, bool hasNormalPrepass, bool hasRenderingLayerPrepass, RTHandle depthCopyTexture, RTHandle depthAttachment, RTHandle colorAttachment)
	{
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
	internal void Setup(AdditionalLightsShadowCasterPass additionalLightsShadowCasterPass)
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x2CBEE00", Offset = "0x2CBD400", VA = "0x182CBEE00")]
	public void OnCameraCleanup(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x2CBF1A0", Offset = "0x2CBD7A0", VA = "0x182CBF1A0")]
	internal static StencilState OverwriteStencil(StencilState s, int stencilWriteMask)
	{
		return default(StencilState);
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x2CBEEC0", Offset = "0x2CBD4C0", VA = "0x182CBEEC0")]
	internal static RenderStateBlock OverwriteStencil(RenderStateBlock block, int stencilWriteMask, int stencilRef)
	{
		return default(RenderStateBlock);
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x2CBDB50", Offset = "0x2CBC150", VA = "0x182CBDB50")]
	internal void ExecuteDeferredPass(RasterCommandBuffer cmd, UniversalCameraData cameraData, UniversalLightData lightData, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x2CC2F60", Offset = "0x2CC1560", VA = "0x182CC2F60")]
	private void SetupShaderLightConstants(CommandBuffer cmd, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x2CC2840", Offset = "0x2CC0E40", VA = "0x182CC2840")]
	private void SetupMainLightConstants(CommandBuffer cmd, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x2CBE270", Offset = "0x2CBC870", VA = "0x182CBE270")]
	internal Matrix4x4[] GetScreenToWorldMatrix(UniversalCameraData cameraData)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x2CC2B20", Offset = "0x2CC1120", VA = "0x182CC2B20")]
	private void SetupMatrixConstants(RasterCommandBuffer cmd, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x2CBF3A0", Offset = "0x2CBD9A0", VA = "0x182CBF3A0")]
	private void PrecomputeLights(out NativeArray<ushort> stencilVisLights, out NativeArray<ushort> stencilVisLightOffsets, ref NativeArray<VisibleLight> visibleLights, bool hasAdditionalLights)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x2CBE630", Offset = "0x2CBCC30", VA = "0x182CBE630")]
	private bool HasStencilLightsOfType(LightType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x2CBF9F0", Offset = "0x2CBDFF0", VA = "0x182CBF9F0")]
	private void RenderClusterLights(RasterCommandBuffer cmd, UniversalShadowData shadowData)
	{
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x2CC0960", Offset = "0x2CBEF60", VA = "0x182CC0960")]
	private void RenderStencilLights(RasterCommandBuffer cmd, UniversalLightData lightData, UniversalShadowData shadowData, bool stripShadowsOffVariants)
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x2CC01B0", Offset = "0x2CBE7B0", VA = "0x182CC01B0")]
	private void RenderStencilDirectionalLights(RasterCommandBuffer cmd, bool stripShadowsOffVariants, UniversalLightData lightData, UniversalShadowData shadowData, NativeArray<VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager, int mainLightIndex)
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x2CC0CE0", Offset = "0x2CBF2E0", VA = "0x182CC0CE0")]
	private void RenderStencilPointLights(RasterCommandBuffer cmd, bool stripShadowsOffVariants, UniversalLightData lightData, UniversalShadowData shadowData, NativeArray<VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x2CC15B0", Offset = "0x2CBFBB0", VA = "0x182CC15B0")]
	private void RenderStencilSpotLights(RasterCommandBuffer cmd, bool stripShadowsOffVariants, UniversalLightData lightData, UniversalShadowData shadowData, NativeArray<VisibleLight> visibleLights, bool hasAdditionalLightPass, bool hasLightCookieManager)
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x2CC0050", Offset = "0x2CBE650", VA = "0x182CC0050")]
	private void RenderSSAOBeforeShading(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x2CBFE20", Offset = "0x2CBE420", VA = "0x182CBFE20")]
	private void RenderFog(RasterCommandBuffer cmd, bool isOrthographic)
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x2CBE930", Offset = "0x2CBCF30", VA = "0x182CBE930")]
	private void InitStencilDeferredMaterial()
	{
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x2CBE6A0", Offset = "0x2CBCCA0", VA = "0x182CBE6A0")]
	private void InitClusterDeferredMaterial()
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x2CBD480", Offset = "0x2CBBA80", VA = "0x182CBD480")]
	private static Mesh CreateSphereMesh()
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x2CBCDF0", Offset = "0x2CBB3F0", VA = "0x182CBCDF0")]
	private static Mesh CreateHemisphereMesh()
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x2CBC460", Offset = "0x2CBAA60", VA = "0x182CBC460")]
	private static Mesh CreateFullscreenMesh()
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x2CC22A0", Offset = "0x2CC08A0", VA = "0x182CC22A0")]
	private void SetRenderingLayersMask(RasterCommandBuffer cmd, Light light, int shaderPropertyID)
	{
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x2CC2100", Offset = "0x2CC0700", VA = "0x182CC2100")]
	private void SetAdditionalLightsShadowsKeyword(ref RasterCommandBuffer cmd, bool stripShadowsOffVariants, bool additionalLightShadowsEnabled, bool hasDeferredShadows, bool shouldOverride, ref bool lastShadowsKeyword)
	{
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x2CC2340", Offset = "0x2CC0940", VA = "0x182CC2340")]
	private void SetSoftShadowsKeyword(RasterCommandBuffer cmd, UniversalShadowData shadowData, Light light, bool hasDeferredShadows, bool shouldOverride, ref bool lastHasSoftShadow)
	{
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x2CC2190", Offset = "0x2CC0790", VA = "0x182CC2190")]
	private void SetLightCookiesKeyword(RasterCommandBuffer cmd, int visLightIndex, bool hasLightCookieManager, bool shouldOverride, ref bool lastLightCookieState, ref int lastCookieLightIndex)
	{
	}
}
