// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.BufferOffsetSize
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000046")]
internal class BufferOffsetSize
{
	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x10")]
	public byte[] Buffer;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x18")]
	public int Offset;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x1C")]
	public int Size;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x20")]
	public int TotalBytes;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x24")]
	public bool Complete;

	[Token(Token = "0x17000018")]
	public int EndOffset
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x248FF80", Offset = "0x248E580", VA = "0x18248FF80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000019")]
	public int Remaining
	{
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x248FF90", Offset = "0x248E590", VA = "0x18248FF90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x248FE40", Offset = "0x248E440", VA = "0x18248FE40")]
	public BufferOffsetSize(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x248FDC0", Offset = "0x248E3C0", VA = "0x18248FDC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
