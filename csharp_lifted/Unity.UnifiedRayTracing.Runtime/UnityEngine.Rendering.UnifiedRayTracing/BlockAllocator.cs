// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6781200", Offset = "0x6780200", VA = "0x6781200")]
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
		[Address(RVA = "0x6785FD0", Offset = "0x6784FD0", VA = "0x6785FD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000017")]
	public int freeBlocks
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x6785FE0", Offset = "0x6784FE0", VA = "0x6785FE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000018")]
	public int capacity
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x6786030", Offset = "0x6785030", VA = "0x6786030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public int allocatedSize
	{
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x6786040", Offset = "0x6785040", VA = "0x6786040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x6780BF0", Offset = "0x677FBF0", VA = "0x6780BF0")]
	public void Initialize(int maxElementCounts)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x6786050", Offset = "0x6785050", VA = "0x6786050")]
	private int CalculateGeometricGrowthCapacity(int desiredNewCapacity, int maxAllowedNewCapacity)
	{
		return default(int);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x6786070", Offset = "0x6785070", VA = "0x6786070")]
	public int Grow(int newDesiredCapacity, int maxAllowedCapacity = 2147483647)
	{
		return default(int);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x6786320", Offset = "0x6785320", VA = "0x6786320")]
	public bool GetExpectedGrowthToFitAllocation(int elementCounts, int maxAllowedCapacity, out int newCapacity)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x6786450", Offset = "0x6785450", VA = "0x6786450")]
	public Allocation GrowAndAllocate(int elementCounts, out int oldCapacity, out int newCapacity)
	{
		return default(Allocation);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x6782390", Offset = "0x6781390", VA = "0x6782390")]
	public Allocation GrowAndAllocate(int elementCounts, int maxAllowedCapacity, out int oldCapacity, out int newCapacity)
	{
		return default(Allocation);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x6780F30", Offset = "0x677FF30", VA = "0x6780F30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x6781FB0", Offset = "0x6780FB0", VA = "0x6781FB0")]
	public Allocation Allocate(int elementCounts)
	{
		return default(Allocation);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x6786160", Offset = "0x6785160", VA = "0x6786160")]
	private int MergeBlockFrontBack(int freeBlockId)
	{
		return default(int);
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x6781210", Offset = "0x6780210", VA = "0x6781210")]
	public void FreeAllocation(in Allocation allocation)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x6786460", Offset = "0x6785460", VA = "0x6786460")]
	public Allocation[] SplitAllocation(in Allocation allocation, int count)
	{
		return null;
	}
}
