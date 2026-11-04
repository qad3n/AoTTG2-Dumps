// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200043F")]
internal sealed class BinaryObjectWithMapTyped
{
	[Token(Token = "0x40010DB")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x40010DC")]
	[FieldOffset(Offset = "0x14")]
	internal int objectId;

	[Token(Token = "0x40010DD")]
	[FieldOffset(Offset = "0x18")]
	internal string name;

	[Token(Token = "0x40010DE")]
	[FieldOffset(Offset = "0x20")]
	internal int numMembers;

	[Token(Token = "0x40010DF")]
	[FieldOffset(Offset = "0x28")]
	internal string[] memberNames;

	[Token(Token = "0x40010E0")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x40010E1")]
	[FieldOffset(Offset = "0x38")]
	internal object[] typeInformationA;

	[Token(Token = "0x40010E2")]
	[FieldOffset(Offset = "0x40")]
	internal int[] memberAssemIds;

	[Token(Token = "0x40010E3")]
	[FieldOffset(Offset = "0x48")]
	internal int assemId;

	[Token(Token = "0x60020DA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal BinaryObjectWithMapTyped()
	{
	}

	[Token(Token = "0x60020DB")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	internal BinaryObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020DC")]
	[Address(RVA = "0x1A0E810", Offset = "0x1A0CE10", VA = "0x181A0E810")]
	internal void Set(int objectId, string name, int numMembers, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, int assemId)
	{
	}

	[Token(Token = "0x60020DD")]
	[Address(RVA = "0x1A0E8B0", Offset = "0x1A0CEB0", VA = "0x181A0E8B0", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020DE")]
	[Address(RVA = "0x1A0E500", Offset = "0x1A0CB00", VA = "0x181A0E500", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
