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
		[Address(RVA = "0x47439E0", Offset = "0x47439E0", VA = "0x47439E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	protected XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001885")]
		[Address(RVA = "0x47439F0", Offset = "0x47439F0", VA = "0x47439F0")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170006AC")]
	protected string XmlTypeName
	{
		[Token(Token = "0x6001886")]
		[Address(RVA = "0x4743A00", Offset = "0x4743A00", VA = "0x4743A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AD")]
	protected Type DefaultClrType
	{
		[Token(Token = "0x6001887")]
		[Address(RVA = "0x4743BF0", Offset = "0x4743BF0", VA = "0x4743BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x4740EA0", Offset = "0x4740EA0", VA = "0x4740EA0")]
	protected XmlBaseConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x47410E0", Offset = "0x47410E0", VA = "0x47410E0")]
	protected XmlBaseConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x47411C0", Offset = "0x47411C0", VA = "0x47411C0")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x4741230", Offset = "0x4741230", VA = "0x4741230")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x4741280", Offset = "0x4741280", VA = "0x4741280", Slot = "7")]
	public override bool ToBoolean(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x4741360", Offset = "0x4741360", VA = "0x4741360", Slot = "6")]
	public override bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x4741440", Offset = "0x4741440", VA = "0x4741440", Slot = "5")]
	public override bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x4741500", Offset = "0x4741500", VA = "0x4741500", Slot = "4")]
	public override bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x47415C0", Offset = "0x47415C0", VA = "0x47415C0", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x4741670", Offset = "0x4741670", VA = "0x4741670", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x4741720", Offset = "0x4741720", VA = "0x4741720", Slot = "33")]
	public override DateTime ToDateTime(bool value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x4741800", Offset = "0x4741800", VA = "0x4741800", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x4741900", Offset = "0x4741900", VA = "0x4741900", Slot = "36")]
	public override DateTime ToDateTime(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x47419E0", Offset = "0x47419E0", VA = "0x47419E0", Slot = "34")]
	public override DateTime ToDateTime(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x4741AC0", Offset = "0x4741AC0", VA = "0x4741AC0", Slot = "35")]
	public override DateTime ToDateTime(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001856")]
	[Address(RVA = "0x4741BA0", Offset = "0x4741BA0", VA = "0x4741BA0", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x4741C50", Offset = "0x4741C50", VA = "0x4741C50", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x4741D00", Offset = "0x4741D00", VA = "0x4741D00", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x4741DF0", Offset = "0x4741DF0", VA = "0x4741DF0", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x4741EB0", Offset = "0x4741EB0", VA = "0x4741EB0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x4741F70", Offset = "0x4741F70", VA = "0x4741F70", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x4742030", Offset = "0x4742030", VA = "0x4742030", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x47420F0", Offset = "0x47420F0", VA = "0x47420F0", Slot = "24")]
	public override double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x47421C0", Offset = "0x47421C0", VA = "0x47421C0", Slot = "27")]
	public override double ToDouble(DateTime value)
	{
		return default(double);
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x47422A0", Offset = "0x47422A0", VA = "0x47422A0", Slot = "25")]
	public override double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x4742370", Offset = "0x4742370", VA = "0x4742370", Slot = "26")]
	public override double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x4742440", Offset = "0x4742440", VA = "0x4742440", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x47424F0", Offset = "0x47424F0", VA = "0x47424F0", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x47425A0", Offset = "0x47425A0", VA = "0x47425A0", Slot = "10")]
	public override int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x4742660", Offset = "0x4742660", VA = "0x4742660", Slot = "13")]
	public override int ToInt32(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x4742730", Offset = "0x4742730", VA = "0x4742730", Slot = "12")]
	public override int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6001866")]
	[Address(RVA = "0x4742800", Offset = "0x4742800", VA = "0x4742800", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6001867")]
	[Address(RVA = "0x47428C0", Offset = "0x47428C0", VA = "0x47428C0", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001868")]
	[Address(RVA = "0x4742960", Offset = "0x4742960", VA = "0x4742960", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x4742A00", Offset = "0x4742A00", VA = "0x4742A00", Slot = "16")]
	public override long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x4742AC0", Offset = "0x4742AC0", VA = "0x4742AC0", Slot = "19")]
	public override long ToInt64(DateTime value)
	{
		return default(long);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x4742B90", Offset = "0x4742B90", VA = "0x4742B90", Slot = "18")]
	public override long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x4742C70", Offset = "0x4742C70", VA = "0x4742C70", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x4742D30", Offset = "0x4742D30", VA = "0x4742D30", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x4742DD0", Offset = "0x4742DD0", VA = "0x4742DD0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600186F")]
	[Address(RVA = "0x4742E70", Offset = "0x4742E70", VA = "0x4742E70", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x4742F50", Offset = "0x4742F50", VA = "0x4742F50", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x4743000", Offset = "0x4743000", VA = "0x4743000", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x47430B0", Offset = "0x47430B0", VA = "0x47430B0", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x4743160", Offset = "0x4743160", VA = "0x4743160", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x4743220", Offset = "0x4743220", VA = "0x4743220", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x4743300", Offset = "0x4743300", VA = "0x4743300", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x47433C0", Offset = "0x47433C0", VA = "0x47433C0", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x4743480", Offset = "0x4743480", VA = "0x4743480", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x4743530", Offset = "0x4743530", VA = "0x4743530", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x47435E0", Offset = "0x47435E0", VA = "0x47435E0", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x47436A0", Offset = "0x47436A0", VA = "0x47436A0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x4743740", Offset = "0x4743740", VA = "0x4743740", Slot = "51")]
	public override string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x4743760", Offset = "0x4743760", VA = "0x4743760", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x47437B0", Offset = "0x47437B0", VA = "0x47437B0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x4743820", Offset = "0x4743820", VA = "0x4743820", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x47438A0", Offset = "0x47438A0", VA = "0x47438A0", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x4743900", Offset = "0x4743900", VA = "0x4743900", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x4743950", Offset = "0x4743950", VA = "0x4743950", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x47439A0", Offset = "0x47439A0", VA = "0x47439A0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x47439C0", Offset = "0x47439C0", VA = "0x47439C0", Slot = "60")]
	public override object ChangeType(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x4743C00", Offset = "0x4743C00", VA = "0x4743C00")]
	protected static bool IsDerivedFrom(Type derivedType, Type baseType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x4743CC0", Offset = "0x4743CC0", VA = "0x4743CC0")]
	protected Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x4743AE0", Offset = "0x4743AE0", VA = "0x4743AE0")]
	protected static string QNameToString(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x4743F70", Offset = "0x4743F70", VA = "0x4743F70", Slot = "62")]
	protected virtual object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x4743FC0", Offset = "0x4743FC0", VA = "0x4743FC0")]
	protected static byte[] StringToBase64Binary(string value)
	{
		return null;
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x4744040", Offset = "0x4744040", VA = "0x4744040")]
	protected static DateTime StringToDate(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x47440B0", Offset = "0x47440B0", VA = "0x47440B0")]
	protected static DateTime StringToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x4744120", Offset = "0x4744120", VA = "0x4744120")]
	protected static TimeSpan StringToDayTimeDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x4744180", Offset = "0x4744180", VA = "0x4744180")]
	protected static TimeSpan StringToDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x47441D0", Offset = "0x47441D0", VA = "0x47441D0")]
	protected static DateTime StringToGDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x4744240", Offset = "0x4744240", VA = "0x4744240")]
	protected static DateTime StringToGMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x47442B0", Offset = "0x47442B0", VA = "0x47442B0")]
	protected static DateTime StringToGMonthDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x4744320", Offset = "0x4744320", VA = "0x4744320")]
	protected static DateTime StringToGYear(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x4744390", Offset = "0x4744390", VA = "0x4744390")]
	protected static DateTime StringToGYearMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x4744400", Offset = "0x4744400", VA = "0x4744400")]
	protected static DateTimeOffset StringToDateOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x4744470", Offset = "0x4744470", VA = "0x4744470")]
	protected static DateTimeOffset StringToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x47444E0", Offset = "0x47444E0", VA = "0x47444E0")]
	protected static DateTimeOffset StringToGDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x4744550", Offset = "0x4744550", VA = "0x4744550")]
	protected static DateTimeOffset StringToGMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x47445C0", Offset = "0x47445C0", VA = "0x47445C0")]
	protected static DateTimeOffset StringToGMonthDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x4744630", Offset = "0x4744630", VA = "0x4744630")]
	protected static DateTimeOffset StringToGYearOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x47446A0", Offset = "0x47446A0", VA = "0x47446A0")]
	protected static DateTimeOffset StringToGYearMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x4744710", Offset = "0x4744710", VA = "0x4744710")]
	protected static byte[] StringToHexBinary(string value)
	{
		return null;
	}

	[Token(Token = "0x600189E")]
	[Address(RVA = "0x4744860", Offset = "0x4744860", VA = "0x4744860")]
	protected static XmlQualifiedName StringToQName(string value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600189F")]
	[Address(RVA = "0x4744B30", Offset = "0x4744B30", VA = "0x4744B30")]
	protected static DateTime StringToTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x4744BA0", Offset = "0x4744BA0", VA = "0x4744BA0")]
	protected static DateTimeOffset StringToTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x4744C10", Offset = "0x4744C10", VA = "0x4744C10")]
	protected static TimeSpan StringToYearMonthDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x4744C70", Offset = "0x4744C70", VA = "0x4744C70")]
	protected static string AnyUriToString(Uri value)
	{
		return null;
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x4744C90", Offset = "0x4744C90", VA = "0x4744C90")]
	protected static string Base64BinaryToString(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x4744D00", Offset = "0x4744D00", VA = "0x4744D00")]
	protected static string DateToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x4744D80", Offset = "0x4744D80", VA = "0x4744D80")]
	protected static string DateTimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x4744E00", Offset = "0x4744E00", VA = "0x4744E00")]
	protected static string DayTimeDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x4744E60", Offset = "0x4744E60", VA = "0x4744E60")]
	protected static string DurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x4744EB0", Offset = "0x4744EB0", VA = "0x4744EB0")]
	protected static string GDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x4744F30", Offset = "0x4744F30", VA = "0x4744F30")]
	protected static string GMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x4744FB0", Offset = "0x4744FB0", VA = "0x4744FB0")]
	protected static string GMonthDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x4745030", Offset = "0x4745030", VA = "0x4745030")]
	protected static string GYearToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x47450B0", Offset = "0x47450B0", VA = "0x47450B0")]
	protected static string GYearMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x4745130", Offset = "0x4745130", VA = "0x4745130")]
	protected static string DateOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x47451B0", Offset = "0x47451B0", VA = "0x47451B0")]
	protected static string DateTimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x4745230", Offset = "0x4745230", VA = "0x4745230")]
	protected static string GDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x47452B0", Offset = "0x47452B0", VA = "0x47452B0")]
	protected static string GMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x4745330", Offset = "0x4745330", VA = "0x4745330")]
	protected static string GMonthDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x47453B0", Offset = "0x47453B0", VA = "0x47453B0")]
	protected static string GYearOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x4745430", Offset = "0x4745430", VA = "0x4745430")]
	protected static string GYearMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x47454B0", Offset = "0x47454B0", VA = "0x47454B0")]
	protected static string QNameToString(XmlQualifiedName qname, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x47456D0", Offset = "0x47456D0", VA = "0x47456D0")]
	protected static string TimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x4745750", Offset = "0x4745750", VA = "0x4745750")]
	protected static string TimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x47457D0", Offset = "0x47457D0", VA = "0x47457D0")]
	protected static string YearMonthDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x4745830", Offset = "0x4745830", VA = "0x4745830")]
	internal static DateTime DateTimeOffsetToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x4745890", Offset = "0x4745890", VA = "0x4745890")]
	internal static int DecimalToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x4745A40", Offset = "0x4745A40", VA = "0x4745A40")]
	protected static long DecimalToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x4745C00", Offset = "0x4745C00", VA = "0x4745C00")]
	protected static ulong DecimalToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x4745DB0", Offset = "0x4745DB0", VA = "0x4745DB0")]
	protected static byte Int32ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x4745EA0", Offset = "0x4745EA0", VA = "0x4745EA0")]
	protected static short Int32ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x4745F90", Offset = "0x4745F90", VA = "0x4745F90")]
	protected static sbyte Int32ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x4746080", Offset = "0x4746080", VA = "0x4746080")]
	protected static ushort Int32ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x4746170", Offset = "0x4746170", VA = "0x4746170")]
	protected static int Int64ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x4746260", Offset = "0x4746260", VA = "0x4746260")]
	protected static uint Int64ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x4746350", Offset = "0x4746350", VA = "0x4746350")]
	protected static DateTime UntypedAtomicToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x47463C0", Offset = "0x47463C0", VA = "0x47463C0")]
	protected static DateTimeOffset UntypedAtomicToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}
}
