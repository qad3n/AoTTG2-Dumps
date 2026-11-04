// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200012D")]
public struct UntypedUnsafeParallelHashMap
{
	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	private unsafe UnsafeParallelHashMapData* m_Buffer;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x8")]
	private AllocatorManager.AllocatorHandle m_AllocatorLabel;
}
