// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BufferOffsetSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002E0")]
internal class BufferOffsetSize
{
	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] Buffer;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x18")]
	internal int Offset;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x1C")]
	internal int Size;

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x27C01B0", Offset = "0x27BE7B0", VA = "0x1827C01B0")]
	internal BufferOffsetSize(byte[] buffer, int offset, int size, bool copyBuffer)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x27C00F0", Offset = "0x27BE6F0", VA = "0x1827C00F0")]
	internal BufferOffsetSize(byte[] buffer, bool copyBuffer)
	{
	}
}
