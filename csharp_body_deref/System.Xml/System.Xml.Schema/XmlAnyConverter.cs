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
	[Address(RVA = "0x441A800", Offset = "0x441A800", VA = "0x441A800")]
	protected XmlAnyConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x441A850", Offset = "0x441A850", VA = "0x441A850", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x441AB10", Offset = "0x441AB10", VA = "0x441AB10", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x441ACB0", Offset = "0x441ACB0", VA = "0x441ACB0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x441AE70", Offset = "0x441AE70", VA = "0x441AE70", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x441B030", Offset = "0x441B030", VA = "0x441B030", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x441B1D0", Offset = "0x441B1D0", VA = "0x441B1D0", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x441B370", Offset = "0x441B370", VA = "0x441B370", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x441B510", Offset = "0x441B510", VA = "0x441B510", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x441B6C0", Offset = "0x441B6C0", VA = "0x441B6C0", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x441B9D0", Offset = "0x441B9D0", VA = "0x441B9D0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x441BBA0", Offset = "0x441BBA0", VA = "0x441BBA0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x441BDA0", Offset = "0x441BDA0", VA = "0x441BDA0", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x441BF70", Offset = "0x441BF70", VA = "0x441BF70", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x441C130", Offset = "0x441C130", VA = "0x441C130", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x441C2F0", Offset = "0x441C2F0", VA = "0x441C2F0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x441C4D0", Offset = "0x441C4D0", VA = "0x441C4D0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x441A9F0", Offset = "0x441A9F0", VA = "0x441A9F0")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x441B880", Offset = "0x441B880", VA = "0x441B880")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x441D960", Offset = "0x441D960", VA = "0x441D960")]
	private XPathNavigator ToNavigator(XPathNavigator nav)
	{
		return null;
	}
}
