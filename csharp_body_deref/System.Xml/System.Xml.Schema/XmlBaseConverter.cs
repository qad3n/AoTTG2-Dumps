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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	protected XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001885")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170006AC")]
	protected string XmlTypeName
	{
		[Token(Token = "0x6001886")]
		[Address(RVA = "0x2675600", Offset = "0x2673C00", VA = "0x182675600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AD")]
	protected Type DefaultClrType
	{
		[Token(Token = "0x6001887")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001847")]
	[Address(RVA = "0x26753A0", Offset = "0x26739A0", VA = "0x1826753A0")]
	protected XmlBaseConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x6001848")]
	[Address(RVA = "0x26752B0", Offset = "0x26738B0", VA = "0x1826752B0")]
	protected XmlBaseConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001849")]
	[Address(RVA = "0x2675590", Offset = "0x2673B90", VA = "0x182675590")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic)
	{
	}

	[Token(Token = "0x600184A")]
	[Address(RVA = "0x2675250", Offset = "0x2673850", VA = "0x182675250")]
	protected XmlBaseConverter(XmlBaseConverter converterAtomic, Type clrTypeDefault)
	{
	}

	[Token(Token = "0x600184B")]
	[Address(RVA = "0x2672380", Offset = "0x2670980", VA = "0x182672380", Slot = "7")]
	public override bool ToBoolean(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x26722A0", Offset = "0x26708A0", VA = "0x1826722A0", Slot = "6")]
	public override bool ToBoolean(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x2672110", Offset = "0x2670710", VA = "0x182672110", Slot = "5")]
	public override bool ToBoolean(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x2672520", Offset = "0x2670B20", VA = "0x182672520", Slot = "4")]
	public override bool ToBoolean(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x600184F")]
	[Address(RVA = "0x26721E0", Offset = "0x26707E0", VA = "0x1826721E0", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001850")]
	[Address(RVA = "0x2672460", Offset = "0x2670A60", VA = "0x182672460", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001851")]
	[Address(RVA = "0x2672C30", Offset = "0x2671230", VA = "0x182672C30", Slot = "33")]
	public override DateTime ToDateTime(bool value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001852")]
	[Address(RVA = "0x2672DE0", Offset = "0x26713E0", VA = "0x182672DE0", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x26728B0", Offset = "0x2670EB0", VA = "0x1826728B0", Slot = "36")]
	public override DateTime ToDateTime(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x2672B50", Offset = "0x2671150", VA = "0x182672B50", Slot = "34")]
	public override DateTime ToDateTime(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x26729A0", Offset = "0x2670FA0", VA = "0x1826729A0", Slot = "35")]
	public override DateTime ToDateTime(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001856")]
	[Address(RVA = "0x2672D10", Offset = "0x2671310", VA = "0x182672D10", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001857")]
	[Address(RVA = "0x2672A80", Offset = "0x2671080", VA = "0x182672A80", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001858")]
	[Address(RVA = "0x26726D0", Offset = "0x2670CD0", VA = "0x1826726D0", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001859")]
	[Address(RVA = "0x26725F0", Offset = "0x2670BF0", VA = "0x1826725F0", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185A")]
	[Address(RVA = "0x26727D0", Offset = "0x2670DD0", VA = "0x1826727D0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600185B")]
	[Address(RVA = "0x2672FB0", Offset = "0x26715B0", VA = "0x182672FB0", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return 0m;
	}

	[Token(Token = "0x600185C")]
	[Address(RVA = "0x2672ED0", Offset = "0x26714D0", VA = "0x182672ED0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x600185D")]
	[Address(RVA = "0x2673230", Offset = "0x2671830", VA = "0x182673230", Slot = "24")]
	public override double ToDouble(bool value)
	{
		return default(double);
	}

	[Token(Token = "0x600185E")]
	[Address(RVA = "0x2673150", Offset = "0x2671750", VA = "0x182673150", Slot = "27")]
	public override double ToDouble(DateTime value)
	{
		return default(double);
	}

	[Token(Token = "0x600185F")]
	[Address(RVA = "0x26733C0", Offset = "0x26719C0", VA = "0x1826733C0", Slot = "25")]
	public override double ToDouble(int value)
	{
		return default(double);
	}

	[Token(Token = "0x6001860")]
	[Address(RVA = "0x2673490", Offset = "0x2671A90", VA = "0x182673490", Slot = "26")]
	public override double ToDouble(long value)
	{
		return default(double);
	}

	[Token(Token = "0x6001861")]
	[Address(RVA = "0x2673300", Offset = "0x2671900", VA = "0x182673300", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001862")]
	[Address(RVA = "0x2673090", Offset = "0x2671690", VA = "0x182673090", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001863")]
	[Address(RVA = "0x2673980", Offset = "0x2671F80", VA = "0x182673980", Slot = "10")]
	public override int ToInt32(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6001864")]
	[Address(RVA = "0x2673630", Offset = "0x2671C30", VA = "0x182673630", Slot = "13")]
	public override int ToInt32(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x6001865")]
	[Address(RVA = "0x26738A0", Offset = "0x2671EA0", VA = "0x1826738A0", Slot = "12")]
	public override int ToInt32(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6001866")]
	[Address(RVA = "0x26737D0", Offset = "0x2671DD0", VA = "0x1826737D0", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6001867")]
	[Address(RVA = "0x2673570", Offset = "0x2671B70", VA = "0x182673570", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001868")]
	[Address(RVA = "0x2673710", Offset = "0x2671D10", VA = "0x182673710", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001869")]
	[Address(RVA = "0x2673E60", Offset = "0x2672460", VA = "0x182673E60", Slot = "16")]
	public override long ToInt64(bool value)
	{
		return default(long);
	}

	[Token(Token = "0x600186A")]
	[Address(RVA = "0x2673B20", Offset = "0x2672120", VA = "0x182673B20", Slot = "19")]
	public override long ToInt64(DateTime value)
	{
		return default(long);
	}

	[Token(Token = "0x600186B")]
	[Address(RVA = "0x2673CC0", Offset = "0x26722C0", VA = "0x182673CC0", Slot = "18")]
	public override long ToInt64(double value)
	{
		return default(long);
	}

	[Token(Token = "0x600186C")]
	[Address(RVA = "0x2673A50", Offset = "0x2672050", VA = "0x182673A50", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x600186D")]
	[Address(RVA = "0x2673C00", Offset = "0x2672200", VA = "0x182673C00", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x600186E")]
	[Address(RVA = "0x2673DA0", Offset = "0x26723A0", VA = "0x182673DA0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600186F")]
	[Address(RVA = "0x2673FF0", Offset = "0x26725F0", VA = "0x182673FF0", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x2673F30", Offset = "0x2672530", VA = "0x182673F30", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x26740D0", Offset = "0x26726D0", VA = "0x1826740D0", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x2674800", Offset = "0x2672E00", VA = "0x182674800", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x26744B0", Offset = "0x2672AB0", VA = "0x1826744B0", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x6001874")]
	[Address(RVA = "0x2674250", Offset = "0x2672850", VA = "0x182674250", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6001875")]
	[Address(RVA = "0x26743E0", Offset = "0x26729E0", VA = "0x1826743E0", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001876")]
	[Address(RVA = "0x2674580", Offset = "0x2672B80", VA = "0x182674580", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x2674190", Offset = "0x2672790", VA = "0x182674190", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001878")]
	[Address(RVA = "0x2674720", Offset = "0x2672D20", VA = "0x182674720", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001879")]
	[Address(RVA = "0x2674650", Offset = "0x2672C50", VA = "0x182674650", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x600187A")]
	[Address(RVA = "0x2674320", Offset = "0x2672920", VA = "0x182674320", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600187B")]
	[Address(RVA = "0x26747E0", Offset = "0x2672DE0", VA = "0x1826747E0", Slot = "51")]
	public override string ToString(object value)
	{
		return null;
	}

	[Token(Token = "0x600187C")]
	[Address(RVA = "0x266F560", Offset = "0x266DB60", VA = "0x18266F560", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187D")]
	[Address(RVA = "0x266F680", Offset = "0x266DC80", VA = "0x18266F680", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187E")]
	[Address(RVA = "0x266F480", Offset = "0x266DA80", VA = "0x18266F480", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600187F")]
	[Address(RVA = "0x266F620", Offset = "0x266DC20", VA = "0x18266F620", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x266F500", Offset = "0x266DB00", VA = "0x18266F500", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x266F5C0", Offset = "0x266DBC0", VA = "0x18266F5C0", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001882")]
	[Address(RVA = "0x266F460", Offset = "0x266DA60", VA = "0x18266F460", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001883")]
	[Address(RVA = "0x266F430", Offset = "0x266DA30", VA = "0x18266F430", Slot = "60")]
	public override object ChangeType(object value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001888")]
	[Address(RVA = "0x2670E70", Offset = "0x266F470", VA = "0x182670E70")]
	protected static bool IsDerivedFrom(Type derivedType, Type baseType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001889")]
	[Address(RVA = "0x266F700", Offset = "0x266DD00", VA = "0x18266F700")]
	protected Exception CreateInvalidClrMappingException(Type sourceType, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600188A")]
	[Address(RVA = "0x2670F10", Offset = "0x266F510", VA = "0x182670F10")]
	protected static string QNameToString(XmlQualifiedName name)
	{
		return null;
	}

	[Token(Token = "0x600188B")]
	[Address(RVA = "0x266F3D0", Offset = "0x266D9D0", VA = "0x18266F3D0", Slot = "62")]
	protected virtual object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600188C")]
	[Address(RVA = "0x2671210", Offset = "0x266F810", VA = "0x182671210")]
	protected static byte[] StringToBase64Binary(string value)
	{
		return null;
	}

	[Token(Token = "0x600188D")]
	[Address(RVA = "0x2671430", Offset = "0x266FA30", VA = "0x182671430")]
	protected static DateTime StringToDate(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188E")]
	[Address(RVA = "0x26713B0", Offset = "0x266F9B0", VA = "0x1826713B0")]
	protected static DateTime StringToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600188F")]
	[Address(RVA = "0x26714B0", Offset = "0x266FAB0", VA = "0x1826714B0")]
	protected static TimeSpan StringToDayTimeDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001890")]
	[Address(RVA = "0x2671520", Offset = "0x266FB20", VA = "0x182671520")]
	protected static TimeSpan StringToDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001891")]
	[Address(RVA = "0x2671610", Offset = "0x266FC10", VA = "0x182671610")]
	protected static DateTime StringToGDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001892")]
	[Address(RVA = "0x2671830", Offset = "0x266FE30", VA = "0x182671830")]
	protected static DateTime StringToGMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001893")]
	[Address(RVA = "0x2671720", Offset = "0x266FD20", VA = "0x182671720")]
	protected static DateTime StringToGMonthDay(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001894")]
	[Address(RVA = "0x2671A50", Offset = "0x2670050", VA = "0x182671A50")]
	protected static DateTime StringToGYear(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001895")]
	[Address(RVA = "0x2671940", Offset = "0x266FF40", VA = "0x182671940")]
	protected static DateTime StringToGYearMonth(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001896")]
	[Address(RVA = "0x2671290", Offset = "0x266F890", VA = "0x182671290")]
	protected static DateTimeOffset StringToDateOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001897")]
	[Address(RVA = "0x2671320", Offset = "0x266F920", VA = "0x182671320")]
	protected static DateTimeOffset StringToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x2671580", Offset = "0x266FB80", VA = "0x182671580")]
	protected static DateTimeOffset StringToGDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x26717A0", Offset = "0x266FDA0", VA = "0x1826717A0")]
	protected static DateTimeOffset StringToGMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x2671690", Offset = "0x266FC90", VA = "0x182671690")]
	protected static DateTimeOffset StringToGMonthDayOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x26719C0", Offset = "0x266FFC0", VA = "0x1826719C0")]
	protected static DateTimeOffset StringToGYearOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x26718B0", Offset = "0x266FEB0", VA = "0x1826718B0")]
	protected static DateTimeOffset StringToGYearMonthOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x2671AD0", Offset = "0x26700D0", VA = "0x182671AD0")]
	protected static byte[] StringToHexBinary(string value)
	{
		return null;
	}

	[Token(Token = "0x600189E")]
	[Address(RVA = "0x2671BA0", Offset = "0x26701A0", VA = "0x182671BA0")]
	protected static XmlQualifiedName StringToQName(string value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600189F")]
	[Address(RVA = "0x2671F10", Offset = "0x2670510", VA = "0x182671F10")]
	protected static DateTime StringToTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x2671E80", Offset = "0x2670480", VA = "0x182671E80")]
	protected static DateTimeOffset StringToTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018A1")]
	[Address(RVA = "0x2671F90", Offset = "0x2670590", VA = "0x182671F90")]
	protected static TimeSpan StringToYearMonthDuration(string value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x60018A2")]
	[Address(RVA = "0x266F360", Offset = "0x266D960", VA = "0x18266F360")]
	protected static string AnyUriToString(Uri value)
	{
		return null;
	}

	[Token(Token = "0x60018A3")]
	[Address(RVA = "0x266F380", Offset = "0x266D980", VA = "0x18266F380")]
	protected static string Base64BinaryToString(byte[] value)
	{
		return null;
	}

	[Token(Token = "0x60018A4")]
	[Address(RVA = "0x266FBF0", Offset = "0x266E1F0", VA = "0x18266FBF0")]
	protected static string DateToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A5")]
	[Address(RVA = "0x266FB70", Offset = "0x266E170", VA = "0x18266FB70")]
	protected static string DateTimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A6")]
	[Address(RVA = "0x266FC70", Offset = "0x266E270", VA = "0x18266FC70")]
	protected static string DayTimeDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A7")]
	[Address(RVA = "0x26702C0", Offset = "0x266E8C0", VA = "0x1826702C0")]
	protected static string DurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x26703B0", Offset = "0x266E9B0", VA = "0x1826703B0")]
	protected static string GDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x26705D0", Offset = "0x266EBD0", VA = "0x1826705D0")]
	protected static string GMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x26704C0", Offset = "0x266EAC0", VA = "0x1826704C0")]
	protected static string GMonthDayToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x26707F0", Offset = "0x266EDF0", VA = "0x1826707F0")]
	protected static string GYearToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x26706E0", Offset = "0x266ECE0", VA = "0x1826706E0")]
	protected static string GYearMonthToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x266FA00", Offset = "0x266E000", VA = "0x18266FA00")]
	protected static string DateOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x266FAE0", Offset = "0x266E0E0", VA = "0x18266FAE0")]
	protected static string DateTimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x2670320", Offset = "0x266E920", VA = "0x182670320")]
	protected static string GDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x2670540", Offset = "0x266EB40", VA = "0x182670540")]
	protected static string GMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x2670430", Offset = "0x266EA30", VA = "0x182670430")]
	protected static string GMonthDayOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x2670760", Offset = "0x266ED60", VA = "0x182670760")]
	protected static string GYearOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x2670650", Offset = "0x266EC50", VA = "0x182670650")]
	protected static string GYearMonthOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x2671030", Offset = "0x266F630", VA = "0x182671030")]
	protected static string QNameToString(XmlQualifiedName qname, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x2672090", Offset = "0x2670690", VA = "0x182672090")]
	protected static string TimeToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x2672000", Offset = "0x2670600", VA = "0x182672000")]
	protected static string TimeOffsetToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x26749D0", Offset = "0x2672FD0", VA = "0x1826749D0")]
	protected static string YearMonthDurationToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x266FA90", Offset = "0x266E090", VA = "0x18266FA90")]
	internal static DateTime DateTimeOffsetToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x266FCE0", Offset = "0x266E2E0", VA = "0x18266FCE0")]
	internal static int DecimalToInt32(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x266FED0", Offset = "0x266E4D0", VA = "0x18266FED0")]
	protected static long DecimalToInt64(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x26700D0", Offset = "0x266E6D0", VA = "0x1826700D0")]
	protected static ulong DecimalToUInt64(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x2670870", Offset = "0x266EE70", VA = "0x182670870")]
	protected static byte Int32ToByte(int value)
	{
		return default(byte);
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x2670970", Offset = "0x266EF70", VA = "0x182670970")]
	protected static short Int32ToInt16(int value)
	{
		return default(short);
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x2670A70", Offset = "0x266F070", VA = "0x182670A70")]
	protected static sbyte Int32ToSByte(int value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x2670B70", Offset = "0x266F170", VA = "0x182670B70")]
	protected static ushort Int32ToUInt16(int value)
	{
		return default(ushort);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x2670C70", Offset = "0x266F270", VA = "0x182670C70")]
	protected static int Int64ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x2670D70", Offset = "0x266F370", VA = "0x182670D70")]
	protected static uint Int64ToUInt32(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x2674950", Offset = "0x2672F50", VA = "0x182674950")]
	protected static DateTime UntypedAtomicToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x26748C0", Offset = "0x2672EC0", VA = "0x1826748C0")]
	protected static DateTimeOffset UntypedAtomicToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}
}
