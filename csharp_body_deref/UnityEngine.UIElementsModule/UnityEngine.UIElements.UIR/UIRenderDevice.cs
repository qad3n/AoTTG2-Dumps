using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004E0")]
internal class UIRenderDevice : IDisposable
{
	[Token(Token = "0x20004E1")]
	internal struct AllocToUpdate
	{
		[Token(Token = "0x4001010")]
		[FieldOffset(Offset = "0x0")]
		public uint id;

		[Token(Token = "0x4001011")]
		[FieldOffset(Offset = "0x4")]
		public uint allocTime;

		[Token(Token = "0x4001012")]
		[FieldOffset(Offset = "0x8")]
		public MeshHandle meshHandle;

		[Token(Token = "0x4001013")]
		[FieldOffset(Offset = "0x10")]
		public Alloc permAllocVerts;

		[Token(Token = "0x4001014")]
		[FieldOffset(Offset = "0x28")]
		public Alloc permAllocIndices;

		[Token(Token = "0x4001015")]
		[FieldOffset(Offset = "0x40")]
		public Page permPage;

		[Token(Token = "0x4001016")]
		[FieldOffset(Offset = "0x48")]
		public bool copyBackIndices;
	}

	[Token(Token = "0x20004E2")]
	private struct AllocToFree
	{
		[Token(Token = "0x4001017")]
		[FieldOffset(Offset = "0x0")]
		public Alloc alloc;

		[Token(Token = "0x4001018")]
		[FieldOffset(Offset = "0x18")]
		public Page page;

		[Token(Token = "0x4001019")]
		[FieldOffset(Offset = "0x20")]
		public bool vertices;
	}

	[Token(Token = "0x20004E3")]
	private struct DeviceToFree
	{
		[Token(Token = "0x400101A")]
		[FieldOffset(Offset = "0x0")]
		public uint handle;

		[Token(Token = "0x400101B")]
		[FieldOffset(Offset = "0x8")]
		public Page page;

