using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000410")]
internal sealed class BinaryObjectWithMapTyped
{
	[Token(Token = "0x40010D9")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010DA")]
	[FieldOffset(Offset = "0x14")]
	internal int objectId;

	[Token(Token = "0x40010DB")]
	[FieldOffset(Offset = "0x18")]
	internal string name;

	[Token(Token = "0x40010DC")]
	[FieldOffset(Offset = "0x20")]
	internal int numMembers;

	[Token(Token = "0x40010DD")]
	[FieldOffset(Offset = "0x28")]
	internal string[] memberNames;

	[Token(Token = "0x40010DE")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x40010DF")]
	[FieldOffset(Offset = "0x38")]
	internal object[] typeInformationA;

	[Token(Token = "0x40010E0")]
	[FieldOffset(Offset = "0x40")]
	internal int[] memberAssemIds;

	[Token(Token = "0x40010E1")]
	[FieldOffset(Offset = "0x48")]
	internal int assemId;

	[Token(Token = "0x600206B")]
	[Address(RVA = "0x4EBE3B0", Offset = "0x4EBE3B0", VA = "0x4EBE3B0")]
	internal BinaryObjectWithMapTyped()
	{
	}

	[Token(Token = "0x600206C")]
	[Address(RVA = "0x4EBE3C0", Offset = "0x4EBE3C0", VA = "0x4EBE3C0")]
	internal BinaryObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x600206D")]
	[Address(RVA = "0x4EBE3E0", Offset = "0x4EBE3E0", VA = "0x4EBE3E0")]
	internal void Set(int objectId, string name, int numMembers, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, int assemId)
	{
	}

	[Token(Token = "0x600206E")]
	[Address(RVA = "0x4EBE480", Offset = "0x4EBE480", VA = "0x4EBE480", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x600206F")]
	[Address(RVA = "0x4EBE670", Offset = "0x4EBE670", VA = "0x4EBE670", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
