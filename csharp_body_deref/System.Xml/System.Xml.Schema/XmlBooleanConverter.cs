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
	[Address(RVA = "0x2692160", Offset = "0x2690760", VA = "0x182692160")]
	protected XmlBooleanConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x2691A10", Offset = "0x2690010", VA = "0x182691A10")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x2691D90", Offset = "0x2690390", VA = "0x182691D90", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x2691AA0", Offset = "0x26900A0", VA = "0x182691AA0", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x2692110", Offset = "0x2690710", VA = "0x182692110", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x2691E30", Offset = "0x2690430", VA = "0x182691E30", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x2690D00", Offset = "0x268F300", VA = "0x182690D00", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x26916C0", Offset = "0x268FCC0", VA = "0x1826916C0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x2691020", Offset = "0x268F620", VA = "0x182691020", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
