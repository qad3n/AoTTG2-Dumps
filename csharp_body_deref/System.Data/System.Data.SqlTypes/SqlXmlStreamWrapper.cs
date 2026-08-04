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
		[Address(RVA = "0x461E290", Offset = "0x461E290", VA = "0x461E290", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A2")]
	public override bool CanSeek
	{
		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x461E3A0", Offset = "0x461E3A0", VA = "0x461E3A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A3")]
	public override bool CanWrite
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x461E430", Offset = "0x461E430", VA = "0x461E430", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	public override long Length
	{
		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x461E4C0", Offset = "0x461E4C0", VA = "0x461E4C0", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001A5")]
	public override long Position
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x461E670", Offset = "0x461E670", VA = "0x461E670", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x461E6C0", Offset = "0x461E6C0", VA = "0x461E6C0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x461D750", Offset = "0x461D750", VA = "0x461D750")]
	internal SqlXmlStreamWrapper(Stream stream)
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x461E780", Offset = "0x461E780", VA = "0x461E780", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x461E9F0", Offset = "0x461E9F0", VA = "0x461E9F0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x461EC20", Offset = "0x461EC20", VA = "0x461EC20", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x461EE50", Offset = "0x461EE50", VA = "0x461EE50", Slot = "34")]
	public override int ReadByte()
	{
		return default(int);
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x461EF80", Offset = "0x461EF80", VA = "0x461EF80", Slot = "37")]
	public override void WriteByte(byte value)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x461F050", Offset = "0x461F050", VA = "0x461F050", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x461F0D0", Offset = "0x461F0D0", VA = "0x461F0D0", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x461F0F0", Offset = "0x461F0F0", VA = "0x461F0F0", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x461E5F0", Offset = "0x461E5F0", VA = "0x461E5F0")]
	private void ThrowIfStreamCannotSeek(string method)
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x461EBA0", Offset = "0x461EBA0", VA = "0x461EBA0")]
	private void ThrowIfStreamCannotRead(string method)
	{
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x461EDD0", Offset = "0x461EDD0", VA = "0x461EDD0")]
	private void ThrowIfStreamCannotWrite(string method)
	{
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x461E530", Offset = "0x461E530", VA = "0x461E530")]
	private void ThrowIfStreamClosed(string method)
	{
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x461E320", Offset = "0x461E320", VA = "0x461E320")]
	private bool IsStreamClosed()
	{
		return default(bool);
	}
}
