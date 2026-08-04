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
	[Address(RVA = "0x474BE20", Offset = "0x474BE20", VA = "0x474BE20")]
	protected XmlDateTimeConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x474BE80", Offset = "0x474BE80", VA = "0x474BE80")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x474BF10", Offset = "0x474BF10", VA = "0x474BF10", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x474BF60", Offset = "0x474BF60", VA = "0x474BF60", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x474C140", Offset = "0x474C140", VA = "0x474C140", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x474C490", Offset = "0x474C490", VA = "0x474C490", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x474C4C0", Offset = "0x474C4C0", VA = "0x474C4C0", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x474C6A0", Offset = "0x474C6A0", VA = "0x474C6A0", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x474CA00", Offset = "0x474CA00", VA = "0x474CA00", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x474CB90", Offset = "0x474CB90", VA = "0x474CB90", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x474CD20", Offset = "0x474CD20", VA = "0x474CD20", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x474D040", Offset = "0x474D040", VA = "0x474D040", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x474D3B0", Offset = "0x474D3B0", VA = "0x474D3B0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x474D730", Offset = "0x474D730", VA = "0x474D730", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
