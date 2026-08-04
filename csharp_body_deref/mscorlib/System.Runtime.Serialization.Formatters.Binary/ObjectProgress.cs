// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000417")]
internal sealed class ObjectProgress
{
	[Token(Token = "0x40010FA")]
	[FieldOffset(Offset = "0x0")]
	internal static int opRecordIdCount;

	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x10")]
	internal bool isInitial;

	[Token(Token = "0x40010FC")]
	[FieldOffset(Offset = "0x14")]
	internal int count;

	[Token(Token = "0x40010FD")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType;

	[Token(Token = "0x40010FE")]
	[FieldOffset(Offset = "0x20")]
	internal object expectedTypeInformation;

	[Token(Token = "0x40010FF")]
	[FieldOffset(Offset = "0x28")]
	internal string name;

	[Token(Token = "0x4001100")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE objectTypeEnum;

	[Token(Token = "0x4001101")]
	[FieldOffset(Offset = "0x34")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE memberTypeEnum;

	[Token(Token = "0x4001102")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE memberValueEnum;

	[Token(Token = "0x4001103")]
	[FieldOffset(Offset = "0x40")]
	internal Type dtType;

	[Token(Token = "0x4001104")]
	[FieldOffset(Offset = "0x48")]
	internal int numItems;

	[Token(Token = "0x4001105")]
	[FieldOffset(Offset = "0x4C")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum;

	[Token(Token = "0x4001106")]
	[FieldOffset(Offset = "0x50")]
	internal object typeInformation;

	[Token(Token = "0x4001107")]
	[FieldOffset(Offset = "0x58")]
	internal int nullCount;

	[Token(Token = "0x4001108")]
	[FieldOffset(Offset = "0x5C")]
	internal int memberLength;

	[Token(Token = "0x4001109")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x400110A")]
	[FieldOffset(Offset = "0x68")]
	internal object[] typeInformationA;

	[Token(Token = "0x400110B")]
	[FieldOffset(Offset = "0x70")]
	internal string[] memberNames;

	[Token(Token = "0x400110C")]
	[FieldOffset(Offset = "0x78")]
	internal Type[] memberTypes;

	[Token(Token = "0x400110D")]
	[FieldOffset(Offset = "0x80")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord pr;

	[Token(Token = "0x600208F")]
	[Address(RVA = "0x3BA6010", Offset = "0x3BA6010", VA = "0x3BA6010")]
	internal ObjectProgress()
	{
	}

	[Token(Token = "0x6002090")]
	[Address(RVA = "0x3BA6080", Offset = "0x3BA6080", VA = "0x3BA6080")]
	internal void Init()
	{
	}

	[Token(Token = "0x6002091")]
	[Address(RVA = "0x3BA6170", Offset = "0x3BA6170", VA = "0x3BA6170")]
	internal void ArrayCountIncrement(int value)
	{
	}

	[Token(Token = "0x6002092")]
	[Address(RVA = "0x3BA6180", Offset = "0x3BA6180", VA = "0x3BA6180")]
	internal bool GetNext(out System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum outBinaryTypeEnum, out object outTypeInformation)
	{
		return default(bool);
	}
}
