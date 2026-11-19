// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.ParseRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200042E")]
internal sealed class ParseRecord
{
	[Token(Token = "0x4001138")]
	[FieldOffset(Offset = "0x0")]
	internal static int parseRecordIdCount;

	[Token(Token = "0x4001139")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE PRparseTypeEnum;

	[Token(Token = "0x400113A")]
	[FieldOffset(Offset = "0x14")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE PRobjectTypeEnum;

	[Token(Token = "0x400113B")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE PRarrayTypeEnum;

	[Token(Token = "0x400113C")]
	[FieldOffset(Offset = "0x1C")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE PRmemberTypeEnum;

	[Token(Token = "0x400113D")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE PRmemberValueEnum;

	[Token(Token = "0x400113E")]
	[FieldOffset(Offset = "0x24")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE PRobjectPositionEnum;

	[Token(Token = "0x400113F")]
	[FieldOffset(Offset = "0x28")]
	internal string PRname;

	[Token(Token = "0x4001140")]
	[FieldOffset(Offset = "0x30")]
	internal string PRvalue;

	[Token(Token = "0x4001141")]
	[FieldOffset(Offset = "0x38")]
	internal object PRvarValue;

	[Token(Token = "0x4001142")]
	[FieldOffset(Offset = "0x40")]
	internal string PRkeyDt;

	[Token(Token = "0x4001143")]
	[FieldOffset(Offset = "0x48")]
	internal Type PRdtType;

	[Token(Token = "0x4001144")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRdtTypeCode;

	[Token(Token = "0x4001145")]
	[FieldOffset(Offset = "0x54")]
	internal bool PRisEnum;

	[Token(Token = "0x4001146")]
	[FieldOffset(Offset = "0x58")]
	internal long PRobjectId;

	[Token(Token = "0x4001147")]
	[FieldOffset(Offset = "0x60")]
	internal long PRidRef;

	[Token(Token = "0x4001148")]
	[FieldOffset(Offset = "0x68")]
	internal string PRarrayElementTypeString;

	[Token(Token = "0x4001149")]
	[FieldOffset(Offset = "0x70")]
	internal Type PRarrayElementType;

	[Token(Token = "0x400114A")]
	[FieldOffset(Offset = "0x78")]
	internal bool PRisArrayVariant;

	[Token(Token = "0x400114B")]
	[FieldOffset(Offset = "0x7C")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRarrayElementTypeCode;

	[Token(Token = "0x400114C")]
	[FieldOffset(Offset = "0x80")]
	internal int PRrank;

	[Token(Token = "0x400114D")]
	[FieldOffset(Offset = "0x88")]
	internal int[] PRlengthA;

	[Token(Token = "0x400114E")]
	[FieldOffset(Offset = "0x90")]
	internal int[] PRpositionA;

	[Token(Token = "0x400114F")]
	[FieldOffset(Offset = "0x98")]
	internal int[] PRlowerBoundA;

	[Token(Token = "0x4001150")]
	[FieldOffset(Offset = "0xA0")]
	internal int[] PRupperBoundA;

	[Token(Token = "0x4001151")]
	[FieldOffset(Offset = "0xA8")]
	internal int[] PRindexMap;

	[Token(Token = "0x4001152")]
	[FieldOffset(Offset = "0xB0")]
	internal int PRmemberIndex;

	[Token(Token = "0x4001153")]
	[FieldOffset(Offset = "0xB4")]
	internal int PRlinearlength;

	[Token(Token = "0x4001154")]
	[FieldOffset(Offset = "0xB8")]
	internal int[] PRrectangularMap;

	[Token(Token = "0x4001155")]
	[FieldOffset(Offset = "0xC0")]
	internal bool PRisLowerBound;

	[Token(Token = "0x4001156")]
	[FieldOffset(Offset = "0xC8")]
	internal long PRtopId;

	[Token(Token = "0x4001157")]
	[FieldOffset(Offset = "0xD0")]
	internal long PRheaderId;

	[Token(Token = "0x4001158")]
	[FieldOffset(Offset = "0xD8")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo PRobjectInfo;

	[Token(Token = "0x4001159")]
	[FieldOffset(Offset = "0xE0")]
	internal bool PRisValueTypeFixup;

	[Token(Token = "0x400115A")]
	[FieldOffset(Offset = "0xE8")]
	internal object PRnewObj;

	[Token(Token = "0x400115B")]
	[FieldOffset(Offset = "0xF0")]
	internal object[] PRobjectA;

	[Token(Token = "0x400115C")]
	[FieldOffset(Offset = "0xF8")]
	internal System.Runtime.Serialization.Formatters.Binary.PrimitiveArray PRprimitiveArray;

	[Token(Token = "0x400115D")]
	[FieldOffset(Offset = "0x100")]
	internal bool PRisRegistered;

	[Token(Token = "0x400115E")]
	[FieldOffset(Offset = "0x108")]
	internal object[] PRmemberData;

	[Token(Token = "0x400115F")]
	[FieldOffset(Offset = "0x110")]
	internal SerializationInfo PRsi;

	[Token(Token = "0x4001160")]
	[FieldOffset(Offset = "0x118")]
	internal int PRnullCount;

	[Token(Token = "0x60021C7")]
	[Address(RVA = "0x53BC7B0", Offset = "0x53BB7B0", VA = "0x53BC7B0")]
	internal ParseRecord()
	{
	}

	[Token(Token = "0x60021C8")]
	[Address(RVA = "0x53C0DC0", Offset = "0x53BFDC0", VA = "0x53C0DC0")]
	internal void Init()
	{
	}
}
