using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026A")]
internal class XmlNumeric10Converter : XmlBaseConverter
{
	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x4409300", Offset = "0x4409300", VA = "0x4409300")]
	protected XmlNumeric10Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x4409360", Offset = "0x4409360", VA = "0x4409360")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x44093F0", Offset = "0x44093F0", VA = "0x44093F0", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x44094A0", Offset = "0x44094A0", VA = "0x44094A0", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x4409C10", Offset = "0x4409C10", VA = "0x4409C10", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x4409C80", Offset = "0x4409C80", VA = "0x4409C80", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x4409D70", Offset = "0x4409D70", VA = "0x4409D70", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x440A110", Offset = "0x440A110", VA = "0x440A110", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x440A120", Offset = "0x440A120", VA = "0x440A120", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x440A210", Offset = "0x440A210", VA = "0x440A210", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x440A590", Offset = "0x440A590", VA = "0x440A590", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x440A650", Offset = "0x440A650", VA = "0x440A650", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x440A6B0", Offset = "0x440A6B0", VA = "0x440A6B0", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x440A720", Offset = "0x440A720", VA = "0x440A720", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x440AAC0", Offset = "0x440AAC0", VA = "0x440AAC0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x440B260", Offset = "0x440B260", VA = "0x440B260", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x440B630", Offset = "0x440B630", VA = "0x440B630", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x440BA00", Offset = "0x440BA00", VA = "0x440BA00", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x440BDC0", Offset = "0x440BDC0", VA = "0x440BDC0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x4409850", Offset = "0x4409850", VA = "0x4409850")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x440AEA0", Offset = "0x440AEA0", VA = "0x440AEA0")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