		[Token(Token = "0x6001E55")]
		[Address(RVA = "0x4C89B80", Offset = "0x4C89B80", VA = "0x4C89B80")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20004E4")]
	private struct EvaluationState
	{
		[Token(Token = "0x400101C")]
		[FieldOffset(Offset = "0x0")]
		public MaterialPropertyBlock stateMatProps;

		[Token(Token = "0x400101D")]
		[FieldOffset(Offset = "0x8")]
		public Material defaultMat;

		[Token(Token = "0x400101E")]
		[FieldOffset(Offset = "0x10")]
		public State curState;

		[Token(Token = "0x400101F")]
		[FieldOffset(Offset = "0x28")]
		public Page curPage;

		[Token(Token = "0x4001020")]
		[FieldOffset(Offset = "0x30")]
		public bool mustApplyMaterial;

		[Token(Token = "0x4001021")]
		[FieldOffset(Offset = "0x31")]
		public bool mustApplyCommonBlock;

		[Token(Token = "0x4001022")]
		[FieldOffset(Offset = "0x32")]
		public bool mustApplyStateBlock;

		[Token(Token = "0x4001023")]
		[FieldOffset(Offset = "0x33")]
		public bool mustApplyStencil;
	}

	[Token(Token = "0x20004E5")]
	internal struct DrawStatistics
	{
		[Token(Token = "0x4001024")]
		[FieldOffset(Offset = "0x0")]
		public int currentFrameIndex;

		[Token(Token = "0x4001025")]
		[FieldOffset(Offset = "0x4")]
		public uint totalIndices;

		[Token(Token = "0x4001026")]
		[FieldOffset(Offset = "0x8")]
		public uint commandCount;

		[Token(Token = "0x4001027")]
		[FieldOffset(Offset = "0xC")]
		public uint skippedCommandCount;

		[Token(Token = "0x4001028")]
		[FieldOffset(Offset = "0x10")]
		public uint drawCommandCount;

		[Token(Token = "0x4001029")]
		[FieldOffset(Offset = "0x14")]
		public uint disableCommandCount;

		[Token(Token = "0x400102A")]
		[FieldOffset(Offset = "0x18")]
		public uint materialSetCount;

		[Token(Token = "0x400102B")]
		[FieldOffset(Offset = "0x1C")]
		public uint drawRangeCount;

		[Token(Token = "0x400102C")]
		[FieldOffset(Offset = "0x20")]
		public uint drawRangeCallCount;

		[Token(Token = "0x400102D")]
		[FieldOffset(Offset = "0x24")]
		public uint immediateDraws;

		[Token(Token = "0x400102E")]
		[FieldOffset(Offset = "0x28")]
		public uint stencilRefChanges;
	}

	[Token(Token = "0x4000FF1")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool m_MockDevice;

	[Token(Token = "0x4000FF2")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr m_DefaultStencilState;

	[Token(Token = "0x4000FF3")]
	[FieldOffset(Offset = "0x20")]
	private IntPtr m_VertexDecl;

	[Token(Token = "0x4000FF4")]
	[FieldOffset(Offset = "0x28")]
	private Page m_FirstPage;

	[Token(Token = "0x4000FF5")]
	[FieldOffset(Offset = "0x30")]
	private uint m_NextPageVertexCount;

	[Token(Token = "0x4000FF6")]
	[FieldOffset(Offset = "0x34")]
	private uint m_LargeMeshVertexCount;

	[Token(Token = "0x4000FF7")]
	[FieldOffset(Offset = "0x38")]
	private float m_IndexToVertexCountRatio;

	[Token(Token = "0x4000FF8")]
	[FieldOffset(Offset = "0x40")]
	private List<List<AllocToFree>> m_DeferredFrees;

	[Token(Token = "0x4000FF9")]
	[FieldOffset(Offset = "0x48")]
	private List<List<AllocToUpdate>> m_Updates;

	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x50")]
	private uint[] m_Fences;

	[Token(Token = "0x4000FFB")]
	[FieldOffset(Offset = "0x58")]
	private MaterialPropertyBlock m_StandardMatProps;

	[Token(Token = "0x4000FFC")]
	[FieldOffset(Offset = "0x60")]
	private uint m_FrameIndex;

	[Token(Token = "0x4000FFD")]
	[FieldOffset(Offset = "0x64")]
	private uint m_NextUpdateID;

	[Token(Token = "0x4000FFE")]
	[FieldOffset(Offset = "0x68")]
	private DrawStatistics m_DrawStats;

	[Token(Token = "0x4000FFF")]
	[FieldOffset(Offset = "0x98")]
	private readonly LinkedPool<MeshHandle> m_MeshHandles;

	[Token(Token = "0x4001000")]
	[FieldOffset(Offset = "0xA0")]
	private readonly DrawParams m_DrawParams;

	[Token(Token = "0x4001001")]
	[FieldOffset(Offset = "0xA8")]
	private readonly TextureSlotManager m_TextureSlotManager;

	[Token(Token = "0x4001002")]
	[FieldOffset(Offset = "0x0")]
	private static LinkedList<DeviceToFree> m_DeviceFreeQueue;

	[Token(Token = "0x4001003")]
	[FieldOffset(Offset = "0x8")]
	private static int m_ActiveDeviceCount;

	[Token(Token = "0x4001004")]
	[FieldOffset(Offset = "0xC")]
	private static bool m_SubscribedToNotifications;

	[Token(Token = "0x4001005")]
	[FieldOffset(Offset = "0xD")]
	private static bool m_SynchronousFree;

	[Token(Token = "0x4001006")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_GradientSettingsTexID;

	[Token(Token = "0x4001007")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int s_ShaderInfoTexID;

	[Token(Token = "0x4001008")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker s_MarkerAllocate;

	[Token(Token = "0x4001009")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker s_MarkerFree;

	[Token(Token = "0x400100A")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker s_MarkerAdvanceFrame;

	[Token(Token = "0x400100B")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker s_MarkerFence;

	[Token(Token = "0x400100C")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker s_MarkerBeforeDraw;

	[Token(Token = "0x400100E")]
	[FieldOffset(Offset = "0x40")]
	private static Texture2D s_DefaultShaderInfoTexFloat;

	[Token(Token = "0x17000794")]
	internal static uint maxVerticesPerPage
	{
		[Token(Token = "0x6001E2C")]
		[Address(RVA = "0x4C84260", Offset = "0x4C84260", VA = "0x4C84260")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000795")]
	internal bool breakBatches
	{
		[Token(Token = "0x6001E2D")]
		[Address(RVA = "0x4C84270", Offset = "0x4C84270", VA = "0x4C84270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E2E")]
		[Address(RVA = "0x4C84280", Offset = "0x4C84280", VA = "0x4C84280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000796")]
	internal static Texture2D defaultShaderInfoTexFloat
	{
		[Token(Token = "0x6001E32")]
		[Address(RVA = "0x4C81B60", Offset = "0x4C81B60", VA = "0x4C81B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000797")]
	private bool fullyCreated
	{
		[Token(Token = "0x6001E35")]
		[Address(RVA = "0x4C85050", Offset = "0x4C85050", VA = "0x4C85050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000798")]
	protected bool disposed
	{
		[Token(Token = "0x6001E36")]
		[Address(RVA = "0x4C85060", Offset = "0x4C85060", VA = "0x4C85060")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E37")]
		[Address(RVA = "0x4C85070", Offset = "0x4C85070", VA = "0x4C85070")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x4C84290", Offset = "0x4C84290", VA = "0x4C84290")]
	static UIRenderDevice()
	{
	}

	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x4C84530", Offset = "0x4C84530", VA = "0x4C84530")]
	public UIRenderDevice(uint initialVertexCapacity = 0u, uint initialIndexCapacity = 0u)
	{
	}

	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x4C84540", Offset = "0x4C84540", VA = "0x4C84540")]
	protected UIRenderDevice(uint initialVertexCapacity, uint initialIndexCapacity, bool mockDevice)
	{
	}

	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x4C84BC0", Offset = "0x4C84BC0", VA = "0x4C84BC0")]
	private void InitVertexDeclaration()
	{
	}

	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x4C84EA0", Offset = "0x4C84EA0", VA = "0x4C84EA0")]
	private void CompleteCreation()
	{
	}

	[Token(Token = "0x6001E38")]
	[Address(RVA = "0x4C85080", Offset = "0x4C85080", VA = "0x4C85080", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001E39")]
	[Address(RVA = "0x4C850F0", Offset = "0x4C850F0", VA = "0x4C850F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001E3A")]
	[Address(RVA = "0x4C85680", Offset = "0x4C85680", VA = "0x4C85680")]
	public MeshHandle Allocate(uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset)
	{
		return null;
	}

	[Token(Token = "0x6001E3B")]
	[Address(RVA = "0x4C77320", Offset = "0x4C77320", VA = "0x4C77320")]
	public void Update(MeshHandle mesh, uint vertexCount, out NativeSlice<Vertex> vertexData)
	{
	}

	[Token(Token = "0x6001E3C")]
	[Address(RVA = "0x4C86B50", Offset = "0x4C86B50", VA = "0x4C86B50")]
	public void Update(MeshHandle mesh, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset)
	{
	}

	[Token(Token = "0x6001E3D")]
	[Address(RVA = "0x4C86D00", Offset = "0x4C86D00", VA = "0x4C86D00")]
	private void UpdateCopyBackIndices(MeshHandle mesh, bool copyBackIndices)
	{
	}

	[Token(Token = "0x6001E3E")]
	[Address(RVA = "0x4C86F10", Offset = "0x4C86F10", VA = "0x4C86F10")]
	internal List<AllocToUpdate> ActiveUpdatesForMeshHandle(MeshHandle mesh)
	{
		return null;
	}

	[Token(Token = "0x6001E3F")]
	[Address(RVA = "0x4C86F80", Offset = "0x4C86F80", VA = "0x4C86F80")]
	private bool TryAllocFromPage(Page page, uint vertexCount, uint indexCount, ref Alloc va, ref Alloc ia, bool shortLived)
	{
		return default(bool);
	}

	[Token(Token = "0x6001E40")]
	[Address(RVA = "0x4C85740", Offset = "0x4C85740", VA = "0x4C85740")]
	private void Allocate(MeshHandle meshHandle, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, bool shortLived)
	{
	}

	[Token(Token = "0x6001E41")]
	[Address(RVA = "0x4C86040", Offset = "0x4C86040", VA = "0x4C86040")]
	private void UpdateAfterGPUUsedData(MeshHandle mesh, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset, out AllocToUpdate allocToUpdate, bool copyBackIndices)
	{
	}

	[Token(Token = "0x6001E42")]
	[Address(RVA = "0x4C7C4E0", Offset = "0x4C7C4E0", VA = "0x4C7C4E0")]
	public void Free(MeshHandle mesh)
	{
	}

	[Token(Token = "0x6001E43")]
	[Address(RVA = "0x4C870D0", Offset = "0x4C870D0", VA = "0x4C870D0")]
	public void OnFrameRenderingBegin()
	{
	}

	[Token(Token = "0x6001E44")]
	internal unsafe static NativeSlice<T> PtrToSlice<T>(void* p, int count) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001E45")]
	[Address(RVA = "0x4C87FF0", Offset = "0x4C87FF0", VA = "0x4C87FF0")]
	private void ApplyDrawCommandState(RenderChainCommand cmd, int textureSlot, Material newMat, bool newMatDiffers, ref EvaluationState st)
	{
	}

	[Token(Token = "0x6001E46")]
	[Address(RVA = "0x4C881F0", Offset = "0x4C881F0", VA = "0x4C881F0")]
	private void ApplyBatchState(ref EvaluationState st, bool allowMaterialChange)
	{
	}

	[Token(Token = "0x6001E47")]
	[Address(RVA = "0x4C883C0", Offset = "0x4C883C0", VA = "0x4C883C0")]
	public void EvaluateChain(RenderChainCommand head, Material initialMat, Material defaultMat, Texture gradientSettings, Texture shaderInfo, float pixelsPerPoint, MaterialPropertyBlock stateMatProps, bool allowMaterialChange, ref Exception immediateException)
	{
	}

	[Token(Token = "0x6001E48")]
	[Address(RVA = "0x4C893E0", Offset = "0x4C893E0", VA = "0x4C893E0")]
	private void UpdateFenceValue()
	{
	}

	[Token(Token = "0x6001E49")]
	[Address(RVA = "0x4C89140", Offset = "0x4C89140", VA = "0x4C89140")]
	private unsafe void KickRanges(DrawBufferRange* ranges, ref int rangesReady, ref int rangesStart, int rangesCount, Page curPage)
	{
	}

	[Token(Token = "0x6001E4A")]
	private void DrawRanges<I, T>(Utility.GPUBuffer<I> ib, Utility.GPUBuffer<T> vb, NativeSlice<DrawBufferRange> ranges) where I : struct where T : struct
	{
	}

	[Token(Token = "0x6001E4B")]
	[Address(RVA = "0x4C894A0", Offset = "0x4C894A0", VA = "0x4C894A0")]
	private void WaitOnCpuFence(uint fence)
	{
	}

	[Token(Token = "0x6001E4C")]
	[Address(RVA = "0x4C871F0", Offset = "0x4C871F0", VA = "0x4C871F0")]
	public void AdvanceFrame()
	{
	}

	[Token(Token = "0x6001E4D")]
	[Address(RVA = "0x4C89560", Offset = "0x4C89560", VA = "0x4C89560")]
	private void PruneUnusedPages()
	{
	}

	[Token(Token = "0x6001E4E")]
	[Address(RVA = "0x4C896B0", Offset = "0x4C896B0", VA = "0x4C896B0")]
	internal static void PrepareForGfxDeviceRecreate()
	{
	}

	[Token(Token = "0x6001E4F")]
	[Address(RVA = "0x4C897B0", Offset = "0x4C897B0", VA = "0x4C897B0")]
	internal static void WrapUpGfxDeviceRecreate()
	{
	}

	[Token(Token = "0x6001E50")]
	[Address(RVA = "0x4C89820", Offset = "0x4C89820", VA = "0x4C89820")]
	internal static void FlushAllPendingDeviceDisposes()
	{
	}

	[Token(Token = "0x6001E51")]
	[Address(RVA = "0x4C89890", Offset = "0x4C89890", VA = "0x4C89890")]
	internal DrawStatistics GatherDrawStatistics()
	{
		return default(DrawStatistics);
	}

	[Token(Token = "0x6001E52")]
	[Address(RVA = "0x4C85270", Offset = "0x4C85270", VA = "0x4C85270")]
	private static void ProcessDeviceFreeQueue()
	{
	}

	[Token(Token = "0x6001E53")]
	[Address(RVA = "0x4C898B0", Offset = "0x4C898B0", VA = "0x4C898B0")]
	private static void OnEngineUpdateGlobal()
	{
	}

	[Token(Token = "0x6001E54")]
	[Address(RVA = "0x4C89910", Offset = "0x4C89910", VA = "0x4C89910")]
	private static void OnFlushPendingResources()
	{
	}
}
