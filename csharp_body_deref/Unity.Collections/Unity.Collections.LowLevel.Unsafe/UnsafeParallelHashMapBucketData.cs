// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapBucketData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000120")]
[GenerateTestsForBurstCompatibility]
public struct UnsafeParallelHashMapBucketData
{
	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x0")]
	public unsafe readonly byte* values;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x8")]
	public unsafe readonly byte* keys;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x10")]
	public unsafe readonly byte* next;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x18")]
	public unsafe readonly byte* buckets;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x20")]
	public readonly int bucketCapacityMask;

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x29BF540", Offset = "0x29BDB40", VA = "0x1829BF540")]
	internal unsafe UnsafeParallelHashMapBucketData(byte* v, byte* k, byte* n, byte* b, int bcm)
	{
	}
}
