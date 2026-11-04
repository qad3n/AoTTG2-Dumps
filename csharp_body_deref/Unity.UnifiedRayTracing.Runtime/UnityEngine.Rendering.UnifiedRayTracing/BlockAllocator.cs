// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x200003D")]
internal struct BlockAllocator : IDisposable
{
	[Token(Token = "0x200003E")]
	public struct Block
	{
		[Token(Token = "0x4000183")]
		[FieldOffset(Offset = "0x0")]
		public int offset;

		[Token(Token = "0x4000184")]
		[FieldOffset(Offset = "0x4")]
		public int count;

		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x0")]
		public static readonly Block Invalid;
	}

	[Token(Token = "0x200003F")]
	public struct Allocation
	{
		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x0")]
		public int handle;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x4")]
		public Block block;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x0")]
		public static readonly Allocation Invalid;

		[Token(Token = "0x1700001A")]
		public readonly bool valid
		{
			[Token(Token = "0x60000DC")]
			[Address(RVA = "0x2D83D00", Offset = "0x2D82300", VA = "0x182D83D00")]
			get
			{
				return default(bool);
			}
		}
	}

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x0")]
	private int m_FreeElementCount;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x4")]
	private int m_MaxElementCount;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x8")]
	private NativeList<Block> m_freeBlocks;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x10")]
	private NativeList<Block> m_usedBlocks;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x18")]
	private NativeList<int> m_freeSlots;

	[Token(Token = "0x17000016")]
	public int freeElementsCount
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public int freeBlocks
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x2D85970", Offset = "0x2D83F70", VA = "0x182D85970")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public int capacity
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public int allocatedSize
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x2C27A00", Offset = "0x2C26000", VA = "0x182C27A00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x2D853C0", Offset = "0x2D839C0", VA = "0x182D853C0")]
	public void Initialize(int maxElementCounts)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x2D84D80", Offset = "0x2D83380", VA = "0x182D84D80")]
	private int CalculateGeometricGrowthCapacity(int desiredNewCapacity, int maxAllowedNewCapacity)
	{
		return default(int);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x2D852E0", Offset = "0x2D838E0", VA = "0x182D852E0")]
	public int Grow(int newDesiredCapacity, int maxAllowedCapacity = 2147483647)
	{
		return default(int);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x2D84F90", Offset = "0x2D83590", VA = "0x182D84F90")]
	public bool GetExpectedGrowthToFitAllocation(int elementCounts, int maxAllowedCapacity, out int newCapacity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x2D850F0", Offset = "0x2D836F0", VA = "0x182D850F0")]
	public Allocation GrowAndAllocate(int elementCounts, out int oldCapacity, out int newCapacity)
	{
		return default(Allocation);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x2D85140", Offset = "0x2D83740", VA = "0x182D85140")]
	public Allocation GrowAndAllocate(int elementCounts, int maxAllowedCapacity, out int oldCapacity, out int newCapacity)
	{
		return default(Allocation);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x2D84DC0", Offset = "0x2D833C0", VA = "0x182D84DC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x2D849B0", Offset = "0x2D82FB0", VA = "0x182D849B0")]
	public Allocation Allocate(int elementCounts)
	{
		return default(Allocation);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x2D85550", Offset = "0x2D83B50", VA = "0x182D85550")]
	private int MergeBlockFrontBack(int freeBlockId)
	{
		return default(int);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x2D84E60", Offset = "0x2D83460", VA = "0x182D84E60")]
	public void FreeAllocation(in Allocation allocation)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2D856C0", Offset = "0x2D83CC0", VA = "0x182D856C0")]
	public Allocation[] SplitAllocation(in Allocation allocation, int count)
	{
		return null;
	}
}
