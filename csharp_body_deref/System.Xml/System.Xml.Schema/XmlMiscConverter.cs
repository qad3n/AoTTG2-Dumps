// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlMiscConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026E")]
internal class XmlMiscConverter : XmlBaseConverter
{
	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x474F0F0", Offset = "0x474F0F0", VA = "0x474F0F0")]
	protected XmlMiscConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x474F150", Offset = "0x474F150", VA = "0x474F150")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001900")]
	[Address(RVA = "0x474F1E0", Offset = "0x474F1E0", VA = "0x474F1E0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x474F820", Offset = "0x474F820", VA = "0x474F820", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x474FE40", Offset = "0x474FE40", VA = "0x474FE40", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x474F700", Offset = "0x474F700", VA = "0x474F700")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x474FCF0", Offset = "0x474FCF0", VA = "0x474FCF0")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
