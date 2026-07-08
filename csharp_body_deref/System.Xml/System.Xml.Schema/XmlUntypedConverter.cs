using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000270")]
internal class XmlUntypedConverter : XmlListConverter
{
	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x30")]
	private bool allowListToList;

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x0")]
	public static readonly XmlValueConverter Untyped;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly XmlValueConverter UntypedList;

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x4413D50", Offset = "0x4413D50", VA = "0x4413D50")]
	protected XmlUntypedConverter()
	{
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x4413EF0", Offset = "0x4413EF0", VA = "0x4413EF0")]
	protected XmlUntypedConverter(XmlUntypedConverter atomicConverter, bool allowListToList)
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x4414020", Offset = "0x4414020", VA = "0x4414020", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x44140C0", Offset = "0x44140C0", VA = "0x44140C0", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x4414380", Offset = "0x4414380", VA = "0x4414380", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x4414420", Offset = "0x4414420", VA = "0x4414420", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x44145C0", Offset = "0x44145C0", VA = "0x44145C0", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x4414660", Offset = "0x4414660", VA = "0x4414660", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x4414800", Offset = "0x4414800", VA = "0x4414800", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x44148A0", Offset = "0x44148A0", VA = "0x44148A0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x4414A50", Offset = "0x4414A50", VA = "0x4414A50", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x4414AF0", Offset = "0x4414AF0", VA = "0x4414AF0", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x4414CA0", Offset = "0x4414CA0", VA = "0x4414CA0", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x4414D40", Offset = "0x4414D40", VA = "0x4414D40", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x4414EE0", Offset = "0x4414EE0", VA = "0x4414EE0", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x4414F80", Offset = "0x4414F80", VA = "0x4414F80", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x4415120", Offset = "0x4415120", VA = "0x4415120", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x44151C0", Offset = "0x44151C0", VA = "0x44151C0", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x4415370", Offset = "0x4415370", VA = "0x4415370", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x44153D0", Offset = "0x44153D0", VA = "0x44153D0", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x4415440", Offset = "0x4415440", VA = "0x4415440", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x4415490", Offset = "0x4415490", VA = "0x4415490", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x44154F0", Offset = "0x44154F0", VA = "0x44154F0", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x4415560", Offset = "0x4415560", VA = "0x4415560", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x44155C0", Offset = "0x44155C0", VA = "0x44155C0", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x4415630", Offset = "0x4415630", VA = "0x4415630", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x44156A0", Offset = "0x44156A0", VA = "0x44156A0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x4416320", Offset = "0x4416320", VA = "0x4416320", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x4416650", Offset = "0x4416650", VA = "0x4416650", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x4416800", Offset = "0x4416800", VA = "0x4416800", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x44169D0", Offset = "0x44169D0", VA = "0x44169D0", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x4416B90", Offset = "0x4416B90", VA = "0x4416B90", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x4416D50", Offset = "0x4416D50", VA = "0x4416D50", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x4416F00", Offset = "0x4416F00", VA = "0x4416F00", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x4417A70", Offset = "0x4417A70", VA = "0x4417A70", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192D")]
	[Address(RVA = "0x4414260", Offset = "0x4414260", VA = "0x4414260")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x44164E0", Offset = "0x44164E0", VA = "0x44164E0")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x4418F90", Offset = "0x4418F90", VA = "0x4418F90", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001930")]
	[Address(RVA = "0x4419290", Offset = "0x4419290", VA = "0x4419290")]
	private bool SupportsType(Type clrType)
	{
		return default(bool);
	}
}
