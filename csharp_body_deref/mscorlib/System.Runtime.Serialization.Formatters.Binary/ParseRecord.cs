using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x2000426")]
internal sealed class ParseRecord
{
	[Token(Token = "0x40011D6")]
	[FieldOffset(Offset = "0x0")]
	internal static int parseRecordIdCount;

	[Token(Token = "0x40011D7")]
	[FieldOffset(Offset = "0x10")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE PRparseTypeEnum;

	[Token(Token = "0x40011D8")]
	[FieldOffset(Offset = "0x14")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE PRobjectTypeEnum;

	[Token(Token = "0x40011D9")]
	[FieldOffset(Offset = "0x18")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE PRarrayTypeEnum;

	[Token(Token = "0x40011DA")]
	[FieldOffset(Offset = "0x1C")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE PRmemberTypeEnum;

	[Token(Token = "0x40011DB")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE PRmemberValueEnum;

	[Token(Token = "0x40011DC")]
	[FieldOffset(Offset = "0x24")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE PRobjectPositionEnum;

	[Token(Token = "0x40011DD")]
	[FieldOffset(Offset = "0x28")]
	internal string PRname;

	[Token(Token = "0x40011DE")]
	[FieldOffset(Offset = "0x30")]
	internal string PRvalue;

	[Token(Token = "0x40011DF")]
	[FieldOffset(Offset = "0x38")]
	internal object PRvarValue;

	[Token(Token = "0x40011E0")]
	[FieldOffset(Offset = "0x40")]
	internal string PRkeyDt;

	[Token(Token = "0x40011E1")]
	[FieldOffset(Offset = "0x48")]
	internal Type PRdtType;

	[Token(Token = "0x40011E2")]
	[FieldOffset(Offset = "0x50")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRdtTypeCode;

	[Token(Token = "0x40011E3")]
	[FieldOffset(Offset = "0x54")]
	internal bool PRisEnum;

	[Token(Token = "0x40011E4")]
	[FieldOffset(Offset = "0x58")]
	internal long PRobjectId;

	[Token(Token = "0x40011E5")]
	[FieldOffset(Offset = "0x60")]
	internal long PRidRef;

	[Token(Token = "0x40011E6")]
	[FieldOffset(Offset = "0x68")]
	internal string PRarrayElementTypeString;

	[Token(Token = "0x40011E7")]
	[FieldOffset(Offset = "0x70")]
	internal Type PRarrayElementType;

	[Token(Token = "0x40011E8")]
	[FieldOffset(Offset = "0x78")]
	internal bool PRisArrayVariant;

	[Token(Token = "0x40011E9")]
	[FieldOffset(Offset = "0x7C")]
	internal System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRarrayElementTypeCode;

	[Token(Token = "0x40011EA")]
	[FieldOffset(Offset = "0x80")]
	internal int PRrank;

	[Token(Token = "0x40011EB")]
	[FieldOffset(Offset = "0x88")]
	internal int[] PRlengthA;

	[Token(Token = "0x40011EC")]
	[FieldOffset(Offset = "0x90")]
	internal int[] PRpositionA;

	[Token(Token = "0x40011ED")]
	[FieldOffset(Offset = "0x98")]
	internal int[] PRlowerBoundA;

	[Token(Token = "0x40011EE")]
	[FieldOffset(Offset = "0xA0")]
	internal int[] PRupperBoundA;

	[Token(Token = "0x40011EF")]
	[FieldOffset(Offset = "0xA8")]
	internal int[] PRindexMap;

	[Token(Token = "0x40011F0")]
	[FieldOffset(Offset = "0xB0")]
	internal int PRmemberIndex;

	[Token(Token = "0x40011F1")]
	[FieldOffset(Offset = "0xB4")]
	internal int PRlinearlength;

	[Token(Token = "0x40011F2")]
	[FieldOffset(Offset = "0xB8")]
	internal int[] PRrectangularMap;

	[Token(Token = "0x40011F3")]
	[FieldOffset(Offset = "0xC0")]
	internal bool PRisLowerBound;

	[Token(Token = "0x40011F4")]
	[FieldOffset(Offset = "0xC8")]
	internal long PRtopId;

	[Token(Token = "0x40011F5")]
	[FieldOffset(Offset = "0xD0")]
	internal long PRheaderId;

	[Token(Token = "0x40011F6")]
	[FieldOffset(Offset = "0xD8")]
	internal System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo PRobjectInfo;

	[Token(Token = "0x40011F7")]
	[FieldOffset(Offset = "0xE0")]
	internal bool PRisValueTypeFixup;

	[Token(Token = "0x40011F8")]
	[FieldOffset(Offset = "0xE8")]
	internal object PRnewObj;

	[Token(Token = "0x40011F9")]
	[FieldOffset(Offset = "0xF0")]
	internal object[] PRobjectA;

	[Token(Token = "0x40011FA")]
	[FieldOffset(Offset = "0xF8")]
	internal System.Runtime.Serialization.Formatters.Binary.PrimitiveArray PRprimitiveArray;

	[Token(Token = "0x40011FB")]
	[FieldOffset(Offset = "0x100")]
	internal bool PRisRegistered;

	[Token(Token = "0x40011FC")]
	[FieldOffset(Offset = "0x108")]
	internal object[] PRmemberData;

	[Token(Token = "0x40011FD")]
	[FieldOffset(Offset = "0x110")]
	internal SerializationInfo PRsi;

	[Token(Token = "0x40011FE")]
	[FieldOffset(Offset = "0x118")]
	internal int PRnullCount;

	[Token(Token = "0x6002182")]
	[Address(RVA = "0x4ECF670", Offset = "0x4ECF670", VA = "0x4ECF670")]
	internal ParseRecord()
	{
	}

	[Token(Token = "0x6002183")]
	[Address(RVA = "0x4ED3B30", Offset = "0x4ED3B30", VA = "0x4ED3B30")]
	internal void Init()
	{
	}
}
