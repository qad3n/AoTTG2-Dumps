// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UntypedUnsafeList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000112")]
internal struct UntypedUnsafeList
{
	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe readonly void* Ptr;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x8")]
	internal readonly int m_length;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0xC")]
	internal readonly int m_capacity;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x10")]
	internal readonly AllocatorManager.AllocatorHandle Allocator;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x14")]
	internal readonly int padding;
}
