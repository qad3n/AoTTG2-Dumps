// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlBaseConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000269")]
internal abstract class XmlBaseConverter : XmlValueConverter
{
	[Token(Token = "0x4000CA2")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaType schemaType;

	[Token(Token = "0x4000CA3")]
	[FieldOffset(Offset = "0x18")]
	private XmlTypeCode typeCode;

	[Token(Token = "0x4000CA4")]
	[FieldOffset(Offset = "0x20")]
	private Type clrTypeDefault;

	[Token(Token = "0x4000CA5")]
	[FieldOffset(Offset = "0x0")]
	protected static readonly Type ICollectionType;

	[Token(Token = "0x4000CA6")]
	[FieldOffset(Offset = "0x8")]
	protected static readonly Type IEnumerableType;

	[Token(Token = "0x4000CA7")]
	[FieldOffset(Offset = "0x10")]
	protected static readonly Type IListType;

	[Token(Token = "0x4000CA8")]
	[FieldOffset(Offset = "0x18")]
	protected static readonly Type ObjectArrayType;

	[Token(Token = "0x4000CA9")]
	[FieldOffset(Offset = "0x20")]
	protected static readonly Type StringArrayType;

	[Token(Token = "0x4000CAA")]
	[FieldOffset(Offset = "0x28")]
	protected static readonly Type XmlAtomicValueArrayType;

	[Token(Token = "0x4000CAB")]
	[FieldOffset(Offset = "0x30")]
	protected static readonly Type DecimalType;

	[Token(Token = "0x4000CAC")]
	[FieldOffset(Offset = "0x38")]
	protected static readonly Type Int32Type;

	[Token(Token = "0x4000CAD")]
	[FieldOffset(Offset = "0x40")]
	protected static readonly Type Int64Type;

	[Token(Token = "0x4000CAE")]
	[FieldOffset(Offset = "0x48")]
	protected static readonly Type StringType;

	[Token(Token = "0x4000CAF")]
	[FieldOffset(Offset = "0x50")]
	protected static readonly Type XmlAtomicValueType;

	[Token(Token = "0x4000CB0")]
	[FieldOffset(Offset = "0x58")]
	protected static readonly Type ObjectType;

	[Token(Token = "0x4000CB1")]
	[FieldOffset(Offset = "0x60")]
	protected static readonly Type ByteType;

	[Token(Token = "0x4000CB2")]
	[FieldOffset(Offset = "0x68")]
	protected static readonly Type Int16Type;

	[Token(Token = "0x4000CB3")]
	[FieldOffset(Offset = "0x70")]
	protected static readonly Type SByteType;

	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x78")]
	protected static readonly Type UInt16Type;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0x80")]
	protected static readonly Type UInt32Type;

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x88")]
	protected static readonly Type UInt64Type;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x90")]
	protected static readonly Type XPathItemType;

	[Token(Token = "0x4000CB8")]
	[FieldOffset(Offset = "0x98")]
	protected static readonly Type DoubleType;

	[Token(Token = "0x4000CB9")]
	[FieldOffset(Offset = "0xA0")]
	protected static readonly Type SingleType;

	[Token(Token = "0x4000CBA")]
	[FieldOffset(Offset = "0xA8")]
	protected static readonly Type DateTimeType;

	[Token(Token = "0x4000CBB")]
	[FieldOffset(Offset = "0xB0")]
	protected static readonly Type DateTimeOffsetType;

	[Token(Token = "0x4000CBC")]
	[FieldOffset(Offset = "0xB8")]
	protected static readonly Type BooleanType;

	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0xC0")]
	protected static readonly Type ByteArrayType;

	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0xC8")]
	protected static readonly Type XmlQualifiedNameType;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0xD0")]
	protected static readonly Type UriType;

	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0xD8")]
	protected static readonly Type TimeSpanType;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0xE0")]
	protected static readonly Type XPathNavigatorType;

	[Token(Token = "0x170006AA")]
	protected XmlSchemaType SchemaType
	{
		[Token(Token = "0x6001884")]
		[Address(RVA = "0x604A190", Offset = "0x6049190", VA = "0x604A190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	protected XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001885")]
		[Address(RVA = "0x604A1A0", Offset = "0x60491A0", VA = "0x604A1A0")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170006AC")]
	protected string XmlTypeName
	{
		[Token(Token = "0x6001886")]
		[Address(RVA = "0x604A1B0", Offset = "0x60491B0", VA = "0x604A1B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AD")]
	protected Type DefaultClrType
	{
		[Token(Token = "0x6001887")]
		[Address(RVA = "0x604A3B0", Offset = "0x60493B0", VA = "0x604A3B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x6047660", Offset = "0x6046660", VA = "0x6047660")]
	protected XmlBaseConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x60478B0", Offset = "0x60468B0", VA = "0x60478B0")]
	protected XmlBaseConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x6047990", Offset = "0x6046990", VA = "0x6047990")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x6047A00", Offset = "0x6046A00", VA = "0x6047A00")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x6047A50", Offset = "0x6046A50", VA = "0x6047A50", Slot = "7")]
	public override bool ToBoolean(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x6047B30", Offset = "0x6046B30", VA = "0x6047B30", Slot = "6")]
	public override bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x6047C10", Offset = "0x6046C10", VA = "0x6047C10", Slot = "5")]
	public override bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x6047CD0", Offset = "0x6046CD0", VA = "0x6047CD0", Slot = "4")]
	public override bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x6047DA0", Offset = "0x6046DA0", VA = "0x6047DA0", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x6047E50", Offset = "0x6046E50", VA = "0x6047E50", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x6047F00", Offset = "0x6046F00", VA = "0x6047F00", Slot = "33")]
	public override DateTime ToDateTime(bool value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x6047FE0", Offset = "0x6046FE0", VA = "0x6047FE0", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x60480D0", Offset = "0x60470D0", VA = "0x60480D0", Slot = "36")]
	public override DateTime ToDateTime(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x60481B0", Offset = "0x60471B0", VA = "0x60481B0", Slot = "34")]
	public override DateTime ToDateTime(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x6048290", Offset = "0x6047290", VA = "0x6048290", Slot = "35")]
	public override DateTime ToDateTime(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001856")]
	[Address(RVA = "0x6048370", Offset = "0x6047370", VA = "0x6048370", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x6048420", Offset = "0x6047420", VA = "0x6048420", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x60484D0", Offset = "0x60474D0", VA = "0x60484D0", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x60485C0", Offset = "0x60475C0", VA = "0x60485C0", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x6048680", Offset = "0x6047680", VA = "0x6048680", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x6048740", Offset = "0x6047740", VA = "0x6048740", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return 0m;
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x6048800", Offset = "0x6047800", VA = "0x6048800", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x60488C0", Offset = "0x60478C0", VA = "0x60488C0", Slot = "24")]
	public override double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x6048990", Offset = "0x6047990", VA = "0x6048990", Slot = "27")]
	public override double ToDouble(DateTime value)
	{
		return default(double);
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x6048A70", Offset = "0x6047A70", VA = "0x6048A70", Slot = "25")]
	public override double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x6048B40", Offset = "0x6047B40", VA = "0x6048B40", Slot = "26")]
	public override double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x6048C10", Offset = "0x6047C10", VA = "0x6048C10", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x6048CC0", Offset = "0x6047CC0", VA = "0x6048CC0", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x6048D70", Offset = "0x6047D70", VA = "0x6048D70", Slot = "10")]
	public override int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x6048E30", Offset = "0x6047E30", VA = "0x6048E30", Slot = "13")]
	public override int ToInt32(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x6048F00", Offset = "0x6047F00", VA = "0x6048F00", Slot = "12")]
	public override int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6001866")]
	[Address(RVA = "0x6048FD0", Offset = "0x6047FD0", VA = "0x6048FD0", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6001867")]
	[Address(RVA = "0x6049090", Offset = "0x6048090", VA = "0x6049090", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001868")]
	[Address(RVA = "0x6049130", Offset = "0x6048130", VA = "0x6049130", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x60491D0", Offset = "0x60481D0", VA = "0x60491D0", Slot = "16")]
	public override long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x6049290", Offset = "0x6048290", VA = "0x6049290", Slot = "19")]
	public override long ToInt64(DateTime value)
	{
		return default(long);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x6049360", Offset = "0x6048360", VA = "0x6049360", Slot = "18")]
	public override long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x6049440", Offset = "0x6048440", VA = "0x6049440", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x6049500", Offset = "0x6048500", VA = "0x6049500", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x60495A0", Offset = "0x60485A0", VA = "0x60495A0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600186F")]
	[Address(RVA = "0x6049640", Offset = "0x6048640", VA = "0x6049640", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x6049720", Offset = "0x6048720", VA = "0x6049720", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x60497D0", Offset = "0x60487D0", VA = "0x60497D0", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x6049880", Offset = "0x6048880", VA = "0x6049880", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x6049930", Offset = "0x6048930", VA = "0x6049930", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x60499F0", Offset = "0x60489F0", VA = "0x60499F0", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x6049AB0", Offset = "0x6048AB0", VA = "0x6049AB0", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x6049B70", Offset = "0x6048B70", VA = "0x6049B70", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x6049C30", Offset = "0x6048C30", VA = "0x6049C30", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x6049CE0", Offset = "0x6048CE0", VA = "0x6049CE0", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x6049D90", Offset = "0x6048D90", VA = "0x6049D90", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x6049E50", Offset = "0x6048E50", VA = "0x6049E50", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x6049EF0", Offset = "0x6048EF0", VA = "0x6049EF0", Slot = "51")]
	public override string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x6049F10", Offset = "0x6048F10", VA = "0x6049F10", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x6049F60", Offset = "0x6048F60", VA = "0x6049F60", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x6049FD0", Offset = "0x6048FD0", VA = "0x6049FD0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x604A050", Offset = "0x6049050", VA = "0x604A050", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x604A0B0", Offset = "0x60490B0", VA = "0x604A0B0", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x604A100", Offset = "0x6049100", VA = "0x604A100", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x604A150", Offset = "0x6049150", VA = "0x604A150", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x604A170", Offset = "0x6049170", VA = "0x604A170", Slot = "60")]
	public override object ChangeType(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x604A3C0", Offset = "0x60493C0", VA = "0x604A3C0")]
	protected static bool IsDerivedFrom(Type derivedType, Type baseType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x604A470", Offset = "0x6049470", VA = "0x604A470")]
	protected Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x604A2A0", Offset = "0x60492A0", VA = "0x604A2A0")]
	protected static string QNameToString(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x604A720", Offset = "0x6049720", VA = "0x604A720", Slot = "62")]
	protected virtual object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x604A770", Offset = "0x6049770", VA = "0x604A770")]
	protected static byte[] StringToBase64Binary(string value)
	{
		return null;
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x604A7F0", Offset = "0x60497F0", VA = "0x604A7F0")]
	protected static DateTime StringToDate(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x604A860", Offset = "0x6049860", VA = "0x604A860")]
	protected static DateTime StringToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x604A8D0", Offset = "0x60498D0", VA = "0x604A8D0")]
	protected static TimeSpan StringToDayTimeDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x604A920", Offset = "0x6049920", VA = "0x604A920")]
	protected static TimeSpan StringToDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x604A970", Offset = "0x6049970", VA = "0x604A970")]
	protected static DateTime StringToGDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x604A9E0", Offset = "0x60499E0", VA = "0x604A9E0")]
	protected static DateTime StringToGMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x604AA50", Offset = "0x6049A50", VA = "0x604AA50")]
	protected static DateTime StringToGMonthDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x604AAC0", Offset = "0x6049AC0", VA = "0x604AAC0")]
	protected static DateTime StringToGYear(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x604AB30", Offset = "0x6049B30", VA = "0x604AB30")]
	protected static DateTime StringToGYearMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x604ABA0", Offset = "0x6049BA0", VA = "0x604ABA0")]
	protected static DateTimeOffset StringToDateOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x604AC10", Offset = "0x6049C10", VA = "0x604AC10")]
	protected static DateTimeOffset StringToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x604AC80", Offset = "0x6049C80", VA = "0x604AC80")]
	protected static DateTimeOffset StringToGDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x604ACF0", Offset = "0x6049CF0", VA = "0x604ACF0")]
	protected static DateTimeOffset StringToGMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x604AD60", Offset = "0x6049D60", VA = "0x604AD60")]
	protected static DateTimeOffset StringToGMonthDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x604ADD0", Offset = "0x6049DD0", VA = "0x604ADD0")]
	protected static DateTimeOffset StringToGYearOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x604AE40", Offset = "0x6049E40", VA = "0x604AE40")]
	protected static DateTimeOffset StringToGYearMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x604AEB0", Offset = "0x6049EB0", VA = "0x604AEB0")]
	protected static byte[] StringToHexBinary(string value)
	{
		return null;
	}

	[Token(Token = "0x600189E")]
	[Address(RVA = "0x604AFE0", Offset = "0x6049FE0", VA = "0x604AFE0")]
	protected static XmlQualifiedName StringToQName(string value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600189F")]
	[Address(RVA = "0x604B2B0", Offset = "0x604A2B0", VA = "0x604B2B0")]
	protected static DateTime StringToTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x604B320", Offset = "0x604A320", VA = "0x604B320")]
	protected static DateTimeOffset StringToTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x604B390", Offset = "0x604A390", VA = "0x604B390")]
	protected static TimeSpan StringToYearMonthDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x604B3E0", Offset = "0x604A3E0", VA = "0x604B3E0")]
	protected static string AnyUriToString(Uri value)
	{
		return null;
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x604B400", Offset = "0x604A400", VA = "0x604B400")]
	protected static string Base64BinaryToString(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x604B470", Offset = "0x604A470", VA = "0x604B470")]
	protected static string DateToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x604B4E0", Offset = "0x604A4E0", VA = "0x604B4E0")]
	protected static string DateTimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x604B550", Offset = "0x604A550", VA = "0x604B550")]
	protected static string DayTimeDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x604B5A0", Offset = "0x604A5A0", VA = "0x604B5A0")]
	protected static string DurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x604B5F0", Offset = "0x604A5F0", VA = "0x604B5F0")]
	protected static string GDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x604B660", Offset = "0x604A660", VA = "0x604B660")]
	protected static string GMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x604B6D0", Offset = "0x604A6D0", VA = "0x604B6D0")]
	protected static string GMonthDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x604B740", Offset = "0x604A740", VA = "0x604B740")]
	protected static string GYearToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x604B7B0", Offset = "0x604A7B0", VA = "0x604B7B0")]
	protected static string GYearMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x604B820", Offset = "0x604A820", VA = "0x604B820")]
	protected static string DateOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x604B8A0", Offset = "0x604A8A0", VA = "0x604B8A0")]
	protected static string DateTimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x604B920", Offset = "0x604A920", VA = "0x604B920")]
	protected static string GDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x604B9A0", Offset = "0x604A9A0", VA = "0x604B9A0")]
	protected static string GMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x604BA20", Offset = "0x604AA20", VA = "0x604BA20")]
	protected static string GMonthDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x604BAA0", Offset = "0x604AAA0", VA = "0x604BAA0")]
	protected static string GYearOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x604BB20", Offset = "0x604AB20", VA = "0x604BB20")]
	protected static string GYearMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x604BBA0", Offset = "0x604ABA0", VA = "0x604BBA0")]
	protected static string QNameToString(XmlQualifiedName qname, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x604BDC0", Offset = "0x604ADC0", VA = "0x604BDC0")]
	protected static string TimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x604BE30", Offset = "0x604AE30", VA = "0x604BE30")]
	protected static string TimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x604BEB0", Offset = "0x604AEB0", VA = "0x604BEB0")]
	protected static string YearMonthDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x604BF00", Offset = "0x604AF00", VA = "0x604BF00")]
	internal static DateTime DateTimeOffsetToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x604BF60", Offset = "0x604AF60", VA = "0x604BF60")]
	internal static int DecimalToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x604C110", Offset = "0x604B110", VA = "0x604C110")]
	protected static long DecimalToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x604C2D0", Offset = "0x604B2D0", VA = "0x604C2D0")]
	protected static ulong DecimalToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x604C470", Offset = "0x604B470", VA = "0x604C470")]
	protected static byte Int32ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x604C550", Offset = "0x604B550", VA = "0x604C550")]
	protected static short Int32ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x604C630", Offset = "0x604B630", VA = "0x604C630")]
	protected static sbyte Int32ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x604C710", Offset = "0x604B710", VA = "0x604C710")]
	protected static ushort Int32ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x604C7F0", Offset = "0x604B7F0", VA = "0x604C7F0")]
	protected static int Int64ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x604C8D0", Offset = "0x604B8D0", VA = "0x604C8D0")]
	protected static uint Int64ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x604C9B0", Offset = "0x604B9B0", VA = "0x604C9B0")]
	protected static DateTime UntypedAtomicToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x604CA20", Offset = "0x604BA20", VA = "0x604CA20")]
	protected static DateTimeOffset UntypedAtomicToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}
}
