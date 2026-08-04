// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlUntypedConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x47514B0", Offset = "0x47514B0", VA = "0x47514B0")]
	protected XmlUntypedConverter()
	{
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x4751650", Offset = "0x4751650", VA = "0x4751650")]
	protected XmlUntypedConverter(XmlUntypedConverter atomicConverter, bool allowListToList)
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x4751780", Offset = "0x4751780", VA = "0x4751780", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x4751820", Offset = "0x4751820", VA = "0x4751820", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x4751AE0", Offset = "0x4751AE0", VA = "0x4751AE0", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x4751B80", Offset = "0x4751B80", VA = "0x4751B80", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x4751D20", Offset = "0x4751D20", VA = "0x4751D20", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x4751DC0", Offset = "0x4751DC0", VA = "0x4751DC0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x4751F60", Offset = "0x4751F60", VA = "0x4751F60", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x4752000", Offset = "0x4752000", VA = "0x4752000", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x47521B0", Offset = "0x47521B0", VA = "0x47521B0", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x4752250", Offset = "0x4752250", VA = "0x4752250", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x4752400", Offset = "0x4752400", VA = "0x4752400", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x47524A0", Offset = "0x47524A0", VA = "0x47524A0", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x4752640", Offset = "0x4752640", VA = "0x4752640", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x47526E0", Offset = "0x47526E0", VA = "0x47526E0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x4752880", Offset = "0x4752880", VA = "0x4752880", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x4752920", Offset = "0x4752920", VA = "0x4752920", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x4752AD0", Offset = "0x4752AD0", VA = "0x4752AD0", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x4752B30", Offset = "0x4752B30", VA = "0x4752B30", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x4752BA0", Offset = "0x4752BA0", VA = "0x4752BA0", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x4752BF0", Offset = "0x4752BF0", VA = "0x4752BF0", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x4752C50", Offset = "0x4752C50", VA = "0x4752C50", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x4752CC0", Offset = "0x4752CC0", VA = "0x4752CC0", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x4752D20", Offset = "0x4752D20", VA = "0x4752D20", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x4752D90", Offset = "0x4752D90", VA = "0x4752D90", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x4752E00", Offset = "0x4752E00", VA = "0x4752E00", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x4753A80", Offset = "0x4753A80", VA = "0x4753A80", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x4753DB0", Offset = "0x4753DB0", VA = "0x4753DB0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x4753F60", Offset = "0x4753F60", VA = "0x4753F60", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x4754130", Offset = "0x4754130", VA = "0x4754130", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x47542F0", Offset = "0x47542F0", VA = "0x47542F0", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x47544B0", Offset = "0x47544B0", VA = "0x47544B0", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x4754660", Offset = "0x4754660", VA = "0x4754660", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x47551D0", Offset = "0x47551D0", VA = "0x47551D0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192D")]
	[Address(RVA = "0x47519C0", Offset = "0x47519C0", VA = "0x47519C0")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x4753C40", Offset = "0x4753C40", VA = "0x4753C40")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x47566F0", Offset = "0x47566F0", VA = "0x47566F0", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001930")]
	[Address(RVA = "0x47569F0", Offset = "0x47569F0", VA = "0x47569F0")]
	private bool SupportsType(Type clrType)
	{
		return default(bool);
	}
}
