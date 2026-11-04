// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.BuddyAllocator
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C54E90", Offset = "0x2C53490", VA = "0x182C54E90")]
		get
		{
			return ref *(Header*)null;
		}
	}

	[Token(Token = "0x170001C2")]
	private NativeArray<int> freeMaskCounts
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x2C54D40", Offset = "0x2C53340", VA = "0x182C54D40")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x170001C3")]
	private NativeArray<ulong> freeMasksStorage
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x2C54E20", Offset = "0x2C53420", VA = "0x182C54E20")]
		get
		{
			return default(NativeArray<ulong>);
		}
	}

	[Token(Token = "0x170001C4")]
	private NativeArray<int> freeMaskIndicesStorage
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x2C54DB0", Offset = "0x2C533B0", VA = "0x182C54DB0")]
		get
		{
			return default(NativeArray<int>);
		}
	}

	[Token(Token = "0x170001C5")]
	public int levelCount
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x2C54ED0", Offset = "0x2C534D0", VA = "0x182C54ED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x2C543D0", Offset = "0x2C529D0", VA = "0x182C543D0")]
	private NativeArray<ulong> FreeMasks(int level)
	{
		return default(NativeArray<ulong>);
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x2C54250", Offset = "0x2C52850", VA = "0x182C54250")]
	private NativeArray<int> FreeMaskIndices(int level)
	{
		return default(NativeArray<int>);
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x2C54B40", Offset = "0x2C53140", VA = "0x182C54B40")]
	public BuddyAllocator(int levelCount, int branchingOrder, Allocator allocator = Allocator.Persistent)
	{
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x2C548C0", Offset = "0x2C52EC0", VA = "0x182C548C0")]
	public bool TryAllocate(int requestedLevel, out BuddyAllocation allocation)
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x2C54550", Offset = "0x2C52B50", VA = "0x182C54550")]
	public void Free(BuddyAllocation allocation)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x2C54220", Offset = "0x2C52820", VA = "0x182C54220", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000678")]
	private NativeArray<T> GetNativeArray<T>(int offset, int length) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2C54850", Offset = "0x2C52E50", VA = "0x182C54850")]
	private static int LevelOffset(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x2C547E0", Offset = "0x2C52DE0", VA = "0x182C547E0")]
	private static int LevelLength(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2C547F0", Offset = "0x2C52DF0", VA = "0x182C547F0")]
	private static int LevelOffset64(int level, int branchingOrder)
	{
		return default(int);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x2C547B0", Offset = "0x2C52DB0", VA = "0x182C547B0")]
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
	[Address(RVA = "0x2C54200", Offset = "0x2C52800", VA = "0x182C54200")]
	private static int AlignForward(int offset, int alignment)
	{
		return default(int);
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x2C54890", Offset = "0x2C52E90", VA = "0x182C54890")]
	private unsafe static void* PtrAdd(void* ptr, int bytes)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x2B5DAA0", Offset = "0x2B5C0A0", VA = "0x182B5DAA0")]
	private static int Pow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x2C54880", Offset = "0x2C52E80", VA = "0x182C54880")]
	private static int Pow2N(int x, int n)
	{
		return default(int);
	}
}
