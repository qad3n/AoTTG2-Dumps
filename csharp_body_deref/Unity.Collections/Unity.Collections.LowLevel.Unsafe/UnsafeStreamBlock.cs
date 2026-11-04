// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200013D")]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeStreamBlock
{
	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x0")]
	internal unsafe UnsafeStreamBlock* Next;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0x8")]
	internal unsafe fixed byte Data[1];
}
