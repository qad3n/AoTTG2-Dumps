// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.UIRenderDevice
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005D5")]
internal class UIRenderDevice : IDisposable
{
	[Token(Token = "0x20005D6")]
	internal struct AllocToUpdate
	{
		[Token(Token = "0x4001588")]
		[FieldOffset(Offset = "0x0")]
		public uint id;

		[Token(Token = "0x4001589")]
		[FieldOffset(Offset = "0x4")]
		public uint allocTime;

		[Token(Token = "0x400158A")]
		[FieldOffset(Offset = "0x8")]
		public MeshHandle meshHandle;

		[Token(Token = "0x400158B")]
		[FieldOffset(Offset = "0x10")]
		public Alloc permAllocVerts;

		[Token(Token = "0x400158C")]
		[FieldOffset(Offset = "0x28")]
		public Alloc permAllocIndices;

		[Token(Token = "0x400158D")]
		[FieldOffset(Offset = "0x40")]
		public Page permPage;

		[Token(Token = "0x400158E")]
		[FieldOffset(Offset = "0x48")]
		public bool copyBackIndices;
	}

	[Token(Token = "0x20005D7")]
	private struct AllocToFree
	{
		[Token(Token = "0x400158F")]
		[FieldOffset(Offset = "0x0")]
		public Alloc alloc;

		[Token(Token = "0x4001590")]
		[FieldOffset(Offset = "0x18")]
		public Page page;

		[Token(Token = "0x4001591")]
		[FieldOffset(Offset = "0x20")]
		public bool vertices;
	}

	[Token(Token = "0x20005D8")]
	private struct DeviceToFree
	{
		[Token(Token = "0x4001592")]
		[FieldOffset(Offset = "0x0")]
		public uint handle;

		[Token(Token = "0x4001593")]
		[FieldOffset(Offset = "0x8")]
		public Page page;

		[Token(Token = "0x4001594")]
		[FieldOffset(Offset = "0x10")]
		public CommandListManager commandListManager;

