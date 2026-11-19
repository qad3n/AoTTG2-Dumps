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
	[Address(RVA = "0x6057B80", Offset = "0x6056B80", VA = "0x6057B80")]
	protected XmlUntypedConverter()
	{
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x6057D20", Offset = "0x6056D20", VA = "0x6057D20")]
	protected XmlUntypedConverter(XmlUntypedConverter atomicConverter, bool allowListToList)
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x6057E70", Offset = "0x6056E70", VA = "0x6057E70", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x6057F10", Offset = "0x6056F10", VA = "0x6057F10", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x60581E0", Offset = "0x60571E0", VA = "0x60581E0", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x6058280", Offset = "0x6057280", VA = "0x6058280", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x6058420", Offset = "0x6057420", VA = "0x6058420", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x60584C0", Offset = "0x60574C0", VA = "0x60584C0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x6058660", Offset = "0x6057660", VA = "0x6058660", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return 0m;
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x6058700", Offset = "0x6057700", VA = "0x6058700", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x60588B0", Offset = "0x60578B0", VA = "0x60588B0", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x6058950", Offset = "0x6057950", VA = "0x6058950", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x6058B00", Offset = "0x6057B00", VA = "0x6058B00", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x6058BA0", Offset = "0x6057BA0", VA = "0x6058BA0", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x6058D40", Offset = "0x6057D40", VA = "0x6058D40", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x6058DE0", Offset = "0x6057DE0", VA = "0x6058DE0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x6058F80", Offset = "0x6057F80", VA = "0x6058F80", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x6059020", Offset = "0x6058020", VA = "0x6059020", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x60591D0", Offset = "0x60581D0", VA = "0x60591D0", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x6059230", Offset = "0x6058230", VA = "0x6059230", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x60592A0", Offset = "0x60582A0", VA = "0x60592A0", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x60592F0", Offset = "0x60582F0", VA = "0x60592F0", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x6059350", Offset = "0x6058350", VA = "0x6059350", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x60593C0", Offset = "0x60583C0", VA = "0x60593C0", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x6059420", Offset = "0x6058420", VA = "0x6059420", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x6059490", Offset = "0x6058490", VA = "0x6059490", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x6059500", Offset = "0x6058500", VA = "0x6059500", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x605A0B0", Offset = "0x60590B0", VA = "0x605A0B0", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x605A3E0", Offset = "0x60593E0", VA = "0x605A3E0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x605A590", Offset = "0x6059590", VA = "0x605A590", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x605A760", Offset = "0x6059760", VA = "0x605A760", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x605A920", Offset = "0x6059920", VA = "0x605A920", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x605AAE0", Offset = "0x6059AE0", VA = "0x605AAE0", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x605AC90", Offset = "0x6059C90", VA = "0x605AC90", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x605B820", Offset = "0x605A820", VA = "0x605B820", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192D")]
	[Address(RVA = "0x60580C0", Offset = "0x60570C0", VA = "0x60580C0")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x605A270", Offset = "0x6059270", VA = "0x605A270")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x605CD40", Offset = "0x605BD40", VA = "0x605CD40", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001930")]
	[Address(RVA = "0x605D030", Offset = "0x605C030", VA = "0x605D030")]
	private bool SupportsType(Type clrType)
	{
		return default(bool);
	}
}
