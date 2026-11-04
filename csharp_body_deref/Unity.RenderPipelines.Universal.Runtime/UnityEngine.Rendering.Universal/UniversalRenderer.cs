// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.Universal.Internal;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000C8")]
public sealed class UniversalRenderer : ScriptableRenderer
{
	[Token(Token = "0x20000C9")]
	private struct RenderPassInputSummary
	{
		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0x0")]
		internal bool requiresDepthTexture;

		[Token(Token = "0x4000493")]
		[FieldOffset(Offset = "0x1")]
		internal bool requiresDepthPrepass;

		[Token(Token = "0x4000494")]
		[FieldOffset(Offset = "0x2")]
		internal bool requiresNormalsTexture;

		[Token(Token = "0x4000495")]
		[FieldOffset(Offset = "0x3")]
		internal bool requiresColorTexture;

		[Token(Token = "0x4000496")]
		[FieldOffset(Offset = "0x4")]
		internal bool requiresMotionVectors;

		[Token(Token = "0x4000497")]
		[FieldOffset(Offset = "0x8")]
		internal RenderPassEvent requiresDepthNormalAtEvent;

		[Token(Token = "0x4000498")]
		[FieldOffset(Offset = "0xC")]
		internal RenderPassEvent requiresDepthTextureEarliestEvent;
	}

