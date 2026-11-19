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
		[Address(RVA = "0x5F21780", Offset = "0x5F20780", VA = "0x5F21780", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x5F21890", Offset = "0x5F20890", VA = "0x5F21890", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x5F21920", Offset = "0x5F20920", VA = "0x5F21920", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A7")]
	public override long Length
	{
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x5F219B0", Offset = "0x5F209B0", VA = "0x5F219B0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001A8")]
	public override long Position
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x5F21B60", Offset = "0x5F20B60", VA = "0x5F21B60", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x5F21BB0", Offset = "0x5F20BB0", VA = "0x5F21BB0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x5F20E60", Offset = "0x5F1FE60", VA = "0x5F20E60")]
	internal SqlXmlStreamWrapper(Stream stream)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x5F21C70", Offset = "0x5F20C70", VA = "0x5F21C70", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x5F21DD0", Offset = "0x5F20DD0", VA = "0x5F21DD0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x5F22000", Offset = "0x5F21000", VA = "0x5F22000", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x5F22230", Offset = "0x5F21230", VA = "0x5F22230", Slot = "35")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x5F22350", Offset = "0x5F21350", VA = "0x5F22350", Slot = "38")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x5F22420", Offset = "0x5F21420", VA = "0x5F22420", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x5F224A0", Offset = "0x5F214A0", VA = "0x5F224A0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x5F224C0", Offset = "0x5F214C0", VA = "0x5F224C0", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x5F21AE0", Offset = "0x5F20AE0", VA = "0x5F21AE0")]
	private void ThrowIfStreamCannotSeek(string method)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x5F21F80", Offset = "0x5F20F80", VA = "0x5F21F80")]
	private void ThrowIfStreamCannotRead(string method)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x5F221B0", Offset = "0x5F211B0", VA = "0x5F221B0")]
	private void ThrowIfStreamCannotWrite(string method)
	{
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x5F21A20", Offset = "0x5F20A20", VA = "0x5F21A20")]
	private void ThrowIfStreamClosed(string method)
	{
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x5F21810", Offset = "0x5F20810", VA = "0x5F21810")]
	private bool IsStreamClosed()
	{
		return default(bool);
	}
}
