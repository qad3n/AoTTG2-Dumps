// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BA44E0", Offset = "0x3BA44E0", VA = "0x3BA44E0")]
	internal BinaryArray()
	{
	}

	[Token(Token = "0x6002071")]
	[Address(RVA = "0x3BA44F0", Offset = "0x3BA44F0", VA = "0x3BA44F0")]
	internal BinaryArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x6002072")]
	[Address(RVA = "0x3BA4510", Offset = "0x3BA4510", VA = "0x3BA4510")]
	internal void Set(int objectId, int rank, int[] lengthA, int[] lowerBoundA, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId)
	{
	}

	[Token(Token = "0x6002073")]
	[Address(RVA = "0x3BA45C0", Offset = "0x3BA45C0", VA = "0x3BA45C0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x6002074")]
	[Address(RVA = "0x3BA4930", Offset = "0x3BA4930", VA = "0x3BA4930", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
