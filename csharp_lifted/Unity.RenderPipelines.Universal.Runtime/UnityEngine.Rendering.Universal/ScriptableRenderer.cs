// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.VFX;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200009F")]
public abstract class ScriptableRenderer : IDisposable
{
	[Token(Token = "0x20000A0")]
	private static class Profiling
	{
		[Token(Token = "0x4000336")]
		private const string k_Name = "ScriptableRenderer";

		[Token(Token = "0x4000337")]
		[FieldOffset(Offset = "0x0")]
		public static readonly ProfilingSampler setPerCameraShaderVariables;

		[Token(Token = "0x4000338")]
		[FieldOffset(Offset = "0x8")]
		public static readonly ProfilingSampler sortRenderPasses;

		[Token(Token = "0x4000339")]
		[FieldOffset(Offset = "0x10")]
		public static readonly ProfilingSampler recordRenderGraph;

		[Token(Token = "0x400033A")]
		[FieldOffset(Offset = "0x18")]
		public static readonly ProfilingSampler setupCamera;

		[Token(Token = "0x400033B")]
		[FieldOffset(Offset = "0x20")]
		public static readonly ProfilingSampler vfxProcessCamera;

		[Token(Token = "0x400033C")]
		[FieldOffset(Offset = "0x28")]
		public static readonly ProfilingSampler addRenderPasses;

		[Token(Token = "0x400033D")]
		[FieldOffset(Offset = "0x30")]
		public static readonly ProfilingSampler clearRenderingState;

		[Token(Token = "0x400033E")]
		[FieldOffset(Offset = "0x38")]
		public static readonly ProfilingSampler internalFinishRenderingCommon;

		[Token(Token = "0x400033F")]
		[FieldOffset(Offset = "0x40")]
		public static readonly ProfilingSampler drawGizmos;

		[Token(Token = "0x4000340")]
		[FieldOffset(Offset = "0x48")]
		public static readonly ProfilingSampler drawWireOverlay;

		[Token(Token = "0x4000341")]
		[FieldOffset(Offset = "0x50")]
		internal static readonly ProfilingSampler beginXRRendering;

		[Token(Token = "0x4000342")]
		[FieldOffset(Offset = "0x58")]
		internal static readonly ProfilingSampler endXRRendering;

		[Token(Token = "0x4000343")]
		[FieldOffset(Offset = "0x60")]
		internal static readonly ProfilingSampler initRenderGraphFrame;

		[Token(Token = "0x4000344")]
		[FieldOffset(Offset = "0x68")]
		internal static readonly ProfilingSampler setEditorTarget;
	}

