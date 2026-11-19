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
	[Address(RVA = "0x60544C0", Offset = "0x60534C0", VA = "0x60544C0")]
	protected XmlBooleanConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x6054520", Offset = "0x6053520", VA = "0x6054520")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x60545B0", Offset = "0x60535B0", VA = "0x60545B0", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x6054650", Offset = "0x6053650", VA = "0x6054650", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x60548F0", Offset = "0x60538F0", VA = "0x60548F0", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x6054950", Offset = "0x6053950", VA = "0x6054950", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x6054BD0", Offset = "0x6053BD0", VA = "0x6054BD0", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x6054ED0", Offset = "0x6053ED0", VA = "0x6054ED0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x60551E0", Offset = "0x60541E0", VA = "0x60551E0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
