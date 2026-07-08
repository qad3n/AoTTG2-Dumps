using System.Collections;
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001A2")]
internal class MonoChunkParser
{
	[Token(Token = "0x20001A3")]
	private enum State
	{
		[Token(Token = "0x4000856")]
		None,
		[Token(Token = "0x4000857")]
		PartialSize,
		[Token(Token = "0x4000858")]
		Body,
		[Token(Token = "0x4000859")]
		BodyFinished,
		[Token(Token = "0x400085A")]
		Trailer
	}

	[Token(Token = "0x20001A4")]
	private class Chunk
	{
		[Token(Token = "0x400085B")]
		[FieldOffset(Offset = "0x10")]
		public byte[] Bytes;

		[Token(Token = "0x400085C")]
		[FieldOffset(Offset = "0x18")]
		public int Offset;

		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x46660F0", Offset = "0x46660F0", VA = "0x46660F0")]
		public Chunk(byte[] chunk)
		{
		}

		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x4665520", Offset = "0x4665520", VA = "0x4665520")]
		public int Read(byte[] buffer, int offset, int size)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x10")]
	private WebHeaderCollection headers;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x18")]
	private int chunkSize;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x1C")]
	private int chunkRead;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x20")]
	private int totalWritten;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x24")]
	private State state;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x28")]
	private StringBuilder saved;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x30")]
	private bool sawCR;

	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x31")]
	private bool gotit;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x34")]
	private int trailerState;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList chunks;

	[Token(Token = "0x1700025C")]
	public bool WantMore
	{
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x4665FC0", Offset = "0x4665FC0", VA = "0x4665FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025D")]
	public bool DataAvailable
	{
		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x4665FE0", Offset = "0x4665FE0", VA = "0x4665FE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700025E")]
	public int ChunkLeft
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x46660E0", Offset = "0x46660E0", VA = "0x46660E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x4664FD0", Offset = "0x4664FD0", VA = "0x4664FD0")]
	public MonoChunkParser(WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x4665090", Offset = "0x4665090", VA = "0x4665090")]
	public int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x46650A0", Offset = "0x46650A0", VA = "0x46650A0")]
	private int ReadFromChunks(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x4665560", Offset = "0x4665560", VA = "0x4665560")]
	public void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x4665580", Offset = "0x4665580", VA = "0x4665580")]
	private void InternalWrite(byte[] buffer, ref int offset, int size)
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x4665A90", Offset = "0x4665A90", VA = "0x4665A90")]
	private State ReadBody(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x4665690", Offset = "0x4665690", VA = "0x4665690")]
	private State GetChunkSize(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x4666170", Offset = "0x4666170", VA = "0x4666170")]
	private static string RemoveChunkExtension(string input)
	{
		return null;
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x4665BA0", Offset = "0x4665BA0", VA = "0x4665BA0")]
	private State ReadCRLF(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x4665C70", Offset = "0x4665C70", VA = "0x4665C70")]
	private State ReadTrailer(byte[] buffer, ref int offset, int size)
	{
		return default(State);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x4666120", Offset = "0x4666120", VA = "0x4666120")]
	private static void ThrowProtocolViolation(string message)
	{
	}
}
