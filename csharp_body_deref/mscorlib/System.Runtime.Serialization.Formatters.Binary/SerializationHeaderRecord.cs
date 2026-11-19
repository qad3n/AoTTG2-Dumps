// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200040D")]
internal sealed class SerializationHeaderRecord
{
	[Token(Token = "0x4001012")]
	[FieldOffset(Offset = "0x10")]
	internal int binaryFormatterMajorVersion;

	[Token(Token = "0x4001013")]
	[FieldOffset(Offset = "0x14")]
	internal int binaryFormatterMinorVersion;

	[Token(Token = "0x4001014")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x4001015")]
	[FieldOffset(Offset = "0x1C")]
	internal int topId;

	[Token(Token = "0x4001016")]
	[FieldOffset(Offset = "0x20")]
	internal int headerId;

	[Token(Token = "0x4001017")]
	[FieldOffset(Offset = "0x24")]
	internal int majorVersion;

	[Token(Token = "0x4001018")]
	[FieldOffset(Offset = "0x28")]
	internal int minorVersion;

	[Token(Token = "0x6002080")]
	[Address(RVA = "0x53AA260", Offset = "0x53A9260", VA = "0x53AA260")]
	internal SerializationHeaderRecord()
	{
	}

	[Token(Token = "0x6002081")]
	[Address(RVA = "0x53AA270", Offset = "0x53A9270", VA = "0x53AA270")]
	internal SerializationHeaderRecord(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion)
	{
	}

	[Token(Token = "0x6002082")]
	[Address(RVA = "0x53AA2C0", Offset = "0x53A92C0", VA = "0x53AA2C0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x53AA380", Offset = "0x53A9380", VA = "0x53AA380")]
	private static int GetInt32(byte[] buffer, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x53AA3E0", Offset = "0x53A93E0", VA = "0x53AA3E0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}

	[Token(Token = "0x6002085")]
	[Address(RVA = "0x53AA570", Offset = "0x53A9570", VA = "0x53AA570")]
	public void Dump()
	{
	}
}
