// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000440")]
internal sealed class BinaryArray
{
	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x14")]
	internal int rank;

	[Token(Token = "0x40010E6")]
	[FieldOffset(Offset = "0x18")]
	internal int[] lengthA;

	[Token(Token = "0x40010E7")]
	[FieldOffset(Offset = "0x20")]
	internal int[] lowerBoundA;

	[Token(Token = "0x40010E8")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum;

	[Token(Token = "0x40010E9")]
	[FieldOffset(Offset = "0x30")]
	internal object typeInformation;

	[Token(Token = "0x40010EA")]
	[FieldOffset(Offset = "0x38")]
	internal int assemId;

	[Token(Token = "0x40010EB")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010EC")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum;

	[Token(Token = "0x60020DF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal BinaryArray()
	{
	}

	[Token(Token = "0x60020E0")]
	[Address(RVA = "0x1A0BF40", Offset = "0x1A0A540", VA = "0x181A0BF40")]
	internal BinaryArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020E1")]
	[Address(RVA = "0x1A0BB40", Offset = "0x1A0A140", VA = "0x181A0BB40")]
	internal void Set(int objectId, int rank, int[] lengthA, int[] lowerBoundA, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId)
	{
	}

	[Token(Token = "0x60020E2")]
	[Address(RVA = "0x1A0BC00", Offset = "0x1A0A200", VA = "0x181A0BC00", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020E3")]
	[Address(RVA = "0x1A0B610", Offset = "0x1A09C10", VA = "0x181A0B610", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
