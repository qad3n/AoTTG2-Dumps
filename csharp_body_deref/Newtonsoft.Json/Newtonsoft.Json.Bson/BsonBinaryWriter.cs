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
		[Address(RVA = "0x5647550", Offset = "0x5646550", VA = "0x5647550")]
		[CompilerGenerated]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0x5647560", Offset = "0x5646560", VA = "0x5647560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x5647570", Offset = "0x5646570", VA = "0x5647570")]
	public BsonBinaryWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x56475B0", Offset = "0x56465B0", VA = "0x56475B0")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x56475E0", Offset = "0x56465E0", VA = "0x56475E0")]
	public void Close()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x5647610", Offset = "0x5646610", VA = "0x5647610")]
	public void WriteToken(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x5647FD0", Offset = "0x5646FD0", VA = "0x5647FD0")]
	private void WriteTokenInternal(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x5649060", Offset = "0x5648060", VA = "0x5649060")]
	private void WriteString(string s, int byteCount, int? calculatedlengthPrefix)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x5649180", Offset = "0x5648180", VA = "0x5649180")]
	public void WriteUtf8Bytes(string s, int byteCount)
	{
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x5649330", Offset = "0x5648330", VA = "0x5649330")]
	private int CalculateSize(int stringByteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x5649340", Offset = "0x5648340", VA = "0x5649340")]
	private int CalculateSizeWithLength(int stringByteCount, bool includeSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x5647640", Offset = "0x5646640", VA = "0x5647640")]
	private int CalculateSize(BsonToken t)
	{
		return default(int);
	}
}
