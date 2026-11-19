// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlDateTimeConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026C")]
internal class XmlDateTimeConverter : XmlBaseConverter
{
	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x6052470", Offset = "0x6051470", VA = "0x6052470")]
	protected XmlDateTimeConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x60524D0", Offset = "0x60514D0", VA = "0x60524D0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x6052560", Offset = "0x6051560", VA = "0x6052560", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x60525B0", Offset = "0x60515B0", VA = "0x60525B0", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x6052790", Offset = "0x6051790", VA = "0x6052790", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x6052AE0", Offset = "0x6051AE0", VA = "0x6052AE0", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x6052B10", Offset = "0x6051B10", VA = "0x6052B10", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x6052CF0", Offset = "0x6051CF0", VA = "0x6052CF0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x6053050", Offset = "0x6052050", VA = "0x6053050", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x60531E0", Offset = "0x60521E0", VA = "0x60531E0", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x6053370", Offset = "0x6052370", VA = "0x6053370", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x6053690", Offset = "0x6052690", VA = "0x6053690", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x6053A00", Offset = "0x6052A00", VA = "0x6053A00", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x6053D80", Offset = "0x6052D80", VA = "0x6053D80", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
