// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BufferOffsetSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000158")]
internal class BufferOffsetSize
{
	[Token(Token = "0x40006EC")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] Buffer;

	[Token(Token = "0x40006ED")]
	[FieldOffset(Offset = "0x18")]
	internal int Offset;

	[Token(Token = "0x40006EE")]
	[FieldOffset(Offset = "0x1C")]
	internal int Size;

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x49651F0", Offset = "0x49651F0", VA = "0x49651F0")]
	internal BufferOffsetSize(byte[] buffer, int offset, int size, bool copyBuffer)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x49652A0", Offset = "0x49652A0", VA = "0x49652A0")]
	internal BufferOffsetSize(byte[] buffer, bool copyBuffer)
	{
	}
}
