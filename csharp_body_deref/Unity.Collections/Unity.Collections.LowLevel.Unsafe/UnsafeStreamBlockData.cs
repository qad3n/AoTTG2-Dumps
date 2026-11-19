// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000140")]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeStreamBlockData
{
	[Token(Token = "0x4000537")]
	internal const int AllocationSize = 4096;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x0")]
	internal AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x8")]
	internal unsafe UnsafeStreamBlock** Blocks;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x10")]
	internal int BlockCount;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x18")]
	internal AllocatorManager.Block Ranges;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x38")]
	internal int RangeCount;

	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x638DC00", Offset = "0x638CC00", VA = "0x638DC00")]
	internal unsafe UnsafeStreamBlock* Allocate(UnsafeStreamBlock* oldBlock, int threadIndex)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeStreamBlock*)unchecked((nint)null);
	}

	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x638DC70", Offset = "0x638CC70", VA = "0x638DC70")]
	internal unsafe void Free(UnsafeStreamBlock* oldBlock)
	{
	}
}
