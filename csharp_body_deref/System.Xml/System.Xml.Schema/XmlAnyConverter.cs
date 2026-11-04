// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlAnyConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000271")]
internal class XmlAnyConverter : XmlBaseConverter
{
	[Token(Token = "0x4000CC5")]
	[FieldOffset(Offset = "0x0")]
	public static readonly XmlValueConverter Item;

	[Token(Token = "0x4000CC6")]
	[FieldOffset(Offset = "0x8")]
	public static readonly XmlValueConverter AnyAtomic;

	[Token(Token = "0x6001932")]
	[Address(RVA = "0x2690770", Offset = "0x268ED70", VA = "0x182690770")]
	protected XmlAnyConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x268F610", Offset = "0x268DC10", VA = "0x18268F610", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x268FA20", Offset = "0x268E020", VA = "0x18268FA20", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x268F7E0", Offset = "0x268DDE0", VA = "0x18268F7E0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x268FBF0", Offset = "0x268E1F0", VA = "0x18268FBF0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x268FE30", Offset = "0x268E430", VA = "0x18268FE30", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x2690000", Offset = "0x268E600", VA = "0x182690000", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x26901C0", Offset = "0x268E7C0", VA = "0x1826901C0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x2690430", Offset = "0x268EA30", VA = "0x182690430", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x268D2D0", Offset = "0x268B8D0", VA = "0x18268D2D0", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x268D4C0", Offset = "0x268BAC0", VA = "0x18268D4C0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x268CCB0", Offset = "0x268B2B0", VA = "0x18268CCB0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x268F420", Offset = "0x268DA20", VA = "0x18268F420", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x268D6C0", Offset = "0x268BCC0", VA = "0x18268D6C0", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x268CEC0", Offset = "0x268B4C0", VA = "0x18268CEC0", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x268D0B0", Offset = "0x268B6B0", VA = "0x18268D0B0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x268D8B0", Offset = "0x268BEB0", VA = "0x18268D8B0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x268CA10", Offset = "0x268B010", VA = "0x18268CA10")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x268CB50", Offset = "0x268B150", VA = "0x18268CB50")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x2690390", Offset = "0x268E990", VA = "0x182690390")]
	private XPathNavigator ToNavigator(XPathNavigator nav)
	{
		return null;
	}
}
