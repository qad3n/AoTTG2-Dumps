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
	[Address(RVA = "0x4EBD340", Offset = "0x4EBD340", VA = "0x4EBD340")]
	internal SerializationHeaderRecord()
	{
	}

	[Token(Token = "0x600203C")]
	[Address(RVA = "0x4EBD350", Offset = "0x4EBD350", VA = "0x4EBD350")]
	internal SerializationHeaderRecord(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion)
	{
	}

	[Token(Token = "0x600203D")]
	[Address(RVA = "0x4EBD3A0", Offset = "0x4EBD3A0", VA = "0x4EBD3A0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600203E")]
	[Address(RVA = "0x4EBD460", Offset = "0x4EBD460", VA = "0x4EBD460")]
	private static int GetInt32(byte[] buffer, int index)
	{
		return default(int);
	}

	[Token(Token = "0x600203F")]
	[Address(RVA = "0x4EBD4C0", Offset = "0x4EBD4C0", VA = "0x4EBD4C0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002040")]
	[Address(RVA = "0x4EBD650", Offset = "0x4EBD650", VA = "0x4EBD650")]
	public void Dump()
	{
	}
}
