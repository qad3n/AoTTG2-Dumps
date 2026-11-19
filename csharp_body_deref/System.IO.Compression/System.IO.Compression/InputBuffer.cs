// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.InputBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000022")]
internal sealed class InputBuffer
{
	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x10")]
	private byte[] _buffer;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x18")]
	private int _start;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x1C")]
	private int _end;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x20")]
	private uint _bitBuffer;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x24")]
	private int _bitsInBuffer;

	[Token(Token = "0x1700001B")]
	public int AvailableBits
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x5F6B350", Offset = "0x5F6A350", VA = "0x5F6B350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001C")]
	public int AvailableBytes
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x5F6B360", Offset = "0x5F6A360", VA = "0x5F6B360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x5F69FA0", Offset = "0x5F68FA0", VA = "0x5F69FA0")]
	public bool EnsureBitsAvailable(int count)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x5F69860", Offset = "0x5F68860", VA = "0x5F69860")]
	public uint TryLoad16Bits()
	{
		return default(uint);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x5F6B390", Offset = "0x5F6A390", VA = "0x5F6B390")]
	private uint GetBitMask(int count)
	{
		return default(uint);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x5F6A030", Offset = "0x5F69030", VA = "0x5F6A030")]
	public int GetBits(int count)
	{
		return default(int);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x5F6B3A0", Offset = "0x5F6A3A0", VA = "0x5F6B3A0")]
	public int CopyTo(byte[] output, int offset, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x5F6B380", Offset = "0x5F6A380", VA = "0x5F6B380")]
	public bool NeedsInput()
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x5F69A60", Offset = "0x5F68A60", VA = "0x5F69A60")]
	public void SetInput(byte[] buffer, int offset, int length)
	{
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x5F69920", Offset = "0x5F68920", VA = "0x5F69920")]
	public void SkipBits(int n)
	{
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x5F6AEF0", Offset = "0x5F69EF0", VA = "0x5F6AEF0")]
	public void SkipToByteBoundary()
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x5F69A30", Offset = "0x5F68A30", VA = "0x5F69A30")]
	public InputBuffer()
	{
	}
}
