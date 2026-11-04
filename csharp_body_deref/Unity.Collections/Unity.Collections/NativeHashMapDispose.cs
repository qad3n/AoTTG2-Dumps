// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeHashMapDispose
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x200008B")]
[NativeContainer]
[GenerateTestsForBurstCompatibility]
internal struct NativeHashMapDispose
{
	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeHashMap<int, int>* m_HashMapData;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x8")]
	internal AllocatorManager.AllocatorHandle m_Allocator;

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x29B5650", Offset = "0x29B3C50", VA = "0x1829B5650")]
	internal void Dispose()
	{
	}
}
