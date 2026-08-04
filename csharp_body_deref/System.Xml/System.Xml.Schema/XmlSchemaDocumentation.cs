// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaDocumentation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000224")]
public class XmlSchemaDocumentation : XmlSchemaObject
{
	[Token(Token = "0x4000B65")]
	[FieldOffset(Offset = "0x38")]
	private string source;

	[Token(Token = "0x4000B66")]
	[FieldOffset(Offset = "0x40")]
	private string language;

	[Token(Token = "0x4000B67")]
	[FieldOffset(Offset = "0x48")]
	private XmlNode[] markup;

	[Token(Token = "0x4000B68")]
	[FieldOffset(Offset = "0x0")]
	private static XmlSchemaSimpleType languageType;

	[Token(Token = "0x170005FA")]
	[XmlAttribute("source", DataType = "anyURI")]
	public string Source
	{
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x4723590", Offset = "0x4723590", VA = "0x4723590")]
		set
		{
		}
	}

	[Token(Token = "0x170005FB")]
	[XmlAttribute("xml:lang")]
	public string Language
	{
		[Token(Token = "0x60015FE")]
		[Address(RVA = "0x47235A0", Offset = "0x47235A0", VA = "0x47235A0")]
		set
		{
		}
	}

	[Token(Token = "0x170005FC")]
	[XmlAnyElement]
	[XmlText]
	public XmlNode[] Markup
	{
		[Token(Token = "0x60015FF")]
		[Address(RVA = "0x47236A0", Offset = "0x47236A0", VA = "0x47236A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x47236B0", Offset = "0x47236B0", VA = "0x47236B0")]
	public XmlSchemaDocumentation()
	{
	}
}
