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
	[Address(RVA = "0x6055760", Offset = "0x6054760", VA = "0x6055760")]
	protected XmlMiscConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x60557C0", Offset = "0x60547C0", VA = "0x60557C0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001900")]
	[Address(RVA = "0x6055850", Offset = "0x6054850", VA = "0x6055850", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x6055EA0", Offset = "0x6054EA0", VA = "0x6055EA0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x60564C0", Offset = "0x60554C0", VA = "0x60564C0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x6055D80", Offset = "0x6054D80", VA = "0x6055D80")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x6056370", Offset = "0x6055370", VA = "0x6056370")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
