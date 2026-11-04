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
	[Address(RVA = "0x2698760", Offset = "0x2696D60", VA = "0x182698760")]
	protected XmlMiscConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x2698040", Offset = "0x2696640", VA = "0x182698040")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001900")]
	[Address(RVA = "0x26980D0", Offset = "0x26966D0", VA = "0x1826980D0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x26969E0", Offset = "0x2694FE0", VA = "0x1826969E0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x2697030", Offset = "0x2695630", VA = "0x182697030", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x2696740", Offset = "0x2694D40", VA = "0x182696740")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x2696880", Offset = "0x2694E80", VA = "0x182696880")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
