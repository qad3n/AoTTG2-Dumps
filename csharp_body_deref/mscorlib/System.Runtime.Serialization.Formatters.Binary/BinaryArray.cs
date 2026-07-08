using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000411")]
internal sealed class BinaryArray
{
	[Token(Token = "0x40010E2")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010E3")]
	[FieldOffset(Offset = "0x14")]
	internal int rank;

	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x18")]
	internal int[] lengthA;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x20")]
	internal int[] lowerBoundA;

	[Token(Token = "0x40010E6")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum;

	[Token(Token = "0x40010E7")]
	[FieldOffset(Offset = "0x30")]
	internal object typeInformation;

	[Token(Token = "0x40010E8")]
	[FieldOffset(Offset = "0x38")]
	internal int assemId;

	[Token(Token = "0x40010E9")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010EA")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum;

	[Token(Token = "0x6002070")]
	[Address(RVA = "0x4EBE9C0", Offset = "0x4EBE9C0", VA = "0x4EBE9C0")]
	internal BinaryArray()
	{
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x4EBE9D0", Offset = "0x4EBE9D0", VA = "0x4EBE9D0")]
	internal BinaryArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x4EBE9F0", Offset = "0x4EBE9F0", VA = "0x4EBE9F0")]
	internal void Set(int objectId, int rank, int[] lengthA, int[] lowerBoundA, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId)
	{
	}

	[Token(Token = "0x6002073")]
	[Address(RVA = "0x4EBEAA0", Offset = "0x4EBEAA0", VA = "0x4EBEAA0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002074")]
	[Address(RVA = "0x4EBEE10", Offset = "0x4EBEE10", VA = "0x4EBEE10", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
