// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlUnionConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000274")]
internal class XmlUnionConverter : XmlBaseConverter
{
	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0x28")]
	private XmlValueConverter[] converters;

	[Token(Token = "0x4000CCB")]
	[FieldOffset(Offset = "0x30")]
	private bool hasAtomicMember;

	[Token(Token = "0x4000CCC")]
	[FieldOffset(Offset = "0x31")]
	private bool hasListMember;

	[Token(Token = "0x6001956")]
	[Address(RVA = "0x475CC70", Offset = "0x475CC70", VA = "0x475CC70")]
	protected XmlUnionConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x475CF00", Offset = "0x475CF00", VA = "0x475CF00")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x475CF50", Offset = "0x475CF50", VA = "0x475CF50", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
