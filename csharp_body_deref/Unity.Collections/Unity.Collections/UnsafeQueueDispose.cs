// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UnsafeQueueDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000F0")]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeQueueDispose
{
	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeQueueData* m_Buffer;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x8")]
	internal AllocatorManager.AllocatorHandle m_AllocatorLabel;

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x29BFB60", Offset = "0x29BE160", VA = "0x1829BFB60")]
	public void Dispose()
	{
	}
}
