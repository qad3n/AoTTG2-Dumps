// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScriptableRenderer
// Update status: NEW in this game update
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
			[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000402")]
			[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000103")]
		public bool msaa
		{
			[Token(Token = "0x6000403")]
			[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000404")]
			[Address(RVA = "0x1AE80B0", Offset = "0x1AE66B0", VA = "0x181AE80B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000405")]
		[Address(RVA = "0x2C29610", Offset = "0x2C27C10", VA = "0x182C29610")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public EndXRPassData()
		{
		}
	}

	[Token(Token = "0x20000A8")]
	private class DummyData
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
				[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
				get
				{
					return default(int);
				}
			}

			[Token(Token = "0x6000413")]
			[Address(RVA = "0x2C19030", Offset = "0x2C17630", VA = "0x182C19030")]
			public BlockRange(int begin, int end)
			{
			}

			[Token(Token = "0x6000414")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			public BlockRange GetEnumerator()
			{
				return default(BlockRange);
			}

			[Token(Token = "0x6000415")]
			[Address(RVA = "0x2C19020", Offset = "0x2C17620", VA = "0x182C19020")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000417")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
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
		[Address(RVA = "0x2C292E0", Offset = "0x2C278E0", VA = "0x182C292E0")]
		public RenderBlocks(List<ScriptableRenderPass> activeRenderPassQueue)
		{
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x2C29160", Offset = "0x2C27760", VA = "0x182C29160", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000410")]
		[Address(RVA = "0x2C291B0", Offset = "0x2C277B0", VA = "0x182C291B0")]
		private void FillBlockRanges(List<ScriptableRenderPass> activeRenderPassQueue)
		{
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x2BDBC20", Offset = "0x2BDA220", VA = "0x182BDBC20")]
		public int GetLength(int index)
		{
			return default(int);
		}

		[Token(Token = "0x6000412")]
		[Address(RVA = "0x2C292A0", Offset = "0x2C278A0", VA = "0x182C292A0")]
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
		[Address(RVA = "0x2C2FFB0", Offset = "0x2C2E5B0", VA = "0x182C2FFB0")]
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public RTHandle cameraDepthTargetHandle
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	internal DebugHandler DebugHandler
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x2C2FF60", Offset = "0x2C2E560", VA = "0x182C2FF60")]
		get
		{
			return default(RenderTargetIdentifier);
		}
	}

	[Token(Token = "0x170000F8")]
	protected List<ScriptableRendererFeature> rendererFeatures
	{
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F9")]
	protected List<ScriptableRenderPass> activeRenderPassQueue
	{
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public RenderingFeatures supportedRenderingFeatures
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public GraphicsDeviceType[] unsupportedGraphicsDeviceTypes
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	internal ContextContainer frameData
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	internal bool useDepthPriming
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x1D2B360", Offset = "0x1D29960", VA = "0x181D2B360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x1D2B400", Offset = "0x1D29A00", VA = "0x181D2B400")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	internal bool stripShadowsOffVariants
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x1D2B3F0", Offset = "0x1D299F0", VA = "0x181D2B3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x1D2B790", Offset = "0x1D29D90", VA = "0x181D2B790")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	internal bool stripAdditionalLightOffVariants
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x1D2B3E0", Offset = "0x1D299E0", VA = "0x181D2B3E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x1D2B780", Offset = "0x1D29D80", VA = "0x181D2B780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	internal virtual bool supportsNativeRenderPassRendergraphCompiler
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	public virtual bool supportsGPUOcclusion
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public static void SetCameraMatrices(CommandBuffer cmd, ref CameraData cameraData, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public static void SetCameraMatrices(CommandBuffer cmd, UniversalCameraData cameraData, bool setInverseMatrices)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void ConfigureCameraTarget(RTHandle colorTarget, RTHandle depthTarget)
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void Setup(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public virtual void SetupLights(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	protected void SetupRenderPasses(in RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	public virtual int SupportedCameraStackingTypes()
	{
		return default(int);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2C2F230", Offset = "0x2C2D830", VA = "0x182C2F230")]
	public bool SupportsCameraStackingType(CameraRenderType cameraRenderType)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
	protected internal virtual bool SupportsMotionVectors()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
	protected internal virtual bool SupportsCameraOpaque()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
	protected internal virtual bool SupportsCameraNormals()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x2C2CF60", Offset = "0x2C2B560", VA = "0x182C2CF60")]
	internal static void SetCameraMatrices(RasterCommandBuffer cmd, UniversalCameraData cameraData, bool setInverseMatrices, bool isTargetFlipped)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x2C2DE20", Offset = "0x2C2C420", VA = "0x182C2DE20")]
	private void SetPerCameraShaderVariables(RasterCommandBuffer cmd, UniversalCameraData cameraData, Vector2Int cameraTargetSizeCopy, bool isTargetFlipped)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x2C2D820", Offset = "0x2C2BE20", VA = "0x182C2D820")]
	private void SetPerCameraBillboardProperties(RasterCommandBuffer cmd, UniversalCameraData cameraData)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2C2A8C0", Offset = "0x2C28EC0", VA = "0x182C2A8C0")]
	private static void CalculateBillboardProperties(in Matrix4x4 worldToCameraMatrix, out Vector3 billboardTangent, out Vector3 billboardNormal, out float cameraXZAngle)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2C2DAB0", Offset = "0x2C2C0B0", VA = "0x182C2DAB0")]
	private void SetPerCameraClippingPlaneProperties(RasterCommandBuffer cmd, in UniversalCameraData cameraData, bool isTargetFlipped)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x2C2E6D0", Offset = "0x2C2CCD0", VA = "0x182C2E6D0")]
	private static void SetShaderTimeValues(IBaseCommandBuffer cmd, float time, float deltaTime, float smoothDeltaTime)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x2C2FB50", Offset = "0x2C2E150", VA = "0x182C2FB50")]
	public ScriptableRenderer(ScriptableRendererData data)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x2C2B570", Offset = "0x2C29B70", VA = "0x182C2B570", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x2C2B710", Offset = "0x2C29D10", VA = "0x182C2B710", Slot = "11")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	internal virtual void ReleaseRenderTargets()
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public virtual void SetupCullingParameters(ref ScriptableCullingParameters cullingParameters, ref CameraData cameraData)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	public virtual void FinishRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public virtual void OnBeginRenderGraphFrame()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	internal virtual void OnRecordRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "17")]
	public virtual void OnEndRenderGraphFrame()
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x2C2BFF0", Offset = "0x2C2A5F0", VA = "0x182C2BFF0")]
	private void InitRenderGraphFrame(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x2C2C580", Offset = "0x2C2AB80", VA = "0x182C2C580")]
	internal void ProcessVFXCameraCommand(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x2C2ED40", Offset = "0x2C2D340", VA = "0x182C2ED40")]
	internal void SetupRenderGraphCameraProperties(RenderGraph renderGraph, TextureHandle target)
	{
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void DrawRenderGraphGizmos(RenderGraph renderGraph, ContextContainer frameData, TextureHandle color, TextureHandle depth, GizmoSubset gizmoSubset)
	{
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void DrawRenderGraphWireOverlay(RenderGraph renderGraph, ContextContainer frameData, TextureHandle color)
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x2C2A4C0", Offset = "0x2C28AC0", VA = "0x182C2A4C0")]
	internal void BeginRenderGraphXRRendering(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x2C2B730", Offset = "0x2C29D30", VA = "0x182C2B730")]
	internal void EndRenderGraphXRRendering(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x2C2D520", Offset = "0x2C2BB20", VA = "0x182C2D520")]
	private void SetEditorTarget(RenderGraph renderGraph)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x2C2CBF0", Offset = "0x2C2B1F0", VA = "0x182C2CBF0")]
	internal void RecordRenderGraph(RenderGraph renderGraph, ScriptableRenderContext context)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x2C2BB80", Offset = "0x2C2A180", VA = "0x182C2BB80")]
	internal void FinishRenderGraphRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "18")]
	internal virtual void OnFinishRenderGraphRendering(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x2C2CA00", Offset = "0x2C2B000", VA = "0x182C2CA00")]
	internal void RecordCustomRenderGraphPassesInEventRange(RenderGraph renderGraph, RenderPassEvent eventStart, RenderPassEvent eventEnd)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x2C2AC90", Offset = "0x2C29290", VA = "0x182C2AC90")]
	internal void CalculateSplitEventRange(RenderPassEvent startInjectionPoint, RenderPassEvent targetEvent, out RenderPassEvent startEvent, out RenderPassEvent splitEvent, out RenderPassEvent endEvent)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x2C2CB50", Offset = "0x2C2B150", VA = "0x182C2CB50")]
	internal void RecordCustomRenderGraphPasses(RenderGraph renderGraph, RenderPassEvent startInjectionPoint, RenderPassEvent endInjectionPoint)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x2C2CBA0", Offset = "0x2C2B1A0", VA = "0x182C2CBA0")]
	internal void RecordCustomRenderGraphPasses(RenderGraph renderGraph, RenderPassEvent injectionPoint)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x2C2BAD0", Offset = "0x2C2A0D0", VA = "0x182C2BAD0")]
	public void EnqueuePass(ScriptableRenderPass pass)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x2C2BDE0", Offset = "0x2C2A3E0", VA = "0x182C2BDE0")]
	protected static ClearFlag GetCameraClearFlag(ref CameraData cameraData)
	{
		return default(ClearFlag);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x2C2BC10", Offset = "0x2C2A210", VA = "0x182C2BC10")]
	protected static ClearFlag GetCameraClearFlag(UniversalCameraData cameraData)
	{
		return default(ClearFlag);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x2C2C4A0", Offset = "0x2C2AAA0", VA = "0x182C2C4A0")]
	internal void OnPreCullRenderPasses(in CameraData cameraData)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x2C2A0D0", Offset = "0x2C286D0", VA = "0x182C2A0D0")]
	internal void AddRenderPasses(ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x2C2AD80", Offset = "0x2C29380", VA = "0x182C2AD80")]
	private static void ClearRenderingState(IBaseCommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x2C2B290", Offset = "0x2C29890", VA = "0x182C2B290")]
	internal void Clear(CameraRenderType cameraType)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal bool IsSceneFilteringEnabled(Camera camera)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	internal virtual void SwapColorBuffer(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	internal virtual void EnableSwapBufferMSAA(bool enable)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x2C2C310", Offset = "0x2C2A910", VA = "0x182C2C310")]
	private void InternalFinishRenderingCommon(CommandBuffer cmd, bool resolveFinalTarget)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x2C2A300", Offset = "0x2C28900", VA = "0x182C2A300")]
	private protected int AdjustAndGetScreenMSAASamples(RenderGraph renderGraph, bool useIntermediateColorTarget)
	{
		return default(int);
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x2C2F120", Offset = "0x2C2D720", VA = "0x182C2F120")]
	internal static void SortStable(List<ScriptableRenderPass> list)
	{
	}
}
