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
	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x28")]
	public readonly int InitialSize;

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4521FD0", Offset = "0x4521FD0", VA = "0x4521FD0")]
	public BufferOffsetSize2(int size)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4522020", Offset = "0x4522020", VA = "0x4522020")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4522080", Offset = "0x4522080", VA = "0x4522080")]
	public void MakeRoom(int size)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4522130", Offset = "0x4522130", VA = "0x4522130")]
	public void AppendData(byte[] buffer, int offset, int size)
	{
	}
}
