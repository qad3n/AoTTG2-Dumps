// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeQueueDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000B7")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeQueueDispose
{
	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	public unsafe UnsafeQueue<int>* m_QueueData;

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x29B56D0", Offset = "0x29B3CD0", VA = "0x1829B56D0")]
	public void Dispose()
	{
	}
}
