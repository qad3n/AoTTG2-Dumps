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
	[Address(RVA = "0x4757F60", Offset = "0x4757F60", VA = "0x4757F60")]
	protected XmlAnyConverter(XmlTypeCode typeCode)
	{
	}

	[Token(Token = "0x6001933")]
	[Address(RVA = "0x4757FB0", Offset = "0x4757FB0", VA = "0x4757FB0", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001934")]
	[Address(RVA = "0x4758270", Offset = "0x4758270", VA = "0x4758270", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001935")]
	[Address(RVA = "0x4758410", Offset = "0x4758410", VA = "0x4758410", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x47585D0", Offset = "0x47585D0", VA = "0x47585D0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x4758790", Offset = "0x4758790", VA = "0x4758790", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x4758930", Offset = "0x4758930", VA = "0x4758930", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001939")]
	[Address(RVA = "0x4758AD0", Offset = "0x4758AD0", VA = "0x4758AD0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x600193A")]
	[Address(RVA = "0x4758C70", Offset = "0x4758C70", VA = "0x4758C70", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x4758E20", Offset = "0x4758E20", VA = "0x4758E20", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x4759130", Offset = "0x4759130", VA = "0x4759130", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x4759300", Offset = "0x4759300", VA = "0x4759300", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x4759500", Offset = "0x4759500", VA = "0x4759500", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x47596D0", Offset = "0x47596D0", VA = "0x47596D0", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x4759890", Offset = "0x4759890", VA = "0x4759890", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x4759A50", Offset = "0x4759A50", VA = "0x4759A50", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x4759C30", Offset = "0x4759C30", VA = "0x4759C30", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x4758150", Offset = "0x4758150", VA = "0x4758150")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x4758FE0", Offset = "0x4758FE0", VA = "0x4758FE0")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001945")]
	[Address(RVA = "0x475B0C0", Offset = "0x475B0C0", VA = "0x475B0C0")]
	private XPathNavigator ToNavigator(XPathNavigator nav)
	{
		return null;
	}
}
