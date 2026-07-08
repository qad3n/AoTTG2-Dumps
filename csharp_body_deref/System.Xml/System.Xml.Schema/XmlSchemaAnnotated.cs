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
		[Address(RVA = "0x43E06F0", Offset = "0x43E06F0", VA = "0x43E06F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001519")]
		[Address(RVA = "0x43E0700", Offset = "0x43E0700", VA = "0x43E0700")]
		set
		{
		}
	}

	[Token(Token = "0x17000597")]
	[XmlElement("annotation", typeof(XmlSchemaAnnotation))]
	public XmlSchemaAnnotation Annotation
	{
		[Token(Token = "0x600151A")]
		[Address(RVA = "0x43E0710", Offset = "0x43E0710", VA = "0x43E0710")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151B")]
		[Address(RVA = "0x43E0720", Offset = "0x43E0720", VA = "0x43E0720")]
		set
		{
		}
	}

	[Token(Token = "0x17000598")]
	[XmlAnyAttribute]
	public XmlAttribute[] UnhandledAttributes
	{
		[Token(Token = "0x600151C")]
		[Address(RVA = "0x43E0730", Offset = "0x43E0730", VA = "0x43E0730")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151D")]
		[Address(RVA = "0x43E0740", Offset = "0x43E0740", VA = "0x43E0740")]
		set
		{
		}
	}

	[Token(Token = "0x17000599")]
	[XmlIgnore]
	internal override string IdAttribute
	{
		[Token(Token = "0x600151E")]
		[Address(RVA = "0x43E0750", Offset = "0x43E0750", VA = "0x43E0750", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x600151F")]
		[Address(RVA = "0x43E0760", Offset = "0x43E0760", VA = "0x43E0760", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x43E0770", Offset = "0x43E0770", VA = "0x43E0770", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001521")]
	[Address(RVA = "0x43E0780", Offset = "0x43E0780", VA = "0x43E0780", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}

	[Token(Token = "0x6001522")]
	[Address(RVA = "0x43E0790", Offset = "0x43E0790", VA = "0x43E0790")]
	public XmlSchemaAnnotated()
	{
	}
}
