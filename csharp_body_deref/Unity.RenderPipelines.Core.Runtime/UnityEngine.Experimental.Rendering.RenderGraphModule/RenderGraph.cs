// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Rendering;
using UnityEngine.Rendering.RendererUtils;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200002E")]
public class RenderGraph
{
	[Token(Token = "0x200002F")]
	internal struct CompiledResourceInfo
	{
		[Token(Token = "0x40000C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public List<int> producers;

		[Token(Token = "0x40000C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public List<int> consumers;

		[Token(Token = "0x40000C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int refCount;

		[Token(Token = "0x40000C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		public bool imported;

		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x4B86940", Offset = "0x4B86940", VA = "0x4B86940")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000030")]
	[DebuggerDisplay("RenderPass: {pass.name} (Index:{pass.index} Async:{enableAsyncCompute})")]
	internal struct CompiledPassInfo
	{
		[Token(Token = "0x40000C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public RenderGraphPass pass;

		[Token(Token = "0x40000C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public List<int>[] resourceCreateList;

		[Token(Token = "0x40000C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public List<int>[] resourceReleaseList;

		[Token(Token = "0x40000C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public int refCount;

		[Token(Token = "0x40000C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public bool culled;

		[Token(Token = "0x40000CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1D")]
		public bool culledByRendererList;

		[Token(Token = "0x40000CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1E")]
		public bool hasSideEffect;

		[Token(Token = "0x40000CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public int syncToPassIndex;

		[Token(Token = "0x40000CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public int syncFromPassIndex;

		[Token(Token = "0x40000CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public bool needGraphicsFence;

		[Token(Token = "0x40000CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GraphicsFence fence;

		[Token(Token = "0x40000D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public bool enableAsyncCompute;

		[Token(Token = "0x1700002E")]
		public bool allowPassCulling
		{
			[Token(Token = "0x60003C5")]
			[Address(RVA = "0x4B86A50", Offset = "0x4B86A50", VA = "0x4B86A50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x4B86A70", Offset = "0x4B86A70", VA = "0x4B86A70")]
		public void Reset(RenderGraphPass pass)
		{
		}
	}

	[Token(Token = "0x2000031")]
	private class MovePassData
	{
		[Token(Token = "0x40000D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public TextureHandle from;

		[Token(Token = "0x40000D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TextureHandle to;

		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x4B86DB0", Offset = "0x4B86DB0", VA = "0x4B86DB0")]
		public MovePassData()
		{
		}
	}

	[Token(Token = "0x2000032")]
	private class ProfilingScopePassData
	{
		[Token(Token = "0x40000D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public ProfilingSampler sampler;

		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x4B86DC0", Offset = "0x4B86DC0", VA = "0x4B86DC0")]
		public ProfilingScopePassData()
		{
		}
	}

	[Token(Token = "0x2000033")]
	internal delegate void OnGraphRegisteredDelegate(RenderGraph graph);

	[Token(Token = "0x2000034")]
	internal delegate void OnExecutionRegisteredDelegate(RenderGraph graph, string executionName);

	[Token(Token = "0x40000A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int kMaxMRTCount;

	[Token(Token = "0x40000A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RenderGraphResourceRegistry m_Resources;

	[Token(Token = "0x40000A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RenderGraphObjectPool m_RenderGraphPool;

	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RenderGraphBuilders m_builderInstance;

	[Token(Token = "0x40000A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private List<RenderGraphPass> m_RenderPasses;

	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private List<RendererListHandle> m_RendererLists;

	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private RenderGraphDebugParams m_DebugParameters;

	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RenderGraphLogger m_FrameInformationLogger;

	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private RenderGraphDefaultResources m_DefaultResources;

	[Token(Token = "0x40000AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Dictionary<int, ProfilingSampler> m_DefaultProfilingSamplers;

	[Token(Token = "0x40000AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool m_ExecutionExceptionWasRaised;

	[Token(Token = "0x40000AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private InternalRenderGraphContext m_RenderGraphContext;

	[Token(Token = "0x40000AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private CommandBuffer m_PreviousCommandBuffer;

	[Token(Token = "0x40000AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int m_CurrentImmediatePassIndex;

	[Token(Token = "0x40000B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private List<int>[] m_ImmediateModeResourceList;

	[Token(Token = "0x40000B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private DynamicArray<CompiledResourceInfo>[] m_CompiledResourcesInfos;

	[Token(Token = "0x40000B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private DynamicArray<CompiledPassInfo> m_CompiledPassInfos;

	[Token(Token = "0x40000B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Stack<int> m_CullingStack;

	[Token(Token = "0x40000B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private int m_ExecutionCount;

	[Token(Token = "0x40000B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private int m_CurrentFrameIndex;

	[Token(Token = "0x40000B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool m_HasRenderGraphBegun;

	[Token(Token = "0x40000B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string m_CurrentExecutionName;

	[Token(Token = "0x40000B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool m_RendererListCulling;

	[Token(Token = "0x40000B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Dictionary<string, RenderGraphDebugData> m_DebugData;

	[Token(Token = "0x40000BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static List<RenderGraph> s_RegisteredGraphs;

	[Token(Token = "0x1700002B")]
	public string name
	{
		[Token(Token = "0x6000364")]
		[Address(RVA = "0x4B7C190", Offset = "0x4B7C190", VA = "0x4B7C190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000365")]
		[Address(RVA = "0x4B7C1A0", Offset = "0x4B7C1A0", VA = "0x4B7C1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	internal static bool requireDebugData
	{
		[Token(Token = "0x6000366")]
		[Address(RVA = "0x4B7C1C0", Offset = "0x4B7C1C0", VA = "0x4B7C1C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000367")]
		[Address(RVA = "0x4B7C230", Offset = "0x4B7C230", VA = "0x4B7C230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public RenderGraphDefaultResources defaultResources
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x4B7C280", Offset = "0x4B7C280", VA = "0x4B7C280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	internal static event OnGraphRegisteredDelegate onGraphRegistered
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x4B7E720", Offset = "0x4B7E720", VA = "0x4B7E720")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x4B7E800", Offset = "0x4B7E800", VA = "0x4B7E800")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	internal static event OnGraphRegisteredDelegate onGraphUnregistered
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x4B7E8E0", Offset = "0x4B7E8E0", VA = "0x4B7E8E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x4B7E9C0", Offset = "0x4B7E9C0", VA = "0x4B7E9C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	internal static event OnExecutionRegisteredDelegate onExecutionRegistered
	{
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x4B7EAA0", Offset = "0x4B7EAA0", VA = "0x4B7EAA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x4B7EB80", Offset = "0x4B7EB80", VA = "0x4B7EB80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	internal static event OnExecutionRegisteredDelegate onExecutionUnregistered
	{
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x4B7EC60", Offset = "0x4B7EC60", VA = "0x4B7EC60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x4B7ED40", Offset = "0x4B7ED40", VA = "0x4B7ED40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4B7C290", Offset = "0x4B7C290", VA = "0x4B7C290")]
	public RenderGraph(string name = "RenderGraph")
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x4B7C8F0", Offset = "0x4B7C8F0", VA = "0x4B7C8F0")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x4B7C9D0", Offset = "0x4B7C9D0", VA = "0x4B7C9D0")]
	public void RegisterDebug([Optional] DebugUI.Panel panel)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4B7CA00", Offset = "0x4B7CA00", VA = "0x4B7CA00")]
	public void UnRegisterDebug()
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x4B7CA90", Offset = "0x4B7CA90", VA = "0x4B7CA90")]
	public static List<RenderGraph> GetRegisteredRenderGraphs()
	{
		return null;
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x4B7CB00", Offset = "0x4B7CB00", VA = "0x4B7CB00")]
	internal RenderGraphDebugData GetDebugData(string executionName)
	{
		return null;
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4B7CB70", Offset = "0x4B7CB70", VA = "0x4B7CB70")]
	public void EndFrame()
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x4B7CC30", Offset = "0x4B7CC30", VA = "0x4B7CC30")]
	public TextureHandle ImportTexture(RTHandle rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4B7CC50", Offset = "0x4B7CC50", VA = "0x4B7CC50")]
	internal TextureHandle ImportTexture(RTHandle rt, bool isBuiltin = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4B7CC70", Offset = "0x4B7CC70", VA = "0x4B7CC70")]
	public TextureHandle ImportBackbuffer(RenderTargetIdentifier rt)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x4B7CCD0", Offset = "0x4B7CCD0", VA = "0x4B7CCD0")]
	public TextureHandle CreateTexture(in TextureDesc desc)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x4B7CCF0", Offset = "0x4B7CCF0", VA = "0x4B7CCF0")]
	public TextureHandle CreateSharedTexture(in TextureDesc desc, bool explicitRelease = false)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x4B7CD60", Offset = "0x4B7CD60", VA = "0x4B7CD60")]
	public void RefreshSharedTextureDesc(TextureHandle handle, in TextureDesc desc)
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x4B7CD80", Offset = "0x4B7CD80", VA = "0x4B7CD80")]
	public void ReleaseSharedTexture(TextureHandle texture)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x4B7CDF0", Offset = "0x4B7CDF0", VA = "0x4B7CDF0")]
	public TextureHandle CreateTexture(TextureHandle texture)
	{
		return default(TextureHandle);
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x4B7CEF0", Offset = "0x4B7CEF0", VA = "0x4B7CEF0")]
	public void CreateTextureIfInvalid(in TextureDesc desc, ref TextureHandle texture)
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x4B7CF70", Offset = "0x4B7CF70", VA = "0x4B7CF70")]
	public TextureDesc GetTextureDesc(TextureHandle texture)
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x4B7D000", Offset = "0x4B7D000", VA = "0x4B7D000")]
	public RendererListHandle CreateRendererList(in RendererListDesc desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x4B7D020", Offset = "0x4B7D020", VA = "0x4B7D020")]
	public RendererListHandle CreateRendererList(in RendererListParams desc)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4B7D040", Offset = "0x4B7D040", VA = "0x4B7D040")]
	public RendererListHandle CreateShadowRendererList(ref ShadowDrawingSettings shadowDrawingSettings)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x4B7D070", Offset = "0x4B7D070", VA = "0x4B7D070")]
	public RendererListHandle CreateGizmoRendererList(in Camera camera, in GizmoSubset gizmoSubset)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4B7D0A0", Offset = "0x4B7D0A0", VA = "0x4B7D0A0")]
	public RendererListHandle CreateUIOverlayRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x4B7D0D0", Offset = "0x4B7D0D0", VA = "0x4B7D0D0")]
	public RendererListHandle CreateWireOverlayRendererList(in Camera camera)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4B7D100", Offset = "0x4B7D100", VA = "0x4B7D100")]
	public BufferHandle ImportBuffer(GraphicsBuffer graphicsBuffer, bool forceRelease = false)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x4B7D120", Offset = "0x4B7D120", VA = "0x4B7D120")]
	public BufferHandle CreateBuffer(in BufferDesc desc)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x4B7D140", Offset = "0x4B7D140", VA = "0x4B7D140")]
	public BufferHandle CreateBuffer(in BufferHandle graphicsBuffer)
	{
		return default(BufferHandle);
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x4B7D1A0", Offset = "0x4B7D1A0", VA = "0x4B7D1A0")]
	public BufferDesc GetBufferDesc(in BufferHandle graphicsBuffer)
	{
		return default(BufferDesc);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x4B7D1E0", Offset = "0x4B7D1E0", VA = "0x4B7D1E0")]
	public void AddResolvePass(TextureHandle source, TextureHandle destination, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x4B7D480", Offset = "0x4B7D480", VA = "0x4B7D480")]
	public void AddMovePass(TextureHandle source, TextureHandle destination, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6000386")]
	public IRasterRenderGraphBuilder AddRasterRenderPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6000387")]
	public IRasterRenderGraphBuilder AddRasterRenderPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6000388")]
	public IComputeRenderGraphBuilder AddComputePass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x6000389")]
	public IComputeRenderGraphBuilder AddComputePass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600038A")]
	public ILowLevelRenderGraphBuilder AddLowLevelPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600038B")]
	public ILowLevelRenderGraphBuilder AddLowLevelPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return null;
	}

	[Token(Token = "0x600038C")]
	public RenderGraphBuilder AddRenderPass<PassData>(string passName, out PassData passData, ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return default(RenderGraphBuilder);
	}

	[Token(Token = "0x600038D")]
	public RenderGraphBuilder AddRenderPass<PassData>(string passName, out PassData passData, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0) where PassData : class, new()
	{
		return default(RenderGraphBuilder);
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x4B7D6D0", Offset = "0x4B7D6D0", VA = "0x4B7D6D0")]
	public RenderGraphExecution RecordAndExecute(in RenderGraphParameters parameters)
	{
		return default(RenderGraphExecution);
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x4B7AF90", Offset = "0x4B7AF90", VA = "0x4B7AF90")]
	internal void Execute()
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x4B7DEF0", Offset = "0x4B7DEF0", VA = "0x4B7DEF0")]
	public void BeginProfilingSampler(ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x4B7E150", Offset = "0x4B7E150", VA = "0x4B7E150")]
	public void EndProfilingSampler(ProfilingSampler sampler, [CallerFilePath] string file = "", [CallerLineNumber] int line = 0)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x4B7E3B0", Offset = "0x4B7E3B0", VA = "0x4B7E3B0")]
	internal DynamicArray<CompiledPassInfo> GetCompiledPassInfos()
	{
		return null;
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x4B7E3C0", Offset = "0x4B7E3C0", VA = "0x4B7E3C0")]
	internal void ClearCompiledGraph()
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x4B7E660", Offset = "0x4B7E660", VA = "0x4B7E660")]
	private void InvalidateContext()
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x4B7E6C0", Offset = "0x4B7E6C0", VA = "0x4B7E6C0")]
	internal void OnPassAdded(RenderGraphPass pass)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4B7EE20", Offset = "0x4B7EE20", VA = "0x4B7EE20")]
	private void InitResourceInfosData(DynamicArray<CompiledResourceInfo> resourceInfos, int count)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4B7EEC0", Offset = "0x4B7EEC0", VA = "0x4B7EEC0")]
	private void InitializeCompilationData()
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4B7F040", Offset = "0x4B7F040", VA = "0x4B7F040")]
	private void CountReferences()
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4B7FAA0", Offset = "0x4B7FAA0", VA = "0x4B7FAA0")]
	private void CullUnusedPasses()
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4B80690", Offset = "0x4B80690", VA = "0x4B80690")]
	private void UpdatePassSynchronization(ref CompiledPassInfo currentPassInfo, ref CompiledPassInfo producerPassInfo, int currentPassIndex, int lastProducer, ref int intLastSyncIndex)
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x4B806B0", Offset = "0x4B806B0", VA = "0x4B806B0")]
	private void UpdateResourceSynchronization(ref int lastGraphicsPipeSync, ref int lastComputePipeSync, int currentPassIndex, in CompiledResourceInfo resource)
	{
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x4B80990", Offset = "0x4B80990", VA = "0x4B80990")]
	private int GetFirstValidConsumerIndex(int passIndex, in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x4B80B40", Offset = "0x4B80B40", VA = "0x4B80B40")]
	private int FindTextureProducer(int consumerPass, in CompiledResourceInfo info, out int index)
	{
		return default(int);
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x4B807D0", Offset = "0x4B807D0", VA = "0x4B807D0")]
	private int GetLatestProducerIndex(int passIndex, in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x4B80C30", Offset = "0x4B80C30", VA = "0x4B80C30")]
	private int GetLatestValidReadIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x4B80D10", Offset = "0x4B80D10", VA = "0x4B80D10")]
	private int GetFirstValidWriteIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x4B80DF0", Offset = "0x4B80DF0", VA = "0x4B80DF0")]
	private int GetLatestValidWriteIndex(in CompiledResourceInfo info)
	{
		return default(int);
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4B80ED0", Offset = "0x4B80ED0", VA = "0x4B80ED0")]
	private void CreateRendererLists()
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4B80FC0", Offset = "0x4B80FC0", VA = "0x4B80FC0")]
	internal bool GetImportedFallback(TextureDesc desc, out TextureHandle fallback)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4B81260", Offset = "0x4B81260", VA = "0x4B81260")]
	private void AllocateCulledPassResources(ref CompiledPassInfo passInfo, int passIndex)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4B81820", Offset = "0x4B81820", VA = "0x4B81820")]
	private void UpdateResourceAllocationAndSynchronization()
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4B823F0", Offset = "0x4B823F0", VA = "0x4B823F0")]
	private bool AreRendererListsEmpty(List<RendererListHandle> rendererLists)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x4B826B0", Offset = "0x4B826B0", VA = "0x4B826B0")]
	private void TryCullPassAtIndex(int passIndex)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x4B827B0", Offset = "0x4B827B0", VA = "0x4B827B0")]
	private void CullRendererLists()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x4B7DC80", Offset = "0x4B7DC80", VA = "0x4B7DC80")]
	internal void CompileRenderGraph()
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x4B829B0", Offset = "0x4B829B0", VA = "0x4B829B0")]
	private unsafe ref CompiledPassInfo CompilePassImmediatly(RenderGraphPass pass)
	{
		return ref *(CompiledPassInfo*)null;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4B7E700", Offset = "0x4B7E700", VA = "0x4B7E700")]
	private void ExecutePassImmediatly(RenderGraphPass pass)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4B83600", Offset = "0x4B83600", VA = "0x4B83600")]
	private void ExecuteCompiledPass(ref CompiledPassInfo passInfo, int passIndex)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4B7DD90", Offset = "0x4B7DD90", VA = "0x4B7DD90")]
	private void ExecuteRenderGraph()
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4B84500", Offset = "0x4B84500", VA = "0x4B84500")]
	private void PreRenderPassSetRenderTargets(in CompiledPassInfo passInfo, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4B83D40", Offset = "0x4B83D40", VA = "0x4B83D40")]
	private void PreRenderPassExecute(in CompiledPassInfo passInfo, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4B84160", Offset = "0x4B84160", VA = "0x4B84160")]
	private void PostRenderPassExecute(ref CompiledPassInfo passInfo, InternalRenderGraphContext rgContext)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x4B7E4B0", Offset = "0x4B7E4B0", VA = "0x4B7E4B0")]
	private void ClearRenderPasses()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4B84AB0", Offset = "0x4B84AB0", VA = "0x4B84AB0")]
	private void ReleaseImmediateModeResources()
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4B7DA50", Offset = "0x4B7DA50", VA = "0x4B7DA50")]
	private void LogFrameInformation()
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4B82890", Offset = "0x4B82890", VA = "0x4B82890")]
	private void LogRendererListsCreation()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4B839E0", Offset = "0x4B839E0", VA = "0x4B839E0")]
	private void LogRenderPassBegin(in CompiledPassInfo passInfo)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4B80190", Offset = "0x4B80190", VA = "0x4B80190")]
	private void LogCulledPasses()
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4B84D40", Offset = "0x4B84D40", VA = "0x4B84D40")]
	private ProfilingSampler GetDefaultProfilingSampler(string name)
	{
		return null;
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4B84E20", Offset = "0x4B84E20", VA = "0x4B84E20")]
	private void UpdateImportedResourceLifeTime(ref RenderGraphDebugData.ResourceDebugData data, List<int> passList)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4B85010", Offset = "0x4B85010", VA = "0x4B85010")]
	private void GenerateDebugData()
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4B865D0", Offset = "0x4B865D0", VA = "0x4B865D0")]
	private void CleanupDebugData()
	{
	}
}
