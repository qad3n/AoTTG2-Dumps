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
	[Address(RVA = "0x26A6000", Offset = "0x26A4600", VA = "0x1826A6000")]
	protected XmlUntypedConverter()
	{
	}

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x26A5F20", Offset = "0x26A4520", VA = "0x1826A5F20")]
	protected XmlUntypedConverter(XmlUntypedConverter atomicConverter, bool allowListToList)
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x26A3A70", Offset = "0x26A2070", VA = "0x1826A3A70", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x26A38A0", Offset = "0x26A1EA0", VA = "0x1826A38A0", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x26A3DB0", Offset = "0x26A23B0", VA = "0x1826A3DB0", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x26A3E50", Offset = "0x26A2450", VA = "0x1826A3E50", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x26A3CF0", Offset = "0x26A22F0", VA = "0x1826A3CF0", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x26A3B10", Offset = "0x26A2110", VA = "0x1826A3B10", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x26A4020", Offset = "0x26A2620", VA = "0x1826A4020", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return 0m;
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x26A40E0", Offset = "0x26A26E0", VA = "0x1826A40E0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x26A44A0", Offset = "0x26A2AA0", VA = "0x1826A44A0", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x6001915")]
	[Address(RVA = "0x26A42D0", Offset = "0x26A28D0", VA = "0x1826A42D0", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001916")]
	[Address(RVA = "0x26A4540", Offset = "0x26A2B40", VA = "0x1826A4540", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x6001917")]
	[Address(RVA = "0x26A45E0", Offset = "0x26A2BE0", VA = "0x1826A45E0", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001918")]
	[Address(RVA = "0x26A4980", Offset = "0x26A2F80", VA = "0x1826A4980", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x6001919")]
	[Address(RVA = "0x26A47B0", Offset = "0x26A2DB0", VA = "0x1826A47B0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600191A")]
	[Address(RVA = "0x26A4BF0", Offset = "0x26A31F0", VA = "0x1826A4BF0", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x600191B")]
	[Address(RVA = "0x26A4A20", Offset = "0x26A3020", VA = "0x1826A4A20", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600191C")]
	[Address(RVA = "0x26A5B50", Offset = "0x26A4150", VA = "0x1826A5B50", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x600191D")]
	[Address(RVA = "0x26A5CE0", Offset = "0x26A42E0", VA = "0x1826A5CE0", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x600191E")]
	[Address(RVA = "0x26A5D30", Offset = "0x26A4330", VA = "0x1826A5D30", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x600191F")]
	[Address(RVA = "0x26A4C90", Offset = "0x26A3290", VA = "0x1826A4C90", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6001920")]
	[Address(RVA = "0x26A5BA0", Offset = "0x26A41A0", VA = "0x1826A5BA0", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6001921")]
	[Address(RVA = "0x26A5C90", Offset = "0x26A4290", VA = "0x1826A5C90", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6001922")]
	[Address(RVA = "0x26A5C40", Offset = "0x26A4240", VA = "0x1826A5C40", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6001923")]
	[Address(RVA = "0x26A5BF0", Offset = "0x26A41F0", VA = "0x1826A5BF0", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x26A4CF0", Offset = "0x26A32F0", VA = "0x1826A4CF0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001925")]
	[Address(RVA = "0x26A03D0", Offset = "0x269E9D0", VA = "0x1826A03D0", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001926")]
	[Address(RVA = "0x26A1340", Offset = "0x269F940", VA = "0x1826A1340", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x26A16F0", Offset = "0x269FCF0", VA = "0x1826A16F0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x26A01F0", Offset = "0x269E7F0", VA = "0x1826A01F0", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001929")]
	[Address(RVA = "0x26A1520", Offset = "0x269FB20", VA = "0x1826A1520", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x26A0010", Offset = "0x269E610", VA = "0x1826A0010", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x26A05B0", Offset = "0x269EBB0", VA = "0x1826A05B0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192C")]
	[Address(RVA = "0x26A18E0", Offset = "0x269FEE0", VA = "0x1826A18E0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192D")]
	[Address(RVA = "0x269FD60", Offset = "0x269E360", VA = "0x18269FD60")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192E")]
	[Address(RVA = "0x269FEA0", Offset = "0x269E4A0", VA = "0x18269FEA0")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x600192F")]
	[Address(RVA = "0x269FA00", Offset = "0x269E000", VA = "0x18269FA00", Slot = "62")]
	protected override object ChangeListType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001930")]
	[Address(RVA = "0x26A3240", Offset = "0x26A1840", VA = "0x1826A3240")]
	private bool SupportsType(Type clrType)
	{
		return default(bool);
	}
}
