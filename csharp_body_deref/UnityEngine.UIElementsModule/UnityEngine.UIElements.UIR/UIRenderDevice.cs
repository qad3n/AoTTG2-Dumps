// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.UIRenderDevice
// Update status: CHANGED in this game update
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

[Token(Token = "0x200057B")]
internal class UIRenderDevice : IDisposable
{
	[Token(Token = "0x200057C")]
	internal struct AllocToUpdate
	{
		[Token(Token = "0x40012DF")]
		[FieldOffset(Offset = "0x0")]
		public uint id;

		[Token(Token = "0x40012E0")]
		[FieldOffset(Offset = "0x4")]
		public uint allocTime;

		[Token(Token = "0x40012E1")]
		[FieldOffset(Offset = "0x8")]
		public MeshHandle meshHandle;

		[Token(Token = "0x40012E2")]
		[FieldOffset(Offset = "0x10")]
		public Alloc permAllocVerts;

		[Token(Token = "0x40012E3")]
		[FieldOffset(Offset = "0x28")]
		public Alloc permAllocIndices;

		[Token(Token = "0x40012E4")]
		[FieldOffset(Offset = "0x40")]
		public Page permPage;

		[Token(Token = "0x40012E5")]
		[FieldOffset(Offset = "0x48")]
		public bool copyBackIndices;
	}

	[Token(Token = "0x200057D")]
	private struct AllocToFree
	{
		[Token(Token = "0x40012E6")]
		[FieldOffset(Offset = "0x0")]
		public Alloc alloc;

		[Token(Token = "0x40012E7")]
		[FieldOffset(Offset = "0x18")]
		public Page page;

		[Token(Token = "0x40012E8")]
		[FieldOffset(Offset = "0x20")]
		public bool vertices;
	}

	[Token(Token = "0x200057E")]
	private struct DeviceToFree
	{
		[Token(Token = "0x40012E9")]
		[FieldOffset(Offset = "0x0")]
		public uint handle;

		[Token(Token = "0x40012EA")]
		[FieldOffset(Offset = "0x8")]
		public Page page;

		[Token(Token = "0x40012EB")]
		[FieldOffset(Offset = "0x10")]
		public CommandListManager commandListManager;

