// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeBrickPool
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000F8")]
internal class ProbeBrickPool
{
	[Token(Token = "0x20000F9")]
	[DebuggerDisplay("Chunk ({x}, {y}, {z})")]
	public struct BrickChunkAlloc
	{
		[Token(Token = "0x400037C")]
		[FieldOffset(Offset = "0x0")]
		public int x;

		[Token(Token = "0x400037D")]
		[FieldOffset(Offset = "0x4")]
		public int y;

		[Token(Token = "0x400037E")]
		[FieldOffset(Offset = "0x8")]
		public int z;

		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x2B08A80", Offset = "0x2B07080", VA = "0x182B08A80")]
		internal int flattenIndex(int sx, int sy)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000FA")]
	public struct DataLocation
	{
		[Token(Token = "0x400037F")]
		[FieldOffset(Offset = "0x0")]
		internal Texture TexL0_L1rx;

		[Token(Token = "0x4000380")]
		[FieldOffset(Offset = "0x8")]
		internal Texture TexL1_G_ry;

		[Token(Token = "0x4000381")]
		[FieldOffset(Offset = "0x10")]
		internal Texture TexL1_B_rz;

		[Token(Token = "0x4000382")]
		[FieldOffset(Offset = "0x18")]
		internal Texture TexL2_0;

		[Token(Token = "0x4000383")]
		[FieldOffset(Offset = "0x20")]
		internal Texture TexL2_1;

		[Token(Token = "0x4000384")]
		[FieldOffset(Offset = "0x28")]
		internal Texture TexL2_2;

		[Token(Token = "0x4000385")]
		[FieldOffset(Offset = "0x30")]
		internal Texture TexL2_3;

		[Token(Token = "0x4000386")]
		[FieldOffset(Offset = "0x38")]
		internal Texture TexProbeOcclusion;

		[Token(Token = "0x4000387")]
		[FieldOffset(Offset = "0x40")]
		internal Texture TexValidity;

		[Token(Token = "0x4000388")]
		[FieldOffset(Offset = "0x48")]
		internal Texture TexSkyOcclusion;

		[Token(Token = "0x4000389")]
		[FieldOffset(Offset = "0x50")]
		internal Texture TexSkyShadingDirectionIndices;

		[Token(Token = "0x400038A")]
		[FieldOffset(Offset = "0x58")]
		internal int width;

		[Token(Token = "0x400038B")]
		[FieldOffset(Offset = "0x5C")]
		internal int height;

		[Token(Token = "0x400038C")]
		[FieldOffset(Offset = "0x60")]
		internal int depth;

		[Token(Token = "0x60008AB")]
		[Address(RVA = "0x2B0B0A0", Offset = "0x2B096A0", VA = "0x182B0B0A0")]
		internal void Cleanup()
		{
		}
	}

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int _Out_L0_L1Rx;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int _Out_L1G_L1Ry;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int _Out_L1B_L1Rz;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int _Out_Shared;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly int _Out_ProbeOcclusion;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x14")]
	internal static readonly int _Out_SkyOcclusionL0L1;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly int _Out_SkyShadingDirectionIndices;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x1C")]
	internal static readonly int _Out_L2_0;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly int _Out_L2_1;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x24")]
	internal static readonly int _Out_L2_2;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly int _Out_L2_3;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x2C")]
	internal static readonly int _ProbeVolumeScratchBufferLayout;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly int _ProbeVolumeScratchBuffer;

	[Token(Token = "0x4000363")]
	private const int kChunkSizeInBricks = 128;

	[Token(Token = "0x4000364")]
	internal const int kBrickCellCount = 3;

	[Token(Token = "0x4000365")]
	internal const int kBrickProbeCountPerDim = 4;

	[Token(Token = "0x4000366")]
	internal const int kBrickProbeCountTotal = 64;

	[Token(Token = "0x4000367")]
	internal const int kChunkProbeCountPerDim = 512;

	[Token(Token = "0x4000369")]
	private const int kMaxPoolWidth = 2048;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x18")]
	internal DataLocation m_Pool;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x80")]
	private BrickChunkAlloc m_NextFreeChunk;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x90")]
	private Stack<BrickChunkAlloc> m_FreeList;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x98")]
	private int m_AvailableChunkCount;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x9C")]
	private ProbeVolumeSHBands m_SHBands;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0xA0")]
	private bool m_ContainsValidity;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0xA1")]
	private bool m_ContainsProbeOcclusion;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0xA2")]
	private bool m_ContainsRenderingLayers;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0xA3")]
	private bool m_ContainsSkyOcclusion;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0xA4")]
	private bool m_ContainsSkyShadingDirection;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x38")]
	private static ComputeShader s_DataUploadCS;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x40")]
	private static int s_DataUploadKernel;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x48")]
	private static ComputeShader s_DataUploadL2CS;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x50")]
	private static int s_DataUploadL2Kernel;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x58")]
	private static LocalKeyword s_DataUpload_Shared;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x70")]
	private static LocalKeyword s_DataUpload_ProbeOcclusion;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x88")]
	private static LocalKeyword s_DataUpload_SkyOcclusion;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0xA0")]
	private static LocalKeyword s_DataUpload_SkyShadingDirection;

