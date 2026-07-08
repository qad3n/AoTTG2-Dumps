using System.IO;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Token(Token = "0x20000B6")]
internal sealed class SqlXmlStreamWrapper : Stream
{
	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x28")]
	private Stream _stream;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x30")]
	private long _lPosition;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x38")]
	private bool _isClosed;

	[Token(Token = "0x170001A1")]
	public override bool CanRead
	{
		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x42E0B30", Offset = "0x42E0B30", VA = "0x42E0B30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A2")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x42E0C40", Offset = "0x42E0C40", VA = "0x42E0C40", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A3")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x42E0CD0", Offset = "0x42E0CD0", VA = "0x42E0CD0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	public override long Length
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x42E0D60", Offset = "0x42E0D60", VA = "0x42E0D60", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001A5")]
	public override long Position
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x42E0F10", Offset = "0x42E0F10", VA = "0x42E0F10", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x42E0F60", Offset = "0x42E0F60", VA = "0x42E0F60", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x42DFFF0", Offset = "0x42DFFF0", VA = "0x42DFFF0")]
	internal SqlXmlStreamWrapper(Stream stream)
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x42E1020", Offset = "0x42E1020", VA = "0x42E1020", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x42E1290", Offset = "0x42E1290", VA = "0x42E1290", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x42E14C0", Offset = "0x42E14C0", VA = "0x42E14C0", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x42E16F0", Offset = "0x42E16F0", VA = "0x42E16F0", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x42E1820", Offset = "0x42E1820", VA = "0x42E1820", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x42E18F0", Offset = "0x42E18F0", VA = "0x42E18F0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x42E1970", Offset = "0x42E1970", VA = "0x42E1970", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x42E1990", Offset = "0x42E1990", VA = "0x42E1990", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x42E0E90", Offset = "0x42E0E90", VA = "0x42E0E90")]
	private void ThrowIfStreamCannotSeek(string method)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x42E1440", Offset = "0x42E1440", VA = "0x42E1440")]
	private void ThrowIfStreamCannotRead(string method)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x42E1670", Offset = "0x42E1670", VA = "0x42E1670")]
	private void ThrowIfStreamCannotWrite(string method)
	{
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x42E0DD0", Offset = "0x42E0DD0", VA = "0x42E0DD0")]
	private void ThrowIfStreamClosed(string method)
	{
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x42E0BC0", Offset = "0x42E0BC0", VA = "0x42E0BC0")]
	private bool IsStreamClosed()
	{
		return default(bool);
	}
}
