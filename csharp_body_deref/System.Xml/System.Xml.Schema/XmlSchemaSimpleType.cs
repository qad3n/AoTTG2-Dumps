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
		[Address(RVA = "0x4732B50", Offset = "0x4732B50", VA = "0x4732B50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001768")]
		[Address(RVA = "0x4732B60", Offset = "0x4732B60", VA = "0x4732B60")]
		set
		{
		}
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x4732A50", Offset = "0x4732A50", VA = "0x4732A50")]
	public XmlSchemaSimpleType()
	{
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x4732B80", Offset = "0x4732B80", VA = "0x4732B80", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
