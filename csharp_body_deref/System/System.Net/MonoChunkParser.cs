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

[Token(Token = "0x20002EB")]
internal class MonoChunkParser
{
	[Token(Token = "0x20002EC")]
	private enum State
	{
		[Token(Token = "0x4000B9D")]
		None,
		[Token(Token = "0x4000B9E")]
		PartialSize,
		[Token(Token = "0x4000B9F")]
		Body,
		[Token(Token = "0x4000BA0")]
		BodyFinished,
		[Token(Token = "0x4000BA1")]
		Trailer
	}

	[Token(Token = "0x20002ED")]
	private class Chunk
	{
		[Token(Token = "0x4000BA2")]
		[FieldOffset(Offset = "0x10")]
		public byte[] Bytes;

		[Token(Token = "0x4000BA3")]
		[FieldOffset(Offset = "0x18")]
		public int Offset;

		[Token(Token = "0x6001442")]
		[Address(RVA = "0x618D530", Offset = "0x618C530", VA = "0x618D530")]
		public Chunk(byte[] chunk)
		{
		}

		[Token(Token = "0x6001443")]
		[Address(RVA = "0x618C940", Offset = "0x618B940", VA = "0x618C940")]
		public int Read(byte[] buffer, int offset, int size)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000B92")]
	[FieldOffset(Offset = "0x10")]
	private WebHeaderCollection headers;

	[Token(Token = "0x4000B93")]
	[FieldOffset(Offset = "0x18")]
	private int chunkSize;

	[Token(Token = "0x4000B94")]
	[FieldOffset(Offset = "0x1C")]
	private int chunkRead;

	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x20")]
	private int totalWritten;

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x24")]
	private State state;

	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0x28")]
	private StringBuilder saved;

	[Token(Token = "0x4000B98")]
	[FieldOffset(Offset = "0x30")]
	private bool sawCR;

	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x31")]
	private bool gotit;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x34")]
	private int trailerState;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList chunks;

	[Token(Token = "0x17000483")]
	public bool WantMore
	{
		[Token(Token = "0x6001439")]
		[Address(RVA = "0x618D410", Offset = "0x618C410", VA = "0x618D410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000484")]
	public bool DataAvailable
	{
		[Token(Token = "0x600143A")]
		[Address(RVA = "0x618D430", Offset = "0x618C430", VA = "0x618D430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000485")]
	public int ChunkLeft
	{
		[Token(Token = "0x600143B")]
		[Address(RVA = "0x618D520", Offset = "0x618C520", VA = "0x618D520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x618C4F0", Offset = "0x618B4F0", VA = "0x618C4F0")]
	public MonoChunkParser(WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x618C5B0", Offset = "0x618B5B0", VA = "0x618C5B0")]
	public int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x618C5C0", Offset = "0x618B5C0", VA = "0x618C5C0")]
	private int ReadFromChunks(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x618C980", Offset = "0x618B980", VA = "0x618C980")]
	public void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x618C9A0", Offset = "0x618B9A0", VA = "0x618C9A0")]
	private void InternalWrite(byte[] buffer, ref int offset, int size)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x618CE80", Offset = "0x618BE80", VA = "0x618CE80")]
	private State ReadBody(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x618CAB0", Offset = "0x618BAB0", VA = "0x618CAB0")]
	private State GetChunkSize(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x618D5B0", Offset = "0x618C5B0", VA = "0x618D5B0")]
	private static string RemoveChunkExtension(string input)
	{
		return null;
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x618CFA0", Offset = "0x618BFA0", VA = "0x618CFA0")]
	private State ReadCRLF(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x618D0A0", Offset = "0x618C0A0", VA = "0x618D0A0")]
	private State ReadTrailer(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x618D560", Offset = "0x618C560", VA = "0x618D560")]
	private static void ThrowProtocolViolation(string message)
	{
	}
}
