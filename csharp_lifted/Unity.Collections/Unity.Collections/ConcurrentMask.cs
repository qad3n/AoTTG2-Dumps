// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.ConcurrentMask
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x635FFD0", Offset = "0x635EFD0", VA = "0x635FFD0")]
	internal static long AtomicOr(ref long destination, long source)
	{
		return default(long);
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x6360020", Offset = "0x635F020", VA = "0x6360020")]
	internal static long AtomicAnd(ref long destination, long source)
	{
		return default(long);
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x6360070", Offset = "0x635F070", VA = "0x6360070")]
	internal static void longestConsecutiveOnes(long value, out int offset, out int count)
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x63600F0", Offset = "0x635F0F0", VA = "0x63600F0")]
	internal static bool foundAtLeastThisManyConsecutiveOnes(long value, int minimum, out int offset, out int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x63601F0", Offset = "0x635F1F0", VA = "0x63601F0")]
	internal static bool foundAtLeastThisManyConsecutiveZeroes(long value, int minimum, out int offset, out int count)
	{
		return default(bool);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x635A9A0", Offset = "0x63599A0", VA = "0x635A9A0")]
	internal static bool Succeeded(int error)
	{
		return default(bool);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x63602F0", Offset = "0x635F2F0", VA = "0x63602F0")]
	internal static long MakeMask(int offset, int bits)
	{
		return default(long);
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x6360310", Offset = "0x635F310", VA = "0x6360310")]
	internal static int TryAllocate(ref long l, int offset, int bits)
	{
		return default(int);
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x63603D0", Offset = "0x635F3D0", VA = "0x63603D0")]
	internal static int TryFree(ref long l, int offset, int bits)
	{
		return default(int);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x63604A0", Offset = "0x635F4A0", VA = "0x63604A0")]
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
	[Address(RVA = "0x63606A0", Offset = "0x635F6A0", VA = "0x63606A0")]
	public ConcurrentMask()
	{
	}
}
