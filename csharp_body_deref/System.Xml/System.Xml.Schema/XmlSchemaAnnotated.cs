// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaAnnotated
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200020D")]
public class XmlSchemaAnnotated : XmlSchemaObject
{
	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x38")]
	private string id;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x40")]
	private XmlSchemaAnnotation annotation;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x48")]
	private XmlAttribute[] moreAttributes;

	[Token(Token = "0x17000596")]
	[XmlAttribute("id", DataType = "ID")]
	public string Id
	{
		[Token(Token = "0x6001518")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001519")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000597")]
	[XmlElement("annotation", typeof(XmlSchemaAnnotation))]
	public XmlSchemaAnnotation Annotation
	{
		[Token(Token = "0x600151A")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151B")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x17000598")]
	[XmlAnyAttribute]
	public XmlAttribute[] UnhandledAttributes
	{
		[Token(Token = "0x600151C")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151D")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x17000599")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x600151E")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151F")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x6001522")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XmlSchemaAnnotated()
	{
	}
}
