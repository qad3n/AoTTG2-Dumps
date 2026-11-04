// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDisposeJob
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200012B")]
[BurstCompile]
internal struct UnsafeParallelHashMapDisposeJob : IJob
{
	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe UnsafeParallelHashMapData* Data;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x8")]
	public AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x29BF560", Offset = "0x29BDB60", VA = "0x1829BF560", Slot = "4")]
	public void Execute()
	{
	}
}