	[Token(Token = "0x20000CA")]
	private class CopyToDebugTexturePassData
	{
		[Token(Token = "0x4000499")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle src;

		[Token(Token = "0x400049A")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle dest;

		[Token(Token = "0x6000586")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CopyToDebugTexturePassData()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private readonly struct ClearCameraParams
	{
		[Token(Token = "0x400049B")]
		[FieldOffset(Offset = "0x0")]
		internal readonly bool mustClearColor;

		[Token(Token = "0x400049C")]
		[FieldOffset(Offset = "0x1")]
		internal readonly bool mustClearDepth;

		[Token(Token = "0x400049D")]
		[FieldOffset(Offset = "0x4")]
		internal readonly Color clearValue;

		[Token(Token = "0x6000587")]
		[Address(RVA = "0x2C37150", Offset = "0x2C35750", VA = "0x182C37150")]
		internal ClearCameraParams(bool clearColor, bool clearDepth, Color clearVal)
		{
		}
	}

	[Token(Token = "0x20000CC")]
	private enum OccluderPass
	{
		[Token(Token = "0x400049F")]
		None,
		[Token(Token = "0x40004A0")]
		DepthPrepass,
		[Token(Token = "0x40004A1")]
		ForwardOpaque,
		[Token(Token = "0x40004A2")]
		GBuffer
	}

	[Token(Token = "0x20000CD")]
	private enum DepthCopySchedule
	{
		[Token(Token = "0x40004A4")]
		DuringPrepass,
		[Token(Token = "0x40004A5")]
		AfterPrepass,
		[Token(Token = "0x40004A6")]
		AfterGBuffer,
		[Token(Token = "0x40004A7")]
		AfterOpaques,
		[Token(Token = "0x40004A8")]
		AfterSkybox,
		[Token(Token = "0x40004A9")]
		AfterTransparents,
		[Token(Token = "0x40004AA")]
		None
	}

	[Token(Token = "0x20000CE")]
	private enum ColorCopySchedule
	{
		[Token(Token = "0x40004AC")]
		AfterSkybox,
		[Token(Token = "0x40004AD")]
		None
	}

	[Token(Token = "0x20000CF")]
	private struct TextureCopySchedules
	{
		[Token(Token = "0x40004AE")]
		[FieldOffset(Offset = "0x0")]
		internal DepthCopySchedule depth;

		[Token(Token = "0x40004AF")]
		[FieldOffset(Offset = "0x4")]
		internal ColorCopySchedule color;
	}

	[Token(Token = "0x4000448")]
	private const int k_FinalBlitPassQueueOffset = 1;

	[Token(Token = "0x4000449")]
	private const int k_AfterFinalBlitPassQueueOffset = 2;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x80")]
	private DepthOnlyPass m_DepthPrepass;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x88")]
	private DepthNormalOnlyPass m_DepthNormalPrepass;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x90")]
	private MotionVectorRenderPass m_MotionVectorPass;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x98")]
	private MainLightShadowCasterPass m_MainLightShadowCasterPass;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0xA0")]
	private AdditionalLightsShadowCasterPass m_AdditionalLightsShadowCasterPass;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0xA8")]
	private GBufferPass m_GBufferPass;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0xB0")]
	private DeferredPass m_DeferredPass;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0xB8")]
	private DrawObjectsPass m_RenderOpaqueForwardOnlyPass;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0xC0")]
	private DrawObjectsPass m_RenderOpaqueForwardPass;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0xC8")]
	private DrawObjectsWithRenderingLayersPass m_RenderOpaqueForwardWithRenderingLayersPass;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0xD0")]
	private DrawSkyboxPass m_DrawSkyboxPass;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0xD8")]
	private CopyDepthPass m_CopyDepthPass;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0xE0")]
	private CopyColorPass m_CopyColorPass;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0xE8")]
	private TransparentSettingsPass m_TransparentSettingsPass;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0xF0")]
	private DrawObjectsPass m_RenderTransparentForwardPass;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0xF8")]
	private InvokeOnRenderObjectCallbackPass m_OnRenderObjectCallbackPass;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x100")]
	private FinalBlitPass m_FinalBlitPass;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x108")]
	private FinalBlitPass m_OffscreenUICoverPrepass;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x110")]
	private CapturePass m_CapturePass;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x118")]
	private XROcclusionMeshPass m_XROcclusionMeshPass;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x120")]
	private CopyDepthPass m_XRCopyDepthPass;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x128")]
	private XRDepthMotionPass m_XRDepthMotionPass;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x130")]
	private DrawScreenSpaceUIPass m_DrawOffscreenUIPass;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x138")]
	private DrawScreenSpaceUIPass m_DrawOverlayUIPass;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x140")]
	private CopyColorPass m_HistoryRawColorCopyPass;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x148")]
	private CopyDepthPass m_HistoryRawDepthCopyPass;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x150")]
	private StencilCrossFadeRenderPass m_StencilCrossFadeRenderPass;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x158")]
	private RTHandle m_TargetColorHandle;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x160")]
	private RTHandle m_TargetDepthHandle;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x168")]
	private ForwardLights m_ForwardLights;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x170")]
	private DeferredLights m_DeferredLights;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x178")]
	private RenderingMode m_RenderingMode;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x17C")]
	private DepthPrimingMode m_DepthPrimingMode;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x180")]
	private CopyDepthMode m_CopyDepthMode;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x184")]
	private DepthFormat m_CameraDepthAttachmentFormat;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x188")]
	private DepthFormat m_CameraDepthTextureFormat;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x18C")]
	private StencilState m_DefaultStencilState;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x198")]
	private LightCookieManager m_LightCookieManager;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x1A0")]
	private IntermediateTextureMode m_IntermediateTextureMode;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x1A8")]
	private Material m_BlitMaterial;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x1B0")]
	private Material m_BlitHDRMaterial;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x1B8")]
	private Material m_SamplingMaterial;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x1C0")]
	private Material m_BlitOffscreenUICoverMaterial;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x1C8")]
	private Material m_StencilDeferredMaterial;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x1D0")]
	private Material m_ClusterDeferredMaterial;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x1D8")]
	private Material m_CameraMotionVecMaterial;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x1F0")]
	private Material m_DebugBlitMaterial;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x0")]
	private static RTHandle[] m_RenderGraphCameraColorHandles;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x8")]
	private static RTHandle m_RenderGraphCameraDepthHandle;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x10")]
	private static int m_CurrentColorHandle;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x18")]
	private static RTHandle m_RenderGraphDebugTextureHandle;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x20")]
	private static RTHandle m_OffscreenUIColorHandle;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x1F8")]
	private bool m_RequiresRenderingLayer;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x1FC")]
	private RenderingLayerUtils.Event m_RenderingLayersEvent;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x200")]
	private RenderingLayerUtils.MaskSize m_RenderingLayersMaskSize;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x204")]
	private bool m_RenderingLayerProvidesRenderObjectPass;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x205")]
	private bool m_RenderingLayerProvidesByDepthNormalPass;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x208")]
	private string m_RenderingLayersTextureName;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x210")]
	private ColorGradingLutPass m_ColorGradingLutPassRenderGraph;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x218")]
	private PostProcessPassRenderGraph m_PostProcessPassRenderGraph;

	[Token(Token = "0x400048A")]
	private const string _CameraTargetAttachmentAName = "_CameraTargetAttachmentA";

	[Token(Token = "0x400048B")]
	private const string _CameraTargetAttachmentBName = "_CameraTargetAttachmentB";

	[Token(Token = "0x400048C")]
	private const string _SingleCameraTargetAttachmentName = "_CameraTargetAttachment";

	[Token(Token = "0x400048D")]
	private const string _CameraDepthAttachmentName = "_CameraDepthAttachment";

	[Token(Token = "0x400048E")]
	private const string _CameraColorUpscaled = "_CameraColorUpscaled";

	[Token(Token = "0x400048F")]
	private const string _CameraColorAfterPostProcessingName = "_CameraColorAfterPostProcessing";

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x220")]
	private bool m_IssuedGPUOcclusionUnsupportedMsg;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x28")]
	private static bool m_RequiresIntermediateAttachments;

	[Token(Token = "0x17000171")]
	internal RenderingMode renderingModeRequested
	{
		[Token(Token = "0x6000525")]
		[Address(RVA = "0x2602C40", Offset = "0x2601240", VA = "0x182602C40")]
		get
		{
			return default(RenderingMode);
		}
	}

	[Token(Token = "0x17000172")]
	private bool deferredModeUnsupported
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x2C4F920", Offset = "0x2C4DF20", VA = "0x182C4F920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	internal RenderingMode renderingModeActual
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x2C4FB80", Offset = "0x2C4E180", VA = "0x182C4FB80")]
		get
		{
			return default(RenderingMode);
		}
	}

	[Token(Token = "0x17000174")]
	internal bool usesDeferredLighting
	{
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x2C4FD50", Offset = "0x2C4E350", VA = "0x182C4FD50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	internal bool usesClusterLightLoop
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x2C4FD10", Offset = "0x2C4E310", VA = "0x182C4FD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000176")]
	internal bool accurateGbufferNormals
	{
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x2C4F7A0", Offset = "0x2C4DDA0", VA = "0x182C4F7A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	internal bool needTransparencyPass
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x2C4F9A0", Offset = "0x2C4DFA0", VA = "0x182C4F9A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000178")]
	public DepthPrimingMode depthPrimingMode
	{
		[Token(Token = "0x600052C")]
		[Address(RVA = "0x2C4F980", Offset = "0x2C4DF80", VA = "0x182C4F980")]
		get
		{
			return default(DepthPrimingMode);
		}
		[Token(Token = "0x600052D")]
		[Address(RVA = "0x2C4FD90", Offset = "0x2C4E390", VA = "0x182C4FD90")]
		set
		{
		}
	}

	[Token(Token = "0x17000179")]
	internal bool isPostProcessPassRenderGraphActive
	{
		[Token(Token = "0x600052E")]
		[Address(RVA = "0x2C4F990", Offset = "0x2C4DF90", VA = "0x182C4F990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	internal DeferredLights deferredLights
	{
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x2602B00", Offset = "0x2601100", VA = "0x182602B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	internal LayerMask prepassLayerMask
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x2C4FB70", Offset = "0x2C4E170", VA = "0x182C4FB70")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x2C4FDB0", Offset = "0x2C4E3B0", VA = "0x182C4FDB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017C")]
	internal LayerMask opaqueLayerMask
	{
		[Token(Token = "0x6000532")]
		[Address(RVA = "0x2602EA0", Offset = "0x26014A0", VA = "0x182602EA0")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000533")]
		[Address(RVA = "0x2C4FDA0", Offset = "0x2C4E3A0", VA = "0x182C4FDA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	internal LayerMask transparentLayerMask
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x2C4FD00", Offset = "0x2C4E300", VA = "0x182C4FD00")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000535")]
		[Address(RVA = "0x2C4FDD0", Offset = "0x2C4E3D0", VA = "0x182C4FDD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	internal bool shadowTransparentReceive
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x2C4FC60", Offset = "0x2C4E260", VA = "0x182C4FC60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x2C4FDC0", Offset = "0x2C4E3C0", VA = "0x182C4FDC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	internal GraphicsFormat cameraDepthTextureFormat
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x2C4F820", Offset = "0x2C4DE20", VA = "0x182C4F820")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x17000180")]
	internal GraphicsFormat cameraDepthAttachmentFormat
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x2C4F7C0", Offset = "0x2C4DDC0", VA = "0x182C4F7C0")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x17000181")]
	internal override bool supportsNativeRenderPassRendergraphCompiler
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000182")]
	private RTHandle currentRenderGraphCameraColorHandle
	{
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x2C4F880", Offset = "0x2C4DE80", VA = "0x182C4F880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000183")]
	private RTHandle nextRenderGraphCameraColorHandle
	{
		[Token(Token = "0x6000557")]
		[Address(RVA = "0x2C4FA60", Offset = "0x2C4E060", VA = "0x182C4FA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override bool supportsGPUOcclusion
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x2C4FC70", Offset = "0x2C4E270", VA = "0x182C4FC70", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Setup(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void SetupLights(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x2C4DA80", Offset = "0x2C4C080", VA = "0x182C4DA80", Slot = "7")]
	public override int SupportedCameraStackingTypes()
	{
		return default(int);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
	protected internal override bool SupportsMotionVectors()
	{
		return default(bool);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
	protected internal override bool SupportsCameraOpaque()
	{
		return default(bool);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
	protected internal override bool SupportsCameraNormals()
	{
		return default(bool);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x2C4E0C0", Offset = "0x2C4C6C0", VA = "0x182C4E0C0")]
	public UniversalRenderer(UniversalRendererData data)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x2C45330", Offset = "0x2C43930", VA = "0x182C45330", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x2C4B420", Offset = "0x2C49A20", VA = "0x182C4B420", Slot = "12")]
	internal override void ReleaseRenderTargets()
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x2C46CF0", Offset = "0x2C452F0", VA = "0x182C46CF0")]
	public static bool IsOffscreenDepthTexture(ref CameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x2C46C60", Offset = "0x2C45260", VA = "0x182C46C60")]
	public static bool IsOffscreenDepthTexture(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private static bool IsWebGL()
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x2C46C40", Offset = "0x2C45240", VA = "0x182C46C40")]
	private static bool IsGLESDevice()
	{
		return default(bool);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x2C46BE0", Offset = "0x2C451E0", VA = "0x182C46BE0")]
	private static bool IsGLDevice()
	{
		return default(bool);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x2C45D80", Offset = "0x2C44380", VA = "0x182C45D80")]
	private static bool HasActiveRenderFeatures(List<ScriptableRendererFeature> rendererFeatures)
	{
		return default(bool);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x2C45EC0", Offset = "0x2C444C0", VA = "0x182C45EC0")]
	private static bool HasPassesRequiringIntermediateTexture(List<ScriptableRenderPass> activeRenderPassQueue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x2C4D7B0", Offset = "0x2C4BDB0", VA = "0x182C4D7B0")]
	private static void SetupVFXCameraBuffer(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x2C4C3D0", Offset = "0x2C4A9D0", VA = "0x182C4C3D0", Slot = "13")]
	public override void SetupCullingParameters(ref ScriptableCullingParameters cullingParameters, ref CameraData cameraData)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	public override void FinishRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x2C45920", Offset = "0x2C43F20", VA = "0x182C45920")]
	private static RenderPassInputSummary GetRenderPassInputs(bool isTemporalAAEnabled, bool postProcessingEnabled, bool isSceneViewCamera, bool renderingLayerProvidesByDepthNormalPass, List<ScriptableRenderPass> activeRenderPassQueue, MotionVectorRenderPass motionVectorPass)
	{
		return default(RenderPassInputSummary);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x2C4B2F0", Offset = "0x2C498F0", VA = "0x182C4B2F0")]
	internal static bool PlatformRequiresExplicitMsaaResolve()
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x2C4BC70", Offset = "0x2C4A270", VA = "0x182C4BC70")]
	private static bool RequiresIntermediateColorTexture(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool usesDeferredLighting, bool applyPostProcessing)
	{
		return default(bool);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x2C46DF0", Offset = "0x2C453F0", VA = "0x182C46DF0")]
	private static bool IsScalableBufferManagerUsed(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x2C42410", Offset = "0x2C40A10", VA = "0x182C42410")]
	private static bool CanCopyDepth(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x2C45100", Offset = "0x2C43700", VA = "0x182C45100")]
	private bool DebugHandlerRequireDepthPass(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x2C43020", Offset = "0x2C41620", VA = "0x182C43020")]
	private void CreateDebugTexture(RenderTextureDescriptor descriptor)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x2C422F0", Offset = "0x2C408F0", VA = "0x182C422F0")]
	private Rect CalculateUVRect(UniversalCameraData cameraData, float width, float height)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x2C42360", Offset = "0x2C40960", VA = "0x182C42360")]
	private Rect CalculateUVRect(UniversalCameraData cameraData, int textureHeightPercent)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x2C42770", Offset = "0x2C40D70", VA = "0x182C42770")]
	private void CorrectForTextureAspectRatio(ref float width, ref float height, float sourceWidth, float sourceHeight)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x2C4C7B0", Offset = "0x2C4ADB0", VA = "0x182C4C7B0")]
	private void SetupRenderGraphFinalPassDebug(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x2C4C070", Offset = "0x2C4A670", VA = "0x182C4C070")]
	private void SetupAfterPostRenderGraphFinalPassDebug(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x2C41ED0", Offset = "0x2C404D0", VA = "0x182C41ED0")]
	private void BlitToDebugTexture(RenderGraph renderGraph, TextureHandle source, TextureHandle destination, bool isSourceTextureColor = false)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x2C41B20", Offset = "0x2C40120", VA = "0x182C41B20")]
	private void BlitEmptyTexture(RenderGraph renderGraph, TextureHandle destination, string passName = "Copy To Debug Texture")
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x2C42510", Offset = "0x2C40B10", VA = "0x182C42510")]
	private void CleanupRenderGraphResources()
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x2C44A60", Offset = "0x2C43060", VA = "0x182C44A60")]
	public static TextureHandle CreateRenderGraphTexture(RenderGraph renderGraph, RenderTextureDescriptor desc, string name, bool clear, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x2C44C60", Offset = "0x2C43260", VA = "0x182C44C60")]
	internal static TextureHandle CreateRenderGraphTexture(RenderGraph renderGraph, in RenderTextureDescriptor desc, string name, bool clear, Color color, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp, bool discardOnLastUse = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x2C45B70", Offset = "0x2C44170", VA = "0x182C45B70")]
	internal static void GetTextureDesc(in RenderTextureDescriptor desc, out TextureDesc rgDesc)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x2C44B60", Offset = "0x2C43160", VA = "0x182C44B60")]
	internal static TextureHandle CreateRenderGraphTexture(RenderGraph renderGraph, in TextureDesc desc, string name, bool clear, Color clearColor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp, bool discardOnLastUse = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x2C4BB80", Offset = "0x2C4A180", VA = "0x182C4BB80")]
	private bool RequiresIntermediateAttachments(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool requireCopyFromDepth, bool applyPostProcessing)
	{
		return default(bool);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x2C4DAB0", Offset = "0x2C4C0B0", VA = "0x182C4DAB0")]
	private void UpdateCameraHistory(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x2C44100", Offset = "0x2C42700", VA = "0x182C44100")]
	private void CreateRenderGraphCameraRenderTargets(RenderGraph renderGraph, bool isCameraTargetOffscreenDepth, bool requireIntermediateAttachments, bool depthTextureIsDepthFormat)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x2C45720", Offset = "0x2C43D20", VA = "0x182C45720")]
	private ClearCameraParams GetClearCameraParams(UniversalCameraData cameraData)
	{
		return default(ClearCameraParams);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x2C4D310", Offset = "0x2C4B910", VA = "0x182C4D310")]
	private void SetupTargetHandles(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x2C4D260", Offset = "0x2C4B860", VA = "0x182C4D260")]
	private void SetupRenderingLayers(int msaaSamples)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x2C4D1B0", Offset = "0x2C4B7B0", VA = "0x182C4D1B0")]
	internal void SetupRenderGraphLights(RenderGraph renderGraph, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x2C4B580", Offset = "0x2C49B80", VA = "0x182C4B580")]
	private void RenderRawColorDepthHistory(RenderGraph renderGraph, UniversalCameraData cameraData, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x2C48670", Offset = "0x2C46C70", VA = "0x182C48670", Slot = "15")]
	public override void OnBeginRenderGraphFrame()
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x2C4A940", Offset = "0x2C48F40", VA = "0x182C4A940", Slot = "16")]
	internal override void OnRecordRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x2C486C0", Offset = "0x2C46CC0", VA = "0x182C486C0", Slot = "17")]
	public override void OnEndRenderGraphFrame()
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x2C48710", Offset = "0x2C46D10", VA = "0x182C48710", Slot = "18")]
	internal override void OnFinishRenderGraphRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x2C4A2A0", Offset = "0x2C488A0", VA = "0x182C4A2A0")]
	private void OnOffscreenDepthTextureRendering(RenderGraph renderGraph, ScriptableRenderContext context, UniversalResourceData resourceData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x2C481F0", Offset = "0x2C467F0", VA = "0x182C481F0")]
	private void OnBeforeRendering(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x2C4DB70", Offset = "0x2C4C170", VA = "0x182C4DB70")]
	private void UpdateInstanceOccluders(RenderGraph renderGraph, UniversalCameraData cameraData, TextureHandle depthTexture)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x2C468A0", Offset = "0x2C44EA0", VA = "0x182C468A0")]
	private void InstanceOcclusionTest(RenderGraph renderGraph, UniversalCameraData cameraData, OcclusionTest occlusionTest)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x2C4B360", Offset = "0x2C49960", VA = "0x182C4B360")]
	private void RecordCustomPassesWithDepthCopyAndMotion(RenderGraph renderGraph, UniversalResourceData resourceData, RenderPassEvent earliestDepthReadEvent, RenderPassEvent currentEvent, bool renderMotionVectors)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x2C41AF0", Offset = "0x2C400F0", VA = "0x182C41AF0")]
	private static bool AllowPartialDepthNormalsPrepass(bool isDeferred, RenderPassEvent requiresDepthNormalEvent, bool useDepthPriming)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x2C421D0", Offset = "0x2C407D0", VA = "0x182C421D0")]
	private DepthCopySchedule CalculateDepthCopySchedule(RenderPassEvent earliestDepthReadEvent, bool hasFullPrepass)
	{
		return default(DepthCopySchedule);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x2C42230", Offset = "0x2C40830", VA = "0x182C42230")]
	private TextureCopySchedules CalculateTextureCopySchedules(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool isDeferred, bool requiresDepthPrepass, bool hasFullPrepass, bool requireDepthTexture)
	{
		return default(TextureCopySchedules);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x2C42680", Offset = "0x2C40C80", VA = "0x182C42680")]
	private void CopyDepthToDepthTexture(RenderGraph renderGraph, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x2C4B490", Offset = "0x2C49A90", VA = "0x182C4B490")]
	private void RenderMotionVectors(RenderGraph renderGraph, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x2C456E0", Offset = "0x2C43CE0", VA = "0x182C456E0")]
	private void ExecuteScheduledDepthCopyWithMotion(RenderGraph renderGraph, UniversalResourceData resourceData, bool renderMotionVectors)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x2C487B0", Offset = "0x2C46DB0", VA = "0x182C487B0")]
	private void OnMainRendering(RenderGraph renderGraph, ScriptableRenderContext context, in RenderPassInputSummary renderPassInputs, bool requiresPrepass, bool requireDepthTexture)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x2C46E80", Offset = "0x2C45480", VA = "0x182C46E80")]
	private void OnAfterRendering(RenderGraph renderGraph, bool applyPostProcessing)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x2C4BA60", Offset = "0x2C4A060", VA = "0x182C4BA60")]
	private bool RequirePrepassForTextures(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool requireDepthTexture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x2C4BA00", Offset = "0x2C4A000", VA = "0x182C4BA00")]
	private static bool RequireDepthTexture(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool applyPostProcessing)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x2C46A60", Offset = "0x2C45060", VA = "0x182C46A60")]
	private static bool IsDepthPrimingEnabledRenderGraph(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, DepthPrimingMode depthPrimingMode, bool requireDepthTexture, bool requirePrepassForTextures, bool usesDeferredLighting)
	{
		return default(bool);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x2C4BEE0", Offset = "0x2C4A4E0", VA = "0x182C4BEE0")]
	internal void SetRenderingLayersGlobalTextures(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x2C46000", Offset = "0x2C44600", VA = "0x182C46000")]
	private void ImportBackBuffers(RenderGraph renderGraph, UniversalCameraData cameraData, Color clearBackgroundColor, bool isCameraTargetOffscreenDepth)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x2C43130", Offset = "0x2C41730", VA = "0x182C43130")]
	private void CreateIntermediateCameraColorAttachment(RenderGraph renderGraph, UniversalCameraData cameraData, in TextureDesc cameraDescriptor, bool clearColor, Color clearBackgroundColor)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x2C43640", Offset = "0x2C41C40", VA = "0x182C43640")]
	private void CreateIntermediateCameraDepthAttachment(RenderGraph renderGraph, UniversalCameraData cameraData, in TextureDesc cameraDescriptor, bool clearDepth, Color clearBackgroundDepth, bool depthTextureIsDepthFormat)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x2C42A40", Offset = "0x2C41040", VA = "0x182C42A40")]
	private void CreateCameraDepthCopyTexture(RenderGraph renderGraph, TextureDesc descriptor, bool isDepthTexture, Color clearColor)
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x2C43B30", Offset = "0x2C42130", VA = "0x182C43B30")]
	private void CreateMotionVectorTextures(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x2C42CF0", Offset = "0x2C412F0", VA = "0x182C42CF0")]
	private void CreateCameraNormalsTexture(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x2C44D90", Offset = "0x2C43390", VA = "0x182C44D90")]
	private void CreateRenderingLayersTexture(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x2C427B0", Offset = "0x2C40DB0", VA = "0x182C427B0")]
	private void CreateAfterPostProcessTexture(RenderGraph renderGraph, RenderTextureDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x2C43E50", Offset = "0x2C42450", VA = "0x182C43E50")]
	private void CreateOffscreenUITexture(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x2C45180", Offset = "0x2C43780", VA = "0x182C45180")]
	private void DepthNormalPrepassRender(RenderGraph renderGraph, RenderPassInputSummary renderPassInputs, in TextureHandle depthTarget, uint batchLayerMask, bool setGlobalDepth, bool setGlobalTextures, bool partialPass)
	{
	}
}
