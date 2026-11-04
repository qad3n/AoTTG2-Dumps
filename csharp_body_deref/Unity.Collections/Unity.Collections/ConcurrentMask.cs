// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.ConcurrentMask
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000042")]
internal class ConcurrentMask
{
	[Token(Token = "0x400009E")]
	internal const int ErrorFailedToFree = -1;

	[Token(Token = "0x400009F")]
	internal const int ErrorFailedToAllocate = -2;

	[Token(Token = "0x40000A0")]
	internal const int ErrorAllocationCrossesWordBoundary = -3;

	[Token(Token = "0x40000A1")]
	internal const int EmptyBeforeAllocation = 0;

	[Token(Token = "0x40000A2")]
	internal const int EmptyAfterFree = 0;

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x2998330", Offset = "0x2996930", VA = "0x182998330")]
	internal static long AtomicOr(ref long destination, long source)
	{
		return default(long);
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x29982E0", Offset = "0x29968E0", VA = "0x1829982E0")]
	internal static long AtomicAnd(ref long destination, long source)
	{
		return default(long);
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2998A10", Offset = "0x2997010", VA = "0x182998A10")]
	internal static void longestConsecutiveOnes(long value, out int offset, out int count)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x2998780", Offset = "0x2996D80", VA = "0x182998780")]
	internal static bool foundAtLeastThisManyConsecutiveOnes(long value, int minimum, out int offset, out int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x29988C0", Offset = "0x2996EC0", VA = "0x1829988C0")]
	internal static bool foundAtLeastThisManyConsecutiveZeroes(long value, int minimum, out int offset, out int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x2827370", Offset = "0x2825970", VA = "0x182827370")]
	internal static bool Succeeded(int error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x2998380", Offset = "0x2996980", VA = "0x182998380")]
	internal static long MakeMask(int offset, int bits)
	{
		return default(long);
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x29985A0", Offset = "0x2996BA0", VA = "0x1829985A0")]
	internal static int TryAllocate(ref long l, int offset, int bits)
	{
		return default(int);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2998680", Offset = "0x2996C80", VA = "0x182998680")]
	internal static int TryFree(ref long l, int offset, int bits)
	{
		return default(int);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x29983A0", Offset = "0x29969A0", VA = "0x1829983A0")]
	internal static int TryAllocate(ref long l, out int offset, int bits)
	{
		return default(int);
	}

	[Token(Token = "0x600016B")]
	internal static int TryAllocate<T>(ref T t, int offset, int bits) where T : IIndexable<long>
	{
		return default(int);
	}

	[Token(Token = "0x600016C")]
	internal static int TryFree<T>(ref T t, int offset, int bits) where T : IIndexable<long>
	{
		return default(int);
	}

	[Token(Token = "0x600016D")]
	internal static int TryAllocate<T>(ref T t, out int offset, int begin, int end, int bits) where T : IIndexable<long>
	{
		return default(int);
	}

	[Token(Token = "0x600016E")]
	internal static int TryAllocate<T>(ref T t, out int offset, int begin, int bits) where T : IIndexable<long>
	{
		return default(int);
	}

	[Token(Token = "0x600016F")]
	internal static int TryAllocate<T>(ref T t, out int offset, int bits) where T : IIndexable<long>
	{
		return default(int);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ConcurrentMask()
	{
	}
}
