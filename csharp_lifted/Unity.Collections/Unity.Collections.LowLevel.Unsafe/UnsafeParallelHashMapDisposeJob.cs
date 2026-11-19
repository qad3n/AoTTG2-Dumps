// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDisposeJob
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x638DA30", Offset = "0x638CA30", VA = "0x638DA30", Slot = "4")]
	public void Execute()
	{
	}
}
