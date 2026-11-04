// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeDisposeJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000111")]
[BurstCompile]
internal struct UnsafeDisposeJob : IJob
{
	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe void* Ptr;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x8")]
	public AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x29BF4E0", Offset = "0x29BDAE0", VA = "0x1829BF4E0", Slot = "4")]
	public void Execute()
	{
	}
}
