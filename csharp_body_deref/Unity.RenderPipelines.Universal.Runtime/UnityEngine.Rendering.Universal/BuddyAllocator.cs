// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.BuddyAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000ED")]
internal struct BuddyAllocator : IDisposable
{
	[Token(Token = "0x20000EE")]
	private struct Header
	{
		[Token(Token = "0x4000571")]
		[FieldOffset(Offset = "0x0")]
		public int branchingOrder;

		[Token(Token = "0x4000572")]
		[FieldOffset(Offset = "0x4")]
		public int levelCount;

		[Token(Token = "0x4000573")]
		[FieldOffset(Offset = "0x8")]
		public int allocationCount;

		[Token(Token = "0x4000574")]
		[FieldOffset(Offset = "0xC")]
		public int freeAllocationIdsCount;
	}

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x0")]
	private unsafe void* m_Data;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x8")]
	private (int, int) m_ActiveFreeMaskCounts;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x10")]
	private (int, int) m_FreeMasksStorage;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x18")]
	private (int, int) m_FreeMaskIndicesStorage;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x20")]
	private Allocator m_Allocator;

	[Token(Token = "0x170001C1")]
	private unsafe ref Header header
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x6647F10", Offset = "0x6646F10", VA = "0x6647F10")]
		get
		{
			return ref *(Header*)null;
		}
	}

	[Token(Token = "0x170001C2")]
	private NativeArray<int> freeMaskCounts
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x6647F40", Offset = "0x6646F40", VA = "0x6647F40")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x170001C3")]
	private NativeArray<ulong> freeMasksStorage
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x6647F80", Offset = "0x6646F80", VA = "0x6647F80")]
		get
		{
			return default(NativeArray<ulong>);
		}
	}

	[Token(Token = "0x170001C4")]
	private NativeArray<int> freeMaskIndicesStorage
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x6648120", Offset = "0x6647120", VA = "0x6648120")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x170001C5")]
	public int levelCount
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x6648260", Offset = "0x6647260", VA = "0x6648260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x6647FC0", Offset = "0x6646FC0", VA = "0x6647FC0")]
	private NativeArray<ulong> FreeMasks(int level)
	{
		return default(NativeArray<ulong>);
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x6648160", Offset = "0x6647160", VA = "0x6648160")]
	private NativeArray<int> FreeMaskIndices(int level)
	{
		return default(NativeArray<int>);
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x6648290", Offset = "0x6647290", VA = "0x6648290")]
	public BuddyAllocator(int levelCount, int branchingOrder, Allocator allocator = Allocator.Persistent)
	{
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x6648420", Offset = "0x6647420", VA = "0x6648420")]
	public bool TryAllocate(int requestedLevel, out BuddyAllocation allocation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x6648810", Offset = "0x6647810", VA = "0x6648810")]
	public void Free(BuddyAllocation allocation)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x66489E0", Offset = "0x66479E0", VA = "0x66489E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000678")]
	private NativeArray<T> GetNativeArray<T>(int offset, int length) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x6648A10", Offset = "0x6647A10", VA = "0x6648A10")]
	private static int LevelOffset(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x6648A30", Offset = "0x6647A30", VA = "0x6648A30")]
	private static int LevelLength(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x66480C0", Offset = "0x66470C0", VA = "0x66480C0")]
	private static int LevelOffset64(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x6648100", Offset = "0x6647100", VA = "0x6648100")]
	private static int LevelLength64(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067D")]
	private static (int, int) AllocateRange<T>(int length, ref int dataSize) where T : struct
	{
		return default((int, int));
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x6648A50", Offset = "0x6647A50", VA = "0x6648A50")]
	private static int AlignForward(int offset, int alignment)
	{
		return default(int);
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x6648A60", Offset = "0x6647A60", VA = "0x6648A60")]
	private unsafe static void* PtrAdd(void* ptr, int bytes)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x6648800", Offset = "0x6647800", VA = "0x6648800")]
	private static int Pow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x6648A40", Offset = "0x6647A40", VA = "0x6648A40")]
	private static int Pow2N(int x, int n)
	{
		return default(int);
	}
}
