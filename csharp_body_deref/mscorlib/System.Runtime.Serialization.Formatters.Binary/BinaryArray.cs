// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000419")]
internal sealed class BinaryArray
{
	[Token(Token = "0x4001044")]
	[FieldOffset(Offset = "0x10")]
	internal int objectId;

	[Token(Token = "0x4001045")]
	[FieldOffset(Offset = "0x14")]
	internal int rank;

	[Token(Token = "0x4001046")]
	[FieldOffset(Offset = "0x18")]
	internal int[] lengthA;

	[Token(Token = "0x4001047")]
	[FieldOffset(Offset = "0x20")]
	internal int[] lowerBoundA;

	[Token(Token = "0x4001048")]
	[FieldOffset(Offset = "0x28")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum;

	[Token(Token = "0x4001049")]
	[FieldOffset(Offset = "0x30")]
	internal object typeInformation;

	[Token(Token = "0x400104A")]
	[FieldOffset(Offset = "0x38")]
	internal int assemId;

	[Token(Token = "0x400104B")]
	[FieldOffset(Offset = "0x3C")]
	private System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x400104C")]
	[FieldOffset(Offset = "0x40")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum;

	[Token(Token = "0x60020B5")]
	[Address(RVA = "0x53AB6C0", Offset = "0x53AA6C0", VA = "0x53AB6C0")]
	internal BinaryArray()
	{
	}

	[Token(Token = "0x60020B6")]
	[Address(RVA = "0x53AB6D0", Offset = "0x53AA6D0", VA = "0x53AB6D0")]
	internal BinaryArray(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020B7")]
	[Address(RVA = "0x53AB6F0", Offset = "0x53AA6F0", VA = "0x53AB6F0")]
	internal void Set(int objectId, int rank, int[] lengthA, int[] lowerBoundA, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum, object typeInformation, System.Runtime.Serialization.Formatters.Binary.BinaryArrayTypeEnum binaryArrayTypeEnum, int assemId)
	{
	}

	[Token(Token = "0x60020B8")]
	[Address(RVA = "0x53AB790", Offset = "0x53AA790", VA = "0x53AB790", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020B9")]
	[Address(RVA = "0x53ABAE0", Offset = "0x53AAAE0", VA = "0x53ABAE0", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