	[Token(Token = "0x170000F3")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x6000889")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600088A")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x2B107A0", Offset = "0x2B0EDA0", VA = "0x182B107A0")]
	internal static int DivRoundUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x2B11130", Offset = "0x2B0F730", VA = "0x182B11130")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
	internal Texture GetValidityTexture()
	{
		return null;
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
	internal Texture GetSkyOcclusionTexture()
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
	internal Texture GetSkyShadingDirectionIndicesTexture()
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
	internal Texture GetProbeOcclusionTexture()
	{
		return null;
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x2B12BD0", Offset = "0x2B111D0", VA = "0x182B12BD0")]
	internal ProbeBrickPool(ProbeVolumeTextureMemoryBudget memoryBudget, ProbeVolumeSHBands shBands, bool allocateValidityData = false, bool allocateRenderingLayerData = false, bool allocateSkyOcclusion = false, bool allocateSkyShadingData = false, bool allocateProbeOcclusionData = false)
	{
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x2B0F8C0", Offset = "0x2B0DEC0", VA = "0x182B0F8C0")]
	internal void AllocatePool(int width, int height, int depth)
	{
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0xB5B9F0", Offset = "0xB59FF0", VA = "0x180B5B9F0")]
	public int GetRemainingChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x2B107B0", Offset = "0x2B0EDB0", VA = "0x182B107B0")]
	internal void EnsureTextureValidity()
	{
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x2B10840", Offset = "0x2B0EE40", VA = "0x182B10840")]
	internal bool EnsureTextureValidity(bool renderingLayers, bool skyOcclusion, bool skyDirection, bool probeOcclusion)
	{
		return default(bool);
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x8471B0", Offset = "0x8457B0", VA = "0x1808471B0")]
	internal static int GetChunkSizeInBrickCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x868180", Offset = "0x866780", VA = "0x180868180")]
	internal static int GetChunkSizeInProbeCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560")]
	internal int GetPoolWidth()
	{
		return default(int);
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
	internal int GetPoolHeight()
	{
		return default(int);
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x2B10AB0", Offset = "0x2B0F0B0", VA = "0x182B10AB0")]
	internal Vector3Int GetPoolDimensions()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x2B10AD0", Offset = "0x2B0F0D0", VA = "0x182B10AD0")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x2B0FCD0", Offset = "0x2B0E2D0", VA = "0x182B0FCD0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x2B10AA0", Offset = "0x2B0F0A0", VA = "0x182B10AA0")]
	internal static int GetChunkCount(int brickCount)
	{
		return default(int);
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x2B0FA50", Offset = "0x2B0E050", VA = "0x182B0FA50")]
	internal bool Allocate(int numberOfBrickChunks, List<BrickChunkAlloc> outAllocations, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x2B10620", Offset = "0x2B0EC20", VA = "0x182B10620")]
	internal void Deallocate(List<BrickChunkAlloc> allocations)
	{
	}

	[Token(Token = "0x600089F")]
	[Address(RVA = "0x2B123D0", Offset = "0x2B109D0", VA = "0x182B123D0")]
	internal void Update(DataLocation source, List<BrickChunkAlloc> srcLocations, List<BrickChunkAlloc> dstLocations, int destStartIndex, ProbeVolumeSHBands bands)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x2B11920", Offset = "0x2B0FF20", VA = "0x182B11920")]
	internal void Update(CommandBuffer cmd, ProbeReferenceVolume.CellStreamingScratchBuffer dataBuffer, ProbeReferenceVolume.CellStreamingScratchBufferLayout layout, List<BrickChunkAlloc> dstLocations, bool updateSharedData, Texture validityTexture, ProbeVolumeSHBands bands, bool skyOcclusion, Texture skyOcclusionTexture, bool skyShadingDirections, Texture skyShadingDirectionsTexture, bool probeOcclusion)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x2B11730", Offset = "0x2B0FD30", VA = "0x182B11730")]
	internal void UpdateValidity(DataLocation source, List<BrickChunkAlloc> srcLocations, List<BrickChunkAlloc> dstLocations, int destStartIndex)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x2B116C0", Offset = "0x2B0FCC0", VA = "0x182B116C0")]
	internal static Vector3Int ProbeCountToDataLocSize(int numProbes)
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x2B10A70", Offset = "0x2B0F070", VA = "0x182B10A70")]
	private static int EstimateMemoryCost(int width, int height, int depth, GraphicsFormat format)
	{
		return default(int);
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x2B108F0", Offset = "0x2B0EEF0", VA = "0x182B108F0")]
	internal static int EstimateMemoryCostForBlending(ProbeVolumeTextureMemoryBudget memoryBudget, bool compressed, ProbeVolumeSHBands bands)
	{
		return default(int);
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x2B103A0", Offset = "0x2B0E9A0", VA = "0x182B103A0")]
	public static Texture CreateDataTexture(int width, int height, int depth, GraphicsFormat format, string name, bool allocateRendertexture, ref int allocatedBytes)
	{
		return null;
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x2B0FD30", Offset = "0x2B0E330", VA = "0x182B0FD30")]
	public static DataLocation CreateDataLocation(int numProbes, bool compressed, ProbeVolumeSHBands bands, string name, bool allocateRendertexture, bool allocateValidityData, bool allocateRenderingLayers, bool allocateSkyOcclusionData, bool allocateSkyShadingDirectionData, bool allocateProbeOcclusionData, out int allocatedBytes)
	{
		return default(DataLocation);
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x2B10790", Offset = "0x2B0ED90", VA = "0x182B10790")]
	private static void DerivePoolSizeFromBudget(ProbeVolumeTextureMemoryBudget memoryBudget, out int width, out int height, out int depth)
	{
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x2B0FCC0", Offset = "0x2B0E2C0", VA = "0x182B0FCC0")]
	internal void Cleanup()
	{
	}
}
