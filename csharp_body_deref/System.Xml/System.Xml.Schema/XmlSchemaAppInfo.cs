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
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
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
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001543")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XmlSchemaAppInfo()
	{
	}
}
