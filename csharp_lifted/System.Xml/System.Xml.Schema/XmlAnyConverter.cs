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
	[Address(RVA = "0x605E4F0", Offset = "0x605D4F0", VA = "0x605E4F0")]
	protected XmlAnyConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x605E540", Offset = "0x605D540", VA = "0x605E540", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x605E800", Offset = "0x605D800", VA = "0x605E800", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x605E9A0", Offset = "0x605D9A0", VA = "0x605E9A0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x605EB60", Offset = "0x605DB60", VA = "0x605EB60", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x605ED20", Offset = "0x605DD20", VA = "0x605ED20", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x605EEC0", Offset = "0x605DEC0", VA = "0x605EEC0", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x605F060", Offset = "0x605E060", VA = "0x605F060", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x605F200", Offset = "0x605E200", VA = "0x605F200", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x605F3B0", Offset = "0x605E3B0", VA = "0x605F3B0", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x605F6C0", Offset = "0x605E6C0", VA = "0x605F6C0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x605F890", Offset = "0x605E890", VA = "0x605F890", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x605FA90", Offset = "0x605EA90", VA = "0x605FA90", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x605FC60", Offset = "0x605EC60", VA = "0x605FC60", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x605FE20", Offset = "0x605EE20", VA = "0x605FE20", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x605FFE0", Offset = "0x605EFE0", VA = "0x605FFE0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x60601C0", Offset = "0x605F1C0", VA = "0x60601C0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x605E6E0", Offset = "0x605D6E0", VA = "0x605E6E0")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x605F570", Offset = "0x605E570", VA = "0x605F570")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x60615B0", Offset = "0x60605B0", VA = "0x60615B0")]
	private XPathNavigator ToNavigator(XPathNavigator nav)
	{
		return null;
	}
}
