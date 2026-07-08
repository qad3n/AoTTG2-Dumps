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
		[Address(RVA = "0x4406280", Offset = "0x4406280", VA = "0x4406280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	protected XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001885")]
		[Address(RVA = "0x4406290", Offset = "0x4406290", VA = "0x4406290")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170006AC")]
	protected string XmlTypeName
	{
		[Token(Token = "0x6001886")]
		[Address(RVA = "0x44062A0", Offset = "0x44062A0", VA = "0x44062A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AD")]
	protected Type DefaultClrType
	{
		[Token(Token = "0x6001887")]
		[Address(RVA = "0x4406490", Offset = "0x4406490", VA = "0x4406490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x4403740", Offset = "0x4403740", VA = "0x4403740")]
	protected XmlBaseConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x4403980", Offset = "0x4403980", VA = "0x4403980")]
	protected XmlBaseConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x4403A60", Offset = "0x4403A60", VA = "0x4403A60")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x4403AD0", Offset = "0x4403AD0", VA = "0x4403AD0")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x4403B20", Offset = "0x4403B20", VA = "0x4403B20", Slot = "7")]
	public override bool ToBoolean(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x4403C00", Offset = "0x4403C00", VA = "0x4403C00", Slot = "6")]
	public override bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x4403CE0", Offset = "0x4403CE0", VA = "0x4403CE0", Slot = "5")]
	public override bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x4403DA0", Offset = "0x4403DA0", VA = "0x4403DA0", Slot = "4")]
	public override bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x4403E60", Offset = "0x4403E60", VA = "0x4403E60", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x4403F10", Offset = "0x4403F10", VA = "0x4403F10", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x4403FC0", Offset = "0x4403FC0", VA = "0x4403FC0", Slot = "33")]
	public override DateTime ToDateTime(bool value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x44040A0", Offset = "0x44040A0", VA = "0x44040A0", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x44041A0", Offset = "0x44041A0", VA = "0x44041A0", Slot = "36")]
	public override DateTime ToDateTime(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x4404280", Offset = "0x4404280", VA = "0x4404280", Slot = "34")]
	public override DateTime ToDateTime(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x4404360", Offset = "0x4404360", VA = "0x4404360", Slot = "35")]
	public override DateTime ToDateTime(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001856")]
	[Address(RVA = "0x4404440", Offset = "0x4404440", VA = "0x4404440", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x44044F0", Offset = "0x44044F0", VA = "0x44044F0", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x44045A0", Offset = "0x44045A0", VA = "0x44045A0", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x4404690", Offset = "0x4404690", VA = "0x4404690", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x4404750", Offset = "0x4404750", VA = "0x4404750", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x4404810", Offset = "0x4404810", VA = "0x4404810", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x44048D0", Offset = "0x44048D0", VA = "0x44048D0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x4404990", Offset = "0x4404990", VA = "0x4404990", Slot = "24")]
	public override double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x4404A60", Offset = "0x4404A60", VA = "0x4404A60", Slot = "27")]
	public override double ToDouble(DateTime value)
	{
		return default(double);
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x4404B40", Offset = "0x4404B40", VA = "0x4404B40", Slot = "25")]
	public override double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x4404C10", Offset = "0x4404C10", VA = "0x4404C10", Slot = "26")]
	public override double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x4404CE0", Offset = "0x4404CE0", VA = "0x4404CE0", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x4404D90", Offset = "0x4404D90", VA = "0x4404D90", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x4404E40", Offset = "0x4404E40", VA = "0x4404E40", Slot = "10")]
	public override int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x4404F00", Offset = "0x4404F00", VA = "0x4404F00", Slot = "13")]
	public override int ToInt32(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x4404FD0", Offset = "0x4404FD0", VA = "0x4404FD0", Slot = "12")]
	public override int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6001866")]
	[Address(RVA = "0x44050A0", Offset = "0x44050A0", VA = "0x44050A0", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6001867")]
	[Address(RVA = "0x4405160", Offset = "0x4405160", VA = "0x4405160", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001868")]
	[Address(RVA = "0x4405200", Offset = "0x4405200", VA = "0x4405200", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x44052A0", Offset = "0x44052A0", VA = "0x44052A0", Slot = "16")]
	public override long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x4405360", Offset = "0x4405360", VA = "0x4405360", Slot = "19")]
	public override long ToInt64(DateTime value)
	{
		return default(long);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x4405430", Offset = "0x4405430", VA = "0x4405430", Slot = "18")]
	public override long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x4405510", Offset = "0x4405510", VA = "0x4405510", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x44055D0", Offset = "0x44055D0", VA = "0x44055D0", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x4405670", Offset = "0x4405670", VA = "0x4405670", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600186F")]
	[Address(RVA = "0x4405710", Offset = "0x4405710", VA = "0x4405710", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x44057F0", Offset = "0x44057F0", VA = "0x44057F0", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x44058A0", Offset = "0x44058A0", VA = "0x44058A0", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x4405950", Offset = "0x4405950", VA = "0x4405950", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x4405A00", Offset = "0x4405A00", VA = "0x4405A00", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x4405AC0", Offset = "0x4405AC0", VA = "0x4405AC0", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x4405BA0", Offset = "0x4405BA0", VA = "0x4405BA0", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x4405C60", Offset = "0x4405C60", VA = "0x4405C60", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x4405D20", Offset = "0x4405D20", VA = "0x4405D20", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x4405DD0", Offset = "0x4405DD0", VA = "0x4405DD0", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x4405E80", Offset = "0x4405E80", VA = "0x4405E80", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x4405F40", Offset = "0x4405F40", VA = "0x4405F40", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x4405FE0", Offset = "0x4405FE0", VA = "0x4405FE0", Slot = "51")]
	public override string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x4406000", Offset = "0x4406000", VA = "0x4406000", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x4406050", Offset = "0x4406050", VA = "0x4406050", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x44060C0", Offset = "0x44060C0", VA = "0x44060C0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x4406140", Offset = "0x4406140", VA = "0x4406140", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x44061A0", Offset = "0x44061A0", VA = "0x44061A0", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x44061F0", Offset = "0x44061F0", VA = "0x44061F0", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x4406240", Offset = "0x4406240", VA = "0x4406240", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x4406260", Offset = "0x4406260", VA = "0x4406260", Slot = "60")]
	public override object ChangeType(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x44064A0", Offset = "0x44064A0", VA = "0x44064A0")]
	protected static bool IsDerivedFrom(Type derivedType, Type baseType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x4406560", Offset = "0x4406560", VA = "0x4406560")]
	protected Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x4406380", Offset = "0x4406380", VA = "0x4406380")]
	protected static string QNameToString(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x4406810", Offset = "0x4406810", VA = "0x4406810", Slot = "62")]
	protected virtual object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x4406860", Offset = "0x4406860", VA = "0x4406860")]
	protected static byte[] StringToBase64Binary(string value)
	{
		return null;
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x44068E0", Offset = "0x44068E0", VA = "0x44068E0")]
	protected static DateTime StringToDate(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x4406950", Offset = "0x4406950", VA = "0x4406950")]
	protected static DateTime StringToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x44069C0", Offset = "0x44069C0", VA = "0x44069C0")]
	protected static TimeSpan StringToDayTimeDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x4406A20", Offset = "0x4406A20", VA = "0x4406A20")]
	protected static TimeSpan StringToDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x4406A70", Offset = "0x4406A70", VA = "0x4406A70")]
	protected static DateTime StringToGDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x4406AE0", Offset = "0x4406AE0", VA = "0x4406AE0")]
	protected static DateTime StringToGMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x4406B50", Offset = "0x4406B50", VA = "0x4406B50")]
	protected static DateTime StringToGMonthDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x4406BC0", Offset = "0x4406BC0", VA = "0x4406BC0")]
	protected static DateTime StringToGYear(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x4406C30", Offset = "0x4406C30", VA = "0x4406C30")]
	protected static DateTime StringToGYearMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x4406CA0", Offset = "0x4406CA0", VA = "0x4406CA0")]
	protected static DateTimeOffset StringToDateOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x4406D10", Offset = "0x4406D10", VA = "0x4406D10")]
	protected static DateTimeOffset StringToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x4406D80", Offset = "0x4406D80", VA = "0x4406D80")]
	protected static DateTimeOffset StringToGDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x4406DF0", Offset = "0x4406DF0", VA = "0x4406DF0")]
	protected static DateTimeOffset StringToGMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x4406E60", Offset = "0x4406E60", VA = "0x4406E60")]
	protected static DateTimeOffset StringToGMonthDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x4406ED0", Offset = "0x4406ED0", VA = "0x4406ED0")]
	protected static DateTimeOffset StringToGYearOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x4406F40", Offset = "0x4406F40", VA = "0x4406F40")]
	protected static DateTimeOffset StringToGYearMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x4406FB0", Offset = "0x4406FB0", VA = "0x4406FB0")]
	protected static byte[] StringToHexBinary(string value)
	{
		return null;
	}

	[Token(Token = "0x600189E")]
	[Address(RVA = "0x4407100", Offset = "0x4407100", VA = "0x4407100")]
	protected static XmlQualifiedName StringToQName(string value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600189F")]
	[Address(RVA = "0x44073D0", Offset = "0x44073D0", VA = "0x44073D0")]
	protected static DateTime StringToTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x4407440", Offset = "0x4407440", VA = "0x4407440")]
	protected static DateTimeOffset StringToTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x44074B0", Offset = "0x44074B0", VA = "0x44074B0")]
	protected static TimeSpan StringToYearMonthDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x4407510", Offset = "0x4407510", VA = "0x4407510")]
	protected static string AnyUriToString(Uri value)
	{
		return null;
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x4407530", Offset = "0x4407530", VA = "0x4407530")]
	protected static string Base64BinaryToString(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x44075A0", Offset = "0x44075A0", VA = "0x44075A0")]
	protected static string DateToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x4407620", Offset = "0x4407620", VA = "0x4407620")]
	protected static string DateTimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x44076A0", Offset = "0x44076A0", VA = "0x44076A0")]
	protected static string DayTimeDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x4407700", Offset = "0x4407700", VA = "0x4407700")]
	protected static string DurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x4407750", Offset = "0x4407750", VA = "0x4407750")]
	protected static string GDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x44077D0", Offset = "0x44077D0", VA = "0x44077D0")]
	protected static string GMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x4407850", Offset = "0x4407850", VA = "0x4407850")]
	protected static string GMonthDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x44078D0", Offset = "0x44078D0", VA = "0x44078D0")]
	protected static string GYearToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x4407950", Offset = "0x4407950", VA = "0x4407950")]
	protected static string GYearMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x44079D0", Offset = "0x44079D0", VA = "0x44079D0")]
	protected static string DateOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x4407A50", Offset = "0x4407A50", VA = "0x4407A50")]
	protected static string DateTimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x4407AD0", Offset = "0x4407AD0", VA = "0x4407AD0")]
	protected static string GDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x4407B50", Offset = "0x4407B50", VA = "0x4407B50")]
	protected static string GMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x4407BD0", Offset = "0x4407BD0", VA = "0x4407BD0")]
	protected static string GMonthDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x4407C50", Offset = "0x4407C50", VA = "0x4407C50")]
	protected static string GYearOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x4407CD0", Offset = "0x4407CD0", VA = "0x4407CD0")]
	protected static string GYearMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x4407D50", Offset = "0x4407D50", VA = "0x4407D50")]
	protected static string QNameToString(XmlQualifiedName qname, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x4407F70", Offset = "0x4407F70", VA = "0x4407F70")]
	protected static string TimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x4407FF0", Offset = "0x4407FF0", VA = "0x4407FF0")]
	protected static string TimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x4408070", Offset = "0x4408070", VA = "0x4408070")]
	protected static string YearMonthDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x44080D0", Offset = "0x44080D0", VA = "0x44080D0")]
	internal static DateTime DateTimeOffsetToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x4408130", Offset = "0x4408130", VA = "0x4408130")]
	internal static int DecimalToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x44082E0", Offset = "0x44082E0", VA = "0x44082E0")]
	protected static long DecimalToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x44084A0", Offset = "0x44084A0", VA = "0x44084A0")]
	protected static ulong DecimalToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x4408650", Offset = "0x4408650", VA = "0x4408650")]
	protected static byte Int32ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x4408740", Offset = "0x4408740", VA = "0x4408740")]
	protected static short Int32ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4408830", Offset = "0x4408830", VA = "0x4408830")]
	protected static sbyte Int32ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4408920", Offset = "0x4408920", VA = "0x4408920")]
	protected static ushort Int32ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4408A10", Offset = "0x4408A10", VA = "0x4408A10")]
	protected static int Int64ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4408B00", Offset = "0x4408B00", VA = "0x4408B00")]
	protected static uint Int64ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4408BF0", Offset = "0x4408BF0", VA = "0x4408BF0")]
	protected static DateTime UntypedAtomicToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x4408C60", Offset = "0x4408C60", VA = "0x4408C60")]
	protected static DateTimeOffset UntypedAtomicToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}
}
