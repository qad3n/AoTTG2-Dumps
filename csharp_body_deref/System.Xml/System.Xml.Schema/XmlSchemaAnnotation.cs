// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAnnotation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020E")]
public class XmlSchemaAnnotation : XmlSchemaObject
{
	[Token(Token = "0x4000B0C")]
	[FieldOffset(Offset = "0x38")]
	private string id;

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x40")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x48")]
	private XmlAttribute[] moreAttributes;

	[Token(Token = "0x1700059A")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x6001523")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001524")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700059B")]
	[XmlElement("documentation", typeof(XmlSchemaDocumentation))]
	[XmlElement("appinfo", typeof(XmlSchemaAppInfo))]
	public XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x6001525")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700059C")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x6001526")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001527")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001529")]
	[Address(RVA = "0x2665590", Offset = "0x2663B90", VA = "0x182665590")]
	public XmlSchemaAnnotation()
	{
	}
}