		[Token(Token = "0x6002B91")]
		[Address(RVA = "0x6BB2690", Offset = "0x6BB1690", VA = "0x6BB2690")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20005D9")]
	[Flags]
	private enum EvaluationFlags
	{
		[Token(Token = "0x4001596")]
		None = 0,
		[Token(Token = "0x4001597")]
		MustApplyMaterial = 1,
		[Token(Token = "0x4001598")]
		MustApplyBatchProps = 2,
		[Token(Token = "0x4001599")]
		MustApplyStencil = 4,
		[Token(Token = "0x400159A")]
		ForceRenderTypeBitOffset = MustApplyMaterial | MustApplyBatchProps,
		[Token(Token = "0x400159B")]
		ForceRenderTypeSolid = 8,
		[Token(Token = "0x400159C")]
		ForceRenderTypeTextured = 0x10,
		[Token(Token = "0x400159D")]
		ForceRenderTypeText = ForceRenderTypeSolid | ForceRenderTypeTextured,
		[Token(Token = "0x400159E")]
		ForceRenderTypeSvgGradient = 0x20,
		[Token(Token = "0x400159F")]
		ForceRenderTypeBits = ForceRenderTypeText | ForceRenderTypeSvgGradient,
		[Token(Token = "0x40015A0")]
		TextureSlotCountBitOffset = MustApplyBatchProps | MustApplyStencil,
		[Token(Token = "0x40015A1")]
		TextureSlotCount1 = 0x40,
		[Token(Token = "0x40015A2")]
		TextureSlotCount2 = 0x80,
		[Token(Token = "0x40015A3")]
		TextureSlotCount4 = TextureSlotCount1 | TextureSlotCount2,
		[Token(Token = "0x40015A4")]
		TextureSlotCount8 = 0x100,
		[Token(Token = "0x40015A5")]
		TextureSlotCountBits = TextureSlotCount4 | TextureSlotCount8,
		[Token(Token = "0x40015A6")]
		IsSerializing = 0x200,
		[Token(Token = "0x40015A7")]
		IsRenderingNestedTreeRT = 0x400
	}

	[Token(Token = "0x20005DA")]
	private struct EvaluationState
	{
		[Token(Token = "0x40015A8")]
		[FieldOffset(Offset = "0x0")]
		public CommandList activeCommandList;

		[Token(Token = "0x40015A9")]
		[FieldOffset(Offset = "0x8")]
		public MaterialPropertyBlock constantProps;

		[Token(Token = "0x40015AA")]
		[FieldOffset(Offset = "0x10")]
		public MaterialPropertyBlock batchProps;

		[Token(Token = "0x40015AB")]
		[FieldOffset(Offset = "0x18")]
		public MaterialPropertyBlock userProps;

		[Token(Token = "0x40015AC")]
		[FieldOffset(Offset = "0x20")]
		public Material material;

		[Token(Token = "0x40015AD")]
		[FieldOffset(Offset = "0x28")]
		public int stencilRef;

		[Token(Token = "0x40015AE")]
		[FieldOffset(Offset = "0x30")]
		public Page curPage;

		[Token(Token = "0x40015AF")]
		[FieldOffset(Offset = "0x38")]
		public EvaluationFlags flags;

		[Token(Token = "0x40015B0")]
		[FieldOffset(Offset = "0x40")]
		public VisualElement commandListOwner;
	}

	[Token(Token = "0x20005DB")]
	internal struct DrawStatistics
	{
		[Token(Token = "0x40015B1")]
		[FieldOffset(Offset = "0x0")]
		public int currentFrameIndex;

		[Token(Token = "0x40015B2")]
		[FieldOffset(Offset = "0x4")]
		public uint totalIndices;

		[Token(Token = "0x40015B3")]
		[FieldOffset(Offset = "0x8")]
		public uint commandCount;

		[Token(Token = "0x40015B4")]
		[FieldOffset(Offset = "0xC")]
		public uint skippedCommandCount;

		[Token(Token = "0x40015B5")]
		[FieldOffset(Offset = "0x10")]
		public uint drawCommandCount;

		[Token(Token = "0x40015B6")]
		[FieldOffset(Offset = "0x14")]
		public uint disableCommandCount;

		[Token(Token = "0x40015B7")]
		[FieldOffset(Offset = "0x18")]
		public uint materialSetCount;

		[Token(Token = "0x40015B8")]
		[FieldOffset(Offset = "0x1C")]
		public uint drawRangeCount;

		[Token(Token = "0x40015B9")]
		[FieldOffset(Offset = "0x20")]
		public uint drawRangeCallCount;

		[Token(Token = "0x40015BA")]
		[FieldOffset(Offset = "0x24")]
		public uint immediateDraws;

		[Token(Token = "0x40015BB")]
		[FieldOffset(Offset = "0x28")]
		public uint stencilRefChanges;
	}

	[Token(Token = "0x4001560")]
	internal const uint k_MaxQueuedFrameCount = 4u;

	[Token(Token = "0x4001561")]
	internal const int k_PruneEmptyPageFrameCount = 60;

	[Token(Token = "0x4001562")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_DefaultStencilState;

	[Token(Token = "0x4001563")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr m_VertexDecl;

	[Token(Token = "0x4001564")]
	[FieldOffset(Offset = "0x20")]
	private Page m_FirstPage;

	[Token(Token = "0x4001565")]
	[FieldOffset(Offset = "0x28")]
	private uint m_NextPageVertexCount;

	[Token(Token = "0x4001566")]
	[FieldOffset(Offset = "0x2C")]
	private uint m_LargeMeshVertexCount;

	[Token(Token = "0x4001567")]
	[FieldOffset(Offset = "0x30")]
	private float m_IndexToVertexCountRatio;

	[Token(Token = "0x4001568")]
	[FieldOffset(Offset = "0x38")]
	private List<List<AllocToFree>> m_DeferredFrees;

	[Token(Token = "0x4001569")]
	[FieldOffset(Offset = "0x40")]
	private List<List<AllocToUpdate>> m_Updates;

	[Token(Token = "0x400156A")]
	[FieldOffset(Offset = "0x48")]
	private List<MeshHandle> m_MeshesPendingFree;

	[Token(Token = "0x400156B")]
	[FieldOffset(Offset = "0x50")]
	private CommandListManager m_CommandListManager;

	[Token(Token = "0x400156C")]
	[FieldOffset(Offset = "0x58")]
	private uint[] m_Fences;

	[Token(Token = "0x400156D")]
	[FieldOffset(Offset = "0x60")]
	private MaterialPropertyBlock m_ConstantProps;

	[Token(Token = "0x400156E")]
	[FieldOffset(Offset = "0x68")]
	private MaterialPropertyBlock m_BatchProps;

	[Token(Token = "0x400156F")]
	[FieldOffset(Offset = "0x70")]
	private uint m_FrameIndex;

	[Token(Token = "0x4001570")]
	[FieldOffset(Offset = "0x74")]
	private uint m_NextUpdateID;

	[Token(Token = "0x4001571")]
	[FieldOffset(Offset = "0x78")]
	private DrawStatistics m_DrawStats;

	[Token(Token = "0x4001572")]
	[FieldOffset(Offset = "0xA4")]
	private bool m_RenderingInProgress;

	[Token(Token = "0x4001573")]
	[FieldOffset(Offset = "0xA8")]
	private readonly LinkedPool<MeshHandle> m_MeshHandles;

	[Token(Token = "0x4001574")]
	[FieldOffset(Offset = "0xB0")]
	private readonly DrawParams m_DrawParams;

	[Token(Token = "0x4001575")]
	[FieldOffset(Offset = "0xB8")]
	private readonly TextureSlotManager m_TextureSlotManager;

	[Token(Token = "0x4001576")]
	[FieldOffset(Offset = "0xC0")]
	private HashSet<Material> m_ScreenSpaceAlteredMaterials;

	[Token(Token = "0x4001577")]
	[FieldOffset(Offset = "0x0")]
	private static LinkedList<DeviceToFree> m_DeviceFreeQueue;

	[Token(Token = "0x4001578")]
	[FieldOffset(Offset = "0x8")]
	private static int m_ActiveDeviceCount;

	[Token(Token = "0x4001579")]
	[FieldOffset(Offset = "0xC")]
	private static bool m_SubscribedToNotifications;

	[Token(Token = "0x400157A")]
	[FieldOffset(Offset = "0xD")]
	private static bool m_SynchronousFree;

	[Token(Token = "0x400157B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_GradientSettingsTexID;

	[Token(Token = "0x400157C")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int s_ShaderInfoTexID;

	[Token(Token = "0x400157D")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker s_MarkerAllocate;

	[Token(Token = "0x400157E")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker s_MarkerFree;

	[Token(Token = "0x400157F")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker s_MarkerAdvanceFrame;

	[Token(Token = "0x4001580")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker s_MarkerFence;

	[Token(Token = "0x4001581")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker s_MarkerBeforeDraw;

	[Token(Token = "0x4001586")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int[] s_EvaluationFlagsToTextureSlotCount;

	[Token(Token = "0x4001587")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int[] s_TextureSlotCountToEvaluationFlags;

	[Token(Token = "0x17000AA4")]
	internal static uint maxVerticesPerPage
	{
		[Token(Token = "0x6002B65")]
		[Address(RVA = "0x6BAA9E0", Offset = "0x6BA99E0", VA = "0x6BAA9E0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000AA5")]
	internal bool breakBatches
	{
		[Token(Token = "0x6002B66")]
		[Address(RVA = "0x6BB1380", Offset = "0x6BB0380", VA = "0x6BB1380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B67")]
		[Address(RVA = "0x6BB1390", Offset = "0x6BB0390", VA = "0x6BB1390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000AA6")]
	internal bool isFlat
	{
		[Token(Token = "0x6002B68")]
		[Address(RVA = "0x6BB13A0", Offset = "0x6BB03A0", VA = "0x6BB13A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AA7")]
	internal bool forceGammaRendering
	{
		[Token(Token = "0x6002B69")]
		[Address(RVA = "0x6BB13B0", Offset = "0x6BB03B0", VA = "0x6BB13B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AA8")]
	protected bool disposed
	{
		[Token(Token = "0x6002B6D")]
		[Address(RVA = "0x6BB2450", Offset = "0x6BB1450", VA = "0x6BB2450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B6E")]
		[Address(RVA = "0x6BB2460", Offset = "0x6BB1460", VA = "0x6BB2460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002B6A")]
	[Address(RVA = "0x6BB13C0", Offset = "0x6BB03C0", VA = "0x6BB13C0")]
	static UIRenderDevice()
	{
	}

	[Token(Token = "0x6002B6B")]
	[Address(RVA = "0x6BB1710", Offset = "0x6BB0710", VA = "0x6BB1710")]
	public UIRenderDevice(uint initialVertexCapacity = 0u, uint initialIndexCapacity = 0u, bool isFlat = true, bool forceGammaRendering = false)
	{
	}

	[Token(Token = "0x6002B6C")]
	[Address(RVA = "0x6BB2170", Offset = "0x6BB1170", VA = "0x6BB2170")]
	private void InitVertexDeclaration()
	{
	}

	[Token(Token = "0x6002B6F")]
	[Address(RVA = "0x6BB2470", Offset = "0x6BB1470", VA = "0x6BB2470", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B70")]
	[Address(RVA = "0x6BB24E0", Offset = "0x6BB14E0", VA = "0x6BB24E0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B71")]
	[Address(RVA = "0x6BB2A90", Offset = "0x6BB1A90", VA = "0x6BB2A90")]
	public MeshHandle Allocate(uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset)
	{
		return null;
	}

	[Token(Token = "0x6002B72")]
	[Address(RVA = "0x6BA9450", Offset = "0x6BA8450", VA = "0x6BA9450")]
	public void Update(MeshHandle mesh, uint vertexCount, out NativeSlice<Vertex> vertexData)
	{
	}

	[Token(Token = "0x6002B73")]
	[Address(RVA = "0x6BB3FF0", Offset = "0x6BB2FF0", VA = "0x6BB3FF0")]
	public void Update(MeshHandle mesh, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset)
	{
	}

	[Token(Token = "0x6002B74")]
	[Address(RVA = "0x6BB41C0", Offset = "0x6BB31C0", VA = "0x6BB41C0")]
	private void UpdateCopyBackIndices(MeshHandle mesh, bool copyBackIndices)
	{
	}

	[Token(Token = "0x6002B75")]
	[Address(RVA = "0x6BB4390", Offset = "0x6BB3390", VA = "0x6BB4390")]
	internal List<AllocToUpdate> ActiveUpdatesForMeshHandle(MeshHandle mesh)
	{
		return null;
	}

	[Token(Token = "0x6002B76")]
	[Address(RVA = "0x6BB4400", Offset = "0x6BB3400", VA = "0x6BB4400")]
	private bool TryAllocFromPage(Page page, uint vertexCount, uint indexCount, ref Alloc va, ref Alloc ia, bool shortLived)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B77")]
	[Address(RVA = "0x6BB2B90", Offset = "0x6BB1B90", VA = "0x6BB2B90")]
	private void Allocate(MeshHandle meshHandle, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, bool shortLived)
	{
	}

	[Token(Token = "0x6002B78")]
	[Address(RVA = "0x6BB3540", Offset = "0x6BB2540", VA = "0x6BB3540")]
	private void UpdateAfterGPUUsedData(MeshHandle mesh, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset, out AllocToUpdate allocToUpdate, bool copyBackIndices)
	{
	}

	[Token(Token = "0x6002B79")]
	[Address(RVA = "0x6BB48D0", Offset = "0x6BB38D0", VA = "0x6BB48D0")]
	public void Free(MeshHandle mesh)
	{
	}

	[Token(Token = "0x6002B7A")]
	[Address(RVA = "0x6BB5560", Offset = "0x6BB4560", VA = "0x6BB5560")]
	public void OnFrameRenderingBegin()
	{
	}

	[Token(Token = "0x6002B7B")]
	internal unsafe static NativeSlice<T> PtrToSlice<T>(void* p, int count) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002B7C")]
	[Address(RVA = "0x6BB5740", Offset = "0x6BB4740", VA = "0x6BB5740")]
	private static int FlagsToTextureSlotCount(EvaluationFlags flags)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x6BB57E0", Offset = "0x6BB47E0", VA = "0x6BB57E0")]
	private static EvaluationFlags TextureSlotCountToFlags(TextureSlotCount count)
	{
		return default(EvaluationFlags);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002B7E")]
	[Address(RVA = "0x6BB5880", Offset = "0x6BB4880", VA = "0x6BB5880")]
	private void ApplyDrawCommandState(RenderChainCommand cmd, int textureSlot, Material newMat, bool newMatDiffers, MaterialPropertyBlock userProps, EvaluationFlags defaultTextureSlotCountFlags, bool kickRanges, Texture gradientSettings, Texture shaderInfo, ref EvaluationState st)
	{
	}

	[Token(Token = "0x6002B7F")]
	[Address(RVA = "0x6BB5D90", Offset = "0x6BB4D90", VA = "0x6BB5D90")]
	private void ApplyBatchState(ref EvaluationState st)
	{
	}

	[Token(Token = "0x6002B80")]
	[Address(RVA = "0x6BB65B0", Offset = "0x6BB55B0", VA = "0x6BB65B0")]
	public void EvaluateChain(RenderChainCommand head, Material defaultMat, Texture gradientSettings, Texture shaderInfo, Rect? scissor, Vector2 boundsMin, float pixelsPerPoint, bool isSerializing, TextureSlotCount defaultTextureSlotCount, bool isRenderingNestedTreeRT, ref Exception immediateException)
	{
	}

	[Token(Token = "0x6002B81")]
	[Address(RVA = "0x6BB7D70", Offset = "0x6BB6D70", VA = "0x6BB7D70")]
	private void ResetScreenSpaceMaterials()
	{
	}

	[Token(Token = "0x6002B82")]
	[Address(RVA = "0x6BB76D0", Offset = "0x6BB66D0", VA = "0x6BB76D0")]
	private void InitializeConstantProperties(MaterialPropertyBlock constantProps, Texture gradientSettings, Texture shaderInfo)
	{
	}

	[Token(Token = "0x6002B83")]
	[Address(RVA = "0x6BB5C80", Offset = "0x6BB4C80", VA = "0x6BB5C80")]
	private void SetupCommandList(ref EvaluationState st, Texture gradientSettings, Texture shaderInfo, CommandFlags commandFlags)
	{
	}

	[Token(Token = "0x6002B84")]
	[Address(RVA = "0x6BB5680", Offset = "0x6BB4680", VA = "0x6BB5680")]
	private void UpdateFenceValue()
	{
	}

	[Token(Token = "0x6002B85")]
	[Address(RVA = "0x6BB7B20", Offset = "0x6BB6B20", VA = "0x6BB7B20")]
	private unsafe void KickRanges(DrawBufferRange* ranges, ref int rangesReady, ref int rangesStart, int rangesCount, Page curPage, CommandList commandList)
	{
	}

	[Token(Token = "0x6002B86")]
	[Address(RVA = "0x6BB8A10", Offset = "0x6BB7A10", VA = "0x6BB8A10")]
	private void DrawRanges(Utility.GPUBuffer<ushort> ib, Utility.GPUBuffer<Vertex> vb, NativeSlice<DrawBufferRange> ranges, CommandList commandList)
	{
	}

	[Token(Token = "0x6002B87")]
	[Address(RVA = "0x6BB8BA0", Offset = "0x6BB7BA0", VA = "0x6BB8BA0")]
	private void WaitOnCpuFence(uint fence)
	{
	}

	[Token(Token = "0x6002B88")]
	[Address(RVA = "0x6BB8C60", Offset = "0x6BB7C60", VA = "0x6BB8C60")]
	public void AdvanceFrame()
	{
	}

	[Token(Token = "0x6002B89")]
	[Address(RVA = "0x6BB9BC0", Offset = "0x6BB8BC0", VA = "0x6BB9BC0")]
	private void PruneUnusedPages()
	{
	}

	[Token(Token = "0x6002B8A")]
	[Address(RVA = "0x6BB9DD0", Offset = "0x6BB8DD0", VA = "0x6BB9DD0")]
	internal static void PrepareForGfxDeviceRecreate()
	{
	}

	[Token(Token = "0x6002B8B")]
	[Address(RVA = "0x6BB9E40", Offset = "0x6BB8E40", VA = "0x6BB9E40")]
	internal static void WrapUpGfxDeviceRecreate()
	{
	}

	[Token(Token = "0x6002B8C")]
	[Address(RVA = "0x6BB9EB0", Offset = "0x6BB8EB0", VA = "0x6BB9EB0")]
	internal static void FlushAllPendingDeviceDisposes()
	{
	}

	[Token(Token = "0x6002B8D")]
	[Address(RVA = "0x6BB9F20", Offset = "0x6BB8F20", VA = "0x6BB9F20")]
	internal DrawStatistics GatherDrawStatistics()
	{
		return default(DrawStatistics);
	}

	[Token(Token = "0x6002B8E")]
	[Address(RVA = "0x6BB2750", Offset = "0x6BB1750", VA = "0x6BB2750")]
	public static void ProcessDeviceFreeQueue()
	{
	}

	[Token(Token = "0x6002B8F")]
	[Address(RVA = "0x6BB9F50", Offset = "0x6BB8F50", VA = "0x6BB9F50")]
	private static void OnEngineUpdateGlobal()
	{
	}

	[Token(Token = "0x6002B90")]
	[Address(RVA = "0x6BB9FB0", Offset = "0x6BB8FB0", VA = "0x6BB9FB0")]
	private static void OnFlushPendingResources()
	{
	}
}
