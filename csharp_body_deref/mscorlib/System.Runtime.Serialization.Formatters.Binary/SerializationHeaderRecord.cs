// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000405")]
internal sealed class SerializationHeaderRecord
{
	[Token(Token = "0x40010B0")]
	[FieldOffset(Offset = "0x10")]
	internal int binaryFormatterMajorVersion;

	[Token(Token = "0x40010B1")]
	[FieldOffset(Offset = "0x14")]
	internal int binaryFormatterMinorVersion;

	[Token(Token = "0x40010B2")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010B3")]
	[FieldOffset(Offset = "0x1C")]
	internal int topId;

	[Token(Token = "0x40010B4")]
	[FieldOffset(Offset = "0x20")]
	internal int headerId;

	[Token(Token = "0x40010B5")]
	[FieldOffset(Offset = "0x24")]
	internal int majorVersion;

	[Token(Token = "0x40010B6")]
	[FieldOffset(Offset = "0x28")]
	internal int minorVersion;

	[Token(Token = "0x600203B")]
	[Address(RVA = "0x3BA2E60", Offset = "0x3BA2E60", VA = "0x3BA2E60")]
	internal SerializationHeaderRecord()
	{
	}

	[Token(Token = "0x600203C")]
	[Address(RVA = "0x3BA2E70", Offset = "0x3BA2E70", VA = "0x3BA2E70")]
	internal SerializationHeaderRecord(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion)
	{
	}

	[Token(Token = "0x600203D")]
	[Address(RVA = "0x3BA2EC0", Offset = "0x3BA2EC0", VA = "0x3BA2EC0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600203E")]
	[Address(RVA = "0x3BA2F80", Offset = "0x3BA2F80", VA = "0x3BA2F80")]
	private static int GetInt32(byte[] buffer, int index)
	{
		return default(int);
	}

	[Token(Token = "0x600203F")]
	[Address(RVA = "0x3BA2FE0", Offset = "0x3BA2FE0", VA = "0x3BA2FE0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002040")]
	[Address(RVA = "0x3BA3170", Offset = "0x3BA3170", VA = "0x3BA3170")]
	public void Dump()
	{
	}
}
