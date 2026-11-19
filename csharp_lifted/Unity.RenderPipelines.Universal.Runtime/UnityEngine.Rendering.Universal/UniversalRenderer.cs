// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderer
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6640560", Offset = "0x663F560", VA = "0x6640560")]
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
		[Address(RVA = "0x6639110", Offset = "0x6638110", VA = "0x6639110")]
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
		[Address(RVA = "0x6630B10", Offset = "0x662FB10", VA = "0x6630B10")]
		get
		{
			return default(RenderingMode);
		}
	}

	[Token(Token = "0x17000172")]
	private bool deferredModeUnsupported
	{
		[Token(Token = "0x6000526")]
		[Address(RVA = "0x6630B20", Offset = "0x662FB20", VA = "0x6630B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	internal RenderingMode renderingModeActual
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x6630B70", Offset = "0x662FB70", VA = "0x6630B70")]
		get
		{
			return default(RenderingMode);
		}
	}

	[Token(Token = "0x17000174")]
	internal bool usesDeferredLighting
	{
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x662A930", Offset = "0x6629930", VA = "0x662A930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	internal bool usesClusterLightLoop
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x6630C10", Offset = "0x662FC10", VA = "0x6630C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000176")]
	internal bool accurateGbufferNormals
	{
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x662A960", Offset = "0x6629960", VA = "0x662A960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	internal bool needTransparencyPass
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x6630C40", Offset = "0x662FC40", VA = "0x6630C40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000178")]
	public DepthPrimingMode depthPrimingMode
	{
		[Token(Token = "0x600052C")]
		[Address(RVA = "0x6630D30", Offset = "0x662FD30", VA = "0x6630D30")]
		get
		{
			return default(DepthPrimingMode);
		}
		[Token(Token = "0x600052D")]
		[Address(RVA = "0x6630D40", Offset = "0x662FD40", VA = "0x6630D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000179")]
	internal bool isPostProcessPassRenderGraphActive
	{
		[Token(Token = "0x600052E")]
		[Address(RVA = "0x6630D50", Offset = "0x662FD50", VA = "0x6630D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017A")]
	internal DeferredLights deferredLights
	{
		[Token(Token = "0x600052F")]
		[Address(RVA = "0x6630D60", Offset = "0x662FD60", VA = "0x6630D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	internal LayerMask prepassLayerMask
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x6630D70", Offset = "0x662FD70", VA = "0x6630D70")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000531")]
		[Address(RVA = "0x6630D80", Offset = "0x662FD80", VA = "0x6630D80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017C")]
	internal LayerMask opaqueLayerMask
	{
		[Token(Token = "0x6000532")]
		[Address(RVA = "0x6630D90", Offset = "0x662FD90", VA = "0x6630D90")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000533")]
		[Address(RVA = "0x6630DA0", Offset = "0x662FDA0", VA = "0x6630DA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017D")]
	internal LayerMask transparentLayerMask
	{
		[Token(Token = "0x6000534")]
		[Address(RVA = "0x6630DB0", Offset = "0x662FDB0", VA = "0x6630DB0")]
		[CompilerGenerated]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000535")]
		[Address(RVA = "0x6630DC0", Offset = "0x662FDC0", VA = "0x6630DC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017E")]
	internal bool shadowTransparentReceive
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x6630DD0", Offset = "0x662FDD0", VA = "0x6630DD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x6630DE0", Offset = "0x662FDE0", VA = "0x6630DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700017F")]
	internal GraphicsFormat cameraDepthTextureFormat
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x6630DF0", Offset = "0x662FDF0", VA = "0x6630DF0")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x17000180")]
	internal GraphicsFormat cameraDepthAttachmentFormat
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x6630E40", Offset = "0x662FE40", VA = "0x6630E40")]
		get
		{
			return default(GraphicsFormat);
		}
	}

	[Token(Token = "0x17000181")]
	internal override bool supportsNativeRenderPassRendergraphCompiler
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x6633E50", Offset = "0x6632E50", VA = "0x6633E50", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000182")]
	private RTHandle currentRenderGraphCameraColorHandle
	{
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x6635440", Offset = "0x6634440", VA = "0x6635440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000183")]
	private RTHandle nextRenderGraphCameraColorHandle
	{
		[Token(Token = "0x6000557")]
		[Address(RVA = "0x66354F0", Offset = "0x66344F0", VA = "0x66354F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	public override bool supportsGPUOcclusion
	{
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x663E9E0", Offset = "0x663D9E0", VA = "0x663E9E0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x6630AA0", Offset = "0x662FAA0", VA = "0x6630AA0", Slot = "5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Setup(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x6630AB0", Offset = "0x662FAB0", VA = "0x6630AB0", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void SetupLights(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x6630AC0", Offset = "0x662FAC0", VA = "0x6630AC0", Slot = "7")]
	public override int SupportedCameraStackingTypes()
	{
		return default(int);
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x6630AE0", Offset = "0x662FAE0", VA = "0x6630AE0", Slot = "8")]
	protected internal override bool SupportsMotionVectors()
	{
		return default(bool);
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x6630AF0", Offset = "0x662FAF0", VA = "0x6630AF0", Slot = "9")]
	protected internal override bool SupportsCameraOpaque()
	{
		return default(bool);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x6630B00", Offset = "0x662FB00", VA = "0x6630B00", Slot = "10")]
	protected internal override bool SupportsCameraNormals()
	{
		return default(bool);
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x6630E90", Offset = "0x662FE90", VA = "0x6630E90")]
	public UniversalRenderer(UniversalRendererData data)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x66326B0", Offset = "0x66316B0", VA = "0x66326B0", Slot = "11")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x6632A80", Offset = "0x6631A80", VA = "0x6632A80", Slot = "12")]
	internal override void ReleaseRenderTargets()
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x662B850", Offset = "0x662A850", VA = "0x662B850")]
	public static bool IsOffscreenDepthTexture(ref CameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x6632AE0", Offset = "0x6631AE0", VA = "0x6632AE0")]
	public static bool IsOffscreenDepthTexture(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x6632B60", Offset = "0x6631B60", VA = "0x6632B60")]
	private static bool IsWebGL()
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x6632B70", Offset = "0x6631B70", VA = "0x6632B70")]
	private static bool IsGLESDevice()
	{
		return default(bool);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x6632B80", Offset = "0x6631B80", VA = "0x6632B80")]
	private static bool IsGLDevice()
	{
		return default(bool);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x6632BE0", Offset = "0x6631BE0", VA = "0x6632BE0")]
	private static bool HasActiveRenderFeatures(List<ScriptableRendererFeature> rendererFeatures)
	{
		return default(bool);
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x6632D60", Offset = "0x6631D60", VA = "0x6632D60")]
	private static bool HasPassesRequiringIntermediateTexture(List<ScriptableRenderPass> activeRenderPassQueue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x6632EE0", Offset = "0x6631EE0", VA = "0x6632EE0")]
	private static void SetupVFXCameraBuffer(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x6633230", Offset = "0x6632230", VA = "0x6633230", Slot = "13")]
	public override void SetupCullingParameters(ref ScriptableCullingParameters cullingParameters, ref CameraData cameraData)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x6633650", Offset = "0x6632650", VA = "0x6633650", Slot = "14")]
	public override void FinishRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x6633660", Offset = "0x6632660", VA = "0x6633660")]
	private static RenderPassInputSummary GetRenderPassInputs(bool isTemporalAAEnabled, bool postProcessingEnabled, bool isSceneViewCamera, bool renderingLayerProvidesByDepthNormalPass, List<ScriptableRenderPass> activeRenderPassQueue, MotionVectorRenderPass motionVectorPass)
	{
		return default(RenderPassInputSummary);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x66339A0", Offset = "0x66329A0", VA = "0x66339A0")]
	internal static bool PlatformRequiresExplicitMsaaResolve()
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x6633A10", Offset = "0x6632A10", VA = "0x6633A10")]
	private static bool RequiresIntermediateColorTexture(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool usesDeferredLighting, bool applyPostProcessing)
	{
		return default(bool);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x6633CF0", Offset = "0x6632CF0", VA = "0x6633CF0")]
	private static bool IsScalableBufferManagerUsed(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x6633D70", Offset = "0x6632D70", VA = "0x6633D70")]
	private static bool CanCopyDepth(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x6633E60", Offset = "0x6632E60", VA = "0x6633E60")]
	private bool DebugHandlerRequireDepthPass(UniversalCameraData cameraData)
	{
		return default(bool);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x6633ED0", Offset = "0x6632ED0", VA = "0x6633ED0")]
	private void CreateDebugTexture(RenderTextureDescriptor descriptor)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x6633FF0", Offset = "0x6632FF0", VA = "0x6633FF0")]
	private Rect CalculateUVRect(UniversalCameraData cameraData, float width, float height)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x6634020", Offset = "0x6633020", VA = "0x6634020")]
	private Rect CalculateUVRect(UniversalCameraData cameraData, int textureHeightPercent)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x6634070", Offset = "0x6633070", VA = "0x6634070")]
	private void CorrectForTextureAspectRatio(ref float width, ref float height, float sourceWidth, float sourceHeight)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x66340B0", Offset = "0x66330B0", VA = "0x66340B0")]
	private void SetupRenderGraphFinalPassDebug(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x6634D60", Offset = "0x6633D60", VA = "0x6634D60")]
	private void SetupAfterPostRenderGraphFinalPassDebug(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x6634950", Offset = "0x6633950", VA = "0x6634950")]
	private void BlitToDebugTexture(RenderGraph renderGraph, TextureHandle source, TextureHandle destination, bool isSourceTextureColor = false)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x6635010", Offset = "0x6634010", VA = "0x6635010")]
	private void BlitEmptyTexture(RenderGraph renderGraph, TextureHandle destination, string passName = "Copy To Debug Texture")
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x6632900", Offset = "0x6631900", VA = "0x6632900")]
	private void CleanupRenderGraphResources()
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x66355A0", Offset = "0x66345A0", VA = "0x66355A0")]
	public static TextureHandle CreateRenderGraphTexture(RenderGraph renderGraph, RenderTextureDescriptor desc, string name, bool clear, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x66358B0", Offset = "0x66348B0", VA = "0x66358B0")]
	internal static TextureHandle CreateRenderGraphTexture(RenderGraph renderGraph, in RenderTextureDescriptor desc, string name, bool clear, Color color, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp, bool discardOnLastUse = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x6635680", Offset = "0x6634680", VA = "0x6635680")]
	internal static void GetTextureDesc(in RenderTextureDescriptor desc, out TextureDesc rgDesc)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x66359C0", Offset = "0x66349C0", VA = "0x66359C0")]
	internal static TextureHandle CreateRenderGraphTexture(RenderGraph renderGraph, in TextureDesc desc, string name, bool clear, Color clearColor, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp, bool discardOnLastUse = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x6635AA0", Offset = "0x6634AA0", VA = "0x6635AA0")]
	private bool RequiresIntermediateAttachments(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool requireCopyFromDepth, bool applyPostProcessing)
	{
		return default(bool);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x6635B90", Offset = "0x6634B90", VA = "0x6635B90")]
	private void UpdateCameraHistory(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x6635C40", Offset = "0x6634C40", VA = "0x6635C40")]
	private void CreateRenderGraphCameraRenderTargets(RenderGraph renderGraph, bool isCameraTargetOffscreenDepth, bool requireIntermediateAttachments, bool depthTextureIsDepthFormat)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x6636160", Offset = "0x6635160", VA = "0x6636160")]
	private ClearCameraParams GetClearCameraParams(UniversalCameraData cameraData)
	{
		return default(ClearCameraParams);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x6636340", Offset = "0x6635340", VA = "0x6636340")]
	private void SetupTargetHandles(UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x6639120", Offset = "0x6638120", VA = "0x6639120")]
	private void SetupRenderingLayers(int msaaSamples)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x66391C0", Offset = "0x66381C0", VA = "0x66391C0")]
	internal void SetupRenderGraphLights(RenderGraph renderGraph, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x6639250", Offset = "0x6638250", VA = "0x6639250")]
	private void RenderRawColorDepthHistory(RenderGraph renderGraph, UniversalCameraData cameraData, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x6639A30", Offset = "0x6638A30", VA = "0x6639A30", Slot = "15")]
	public override void OnBeginRenderGraphFrame()
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x6639A90", Offset = "0x6638A90", VA = "0x6639A90", Slot = "16")]
	internal override void OnRecordRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x663E8F0", Offset = "0x663D8F0", VA = "0x663E8F0", Slot = "17")]
	public override void OnEndRenderGraphFrame()
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x663E950", Offset = "0x663D950", VA = "0x663E950", Slot = "18")]
	internal override void OnFinishRenderGraphRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x663A410", Offset = "0x6639410", VA = "0x663A410")]
	private void OnOffscreenDepthTextureRendering(RenderGraph renderGraph, ScriptableRenderContext context, UniversalResourceData resourceData, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x663AC00", Offset = "0x6639C00", VA = "0x663AC00")]
	private void OnBeforeRendering(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x663EC00", Offset = "0x663DC00", VA = "0x663EC00")]
	private void UpdateInstanceOccluders(RenderGraph renderGraph, UniversalCameraData cameraData, TextureHandle depthTexture)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x663F110", Offset = "0x663E110", VA = "0x663F110")]
	private void InstanceOcclusionTest(RenderGraph renderGraph, UniversalCameraData cameraData, OcclusionTest occlusionTest)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x663F2F0", Offset = "0x663E2F0", VA = "0x663F2F0")]
	private void RecordCustomPassesWithDepthCopyAndMotion(RenderGraph renderGraph, UniversalResourceData resourceData, RenderPassEvent earliestDepthReadEvent, RenderPassEvent currentEvent, bool renderMotionVectors)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x663F3E0", Offset = "0x663E3E0", VA = "0x663F3E0")]
	private static bool AllowPartialDepthNormalsPrepass(bool isDeferred, RenderPassEvent requiresDepthNormalEvent, bool useDepthPriming)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x663F400", Offset = "0x663E400", VA = "0x663F400")]
	private DepthCopySchedule CalculateDepthCopySchedule(RenderPassEvent earliestDepthReadEvent, bool hasFullPrepass)
	{
		return default(DepthCopySchedule);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x663F460", Offset = "0x663E460", VA = "0x663F460")]
	private TextureCopySchedules CalculateTextureCopySchedules(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool isDeferred, bool requiresDepthPrepass, bool hasFullPrepass, bool requireDepthTexture)
	{
		return default(TextureCopySchedules);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x663F520", Offset = "0x663E520", VA = "0x663F520")]
	private void CopyDepthToDepthTexture(RenderGraph renderGraph, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x663F5F0", Offset = "0x663E5F0", VA = "0x663F5F0")]
	private void RenderMotionVectors(RenderGraph renderGraph, UniversalResourceData resourceData)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x663F3A0", Offset = "0x663E3A0", VA = "0x663F3A0")]
	private void ExecuteScheduledDepthCopyWithMotion(RenderGraph renderGraph, UniversalResourceData resourceData, bool renderMotionVectors)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x663B160", Offset = "0x663A160", VA = "0x663B160")]
	private void OnMainRendering(RenderGraph renderGraph, ScriptableRenderContext context, in RenderPassInputSummary renderPassInputs, bool requiresPrepass, bool requireDepthTexture)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x663D330", Offset = "0x663C330", VA = "0x663D330")]
	private void OnAfterRendering(RenderGraph renderGraph, bool applyPostProcessing)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x663A1E0", Offset = "0x66391E0", VA = "0x663A1E0")]
	private bool RequirePrepassForTextures(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool requireDepthTexture)
	{
		return default(bool);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x663A1A0", Offset = "0x66391A0", VA = "0x663A1A0")]
	private static bool RequireDepthTexture(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, bool applyPostProcessing)
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x663A300", Offset = "0x6639300", VA = "0x663A300")]
	private static bool IsDepthPrimingEnabledRenderGraph(UniversalCameraData cameraData, in RenderPassInputSummary renderPassInputs, DepthPrimingMode depthPrimingMode, bool requireDepthTexture, bool requirePrepassForTextures, bool usesDeferredLighting)
	{
		return default(bool);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x663F850", Offset = "0x663E850", VA = "0x663F850")]
	internal void SetRenderingLayersGlobalTextures(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x600057B")]
	[Address(RVA = "0x6636930", Offset = "0x6635930", VA = "0x6636930")]
	private void ImportBackBuffers(RenderGraph renderGraph, UniversalCameraData cameraData, Color clearBackgroundColor, bool isCameraTargetOffscreenDepth)
	{
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x6637400", Offset = "0x6636400", VA = "0x6637400")]
	private void CreateIntermediateCameraColorAttachment(RenderGraph renderGraph, UniversalCameraData cameraData, in TextureDesc cameraDescriptor, bool clearColor, Color clearBackgroundColor)
	{
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x6637B60", Offset = "0x6636B60", VA = "0x6637B60")]
	private void CreateIntermediateCameraDepthAttachment(RenderGraph renderGraph, UniversalCameraData cameraData, in TextureDesc cameraDescriptor, bool clearDepth, Color clearBackgroundDepth, bool depthTextureIsDepthFormat)
	{
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x6638240", Offset = "0x6637240", VA = "0x6638240")]
	private void CreateCameraDepthCopyTexture(RenderGraph renderGraph, TextureDesc descriptor, bool isDepthTexture, Color clearColor)
	{
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x66387C0", Offset = "0x66377C0", VA = "0x66387C0")]
	private void CreateMotionVectorTextures(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x66384D0", Offset = "0x66374D0", VA = "0x66384D0")]
	private void CreateCameraNormalsTexture(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x6638B10", Offset = "0x6637B10", VA = "0x6638B10")]
	private void CreateRenderingLayersTexture(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x66400E0", Offset = "0x663F0E0", VA = "0x66400E0")]
	private void CreateAfterPostProcessTexture(RenderGraph renderGraph, RenderTextureDescriptor descriptor)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x6638E60", Offset = "0x6637E60", VA = "0x6638E60")]
	private void CreateOffscreenUITexture(RenderGraph renderGraph, TextureDesc descriptor)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x663F6D0", Offset = "0x663E6D0", VA = "0x663F6D0")]
	private void DepthNormalPrepassRender(RenderGraph renderGraph, RenderPassInputSummary renderPassInputs, in TextureHandle depthTarget, uint batchLayerMask, bool setGlobalDepth, bool setGlobalTextures, bool partialPass)
	{
	}
}
