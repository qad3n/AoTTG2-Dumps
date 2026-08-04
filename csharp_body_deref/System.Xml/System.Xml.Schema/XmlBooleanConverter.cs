// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlBooleanConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026D")]
internal class XmlBooleanConverter : XmlBaseConverter
{
	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x474DE50", Offset = "0x474DE50", VA = "0x474DE50")]
	protected XmlBooleanConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x474DEB0", Offset = "0x474DEB0", VA = "0x474DEB0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x474DF40", Offset = "0x474DF40", VA = "0x474DF40", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x474DFE0", Offset = "0x474DFE0", VA = "0x474DFE0", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x474E280", Offset = "0x474E280", VA = "0x474E280", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x474E2E0", Offset = "0x474E2E0", VA = "0x474E2E0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x474E560", Offset = "0x474E560", VA = "0x474E560", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x474E860", Offset = "0x474E860", VA = "0x474E860", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x474EB70", Offset = "0x474EB70", VA = "0x474EB70", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