		[Token(Token = "0x6002957")]
		[Address(RVA = "0x317E9A0", Offset = "0x317CFA0", VA = "0x18317E9A0")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200057F")]
	[Flags]
	private enum EvaluationFlags
	{
		[Token(Token = "0x40012ED")]
		None = 0,
		[Token(Token = "0x40012EE")]
		MustApplyMaterial = 1,
		[Token(Token = "0x40012EF")]
		MustApplyBatchProps = 2,
		[Token(Token = "0x40012F0")]
		MustApplyStencil = 4,
		[Token(Token = "0x40012F1")]
		ForceRenderTypeBitOffset = MustApplyMaterial | MustApplyBatchProps,
		[Token(Token = "0x40012F2")]
		ForceRenderTypeSolid = 8,
		[Token(Token = "0x40012F3")]
		ForceRenderTypeTextured = 0x10,
		[Token(Token = "0x40012F4")]
		ForceRenderTypeText = ForceRenderTypeSolid | ForceRenderTypeTextured,
		[Token(Token = "0x40012F5")]
		ForceRenderTypeSvgGradient = 0x20,
		[Token(Token = "0x40012F6")]
		ForceRenderTypeBits = ForceRenderTypeText | ForceRenderTypeSvgGradient,
		[Token(Token = "0x40012F7")]
		TextureSlotCountBitOffset = MustApplyBatchProps | MustApplyStencil,
		[Token(Token = "0x40012F8")]
		TextureSlotCount1 = 0x40,
		[Token(Token = "0x40012F9")]
		TextureSlotCount2 = 0x80,
		[Token(Token = "0x40012FA")]
		TextureSlotCount4 = TextureSlotCount1 | TextureSlotCount2,
		[Token(Token = "0x40012FB")]
		TextureSlotCount8 = 0x100,
		[Token(Token = "0x40012FC")]
		TextureSlotCountBits = TextureSlotCount4 | TextureSlotCount8,
		[Token(Token = "0x40012FD")]
		IsSerializing = 0x200,
		[Token(Token = "0x40012FE")]
		IsRenderingNestedTreeRT = 0x400
	}

	[Token(Token = "0x2000580")]
	private struct EvaluationState
	{
		[Token(Token = "0x40012FF")]
		[FieldOffset(Offset = "0x0")]
		public CommandList activeCommandList;

		[Token(Token = "0x4001300")]
		[FieldOffset(Offset = "0x8")]
		public MaterialPropertyBlock constantProps;

		[Token(Token = "0x4001301")]
		[FieldOffset(Offset = "0x10")]
		public MaterialPropertyBlock batchProps;

		[Token(Token = "0x4001302")]
		[FieldOffset(Offset = "0x18")]
		public MaterialPropertyBlock userProps;

		[Token(Token = "0x4001303")]
		[FieldOffset(Offset = "0x20")]
		public Material material;

		[Token(Token = "0x4001304")]
		[FieldOffset(Offset = "0x28")]
		public int stencilRef;

		[Token(Token = "0x4001305")]
		[FieldOffset(Offset = "0x30")]
		public Page curPage;

		[Token(Token = "0x4001306")]
		[FieldOffset(Offset = "0x38")]
		public EvaluationFlags flags;

		[Token(Token = "0x4001307")]
		[FieldOffset(Offset = "0x40")]
		public VisualElement commandListOwner;
	}

	[Token(Token = "0x2000581")]
	internal struct DrawStatistics
	{
		[Token(Token = "0x4001308")]
		[FieldOffset(Offset = "0x0")]
		public int currentFrameIndex;

		[Token(Token = "0x4001309")]
		[FieldOffset(Offset = "0x4")]
		public uint totalIndices;

		[Token(Token = "0x400130A")]
		[FieldOffset(Offset = "0x8")]
		public uint commandCount;

		[Token(Token = "0x400130B")]
		[FieldOffset(Offset = "0xC")]
		public uint skippedCommandCount;

		[Token(Token = "0x400130C")]
		[FieldOffset(Offset = "0x10")]
		public uint drawCommandCount;

		[Token(Token = "0x400130D")]
		[FieldOffset(Offset = "0x14")]
		public uint disableCommandCount;

		[Token(Token = "0x400130E")]
		[FieldOffset(Offset = "0x18")]
		public uint materialSetCount;

		[Token(Token = "0x400130F")]
		[FieldOffset(Offset = "0x1C")]
		public uint drawRangeCount;

		[Token(Token = "0x4001310")]
		[FieldOffset(Offset = "0x20")]
		public uint drawRangeCallCount;

		[Token(Token = "0x4001311")]
		[FieldOffset(Offset = "0x24")]
		public uint immediateDraws;

		[Token(Token = "0x4001312")]
		[FieldOffset(Offset = "0x28")]
		public uint stencilRefChanges;
	}

	[Token(Token = "0x40012B7")]
	internal const uint k_MaxQueuedFrameCount = 4u;

	[Token(Token = "0x40012B8")]
	internal const int k_PruneEmptyPageFrameCount = 60;

	[Token(Token = "0x40012B9")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_DefaultStencilState;

	[Token(Token = "0x40012BA")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr m_VertexDecl;

	[Token(Token = "0x40012BB")]
	[FieldOffset(Offset = "0x20")]
	private Page m_FirstPage;

	[Token(Token = "0x40012BC")]
	[FieldOffset(Offset = "0x28")]
	private uint m_NextPageVertexCount;

	[Token(Token = "0x40012BD")]
	[FieldOffset(Offset = "0x2C")]
	private uint m_LargeMeshVertexCount;

	[Token(Token = "0x40012BE")]
	[FieldOffset(Offset = "0x30")]
	private float m_IndexToVertexCountRatio;

	[Token(Token = "0x40012BF")]
	[FieldOffset(Offset = "0x38")]
	private List<List<AllocToFree>> m_DeferredFrees;

	[Token(Token = "0x40012C0")]
	[FieldOffset(Offset = "0x40")]
	private List<List<AllocToUpdate>> m_Updates;

	[Token(Token = "0x40012C1")]
	[FieldOffset(Offset = "0x48")]
	private List<MeshHandle> m_MeshesPendingFree;

	[Token(Token = "0x40012C2")]
	[FieldOffset(Offset = "0x50")]
	private CommandListManager m_CommandListManager;

	[Token(Token = "0x40012C3")]
	[FieldOffset(Offset = "0x58")]
	private uint[] m_Fences;

	[Token(Token = "0x40012C4")]
	[FieldOffset(Offset = "0x60")]
	private MaterialPropertyBlock m_ConstantProps;

	[Token(Token = "0x40012C5")]
	[FieldOffset(Offset = "0x68")]
	private MaterialPropertyBlock m_BatchProps;

	[Token(Token = "0x40012C6")]
	[FieldOffset(Offset = "0x70")]
	private uint m_FrameIndex;

	[Token(Token = "0x40012C7")]
	[FieldOffset(Offset = "0x74")]
	private uint m_NextUpdateID;

	[Token(Token = "0x40012C8")]
	[FieldOffset(Offset = "0x78")]
	private DrawStatistics m_DrawStats;

	[Token(Token = "0x40012C9")]
	[FieldOffset(Offset = "0xA4")]
	private bool m_RenderingInProgress;

	[Token(Token = "0x40012CA")]
	[FieldOffset(Offset = "0xA8")]
	private readonly LinkedPool<MeshHandle> m_MeshHandles;

	[Token(Token = "0x40012CB")]
	[FieldOffset(Offset = "0xB0")]
	private readonly DrawParams m_DrawParams;

	[Token(Token = "0x40012CC")]
	[FieldOffset(Offset = "0xB8")]
	private readonly TextureSlotManager m_TextureSlotManager;

	[Token(Token = "0x40012CD")]
	[FieldOffset(Offset = "0xC0")]
	private HashSet<Material> m_ScreenSpaceAlteredMaterials;

	[Token(Token = "0x40012CE")]
	[FieldOffset(Offset = "0x0")]
	private static LinkedList<DeviceToFree> m_DeviceFreeQueue;

	[Token(Token = "0x40012CF")]
	[FieldOffset(Offset = "0x8")]
	private static int m_ActiveDeviceCount;

	[Token(Token = "0x40012D0")]
	[FieldOffset(Offset = "0xC")]
	private static bool m_SubscribedToNotifications;

	[Token(Token = "0x40012D1")]
	[FieldOffset(Offset = "0xD")]
	private static bool m_SynchronousFree;

	[Token(Token = "0x40012D2")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_GradientSettingsTexID;

	[Token(Token = "0x40012D3")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int s_ShaderInfoTexID;

	[Token(Token = "0x40012D4")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker s_MarkerAllocate;

	[Token(Token = "0x40012D5")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker s_MarkerFree;

	[Token(Token = "0x40012D6")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker s_MarkerAdvanceFrame;

	[Token(Token = "0x40012D7")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker s_MarkerFence;

	[Token(Token = "0x40012D8")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker s_MarkerBeforeDraw;

	[Token(Token = "0x40012DD")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int[] s_EvaluationFlagsToTextureSlotCount;

	[Token(Token = "0x40012DE")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int[] s_TextureSlotCountToEvaluationFlags;

	[Token(Token = "0x17000A4E")]
	internal static uint maxVerticesPerPage
	{
		[Token(Token = "0x600292B")]
		[Address(RVA = "0x1A5F210", Offset = "0x1A5D810", VA = "0x181A5F210")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000A4F")]
	internal bool breakBatches
	{
		[Token(Token = "0x600292C")]
		[Address(RVA = "0x1ABF0C0", Offset = "0x1ABD6C0", VA = "0x181ABF0C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600292D")]
		[Address(RVA = "0x318B9F0", Offset = "0x3189FF0", VA = "0x18318B9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A50")]
	internal bool isFlat
	{
		[Token(Token = "0x600292E")]
		[Address(RVA = "0x318B9E0", Offset = "0x3189FE0", VA = "0x18318B9E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A51")]
	internal bool forceGammaRendering
	{
		[Token(Token = "0x600292F")]
		[Address(RVA = "0x318B9D0", Offset = "0x3189FD0", VA = "0x18318B9D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A52")]
	protected bool disposed
	{
		[Token(Token = "0x6002933")]
		[Address(RVA = "0x318B9C0", Offset = "0x3189FC0", VA = "0x18318B9C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002934")]
		[Address(RVA = "0x318BA00", Offset = "0x318A000", VA = "0x18318BA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002930")]
	[Address(RVA = "0x318AC30", Offset = "0x3189230", VA = "0x18318AC30")]
	static UIRenderDevice()
	{
	}

	[Token(Token = "0x6002931")]
	[Address(RVA = "0x318AFB0", Offset = "0x31895B0", VA = "0x18318AFB0")]
	public UIRenderDevice(uint initialVertexCapacity = 0u, uint initialIndexCapacity = 0u, bool isFlat = true, bool forceGammaRendering = false)
	{
	}

	[Token(Token = "0x6002932")]
	[Address(RVA = "0x31888B0", Offset = "0x3186EB0", VA = "0x1831888B0")]
	private void InitVertexDeclaration()
	{
	}

	[Token(Token = "0x6002935")]
	[Address(RVA = "0x3186DF0", Offset = "0x31853F0", VA = "0x183186DF0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002936")]
	[Address(RVA = "0x3186C10", Offset = "0x3185210", VA = "0x183186C10", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002937")]
	[Address(RVA = "0x3185530", Offset = "0x3183B30", VA = "0x183185530")]
	public MeshHandle Allocate(uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset)
	{
		return null;
	}

	[Token(Token = "0x6002938")]
	[Address(RVA = "0x318A640", Offset = "0x3188C40", VA = "0x18318A640")]
	public void Update(MeshHandle mesh, uint vertexCount, out NativeSlice<Vertex> vertexData)
	{
	}

	[Token(Token = "0x6002939")]
	[Address(RVA = "0x318A880", Offset = "0x3188E80", VA = "0x18318A880")]
	public void Update(MeshHandle mesh, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset)
	{
	}

	[Token(Token = "0x600293A")]
	[Address(RVA = "0x318A430", Offset = "0x3188A30", VA = "0x18318A430")]
	private void UpdateCopyBackIndices(MeshHandle mesh, bool copyBackIndices)
	{
	}

	[Token(Token = "0x600293B")]
	[Address(RVA = "0x31845B0", Offset = "0x3182BB0", VA = "0x1831845B0")]
	internal List<AllocToUpdate> ActiveUpdatesForMeshHandle(MeshHandle mesh)
	{
		return null;
	}

	[Token(Token = "0x600293C")]
	[Address(RVA = "0x3189B30", Offset = "0x3188130", VA = "0x183189B30")]
	private bool TryAllocFromPage(Page page, uint vertexCount, uint indexCount, ref Alloc va, ref Alloc ia, bool shortLived)
	{
		return default(bool);
	}

	[Token(Token = "0x600293D")]
	[Address(RVA = "0x3185620", Offset = "0x3183C20", VA = "0x183185620")]
	private void Allocate(MeshHandle meshHandle, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, bool shortLived)
	{
	}

	[Token(Token = "0x600293E")]
	[Address(RVA = "0x3189CE0", Offset = "0x31882E0", VA = "0x183189CE0")]
	private void UpdateAfterGPUUsedData(MeshHandle mesh, uint vertexCount, uint indexCount, out NativeSlice<Vertex> vertexData, out NativeSlice<ushort> indexData, out ushort indexOffset, out AllocToUpdate allocToUpdate, bool copyBackIndices)
	{
	}

	[Token(Token = "0x600293F")]
	[Address(RVA = "0x3188090", Offset = "0x3186690", VA = "0x183188090")]
	public void Free(MeshHandle mesh)
	{
	}

	[Token(Token = "0x6002940")]
	[Address(RVA = "0x3189010", Offset = "0x3187610", VA = "0x183189010")]
	public void OnFrameRenderingBegin()
	{
	}

	[Token(Token = "0x6002941")]
	internal unsafe static NativeSlice<T> PtrToSlice<T>(void* p, int count) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002942")]
	[Address(RVA = "0x3187FA0", Offset = "0x31865A0", VA = "0x183187FA0")]
	private static int FlagsToTextureSlotCount(EvaluationFlags flags)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002943")]
	[Address(RVA = "0x3189AB0", Offset = "0x31880B0", VA = "0x183189AB0")]
	private static EvaluationFlags TextureSlotCountToFlags(TextureSlotCount count)
	{
		return default(EvaluationFlags);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002944")]
	[Address(RVA = "0x3186950", Offset = "0x3184F50", VA = "0x183186950")]
	private void ApplyDrawCommandState(RenderChainCommand cmd, int textureSlot, Material newMat, bool newMatDiffers, MaterialPropertyBlock userProps, EvaluationFlags defaultTextureSlotCountFlags, bool kickRanges, Texture gradientSettings, Texture shaderInfo, ref EvaluationState st)
	{
	}

	[Token(Token = "0x6002945")]
	[Address(RVA = "0x3185F10", Offset = "0x3184510", VA = "0x183185F10")]
	private void ApplyBatchState(ref EvaluationState st)
	{
	}

	[Token(Token = "0x6002946")]
	[Address(RVA = "0x3187100", Offset = "0x3185700", VA = "0x183187100")]
	public void EvaluateChain(RenderChainCommand head, Material defaultMat, Texture gradientSettings, Texture shaderInfo, Rect? scissor, Vector2 boundsMin, float pixelsPerPoint, bool isSerializing, TextureSlotCount defaultTextureSlotCount, bool isRenderingNestedTreeRT, ref Exception immediateException)
	{
	}

	[Token(Token = "0x6002947")]
	[Address(RVA = "0x31895F0", Offset = "0x3187BF0", VA = "0x1831895F0")]
	private void ResetScreenSpaceMaterials()
	{
	}

	[Token(Token = "0x6002948")]
	[Address(RVA = "0x3188B90", Offset = "0x3187190", VA = "0x183188B90")]
	private void InitializeConstantProperties(MaterialPropertyBlock constantProps, Texture gradientSettings, Texture shaderInfo)
	{
	}

	[Token(Token = "0x6002949")]
	[Address(RVA = "0x3189890", Offset = "0x3187E90", VA = "0x183189890")]
	private void SetupCommandList(ref EvaluationState st, Texture gradientSettings, Texture shaderInfo, CommandFlags commandFlags)
	{
	}

	[Token(Token = "0x600294A")]
	[Address(RVA = "0x318A570", Offset = "0x3188B70", VA = "0x18318A570")]
	private void UpdateFenceValue()
	{
	}

	[Token(Token = "0x600294B")]
	[Address(RVA = "0x3188CB0", Offset = "0x31872B0", VA = "0x183188CB0")]
	private unsafe void KickRanges(DrawBufferRange* ranges, ref int rangesReady, ref int rangesStart, int rangesCount, Page curPage, CommandList commandList)
	{
	}

	[Token(Token = "0x600294C")]
	[Address(RVA = "0x3186E50", Offset = "0x3185450", VA = "0x183186E50")]
	private void DrawRanges(Utility.GPUBuffer<ushort> ib, Utility.GPUBuffer<Vertex> vb, NativeSlice<DrawBufferRange> ranges, CommandList commandList)
	{
	}

	[Token(Token = "0x600294D")]
	[Address(RVA = "0x318AB50", Offset = "0x3189150", VA = "0x18318AB50")]
	private void WaitOnCpuFence(uint fence)
	{
	}

	[Token(Token = "0x600294E")]
	[Address(RVA = "0x3184620", Offset = "0x3182C20", VA = "0x183184620")]
	public void AdvanceFrame()
	{
	}

	[Token(Token = "0x600294F")]
	[Address(RVA = "0x3189410", Offset = "0x3187A10", VA = "0x183189410")]
	private void PruneUnusedPages()
	{
	}

	[Token(Token = "0x6002950")]
	[Address(RVA = "0x31890D0", Offset = "0x31876D0", VA = "0x1831890D0")]
	internal static void PrepareForGfxDeviceRecreate()
	{
	}

	[Token(Token = "0x6002951")]
	[Address(RVA = "0x318ABD0", Offset = "0x31891D0", VA = "0x18318ABD0")]
	internal static void WrapUpGfxDeviceRecreate()
	{
	}

	[Token(Token = "0x6002952")]
	[Address(RVA = "0x3188020", Offset = "0x3186620", VA = "0x183188020")]
	internal static void FlushAllPendingDeviceDisposes()
	{
	}

	[Token(Token = "0x6002953")]
	[Address(RVA = "0x3188880", Offset = "0x3186E80", VA = "0x183188880")]
	internal DrawStatistics GatherDrawStatistics()
	{
		return default(DrawStatistics);
	}

	[Token(Token = "0x6002954")]
	[Address(RVA = "0x3189130", Offset = "0x3187730", VA = "0x183189130")]
	public static void ProcessDeviceFreeQueue()
	{
	}

	[Token(Token = "0x6002955")]
	[Address(RVA = "0x3188F70", Offset = "0x3187570", VA = "0x183188F70")]
	private static void OnEngineUpdateGlobal()
	{
	}

	[Token(Token = "0x6002956")]
	[Address(RVA = "0x3188FB0", Offset = "0x31875B0", VA = "0x183188FB0")]
	private static void OnFlushPendingResources()
	{
	}
}
