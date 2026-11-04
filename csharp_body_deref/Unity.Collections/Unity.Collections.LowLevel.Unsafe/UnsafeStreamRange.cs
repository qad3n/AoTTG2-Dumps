// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x200013F")]
[GenerateTestsForBurstCompatibility]
internal struct UnsafeStreamRange
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x0")]
	internal unsafe UnsafeStreamBlock* Block;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x8")]
	internal int OffsetInFirstBlock;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0xC")]
	internal int ElementCount;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x10")]
	internal int LastOffset;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x14")]
	internal int NumberOfBlocks;
}