	[Token(Token = "0x20000A1")]
	public class RenderingFeatures
	{
		[Token(Token = "0x17000102")]
		[Obsolete("cameraStacking has been deprecated use SupportedCameraRenderTypes() in ScriptableRenderer instead. #from(2022.2) #breakingFrom(2023.1)", true)]
		public bool cameraStacking
		{
			[Token(Token = "0x6000401")]
			[Address(RVA = "0x6626B20", Offset = "0x6625B20", VA = "0x6626B20")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000402")]
			[Address(RVA = "0x6626B30", Offset = "0x6625B30", VA = "0x6626B30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000103")]
		public bool msaa
		{
			[Token(Token = "0x6000403")]
			[Address(RVA = "0x6626B40", Offset = "0x6625B40", VA = "0x6626B40")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000404")]
			[Address(RVA = "0x6626B50", Offset = "0x6625B50", VA = "0x6626B50")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000405")]
		[Address(RVA = "0x66221F0", Offset = "0x66211F0", VA = "0x66221F0")]
		public RenderingFeatures()
		{
		}
	}

	[Token(Token = "0x20000A2")]
	private static class RenderPassBlock
	{
		[Token(Token = "0x4000347")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int BeforeRendering;

		[Token(Token = "0x4000348")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int MainRenderingOpaque;

		[Token(Token = "0x4000349")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int MainRenderingTransparent;

		[Token(Token = "0x400034A")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int AfterRendering;
	}

	[Token(Token = "0x20000A3")]
	private class VFXProcessCameraPassData
	{
		[Token(Token = "0x400034B")]
		[FieldOffset(Offset = "0x10")]
		internal UniversalRenderingData renderingData;

		[Token(Token = "0x400034C")]
		[FieldOffset(Offset = "0x18")]
		internal Camera camera;

		[Token(Token = "0x400034D")]
		[FieldOffset(Offset = "0x20")]
		internal VFXCameraXRSettings cameraXRSettings;

		[Token(Token = "0x400034E")]
		[FieldOffset(Offset = "0x30")]
		internal XRPass xrPass;

		[Token(Token = "0x6000407")]
		[Address(RVA = "0x6626BA0", Offset = "0x6625BA0", VA = "0x6626BA0")]
		public VFXProcessCameraPassData()
		{
		}
	}

	[Token(Token = "0x20000A4")]
	private class DrawGizmosPassData
	{
		[Token(Token = "0x400034F")]
		[FieldOffset(Offset = "0x10")]
		public RendererListHandle gizmoRenderList;

		[Token(Token = "0x4000350")]
		[FieldOffset(Offset = "0x1C")]
		public TextureHandle color;

		[Token(Token = "0x4000351")]
		[FieldOffset(Offset = "0x2C")]
		public TextureHandle depth;

		[Token(Token = "0x6000408")]
		[Address(RVA = "0x6626BB0", Offset = "0x6625BB0", VA = "0x6626BB0")]
		public DrawGizmosPassData()
		{
		}
	}

	[Token(Token = "0x20000A5")]
	private class DrawWireOverlayPassData
	{
		[Token(Token = "0x4000352")]
		[FieldOffset(Offset = "0x10")]
		public RendererListHandle wireOverlayList;

		[Token(Token = "0x6000409")]
		[Address(RVA = "0x6626BC0", Offset = "0x6625BC0", VA = "0x6626BC0")]
		public DrawWireOverlayPassData()
		{
		}
	}

	[Token(Token = "0x20000A6")]
	private class BeginXRPassData
	{
		[Token(Token = "0x4000353")]
		[FieldOffset(Offset = "0x10")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x600040A")]
		[Address(RVA = "0x6626BD0", Offset = "0x6625BD0", VA = "0x6626BD0")]
		public BeginXRPassData()
		{
		}
	}

	[Token(Token = "0x20000A7")]
	private class EndXRPassData
	{
		[Token(Token = "0x4000354")]
		[FieldOffset(Offset = "0x10")]
		public UniversalCameraData cameraData;

		[Token(Token = "0x600040B")]
		[Address(RVA = "0x6626BE0", Offset = "0x6625BE0", VA = "0x6626BE0")]
		public EndXRPassData()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	private class DummyData
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x6626BF0", Offset = "0x6625BF0", VA = "0x6626BF0")]
		public DummyData()
		{
		}
	}

	[Token(Token = "0x20000A9")]
	private class PassData
	{
		[Token(Token = "0x4000355")]
		[FieldOffset(Offset = "0x10")]
		internal ScriptableRenderer renderer;

		[Token(Token = "0x4000356")]
		[FieldOffset(Offset = "0x18")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000357")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle target;

		[Token(Token = "0x4000358")]
		[FieldOffset(Offset = "0x30")]
		internal Vector2Int cameraTargetSizeCopy;

		[Token(Token = "0x600040D")]
		[Address(RVA = "0x6626C00", Offset = "0x6625C00", VA = "0x6626C00")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x20000AA")]
	internal struct RenderBlocks : IDisposable
	{
		[Token(Token = "0x20000AB")]
		public struct BlockRange : IDisposable
		{
			[Token(Token = "0x400035C")]
			[FieldOffset(Offset = "0x0")]
			private int m_Current;

			[Token(Token = "0x400035D")]
			[FieldOffset(Offset = "0x4")]
			private int m_End;

			[Token(Token = "0x17000104")]
			public int Current
			{
				[Token(Token = "0x6000416")]
				[Address(RVA = "0x6626F80", Offset = "0x6625F80", VA = "0x6626F80")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x6000413")]
			[Address(RVA = "0x6626F40", Offset = "0x6625F40", VA = "0x6626F40")]
			public BlockRange(int begin, int end)
			{
			}

			[Token(Token = "0x6000414")]
			[Address(RVA = "0x6626F60", Offset = "0x6625F60", VA = "0x6626F60")]
			public BlockRange GetEnumerator()
			{
				return default(BlockRange);
			}

			[Token(Token = "0x6000415")]
			[Address(RVA = "0x6626F70", Offset = "0x6625F70", VA = "0x6626F70")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000417")]
			[Address(RVA = "0x6626F90", Offset = "0x6625F90", VA = "0x6626F90", Slot = "4")]
			public void Dispose()
			{
			}
		}

		[Token(Token = "0x4000359")]
		[FieldOffset(Offset = "0x0")]
		private NativeArray<RenderPassEvent> m_BlockEventLimits;

		[Token(Token = "0x400035A")]
		[FieldOffset(Offset = "0x10")]
		private NativeArray<int> m_BlockRanges;

		[Token(Token = "0x400035B")]
		[FieldOffset(Offset = "0x20")]
		private NativeArray<int> m_BlockRangeLengths;

		[Token(Token = "0x600040E")]
		[Address(RVA = "0x6626C10", Offset = "0x6625C10", VA = "0x6626C10")]
		public RenderBlocks(List<ScriptableRenderPass> activeRenderPassQueue)
		{
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x6626EB0", Offset = "0x6625EB0", VA = "0x6626EB0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000410")]
		[Address(RVA = "0x6626DB0", Offset = "0x6625DB0", VA = "0x6626DB0")]
		private void FillBlockRanges(List<ScriptableRenderPass> activeRenderPassQueue)
		{
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x6626F00", Offset = "0x6625F00", VA = "0x6626F00")]
		public int GetLength(int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000412")]
		[Address(RVA = "0x6626F10", Offset = "0x6625F10", VA = "0x6626F10")]
		public BlockRange GetRange(int index)
		{
			return default(BlockRange);
		}
	}

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x18")]
	internal bool hasReleasedRTs;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x0")]
	internal static ScriptableRenderer current;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x38")]
	private StoreActionsOptimization m_StoreActionsOptimizationSetting;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x8")]
	private static bool m_UseOptimizedStoreActions;

	[Token(Token = "0x400031E")]
	private const int k_RenderPassBlockCount = 4;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x10")]
	protected static readonly RTHandle k_CameraTarget;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x40")]
	private List<ScriptableRenderPass> m_ActiveRenderPassQueue;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x48")]
	private List<ScriptableRendererFeature> m_RendererFeatures;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x50")]
	private RTHandle m_CameraColorTarget;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x58")]
	private RTHandle m_CameraDepthTarget;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x60")]
	private RTHandle m_CameraResolveTarget;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x68")]
	private bool m_FirstTimeCameraColorTargetIsBound;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x69")]
	private bool m_FirstTimeCameraDepthTargetIsBound;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x6A")]
	private bool m_IsPipelineExecuting;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x6B")]
	internal bool useRenderPassEnabled;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x18")]
	private static RenderTargetIdentifier[] m_ActiveColorAttachmentIDs;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x20")]
	private static RTHandle[] m_ActiveColorAttachments;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x28")]
	private static RTHandle m_ActiveDepthAttachment;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x70")]
	private ContextContainer m_frameData;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x30")]
	private static RenderBufferStoreAction[] m_ActiveColorStoreActions;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x38")]
	private static RenderBufferStoreAction m_ActiveDepthStoreAction;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x40")]
	private static RenderTargetIdentifier[][] m_TrimmedColorAttachmentCopyIDs;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x48")]
	private static RTHandle[][] m_TrimmedColorAttachmentCopies;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x50")]
	private static Plane[] s_Planes;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x58")]
	private static Vector4[] s_VectorPlanes;

	[Token(Token = "0x170000F2")]
	[Obsolete("cameraDepth has been renamed to cameraDepthTarget. #from(2021.1) #breakingFrom(2023.1) (UnityUpgradable) -> cameraDepthTarget", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public RenderTargetIdentifier cameraDepth
	{
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x661E440", Offset = "0x661D440", VA = "0x661E440")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x170000F3")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	protected ProfilingSampler profilingExecute
	{
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x661E470", Offset = "0x661D470", VA = "0x661E470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x661E480", Offset = "0x661D480", VA = "0x661E480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RTHandle cameraColorTargetHandle
	{
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x661E4B0", Offset = "0x661D4B0", VA = "0x661E4B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x661E4C0", Offset = "0x661D4C0", VA = "0x661E4C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RTHandle cameraDepthTargetHandle
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x661E4D0", Offset = "0x661D4D0", VA = "0x661E4D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x661E4E0", Offset = "0x661D4E0", VA = "0x661E4E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	internal DebugHandler DebugHandler
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x661E5A0", Offset = "0x661D5A0", VA = "0x661E5A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F7")]
	[Obsolete("Use cameraColorTargetHandle. #from(2022.1) #breakingFrom(2023.2)", true)]
	public RenderTargetIdentifier cameraColorTarget
	{
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x6621BF0", Offset = "0x6620BF0", VA = "0x6621BF0")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x170000F8")]
	protected List<ScriptableRendererFeature> rendererFeatures
	{
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x6621C40", Offset = "0x6620C40", VA = "0x6621C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	protected List<ScriptableRenderPass> activeRenderPassQueue
	{
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x6621C50", Offset = "0x6620C50", VA = "0x6621C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public RenderingFeatures supportedRenderingFeatures
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x6621C60", Offset = "0x6620C60", VA = "0x6621C60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x6621C70", Offset = "0x6620C70", VA = "0x6621C70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public GraphicsDeviceType[] unsupportedGraphicsDeviceTypes
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x6621C80", Offset = "0x6620C80", VA = "0x6621C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x6621C90", Offset = "0x6620C90", VA = "0x6621C90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	internal ContextContainer frameData
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x6621CA0", Offset = "0x6620CA0", VA = "0x6621CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	internal bool useDepthPriming
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x6621CB0", Offset = "0x6620CB0", VA = "0x6621CB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x6621CC0", Offset = "0x6620CC0", VA = "0x6621CC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	internal bool stripShadowsOffVariants
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x6621CD0", Offset = "0x6620CD0", VA = "0x6621CD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x6621CE0", Offset = "0x6620CE0", VA = "0x6621CE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	internal bool stripAdditionalLightOffVariants
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x6621CF0", Offset = "0x6620CF0", VA = "0x6621CF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x6621D00", Offset = "0x6620D00", VA = "0x6621D00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	internal virtual bool supportsNativeRenderPassRendergraphCompiler
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x6625EB0", Offset = "0x6624EB0", VA = "0x6625EB0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	public virtual bool supportsGPUOcclusion
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x6625EC0", Offset = "0x6624EC0", VA = "0x6625EC0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x661E490", Offset = "0x661D490", VA = "0x661E490")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public static void SetCameraMatrices(CommandBuffer cmd, ref CameraData cameraData, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x661E4A0", Offset = "0x661D4A0", VA = "0x661E4A0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public static void SetCameraMatrices(CommandBuffer cmd, UniversalCameraData cameraData, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x661E4F0", Offset = "0x661D4F0", VA = "0x661E4F0")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureCameraTarget(RTHandle colorTarget, RTHandle depthTarget)
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x661E500", Offset = "0x661D500", VA = "0x661E500", Slot = "5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void Setup(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x661E510", Offset = "0x661D510", VA = "0x661E510", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void SetupLights(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x661E520", Offset = "0x661D520", VA = "0x661E520")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x661E530", Offset = "0x661D530", VA = "0x661E530")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	protected void SetupRenderPasses(in RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x661E540", Offset = "0x661D540", VA = "0x661E540", Slot = "7")]
	public virtual int SupportedCameraStackingTypes()
	{
		return default(int);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x661E550", Offset = "0x661D550", VA = "0x661E550")]
	public bool SupportsCameraStackingType(CameraRenderType cameraRenderType)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x661E570", Offset = "0x661D570", VA = "0x661E570", Slot = "8")]
	protected internal virtual bool SupportsMotionVectors()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x661E580", Offset = "0x661D580", VA = "0x661E580", Slot = "9")]
	protected internal virtual bool SupportsCameraOpaque()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x661E590", Offset = "0x661D590", VA = "0x661E590", Slot = "10")]
	protected internal virtual bool SupportsCameraNormals()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x661E5B0", Offset = "0x661D5B0", VA = "0x661E5B0")]
	internal static void SetCameraMatrices(RasterCommandBuffer cmd, UniversalCameraData cameraData, bool setInverseMatrices, bool isTargetFlipped)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x6620240", Offset = "0x661F240", VA = "0x6620240")]
	private void SetPerCameraShaderVariables(RasterCommandBuffer cmd, UniversalCameraData cameraData, Vector2Int cameraTargetSizeCopy, bool isTargetFlipped)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x6620A70", Offset = "0x661FA70", VA = "0x6620A70")]
	private void SetPerCameraBillboardProperties(RasterCommandBuffer cmd, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x6620CB0", Offset = "0x661FCB0", VA = "0x6620CB0")]
	private static void CalculateBillboardProperties(in Matrix4x4 worldToCameraMatrix, out Vector3 billboardTangent, out Vector3 billboardNormal, out float cameraXZAngle)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x6621280", Offset = "0x6620280", VA = "0x6621280")]
	private void SetPerCameraClippingPlaneProperties(RasterCommandBuffer cmd, in UniversalCameraData cameraData, bool isTargetFlipped)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x6621600", Offset = "0x6620600", VA = "0x6621600")]
	private static void SetShaderTimeValues(IBaseCommandBuffer cmd, float time, float deltaTime, float smoothDeltaTime)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x6621D10", Offset = "0x6620D10", VA = "0x6621D10")]
	public ScriptableRenderer(ScriptableRendererData data)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x6622540", Offset = "0x6621540", VA = "0x6622540", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x6622730", Offset = "0x6621730", VA = "0x6622730", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x6622750", Offset = "0x6621750", VA = "0x6622750", Slot = "12")]
	internal virtual void ReleaseRenderTargets()
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x6622760", Offset = "0x6621760", VA = "0x6622760", Slot = "13")]
	public virtual void SetupCullingParameters(ref ScriptableCullingParameters cullingParameters, ref CameraData cameraData)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x6622770", Offset = "0x6621770", VA = "0x6622770", Slot = "14")]
	public virtual void FinishRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x6622780", Offset = "0x6621780", VA = "0x6622780", Slot = "15")]
	public virtual void OnBeginRenderGraphFrame()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x6622790", Offset = "0x6621790", VA = "0x6622790", Slot = "16")]
	internal virtual void OnRecordRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x66227A0", Offset = "0x66217A0", VA = "0x66227A0", Slot = "17")]
	public virtual void OnEndRenderGraphFrame()
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x66227B0", Offset = "0x66217B0", VA = "0x66227B0")]
	private void InitRenderGraphFrame(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x6622B70", Offset = "0x6621B70", VA = "0x6622B70")]
	internal void ProcessVFXCameraCommand(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x6623090", Offset = "0x6622090", VA = "0x6623090")]
	internal void SetupRenderGraphCameraProperties(RenderGraph renderGraph, TextureHandle target)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x6623500", Offset = "0x6622500", VA = "0x6623500")]
	internal void DrawRenderGraphGizmos(RenderGraph renderGraph, ContextContainer frameData, TextureHandle color, TextureHandle depth, GizmoSubset gizmoSubset)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x6623510", Offset = "0x6622510", VA = "0x6623510")]
	internal void DrawRenderGraphWireOverlay(RenderGraph renderGraph, ContextContainer frameData, TextureHandle color)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x6623520", Offset = "0x6622520", VA = "0x6623520")]
	internal void BeginRenderGraphXRRendering(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x6623A50", Offset = "0x6622A50", VA = "0x6623A50")]
	internal void EndRenderGraphXRRendering(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x6623F20", Offset = "0x6622F20", VA = "0x6623F20")]
	private void SetEditorTarget(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x66242D0", Offset = "0x66232D0", VA = "0x66242D0")]
	internal void RecordRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x66246D0", Offset = "0x66236D0", VA = "0x66246D0")]
	internal void FinishRenderGraphRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x6624920", Offset = "0x6623920", VA = "0x6624920", Slot = "18")]
	internal virtual void OnFinishRenderGraphRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x6624930", Offset = "0x6623930", VA = "0x6624930")]
	internal void RecordCustomRenderGraphPassesInEventRange(RenderGraph renderGraph, RenderPassEvent eventStart, RenderPassEvent eventEnd)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x6624AB0", Offset = "0x6623AB0", VA = "0x6624AB0")]
	internal void CalculateSplitEventRange(RenderPassEvent startInjectionPoint, RenderPassEvent targetEvent, out RenderPassEvent startEvent, out RenderPassEvent splitEvent, out RenderPassEvent endEvent)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x6624BA0", Offset = "0x6623BA0", VA = "0x6624BA0")]
	internal void RecordCustomRenderGraphPasses(RenderGraph renderGraph, RenderPassEvent startInjectionPoint, RenderPassEvent endInjectionPoint)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x6624BE0", Offset = "0x6623BE0", VA = "0x6624BE0")]
	internal void RecordCustomRenderGraphPasses(RenderGraph renderGraph, RenderPassEvent injectionPoint)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x6624C10", Offset = "0x6623C10", VA = "0x6624C10")]
	public void EnqueuePass(ScriptableRenderPass pass)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x6624CB0", Offset = "0x6623CB0", VA = "0x6624CB0")]
	protected static ClearFlag GetCameraClearFlag(ref CameraData cameraData)
	{
		return default(ClearFlag);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x6624D10", Offset = "0x6623D10", VA = "0x6624D10")]
	protected static ClearFlag GetCameraClearFlag(UniversalCameraData cameraData)
	{
		return default(ClearFlag);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x6624EA0", Offset = "0x6623EA0", VA = "0x6624EA0")]
	internal void OnPreCullRenderPasses(in CameraData cameraData)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x6624F60", Offset = "0x6623F60", VA = "0x6624F60")]
	internal void AddRenderPasses(ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x66251F0", Offset = "0x66241F0", VA = "0x66251F0")]
	private static void ClearRenderingState(IBaseCommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x6622200", Offset = "0x6621200", VA = "0x6622200")]
	internal void Clear(CameraRenderType cameraType)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x6625CA0", Offset = "0x6624CA0", VA = "0x6625CA0")]
	internal bool IsSceneFilteringEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x6625CB0", Offset = "0x6624CB0", VA = "0x6625CB0", Slot = "19")]
	internal virtual void SwapColorBuffer(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x6625CC0", Offset = "0x6624CC0", VA = "0x6625CC0", Slot = "20")]
	internal virtual void EnableSwapBufferMSAA(bool enable)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x6624750", Offset = "0x6623750", VA = "0x6624750")]
	private void InternalFinishRenderingCommon(CommandBuffer cmd, bool resolveFinalTarget)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x6625CD0", Offset = "0x6624CD0", VA = "0x6625CD0")]
	private protected int AdjustAndGetScreenMSAASamples(RenderGraph renderGraph, bool useIntermediateColorTarget)
	{
		return default(int);
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x66245A0", Offset = "0x66235A0", VA = "0x66245A0")]
	internal static void SortStable(List<ScriptableRenderPass> list)
	{
	}
}
