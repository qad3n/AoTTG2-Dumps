// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BufferOffsetSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002A1")]
internal class BufferOffsetSize
{
	[Token(Token = "0x4000A33")]
	[FieldOffset(Offset = "0x10")]
	internal byte[] Buffer;

	[Token(Token = "0x4000A34")]
	[FieldOffset(Offset = "0x18")]
	internal int Offset;

	[Token(Token = "0x4000A35")]
	[FieldOffset(Offset = "0x1C")]
	internal int Size;

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x62ACAD0", Offset = "0x62ABAD0", VA = "0x62ACAD0")]
	internal BufferOffsetSize(byte[] buffer, int offset, int size, bool copyBuffer)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x62ACB80", Offset = "0x62ABB80", VA = "0x62ACB80")]
	internal BufferOffsetSize(byte[] buffer, bool copyBuffer)
	{
	}
}
