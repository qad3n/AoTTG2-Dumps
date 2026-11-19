// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.GeometryPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200002F")]
internal sealed class GeometryPool : IDisposable
{
	[Token(Token = "0x2000030")]
	private static class GeoPoolShaderIDs
	{
		[Token(Token = "0x4000131")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _InputIBBaseOffset;

		[Token(Token = "0x4000132")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _DispatchIndexOffset;

		[Token(Token = "0x4000133")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _InputIBCount;

		[Token(Token = "0x4000134")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _OutputIBOffset;

		[Token(Token = "0x4000135")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _InputFirstVertex;

		[Token(Token = "0x4000136")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _InputIndexBuffer;

		[Token(Token = "0x4000137")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _OutputIndexBuffer;

		[Token(Token = "0x4000138")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _InputVBCount;

		[Token(Token = "0x4000139")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _InputBaseVertexOffset;

		[Token(Token = "0x400013A")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _DispatchVertexOffset;

		[Token(Token = "0x400013B")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _OutputVBSize;

		[Token(Token = "0x400013C")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _OutputVBOffset;

		[Token(Token = "0x400013D")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _InputPosBufferStride;

		[Token(Token = "0x400013E")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _InputPosBufferOffset;

		[Token(Token = "0x400013F")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _InputUv0BufferStride;

		[Token(Token = "0x4000140")]
		[FieldOffset(Offset = "0x3C")]
		public static readonly int _InputUv0BufferOffset;

		[Token(Token = "0x4000141")]
		[FieldOffset(Offset = "0x40")]
		public static readonly int _InputUv1BufferStride;

		[Token(Token = "0x4000142")]
		[FieldOffset(Offset = "0x44")]
		public static readonly int _InputUv1BufferOffset;

		[Token(Token = "0x4000143")]
		[FieldOffset(Offset = "0x48")]
		public static readonly int _InputNormalBufferStride;

		[Token(Token = "0x4000144")]
		[FieldOffset(Offset = "0x4C")]
		public static readonly int _InputNormalBufferOffset;

		[Token(Token = "0x4000145")]
		[FieldOffset(Offset = "0x50")]
		public static readonly int _PosBuffer;

		[Token(Token = "0x4000146")]
		[FieldOffset(Offset = "0x54")]
		public static readonly int _Uv0Buffer;

		[Token(Token = "0x4000147")]
		[FieldOffset(Offset = "0x58")]
		public static readonly int _Uv1Buffer;

		[Token(Token = "0x4000148")]
		[FieldOffset(Offset = "0x5C")]
		public static readonly int _NormalBuffer;

		[Token(Token = "0x4000149")]
		[FieldOffset(Offset = "0x60")]
		public static readonly int _OutputVB;

		[Token(Token = "0x400014A")]
		[FieldOffset(Offset = "0x64")]
		public static readonly int _AttributesMask;
	}

	[Token(Token = "0x2000031")]
	public struct MeshChunk
	{
		[Token(Token = "0x400014B")]
		[FieldOffset(Offset = "0x0")]
		public BlockAllocator.Allocation vertexAlloc;

		[Token(Token = "0x400014C")]
		[FieldOffset(Offset = "0xC")]
		public BlockAllocator.Allocation indexAlloc;

		[Token(Token = "0x17000011")]
		public static MeshChunk Invalid
		{
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x6782630", Offset = "0x6781630", VA = "0x6782630")]
			get
			{
				return default(MeshChunk);
			}
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x6783B20", Offset = "0x6782B20", VA = "0x6783B20")]
		public GeoPoolMeshChunk EncodeGPUEntry()
		{
			return default(GeoPoolMeshChunk);
		}
	}

	[Token(Token = "0x2000032")]
	public struct GeometrySlot
	{
		[Token(Token = "0x400014D")]
		[FieldOffset(Offset = "0x0")]
		public uint refCount;

		[Token(Token = "0x400014E")]
		[FieldOffset(Offset = "0x4")]
		public uint hash;

		[Token(Token = "0x400014F")]
		[FieldOffset(Offset = "0x8")]
		public BlockAllocator.Allocation meshChunkTableAlloc;

		[Token(Token = "0x4000150")]
		[FieldOffset(Offset = "0x18")]
		public NativeArray<MeshChunk> meshChunks;

		[Token(Token = "0x4000151")]
		[FieldOffset(Offset = "0x28")]
		public bool hasGPUData;

		[Token(Token = "0x4000152")]
		[FieldOffset(Offset = "0x0")]
		public static readonly GeometrySlot Invalid;

		[Token(Token = "0x17000012")]
		public bool valid
		{
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x6780FD0", Offset = "0x677FFD0", VA = "0x6780FD0")]
			get
			{
				return default(bool);
			}
		}
	}

	[Token(Token = "0x2000033")]
	private struct GeoPoolEntrySlot
	{
		[Token(Token = "0x4000153")]
		[FieldOffset(Offset = "0x0")]
		public uint refCount;

		[Token(Token = "0x4000154")]
		[FieldOffset(Offset = "0x4")]
		public uint hash;

		[Token(Token = "0x4000155")]
		[FieldOffset(Offset = "0x8")]
		public int geoSlotHandle;

		[Token(Token = "0x4000156")]
		[FieldOffset(Offset = "0x0")]
		public static readonly GeoPoolEntrySlot Invalid;

		[Token(Token = "0x17000013")]
		public bool valid
		{
			[Token(Token = "0x60000B9")]
			[Address(RVA = "0x67829D0", Offset = "0x67819D0", VA = "0x67829D0")]
			get
			{
				return default(bool);
			}
		}
	}

	[Token(Token = "0x2000034")]
	private struct VertexBufferAttribInfo
	{
		[Token(Token = "0x4000157")]
		[FieldOffset(Offset = "0x0")]
		public GraphicsBuffer buffer;

		[Token(Token = "0x4000158")]
		[FieldOffset(Offset = "0x8")]
		public int stride;

		[Token(Token = "0x4000159")]
		[FieldOffset(Offset = "0xC")]
		public int offset;

		[Token(Token = "0x400015A")]
		[FieldOffset(Offset = "0x10")]
		public int byteCount;

		[Token(Token = "0x17000014")]
		public bool valid
		{
			[Token(Token = "0x60000BB")]
			[Address(RVA = "0x6784440", Offset = "0x6783440", VA = "0x6784440")]
			get
			{
				return default(bool);
			}
		}
	}

	[Token(Token = "0x4000113")]
	private const int kMaxThreadGroupsPerDispatch = 65535;

	[Token(Token = "0x4000114")]
	private const int kThreadGroupSize = 256;

	[Token(Token = "0x4000115")]
	private const int InvalidHandle = -1;

	[Token(Token = "0x4000116")]
	private const GraphicsBuffer.Target VertexBufferTarget = GraphicsBuffer.Target.Structured;

	[Token(Token = "0x4000117")]
	private const GraphicsBuffer.Target IndexBufferTarget = GraphicsBuffer.Target.Structured;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x10")]
	private GraphicsBuffer m_GlobalIndexBuffer;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x18")]
	private GraphicsBuffer m_GlobalVertexBuffer;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x20")]
	private GraphicsBuffer m_GlobalMeshChunkTableEntryBuffer;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x28")]
	private readonly GraphicsBuffer m_DummyBuffer;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x30")]
	private int m_MaxVertCounts;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x34")]
	private int m_MaxIndexCounts;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x38")]
	private int m_MaxMeshChunkTableEntriesCount;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x40")]
	private BlockAllocator m_VertexAllocator;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x60")]
	private BlockAllocator m_IndexAllocator;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x80")]
	private BlockAllocator m_MeshChunkTableAllocator;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0xA0")]
	private NativeParallelHashMap<uint, int> m_MeshHashToGeoSlot;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0xB0")]
	private List<GeometrySlot> m_GeoSlots;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0xB8")]
	private NativeList<int> m_FreeGeoSlots;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0xC0")]
	private NativeParallelHashMap<uint, GeometryPoolHandle> m_GeoPoolEntryHashToSlot;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0xD0")]
	private NativeList<GeoPoolEntrySlot> m_GeoPoolEntrySlots;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0xD8")]
	private NativeList<GeometryPoolHandle> m_FreeGeoPoolEntrySlots;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0xE0")]
	private readonly List<GraphicsBuffer> m_InputBufferReferences;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0xE8")]
	private readonly ComputeShader m_CopyShader;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0xF0")]
	private ComputeShader m_GeometryPoolKernelsCS;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0xF8")]
	private int m_KernelMainUpdateIndexBuffer16;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0xFC")]
	private int m_KernelMainUpdateIndexBuffer32;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x100")]
	private int m_KernelMainUpdateVertexBuffer;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x108")]
	private readonly CommandBuffer m_CmdBuffer;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x110")]
	private bool m_MustClearCmdBuffer;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x114")]
	private int m_PendingCmds;

	[Token(Token = "0x1700000A")]
	public GraphicsBuffer globalIndexBuffer
	{
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x6780A40", Offset = "0x677FA40", VA = "0x6780A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public GraphicsBuffer globalVertexBuffer
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x6780A50", Offset = "0x677FA50", VA = "0x6780A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public int globalVertexBufferStrideBytes
	{
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x67807F0", Offset = "0x677F7F0", VA = "0x67807F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000D")]
	public GraphicsBuffer globalMeshChunkTableEntryBuffer
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x6780A60", Offset = "0x677FA60", VA = "0x6780A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public int indicesCount
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x6780A70", Offset = "0x677FA70", VA = "0x6780A70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public int verticesCount
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x6780A80", Offset = "0x677FA80", VA = "0x6780A80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000010")]
	public int meshChunkTablesEntryCount
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x6780A90", Offset = "0x677FA90", VA = "0x6780A90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x6780280", Offset = "0x677F280", VA = "0x6780280")]
	public static int GetVertexByteSize()
	{
		return default(int);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x6780980", Offset = "0x677F980", VA = "0x6780980")]
	public static int GetIndexByteSize()
	{
		return default(int);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x6780990", Offset = "0x677F990", VA = "0x6780990")]
	public static int GetMeshChunkTableEntryByteSize()
	{
		return default(int);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x6780A10", Offset = "0x677FA10", VA = "0x6780A10")]
	private int GetFormatByteCount(VertexAttributeFormat format)
	{
		return default(int);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x6780A30", Offset = "0x677FA30", VA = "0x6780A30")]
	private static int DivUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x677B180", Offset = "0x677A180", VA = "0x677B180")]
	public GeometryPool(in GeometryPoolDesc desc, ComputeShader geometryPoolShader, ComputeShader copyShader)
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x6780DA0", Offset = "0x677FDA0", VA = "0x6780DA0")]
	private void DisposeInputBuffers()
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x677F2D0", Offset = "0x677E2D0", VA = "0x677F2D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6780AA0", Offset = "0x677FAA0", VA = "0x6780AA0")]
	private void LoadKernels(ComputeShader geometryPoolShader)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x6780B70", Offset = "0x677FB70", VA = "0x6780B70")]
	private int CalcVertexCount(int bufferByteSize)
	{
		return default(int);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6780B80", Offset = "0x677FB80", VA = "0x6780B80")]
	private int CalcIndexCount(int bufferByteSize)
	{
		return default(int);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6780B90", Offset = "0x677FB90", VA = "0x6780B90")]
	private int CalcMeshChunkTablesCount(int bufferByteSize)
	{
		return default(int);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6781030", Offset = "0x6780030", VA = "0x6781030")]
	private void DeallocateGeometrySlot(ref GeometrySlot slot)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6781340", Offset = "0x6780340", VA = "0x6781340")]
	private void DeallocateGeometrySlot(int geoSlotHandle)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x6781460", Offset = "0x6780460", VA = "0x6781460")]
	private bool AllocateGeo(Mesh mesh, out int allocationHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x67826C0", Offset = "0x67816C0", VA = "0x67826C0")]
	private void DeallocateGeoPoolEntrySlot(GeometryPoolHandle handle)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x6782840", Offset = "0x6781840", VA = "0x6782840")]
	private void DeallocateGeoPoolEntrySlot(ref GeoPoolEntrySlot geoPoolEntrySlot)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x67828B0", Offset = "0x67818B0", VA = "0x67828B0")]
	public GeometryPoolEntryInfo GetEntryInfo(GeometryPoolHandle handle)
	{
		return default(GeometryPoolEntryInfo);
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x67801B0", Offset = "0x677F1B0", VA = "0x67801B0")]
	public GeometrySlot GetEntryGeomAllocation(GeometryPoolHandle handle)
	{
		return default(GeometrySlot);
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x67829E0", Offset = "0x67819E0", VA = "0x67829E0")]
	public int GetInstanceGeometryIndex(Mesh mesh)
	{
		return default(int);
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x6782B70", Offset = "0x6781B70", VA = "0x6782B70")]
	private void UpdateGeoGpuState(Mesh mesh, GeometryPoolHandle handle)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x6783B30", Offset = "0x6782B30", VA = "0x6783B30")]
	private uint FNVHash(uint prevHash, uint dword)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x6783B70", Offset = "0x6782B70", VA = "0x6783B70")]
	private uint CalculateClusterHash(Mesh mesh, GeometryPoolSubmeshData[] submeshData)
	{
		return default(uint);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x6782A80", Offset = "0x6781A80", VA = "0x6782A80")]
	public GeometryPoolHandle GetHandle(Mesh mesh)
	{
		return default(GeometryPoolHandle);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x6783D30", Offset = "0x6782D30", VA = "0x6783D30")]
	private static int FindSubmeshEntryInDesc(int submeshIndex, in GeometryPoolSubmeshData[] submeshData)
	{
		return default(int);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x677FFF0", Offset = "0x677EFF0", VA = "0x677FFF0")]
	public bool Register(Mesh mesh, out GeometryPoolHandle outHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x6783D70", Offset = "0x6782D70", VA = "0x6783D70")]
	public bool Register(in GeometryPoolEntryDesc entryDesc, out GeometryPoolHandle outHandle)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x677F200", Offset = "0x677E200", VA = "0x677F200")]
	public void Unregister(GeometryPoolHandle handle)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x677F250", Offset = "0x677E250", VA = "0x677F250")]
	public void SendGpuCommands()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x6783090", Offset = "0x6782090", VA = "0x6783090")]
	private GraphicsBuffer LoadIndexBuffer(Mesh mesh)
	{
		return null;
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x6783170", Offset = "0x6782170", VA = "0x6783170")]
	private void LoadVertexAttribInfo(Mesh mesh, VertexAttribute attribute, out VertexBufferAttribInfo output)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x6783050", Offset = "0x6782050", VA = "0x6783050")]
	private CommandBuffer AllocateCommandBuffer()
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x6783830", Offset = "0x6782830", VA = "0x6783830")]
	private void AddIndexUpdateCommand(CommandBuffer cmdBuffer, IndexFormat inputFormat, in GraphicsBuffer inputBuffer, in BlockAllocator.Allocation location, int firstVertex, int inputOffset, int indexCount, int outputOffset, GraphicsBuffer outputIdxBuffer)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x6783300", Offset = "0x6782300", VA = "0x6783300")]
	private void AddVertexUpdateCommand(CommandBuffer cmdBuffer, int baseVertexOffset, in VertexBufferAttribInfo pos, in VertexBufferAttribInfo uv0, in VertexBufferAttribInfo uv1, in VertexBufferAttribInfo n, in BlockAllocator.Allocation location, GraphicsBuffer outputVertexBuffer)
	{
	}
}
