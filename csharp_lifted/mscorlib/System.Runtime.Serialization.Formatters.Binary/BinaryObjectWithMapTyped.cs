// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000418")]
internal sealed class BinaryObjectWithMapTyped
{
	[Token(Token = "0x400103B")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum;

	[Token(Token = "0x400103C")]
	[FieldOffset(Offset = "0x14")]
	internal int objectId;

	[Token(Token = "0x400103D")]
	[FieldOffset(Offset = "0x18")]
	internal string name;

	[Token(Token = "0x400103E")]
	[FieldOffset(Offset = "0x20")]
	internal int numMembers;

	[Token(Token = "0x400103F")]
	[FieldOffset(Offset = "0x28")]
	internal string[] memberNames;

	[Token(Token = "0x4001040")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x4001041")]
	[FieldOffset(Offset = "0x38")]
	internal object[] typeInformationA;

	[Token(Token = "0x4001042")]
	[FieldOffset(Offset = "0x40")]
	internal int[] memberAssemIds;

	[Token(Token = "0x4001043")]
	[FieldOffset(Offset = "0x48")]
	internal int assemId;

	[Token(Token = "0x60020B0")]
	[Address(RVA = "0x53AB0C0", Offset = "0x53AA0C0", VA = "0x53AB0C0")]
	internal BinaryObjectWithMapTyped()
	{
	}

	[Token(Token = "0x60020B1")]
	[Address(RVA = "0x53AB0D0", Offset = "0x53AA0D0", VA = "0x53AB0D0")]
	internal BinaryObjectWithMapTyped(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
	{
	}

	[Token(Token = "0x60020B2")]
	[Address(RVA = "0x53AB0F0", Offset = "0x53AA0F0", VA = "0x53AB0F0")]
	internal void Set(int objectId, string name, int numMembers, string[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, object[] typeInformationA, int[] memberAssemIds, int assemId)
	{
	}

	[Token(Token = "0x60020B3")]
	[Address(RVA = "0x53AB190", Offset = "0x53AA190", VA = "0x53AB190", Slot = "4")]
	public void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
	{
	}

	[Token(Token = "0x60020B4")]
	[Address(RVA = "0x53AB380", Offset = "0x53AA380", VA = "0x53AB380", Slot = "5")]
	public void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
	{
	}
}
