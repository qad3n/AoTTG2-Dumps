using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000116")]
internal class ProbeBrickPool
{
	[Token(Token = "0x2000117")]
	[DebuggerDisplay("Chunk ({x}, {y}, {z})")]
	public struct BrickChunkAlloc
	{
		[Token(Token = "0x40003DC")]
		[FieldOffset(Offset = "0x0")]
		public int x;

		[Token(Token = "0x40003DD")]
		[FieldOffset(Offset = "0x4")]
		public int y;

		[Token(Token = "0x40003DE")]
		[FieldOffset(Offset = "0x8")]
		public int z;

		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x488E1A0", Offset = "0x488E1A0", VA = "0x488E1A0")]
		internal int flattenIndex(int sx, int sy)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000118")]
	public struct DataLocation
	{
		[Token(Token = "0x40003DF")]
		[FieldOffset(Offset = "0x0")]
		internal Texture TexL0_L1rx;

		[Token(Token = "0x40003E0")]
		[FieldOffset(Offset = "0x8")]
		internal Texture TexL1_G_ry;

		[Token(Token = "0x40003E1")]
		[FieldOffset(Offset = "0x10")]
		internal Texture TexL1_B_rz;

		[Token(Token = "0x40003E2")]
		[FieldOffset(Offset = "0x18")]
		internal Texture TexL2_0;

		[Token(Token = "0x40003E3")]
		[FieldOffset(Offset = "0x20")]
		internal Texture TexL2_1;

		[Token(Token = "0x40003E4")]
		[FieldOffset(Offset = "0x28")]
		internal Texture TexL2_2;

		[Token(Token = "0x40003E5")]
		[FieldOffset(Offset = "0x30")]
		internal Texture TexL2_3;

		[Token(Token = "0x40003E6")]
		[FieldOffset(Offset = "0x38")]
		internal Texture3D TexValidity;

		[Token(Token = "0x40003E7")]
		[FieldOffset(Offset = "0x40")]
		internal int width;

		[Token(Token = "0x40003E8")]
		[FieldOffset(Offset = "0x44")]
		internal int height;

		[Token(Token = "0x40003E9")]
		[FieldOffset(Offset = "0x48")]
		internal int depth;

		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x4890200", Offset = "0x4890200", VA = "0x4890200")]
		internal void Cleanup()
		{
		}
	}

	[Token(Token = "0x40003CF")]
	private const int kChunkSizeInBricks = 128;

	[Token(Token = "0x40003D0")]
	internal const int kBrickCellCount = 3;

	[Token(Token = "0x40003D1")]
	internal const int kBrickProbeCountPerDim = 4;

	[Token(Token = "0x40003D2")]
	internal const int kBrickProbeCountTotal = 64;

	[Token(Token = "0x40003D3")]
	internal const int kChunkProbeCountPerDim = 512;

	[Token(Token = "0x40003D5")]
	private const int kMaxPoolWidth = 2048;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x18")]
	internal DataLocation m_Pool;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x68")]
	private BrickChunkAlloc m_NextFreeChunk;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x78")]
	private Stack<BrickChunkAlloc> m_FreeList;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x80")]
	private int m_AvailableChunkCount;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x84")]
	private ProbeVolumeSHBands m_SHBands;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x88")]
	private bool m_ContainsValidity;

	[Token(Token = "0x170000F4")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x60008DB")]
		[Address(RVA = "0x488FA60", Offset = "0x488FA60", VA = "0x488FA60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008DC")]
		[Address(RVA = "0x488FA70", Offset = "0x488FA70", VA = "0x488FA70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x488FA80", Offset = "0x488FA80", VA = "0x488FA80")]
	internal ProbeBrickPool(ProbeVolumeTextureMemoryBudget memoryBudget, ProbeVolumeSHBands shBands, bool allocateValidityData = true)
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x48900E0", Offset = "0x48900E0", VA = "0x48900E0")]
	public int GetRemainingChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x48900F0", Offset = "0x48900F0", VA = "0x48900F0")]
	internal void EnsureTextureValidity()
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x4890370", Offset = "0x4890370", VA = "0x4890370")]
	internal static int GetChunkSizeInBrickCount()
	{
		return default(int);
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x4890380", Offset = "0x4890380", VA = "0x4890380")]
	internal static int GetChunkSizeInProbeCount()
	{
		return default(int);
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x4890390", Offset = "0x4890390", VA = "0x4890390")]
	internal int GetPoolWidth()
	{
		return default(int);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x48903A0", Offset = "0x48903A0", VA = "0x48903A0")]
	internal int GetPoolHeight()
	{
		return default(int);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x48903B0", Offset = "0x48903B0", VA = "0x48903B0")]
	internal Vector3Int GetPoolDimensions()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x48903C0", Offset = "0x48903C0", VA = "0x48903C0")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x4890770", Offset = "0x4890770", VA = "0x4890770")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x48907C0", Offset = "0x48907C0", VA = "0x48907C0")]
	internal static int GetChunkCount(int brickCount)
	{
		return default(int);
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x48907E0", Offset = "0x48907E0", VA = "0x48907E0")]
	internal bool Allocate(int numberOfBrickChunks, List<BrickChunkAlloc> outAllocations, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x4890A80", Offset = "0x4890A80", VA = "0x4890A80")]
	internal void Deallocate(List<BrickChunkAlloc> allocations)
	{
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x4890C30", Offset = "0x4890C30", VA = "0x4890C30")]
	internal void Update(DataLocation source, List<BrickChunkAlloc> srcLocations, List<BrickChunkAlloc> dstLocations, int destStartIndex, ProbeVolumeSHBands bands)
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x4891080", Offset = "0x4891080", VA = "0x4891080")]
	internal void UpdateValidity(DataLocation source, List<BrickChunkAlloc> srcLocations, List<BrickChunkAlloc> dstLocations, int destStartIndex)
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x4891350", Offset = "0x4891350", VA = "0x4891350")]
	internal static Vector3Int ProbeCountToDataLocSize(int numProbes)
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x48913D0", Offset = "0x48913D0", VA = "0x48913D0")]
	private static int EstimateMemoryCost(int width, int height, int depth, GraphicsFormat format)
	{
		return default(int);
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x4891400", Offset = "0x4891400", VA = "0x4891400")]
	internal static int EstimateMemoryCost(ProbeVolumeTextureMemoryBudget memoryBudget, bool compressed, ProbeVolumeSHBands bands, bool allocateValidityData)
	{
		return default(int);
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x48914D0", Offset = "0x48914D0", VA = "0x48914D0")]
	public static Texture CreateDataTexture(int width, int height, int depth, GraphicsFormat format, string name, bool allocateRendertexture, ref int allocatedBytes)
	{
		return null;
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x488FC10", Offset = "0x488FC10", VA = "0x488FC10")]
	public static DataLocation CreateDataLocation(int numProbes, bool compressed, ProbeVolumeSHBands bands, string name, bool allocateRendertexture, bool allocateValidityData, out int allocatedBytes)
	{
		return default(DataLocation);
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x488FC00", Offset = "0x488FC00", VA = "0x488FC00")]
	private static void DerivePoolSizeFromBudget(ProbeVolumeTextureMemoryBudget memoryBudget, out int width, out int height, out int depth)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x4891730", Offset = "0x4891730", VA = "0x4891730")]
	internal void Cleanup()
	{
	}
}
