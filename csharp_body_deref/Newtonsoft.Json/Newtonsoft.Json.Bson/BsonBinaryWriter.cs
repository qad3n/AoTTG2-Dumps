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
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(DateTimeKind);
		}
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x1CA9B80", Offset = "0x1CA8180", VA = "0x181CA9B80")]
	public BsonBinaryWriter(BinaryWriter writer)
	{
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x1CA8960", Offset = "0x1CA6F60", VA = "0x181CA8960")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x1C702C0", Offset = "0x1C6E8C0", VA = "0x181C702C0")]
	public void Close()
	{
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x1CA9940", Offset = "0x1CA7F40", VA = "0x181CA9940")]
	public void WriteToken(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x1CA8B80", Offset = "0x1CA7180", VA = "0x181CA8B80")]
	private void WriteTokenInternal(BsonToken t)
	{
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x1CA8990", Offset = "0x1CA6F90", VA = "0x181CA8990")]
	private void WriteString(string s, int byteCount, int? calculatedlengthPrefix)
	{
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x1CA9970", Offset = "0x1CA7F70", VA = "0x181CA9970")]
	public void WriteUtf8Bytes(string s, int byteCount)
	{
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x1CA8280", Offset = "0x1CA6880", VA = "0x181CA8280")]
	private int CalculateSize(int stringByteCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x1CA8270", Offset = "0x1CA6870", VA = "0x181CA8270")]
	private int CalculateSizeWithLength(int stringByteCount, bool includeSize)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x1CA8290", Offset = "0x1CA6890", VA = "0x181CA8290")]
	private int CalculateSize(BsonToken t)
	{
		return default(int);
	}
}
