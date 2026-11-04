// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlNumeric10Converter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026A")]
internal class XmlNumeric10Converter : XmlBaseConverter
{
	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x269C970", Offset = "0x269AF70", VA = "0x18269C970")]
	protected XmlNumeric10Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x269B2E0", Offset = "0x26998E0", VA = "0x18269B2E0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x269B810", Offset = "0x2699E10", VA = "0x18269B810", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return 0m;
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x269B370", Offset = "0x2699970", VA = "0x18269B370", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x269B900", Offset = "0x2699F00", VA = "0x18269B900", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x269B950", Offset = "0x2699F50", VA = "0x18269B950", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x269BA70", Offset = "0x269A070", VA = "0x18269BA70", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x269C3B0", Offset = "0x269A9B0", VA = "0x18269C3B0", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x269BE90", Offset = "0x269A490", VA = "0x18269BE90", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x269BFB0", Offset = "0x269A5B0", VA = "0x18269BFB0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x269C890", Offset = "0x269AE90", VA = "0x18269C890", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x269C840", Offset = "0x269AE40", VA = "0x18269C840", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x269C3C0", Offset = "0x269A9C0", VA = "0x18269C3C0", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x269C410", Offset = "0x269AA10", VA = "0x18269C410", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x269AE50", Offset = "0x2699450", VA = "0x18269AE50", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x269AA30", Offset = "0x2699030", VA = "0x18269AA30", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x269A1A0", Offset = "0x26987A0", VA = "0x18269A1A0", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x269A5E0", Offset = "0x2698BE0", VA = "0x18269A5E0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x2699040", Offset = "0x2697640", VA = "0x182699040", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x26987C0", Offset = "0x2696DC0", VA = "0x1826987C0")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x2698BE0", Offset = "0x26971E0", VA = "0x182698BE0")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
