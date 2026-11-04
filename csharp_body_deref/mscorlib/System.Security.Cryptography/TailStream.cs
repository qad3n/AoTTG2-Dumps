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

[Token(Token = "0x2000318")]
internal sealed class TailStream : Stream
{
	[Token(Token = "0x4000D27")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _Buffer;

	[Token(Token = "0x4000D28")]
	[FieldOffset(Offset = "0x30")]
	private int _BufferSize;

	[Token(Token = "0x4000D29")]
	[FieldOffset(Offset = "0x34")]
	private int _BufferIndex;

	[Token(Token = "0x4000D2A")]
	[FieldOffset(Offset = "0x38")]
	private bool _BufferFull;

	[Token(Token = "0x170002B3")]
	public byte[] Buffer
	{
		[Token(Token = "0x60019B8")]
		[Address(RVA = "0x19B6870", Offset = "0x19B4E70", VA = "0x1819B6870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B4")]
	public override bool CanRead
	{
		[Token(Token = "0x60019B9")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B5")]
	public override bool CanSeek
	{
		[Token(Token = "0x60019BA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B6")]
	public override bool CanWrite
	{
		[Token(Token = "0x60019BB")]
		[Address(RVA = "0x19B68F0", Offset = "0x19B4EF0", VA = "0x1819B68F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002B7")]
	public override long Length
	{
		[Token(Token = "0x60019BC")]
		[Address(RVA = "0x19B6900", Offset = "0x19B4F00", VA = "0x1819B6900", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170002B8")]
	public override long Position
	{
		[Token(Token = "0x60019BD")]
		[Address(RVA = "0x19B6960", Offset = "0x19B4F60", VA = "0x1819B6960", Slot = "12")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60019BE")]
		[Address(RVA = "0x19B69C0", Offset = "0x19B4FC0", VA = "0x1819B69C0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x60019B5")]
	[Address(RVA = "0x19B67E0", Offset = "0x19B4DE0", VA = "0x1819B67E0")]
	public TailStream(int bufferSize)
	{
	}

	[Token(Token = "0x60019B6")]
	[Address(RVA = "0x198B170", Offset = "0x1989770", VA = "0x18198B170")]
	public void Clear()
	{
	}

	[Token(Token = "0x60019B7")]
	[Address(RVA = "0x19B6480", Offset = "0x19B4A80", VA = "0x1819B6480", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60019BF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60019C0")]
	[Address(RVA = "0x19B6590", Offset = "0x19B4B90", VA = "0x1819B6590", Slot = "30")]
	public override long Seek(long offset, SeekOrigin origin)
	{
		return default(long);
	}

	[Token(Token = "0x60019C1")]
	[Address(RVA = "0x19B65F0", Offset = "0x19B4BF0", VA = "0x1819B65F0", Slot = "31")]
	public override void SetLength(long value)
	{
	}

	[Token(Token = "0x60019C2")]
	[Address(RVA = "0x19B6530", Offset = "0x19B4B30", VA = "0x1819B6530", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60019C3")]
	[Address(RVA = "0x19B6650", Offset = "0x19B4C50", VA = "0x1819B6650", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int count)
	{
	}
}
