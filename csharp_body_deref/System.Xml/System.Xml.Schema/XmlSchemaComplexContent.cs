using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021A")]
public class XmlSchemaComplexContent : XmlSchemaContentModel
{
	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaContent content;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x58")]
	private bool isMixed;

	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x59")]
	private bool hasMixedAttribute;

	[Token(Token = "0x170005D2")]
	[XmlAttribute("mixed")]
	public bool IsMixed
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x43E2FD0", Offset = "0x43E2FD0", VA = "0x43E2FD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x43E2FE0", Offset = "0x43E2FE0", VA = "0x43E2FE0")]
		set
		{
		}
	}

	[Token(Token = "0x170005D3")]
	[XmlElement("restriction", typeof(XmlSchemaComplexContentRestriction))]
	[XmlElement("extension", typeof(XmlSchemaComplexContentExtension))]
	public override XmlSchemaContent Content
	{
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x43E2FF0", Offset = "0x43E2FF0", VA = "0x43E2FF0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600159E")]
		[Address(RVA = "0x43E3000", Offset = "0x43E3000", VA = "0x43E3000", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170005D4")]
	[XmlIgnore]
	internal bool HasMixedAttribute
	{
		[Token(Token = "0x600159F")]
		[Address(RVA = "0x43E3010", Offset = "0x43E3010", VA = "0x43E3010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x43E3020", Offset = "0x43E3020", VA = "0x43E3020")]
	public XmlSchemaComplexContent()
	{
	}
}
