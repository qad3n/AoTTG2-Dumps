// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonBinaryWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E56060", Offset = "0x3E56060", VA = "0x3E56060")]
		[CompilerGenerated]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0x3E56070", Offset = "0x3E56070", VA = "0x3E56070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x3E56080", Offset = "0x3E56080", VA = "0x3E56080")]
	public BsonBinaryWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x3E560C0", Offset = "0x3E560C0", VA = "0x3E560C0")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x3E560F0", Offset = "0x3E560F0", VA = "0x3E560F0")]
	public void Close()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x3E56120", Offset = "0x3E56120", VA = "0x3E56120")]
	public void WriteToken(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x3E56BE0", Offset = "0x3E56BE0", VA = "0x3E56BE0")]
	private void WriteTokenInternal(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x3E57E10", Offset = "0x3E57E10", VA = "0x3E57E10")]
	private void WriteString(string s, int byteCount, int? calculatedlengthPrefix)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x3E57F30", Offset = "0x3E57F30", VA = "0x3E57F30")]
	public void WriteUtf8Bytes(string s, int byteCount)
	{
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x3E580E0", Offset = "0x3E580E0", VA = "0x3E580E0")]
	private int CalculateSize(int stringByteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x3E580F0", Offset = "0x3E580F0", VA = "0x3E580F0")]
	private int CalculateSizeWithLength(int stringByteCount, bool includeSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x3E56150", Offset = "0x3E56150", VA = "0x3E56150")]
	private int CalculateSize(BsonToken t)
	{
		return default(int);
	}
}
