// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataDispose
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000122")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeParallelHashMapDataDispose
{
	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeParallelHashMapData* m_Buffer;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x8")]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x638D880", Offset = "0x638C880", VA = "0x638D880")]
	public void Dispose()
	{
	}
}
