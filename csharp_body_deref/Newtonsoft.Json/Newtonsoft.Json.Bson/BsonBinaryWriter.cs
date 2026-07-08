using System;
using System.IO;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001D5")]
internal class BsonBinaryWriter
{
	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Encoding Encoding;

	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x10")]
	private readonly BinaryWriter _writer;

	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _largeByteBuffer;

	[Token(Token = "0x170002AC")]
	public DateTimeKind DateTimeKindHandling
	{
		[Token(Token = "0x6000FCE")]
		[Address(RVA = "0x3B60710", Offset = "0x3B60710", VA = "0x3B60710")]
		[CompilerGenerated]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0x3B60720", Offset = "0x3B60720", VA = "0x3B60720")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x3B60730", Offset = "0x3B60730", VA = "0x3B60730")]
	public BsonBinaryWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x3B60770", Offset = "0x3B60770", VA = "0x3B60770")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x3B607A0", Offset = "0x3B607A0", VA = "0x3B607A0")]
	public void Close()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x3B607D0", Offset = "0x3B607D0", VA = "0x3B607D0")]
	public void WriteToken(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x3B61290", Offset = "0x3B61290", VA = "0x3B61290")]
	private void WriteTokenInternal(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x3B624C0", Offset = "0x3B624C0", VA = "0x3B624C0")]
	private void WriteString(string s, int byteCount, int? calculatedlengthPrefix)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x3B625E0", Offset = "0x3B625E0", VA = "0x3B625E0")]
	public void WriteUtf8Bytes(string s, int byteCount)
	{
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x3B62790", Offset = "0x3B62790", VA = "0x3B62790")]
	private int CalculateSize(int stringByteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x3B627A0", Offset = "0x3B627A0", VA = "0x3B627A0")]
	private int CalculateSizeWithLength(int stringByteCount, bool includeSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x3B60800", Offset = "0x3B60800", VA = "0x3B60800")]
	private int CalculateSize(BsonToken t)
	{
		return default(int);
	}
}
