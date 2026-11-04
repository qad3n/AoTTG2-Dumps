// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000434")]
internal sealed class SerializationHeaderRecord
{
	[Token(Token = "0x40010B2")]
	[FieldOffset(Offset = "0x10")]
	internal int binaryFormatterMajorVersion;

	[Token(Token = "0x40010B3")]
	[FieldOffset(Offset = "0x14")]
	internal int binaryFormatterMinorVersion;

	[Token(Token = "0x40010B4")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010B5")]
	[FieldOffset(Offset = "0x1C")]
	internal int topId;

	[Token(Token = "0x40010B6")]
	[FieldOffset(Offset = "0x20")]
	internal int headerId;

	[Token(Token = "0x40010B7")]
	[FieldOffset(Offset = "0x24")]
	internal int majorVersion;

	[Token(Token = "0x40010B8")]
	[FieldOffset(Offset = "0x28")]
	internal int minorVersion;

	[Token(Token = "0x60020AA")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	internal SerializationHeaderRecord()
	{
	}

	[Token(Token = "0x60020AB")]
	[Address(RVA = "0x1A1F7E0", Offset = "0x1A1DDE0", VA = "0x181A1F7E0")]
	internal SerializationHeaderRecord(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion)
	{
	}

	[Token(Token = "0x60020AC")]
	[Address(RVA = "0x1A1F710", Offset = "0x1A1DD10", VA = "0x181A1F710", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020AD")]
	[Address(RVA = "0x1A1F450", Offset = "0x1A1DA50", VA = "0x181A1F450")]
	private static int GetInt32(byte[] buffer, int index)
	{
		return default(int);
	}

	[Token(Token = "0x60020AE")]
	[Address(RVA = "0x1A1F4D0", Offset = "0x1A1DAD0", VA = "0x181A1F4D0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x60020AF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Dump()
	{
	}
}
