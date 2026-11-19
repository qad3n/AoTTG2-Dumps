// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.TailStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F1")]
internal sealed class TailStream : Stream
{
	[Token(Token = "0x4000C87")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _Buffer;

	[Token(Token = "0x4000C88")]
	[FieldOffset(Offset = "0x30")]
	private int _BufferSize;

	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x34")]
	private int _BufferIndex;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x38")]
	private bool _BufferFull;

	[Token(Token = "0x170002B2")]
	public byte[] Buffer
	{
		[Token(Token = "0x6001995")]
		[Address(RVA = "0x533DCE0", Offset = "0x533CCE0", VA = "0x533DCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B3")]
	public override bool CanRead
	{
		[Token(Token = "0x6001996")]
		[Address(RVA = "0x533DF60", Offset = "0x533CF60", VA = "0x533DF60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B4")]
	public override bool CanSeek
	{
		[Token(Token = "0x6001997")]
		[Address(RVA = "0x533DF70", Offset = "0x533CF70", VA = "0x533DF70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool CanWrite
	{
		[Token(Token = "0x6001998")]
		[Address(RVA = "0x533DF80", Offset = "0x533CF80", VA = "0x533DF80", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override long Length
	{
		[Token(Token = "0x6001999")]
		[Address(RVA = "0x533DF90", Offset = "0x533CF90", VA = "0x533DF90", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002B7")]
	public override long Position
	{
		[Token(Token = "0x600199A")]
		[Address(RVA = "0x533DFF0", Offset = "0x533CFF0", VA = "0x533DFF0", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600199B")]
		[Address(RVA = "0x533E050", Offset = "0x533D050", VA = "0x533E050", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x6001992")]
	[Address(RVA = "0x533DA30", Offset = "0x533CA30", VA = "0x533DA30")]
	public TailStream(int bufferSize)
	{
	}

	[Token(Token = "0x6001993")]
	[Address(RVA = "0x533DE70", Offset = "0x533CE70", VA = "0x533DE70")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001994")]
	[Address(RVA = "0x533DE90", Offset = "0x533CE90", VA = "0x533DE90", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600199C")]
	[Address(RVA = "0x533E0B0", Offset = "0x533D0B0", VA = "0x533E0B0", Slot = "21")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600199D")]
	[Address(RVA = "0x533E0C0", Offset = "0x533D0C0", VA = "0x533E0C0", Slot = "31")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x600199E")]
	[Address(RVA = "0x533E120", Offset = "0x533D120", VA = "0x533E120", Slot = "32")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x533E180", Offset = "0x533D180", VA = "0x533E180", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x533E1E0", Offset = "0x533D1E0", VA = "0x533E1E0", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}
}
