// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAppInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000211")]
public class XmlSchemaAppInfo : XmlSchemaObject
{
	[Token(Token = "0x4000B15")]
	[FieldOffset(Offset = "0x38")]
	private string source;

	[Token(Token = "0x4000B16")]
	[FieldOffset(Offset = "0x40")]
	private XmlNode[] markup;

	[Token(Token = "0x170005A7")]
	[XmlAttribute("source", DataType = "anyURI")]
	public string Source
	{
		[Token(Token = "0x6001541")]
		[Address(RVA = "0x471EBC0", Offset = "0x471EBC0", VA = "0x471EBC0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A8")]
	[XmlText]
	[XmlAnyElement]
	public XmlNode[] Markup
	{
		[Token(Token = "0x6001542")]
		[Address(RVA = "0x471EBD0", Offset = "0x471EBD0", VA = "0x471EBD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001543")]
		[Address(RVA = "0x471EBE0", Offset = "0x471EBE0", VA = "0x471EBE0")]
		set
		{
		}
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x471EBF0", Offset = "0x471EBF0", VA = "0x471EBF0")]
	public XmlSchemaAppInfo()
	{
	}
}
