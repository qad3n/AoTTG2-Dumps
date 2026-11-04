// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlXmlStreamWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Token(Token = "0x20000C0")]
internal sealed class SqlXmlStreamWrapper : Stream
{
	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x28")]
	private Stream _stream;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x30")]
	private long _lPosition;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x38")]
	private bool _isClosed;

	[Token(Token = "0x170001A4")]
	public override bool CanRead
	{
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x257DA10", Offset = "0x257C010", VA = "0x18257DA10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x257DA60", Offset = "0x257C060", VA = "0x18257DA60", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x257DAB0", Offset = "0x257C0B0", VA = "0x18257DAB0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A7")]
	public override long Length
	{
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x257DB00", Offset = "0x257C100", VA = "0x18257DB00", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001A8")]
	public override long Position
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x257DBD0", Offset = "0x257C1D0", VA = "0x18257DBD0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x257DC80", Offset = "0x257C280", VA = "0x18257DC80", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x257D990", Offset = "0x257BF90", VA = "0x18257D990")]
	internal SqlXmlStreamWrapper(Stream stream)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x257D040", Offset = "0x257B640", VA = "0x18257D040", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x257CDF0", Offset = "0x257B3F0", VA = "0x18257CDF0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x257D730", Offset = "0x257BD30", VA = "0x18257D730", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x257CC60", Offset = "0x257B260", VA = "0x18257CC60", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x257D5E0", Offset = "0x257BBE0", VA = "0x18257D5E0", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x257D2E0", Offset = "0x257B8E0", VA = "0x18257D2E0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x257CBB0", Offset = "0x257B1B0", VA = "0x18257CBB0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x257CB60", Offset = "0x257B160", VA = "0x18257CB60", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x257D450", Offset = "0x257BA50", VA = "0x18257D450")]
	private void ThrowIfStreamCannotSeek(string method)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x257D3C0", Offset = "0x257B9C0", VA = "0x18257D3C0")]
	private void ThrowIfStreamCannotRead(string method)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x257D4E0", Offset = "0x257BAE0", VA = "0x18257D4E0")]
	private void ThrowIfStreamCannotWrite(string method)
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x257D570", Offset = "0x257BB70", VA = "0x18257D570")]
	private void ThrowIfStreamClosed(string method)
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x257CBD0", Offset = "0x257B1D0", VA = "0x18257CBD0")]
	private bool IsStreamClosed()
	{
		return default(bool);
	}
}
