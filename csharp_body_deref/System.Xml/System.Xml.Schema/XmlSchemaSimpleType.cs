// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000256")]
public class XmlSchemaSimpleType : XmlSchemaType
{
	[Token(Token = "0x4000C01")]
	[FieldOffset(Offset = "0x98")]
	private XmlSchemaSimpleTypeContent content;

	[Token(Token = "0x17000682")]
	[XmlElement("restriction", typeof(XmlSchemaSimpleTypeRestriction))]
	[XmlElement("list", typeof(XmlSchemaSimpleTypeList))]
	[XmlElement("union", typeof(XmlSchemaSimpleTypeUnion))]
	public XmlSchemaSimpleTypeContent Content
	{
		[Token(Token = "0x6001767")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001768")]
		[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
		set
		{
		}
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x267F5B0", Offset = "0x267DBB0", VA = "0x18267F5B0")]
	public XmlSchemaSimpleType()
	{
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x267F4A0", Offset = "0x267DAA0", VA = "0x18267F4A0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
