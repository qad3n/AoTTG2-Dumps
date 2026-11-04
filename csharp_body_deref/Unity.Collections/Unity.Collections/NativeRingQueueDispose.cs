// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeRingQueueDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000BF")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeRingQueueDispose
{
	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe UnsafeRingQueue<int>* m_QueueData;

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x29B5810", Offset = "0x29B3E10", VA = "0x1829B5810")]
	public void Dispose()
	{
	}
}
