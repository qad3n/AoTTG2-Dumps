// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.UnsafeQueueBlockHeader
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x20000EA")]
internal struct UnsafeQueueBlockHeader
{
	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x0")]
	public unsafe UnsafeQueueBlockHeader* m_NextBlock;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x8")]
	public int m_NumItems;
}
