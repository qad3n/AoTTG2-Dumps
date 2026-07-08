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
		[Address(RVA = "0x43E07A0", Offset = "0x43E07A0", VA = "0x43E07A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001524")]
		[Address(RVA = "0x43E07B0", Offset = "0x43E07B0", VA = "0x43E07B0")]
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
		[Address(RVA = "0x43E07C0", Offset = "0x43E07C0", VA = "0x43E07C0")]
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
		[Address(RVA = "0x43E07D0", Offset = "0x43E07D0", VA = "0x43E07D0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001527")]
		[Address(RVA = "0x43E07E0", Offset = "0x43E07E0", VA = "0x43E07E0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x43E07F0", Offset = "0x43E07F0", VA = "0x43E07F0", Slot = "9")]
	internal override void SetUnhandledAttributes(XmlAttribute[] moreAttributes)
	{
	}

	[Token(Token = "0x6001529")]
	[Address(RVA = "0x43E0800", Offset = "0x43E0800", VA = "0x43E0800")]
	public XmlSchemaAnnotation()
	{
	}
}
