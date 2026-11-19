// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.OutputBuffer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x2000025")]
internal sealed class OutputBuffer
{
	[Token(Token = "0x2000026")]
	internal readonly struct BufferState
	{
		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x0")]
		internal readonly int _pos;

		[Token(Token = "0x40000C4")]
		[FieldOffset(Offset = "0x4")]
		internal readonly uint _bitBuf;

		[Token(Token = "0x40000C5")]
		[FieldOffset(Offset = "0x8")]
		internal readonly int _bitCount;

		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x5F6B580", Offset = "0x5F6A580", VA = "0x5F6B580")]
		internal BufferState(int pos, uint bitBuf, int bitCount)
		{
		}
	}

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x10")]
	private byte[] _byteBuffer;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x18")]
	private int _pos;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x1C")]
	private uint _bitBuf;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x20")]
	private int _bitCount;

	[Token(Token = "0x17000021")]
	internal int BytesWritten
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x5F6B4D0", Offset = "0x5F6A4D0", VA = "0x5F6B4D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000022")]
	internal int FreeBytes
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x5F63DD0", Offset = "0x5F62DD0", VA = "0x5F63DD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000023")]
	internal int BitsInBuffer
	{
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x5F63DF0", Offset = "0x5F62DF0", VA = "0x5F63DF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x5F66B30", Offset = "0x5F65B30", VA = "0x5F66B30")]
	internal void UpdateBuffer(byte[] output)
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x5F64050", Offset = "0x5F63050", VA = "0x5F64050")]
	internal void WriteUInt16(ushort value)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x5F63E10", Offset = "0x5F62E10", VA = "0x5F63E10")]
	internal void WriteBits(int n, uint bits)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x5F63E80", Offset = "0x5F62E80", VA = "0x5F63E80")]
	internal void FlushBits()
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5F63F90", Offset = "0x5F62F90", VA = "0x5F63F90")]
	internal void WriteBytes(byte[] byteArray, int offset, int count)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5F6B4E0", Offset = "0x5F6A4E0", VA = "0x5F6B4E0")]
	private void WriteBytesUnaligned(byte[] byteArray, int offset, int count)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5F6B570", Offset = "0x5F6A570", VA = "0x5F6B570")]
	private void WriteByteUnaligned(byte b)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x5F66B50", Offset = "0x5F65B50", VA = "0x5F66B50")]
	internal BufferState DumpState()
	{
		return default(BufferState);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x5F66B90", Offset = "0x5F65B90", VA = "0x5F66B90")]
	internal void RestoreState(BufferState state)
	{
	}
}
