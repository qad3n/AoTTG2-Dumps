// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041F")]
internal sealed class ObjectProgress
{
	[Token(Token = "0x400105C")]
	[FieldOffset(Offset = "0x0")]
	internal static int opRecordIdCount;

	[Token(Token = "0x400105D")]
	[FieldOffset(Offset = "0x10")]
	internal bool isInitial;

	[Token(Token = "0x400105E")]
	[FieldOffset(Offset = "0x14")]
	internal int count;

	[Token(Token = "0x400105F")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType;

	[Token(Token = "0x4001060")]
	[FieldOffset(Offset = "0x20")]
	internal object expectedTypeInformation;

	[Token(Token = "0x4001061")]
	[FieldOffset(Offset = "0x28")]
	internal string name;

	[Token(Token = "0x4001062")]
	[FieldOffset(Offset = "0x30")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE objectTypeEnum;

	[Token(Token = "0x4001063")]
	[FieldOffset(Offset = "0x34")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE memberTypeEnum;

	[Token(Token = "0x4001064")]
	[FieldOffset(Offset = "0x38")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE memberValueEnum;

	[Token(Token = "0x4001065")]
	[FieldOffset(Offset = "0x40")]
	internal Type dtType;

	[Token(Token = "0x4001066")]
	[FieldOffset(Offset = "0x48")]
	internal int numItems;

	[Token(Token = "0x4001067")]
	[FieldOffset(Offset = "0x4C")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum;

	[Token(Token = "0x4001068")]
	[FieldOffset(Offset = "0x50")]
	internal object typeInformation;

	[Token(Token = "0x4001069")]
	[FieldOffset(Offset = "0x58")]
	internal int nullCount;

	[Token(Token = "0x400106A")]
	[FieldOffset(Offset = "0x5C")]
	internal int memberLength;

	[Token(Token = "0x400106B")]
	[FieldOffset(Offset = "0x60")]
	internal System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA;

	[Token(Token = "0x400106C")]
	[FieldOffset(Offset = "0x68")]
	internal object[] typeInformationA;

	[Token(Token = "0x400106D")]
	[FieldOffset(Offset = "0x70")]
	internal string[] memberNames;

	[Token(Token = "0x400106E")]
	[FieldOffset(Offset = "0x78")]
	internal Type[] memberTypes;

	[Token(Token = "0x400106F")]
	[FieldOffset(Offset = "0x80")]
	internal System.Runtime.Serialization.Formatters.Binary.ParseRecord pr;

	[Token(Token = "0x60020D4")]
	[Address(RVA = "0x53AD1E0", Offset = "0x53AC1E0", VA = "0x53AD1E0")]
	internal ObjectProgress()
	{
	}

	[Token(Token = "0x60020D5")]
	[Address(RVA = "0x53AD250", Offset = "0x53AC250", VA = "0x53AD250")]
	internal void Init()
	{
	}

	[Token(Token = "0x60020D6")]
	[Address(RVA = "0x53AD340", Offset = "0x53AC340", VA = "0x53AD340")]
	internal void ArrayCountIncrement(int value)
	{
	}

	[Token(Token = "0x60020D7")]
	[Address(RVA = "0x53AD350", Offset = "0x53AC350", VA = "0x53AD350")]
	internal bool GetNext(out System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum outBinaryTypeEnum, out object outTypeInformation)
	{
		return default(bool);
	}
}
