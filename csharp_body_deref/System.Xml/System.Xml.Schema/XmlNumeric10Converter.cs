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
	[Address(RVA = "0x604D0C0", Offset = "0x604C0C0", VA = "0x604D0C0")]
	protected XmlNumeric10Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x604D120", Offset = "0x604C120", VA = "0x604D120")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x604D1B0", Offset = "0x604C1B0", VA = "0x604D1B0", Slot = "22")]
	public override decimal ToDecimal(string value)
	{
		return 0m;
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x604D270", Offset = "0x604C270", VA = "0x604D270", Slot = "23")]
	public override decimal ToDecimal(object value)
	{
		return 0m;
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x604D9D0", Offset = "0x604C9D0", VA = "0x604D9D0", Slot = "11")]
	public override int ToInt32(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x604DA40", Offset = "0x604CA40", VA = "0x604DA40", Slot = "14")]
	public override int ToInt32(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x604DB40", Offset = "0x604CB40", VA = "0x604DB40", Slot = "15")]
	public override int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x604DEE0", Offset = "0x604CEE0", VA = "0x604DEE0", Slot = "17")]
	public override long ToInt64(int value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x604DEF0", Offset = "0x604CEF0", VA = "0x604DEF0", Slot = "20")]
	public override long ToInt64(string value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x604DFF0", Offset = "0x604CFF0", VA = "0x604DFF0", Slot = "21")]
	public override long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x604E370", Offset = "0x604D370", VA = "0x604E370", Slot = "46")]
	public override string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x604E430", Offset = "0x604D430", VA = "0x604E430", Slot = "44")]
	public override string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x604E490", Offset = "0x604D490", VA = "0x604E490", Slot = "45")]
	public override string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x604E500", Offset = "0x604D500", VA = "0x604E500", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x604E8B0", Offset = "0x604D8B0", VA = "0x604E8B0", Slot = "56")]
	public override object ChangeType(decimal value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x604F050", Offset = "0x604E050", VA = "0x604F050", Slot = "54")]
	public override object ChangeType(int value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x604F420", Offset = "0x604E420", VA = "0x604F420", Slot = "55")]
	public override object ChangeType(long value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x604F7F0", Offset = "0x604E7F0", VA = "0x604F7F0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x604FBB0", Offset = "0x604EBB0", VA = "0x604FBB0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x604D620", Offset = "0x604C620", VA = "0x604D620")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x604EC90", Offset = "0x604DC90", VA = "0x604EC90")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
