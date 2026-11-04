// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.MonoChunkParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200032A")]
internal class MonoChunkParser
{
	[Token(Token = "0x200032B")]
	private enum State
	{
		[Token(Token = "0x4000C6C")]
		None,
		[Token(Token = "0x4000C6D")]
		PartialSize,
		[Token(Token = "0x4000C6E")]
		Body,
		[Token(Token = "0x4000C6F")]
		BodyFinished,
		[Token(Token = "0x4000C70")]
		Trailer
	}

	[Token(Token = "0x200032C")]
	private class Chunk
	{
		[Token(Token = "0x4000C71")]
		[FieldOffset(Offset = "0x10")]
		public byte[] Bytes;

		[Token(Token = "0x4000C72")]
		[FieldOffset(Offset = "0x18")]
		public int Offset;

		[Token(Token = "0x6001600")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public Chunk(byte[] chunk)
		{
		}

		[Token(Token = "0x6001601")]
		[Address(RVA = "0x27DCEB0", Offset = "0x27DB4B0", VA = "0x1827DCEB0")]
		public int Read(byte[] buffer, int offset, int size)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x10")]
	private WebHeaderCollection headers;

	[Token(Token = "0x4000C62")]
	[FieldOffset(Offset = "0x18")]
	private int chunkSize;

	[Token(Token = "0x4000C63")]
	[FieldOffset(Offset = "0x1C")]
	private int chunkRead;

	[Token(Token = "0x4000C64")]
	[FieldOffset(Offset = "0x20")]
	private int totalWritten;

	[Token(Token = "0x4000C65")]
	[FieldOffset(Offset = "0x24")]
	private State state;

	[Token(Token = "0x4000C66")]
	[FieldOffset(Offset = "0x28")]
	private StringBuilder saved;

	[Token(Token = "0x4000C67")]
	[FieldOffset(Offset = "0x30")]
	private bool sawCR;

	[Token(Token = "0x4000C68")]
	[FieldOffset(Offset = "0x31")]
	private bool gotit;

	[Token(Token = "0x4000C69")]
	[FieldOffset(Offset = "0x34")]
	private int trailerState;

	[Token(Token = "0x4000C6A")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList chunks;

	[Token(Token = "0x170004B2")]
	public bool WantMore
	{
		[Token(Token = "0x60015F7")]
		[Address(RVA = "0x27E79A0", Offset = "0x27E5FA0", VA = "0x1827E79A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004B3")]
	public bool DataAvailable
	{
		[Token(Token = "0x60015F8")]
		[Address(RVA = "0x27E7890", Offset = "0x27E5E90", VA = "0x1827E7890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004B4")]
	public int ChunkLeft
	{
		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x27E7880", Offset = "0x27E5E80", VA = "0x1827E7880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x27E77C0", Offset = "0x27E5DC0", VA = "0x1827E77C0")]
	public MonoChunkParser(WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x60015F3")]
	[Address(RVA = "0x27E76D0", Offset = "0x27E5CD0", VA = "0x1827E76D0")]
	public int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60015F4")]
	[Address(RVA = "0x27E71A0", Offset = "0x27E57A0", VA = "0x1827E71A0")]
	private int ReadFromChunks(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x27E7790", Offset = "0x27E5D90", VA = "0x1827E7790")]
	public void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x27E6CA0", Offset = "0x27E52A0", VA = "0x1827E6CA0")]
	private void InternalWrite(byte[] buffer, ref int offset, int size)
	{
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x27E6F80", Offset = "0x27E5580", VA = "0x1827E6F80")]
	private State ReadBody(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x27E69D0", Offset = "0x27E4FD0", VA = "0x1827E69D0")]
	private State GetChunkSize(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x27E76E0", Offset = "0x27E5CE0", VA = "0x1827E76E0")]
	private static string RemoveChunkExtension(string input)
	{
		return null;
	}

	[Token(Token = "0x60015FD")]
	[Address(RVA = "0x27E70D0", Offset = "0x27E56D0", VA = "0x1827E70D0")]
	private State ReadCRLF(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x60015FE")]
	[Address(RVA = "0x27E7490", Offset = "0x27E5A90", VA = "0x1827E7490")]
	private State ReadTrailer(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x60015FF")]
	[Address(RVA = "0x27E7730", Offset = "0x27E5D30", VA = "0x1827E7730")]
	private static void ThrowProtocolViolation(string message)
	{
	}
}
