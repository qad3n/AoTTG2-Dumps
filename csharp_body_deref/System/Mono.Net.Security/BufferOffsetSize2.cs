// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.BufferOffsetSize2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000047")]
internal class BufferOffsetSize2 : BufferOffsetSize
{
	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x28")]
	public readonly int InitialSize;

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x248FCA0", Offset = "0x248E2A0", VA = "0x18248FCA0")]
	public BufferOffsetSize2(int size)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x248FC40", Offset = "0x248E240", VA = "0x18248FC40")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x248FB70", Offset = "0x248E170", VA = "0x18248FB70")]
	public void MakeRoom(int size)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x248FA80", Offset = "0x248E080", VA = "0x18248FA80")]
	public void AppendData(byte[] buffer, int offset, int size)
	{
	}
}
