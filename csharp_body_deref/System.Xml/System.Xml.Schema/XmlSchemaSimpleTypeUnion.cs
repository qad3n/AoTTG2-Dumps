using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025A")]
public class XmlSchemaSimpleTypeUnion : XmlSchemaSimpleTypeContent
{
	[Token(Token = "0x4000C08")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObjectCollection baseTypes;

	[Token(Token = "0x4000C09")]
	[FieldOffset(Offset = "0x58")]
	private XmlQualifiedName[] memberTypes;

	[Token(Token = "0x4000C0A")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaSimpleType[] baseMemberTypes;

	[Token(Token = "0x17000689")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaObjectCollection BaseTypes
	{
		[Token(Token = "0x600177A")]
		[Address(RVA = "0x43F5930", Offset = "0x43F5930", VA = "0x43F5930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068A")]
	[XmlAttribute("memberTypes")]
	public XmlQualifiedName[] MemberTypes
	{
		[Token(Token = "0x600177B")]
		[Address(RVA = "0x43F5940", Offset = "0x43F5940", VA = "0x43F5940")]
		get
		{
			return null;
		}
		[Token(Token = "0x600177C")]
		[Address(RVA = "0x43F5950", Offset = "0x43F5950", VA = "0x43F5950")]
		set
		{
		}
	}

	[Token(Token = "0x1700068B")]
	[XmlIgnore]
	public XmlSchemaSimpleType[] BaseMemberTypes
	{
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x43F5960", Offset = "0x43F5960", VA = "0x43F5960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x43F5970", Offset = "0x43F5970", VA = "0x43F5970")]
	internal void SetBaseMemberTypes(XmlSchemaSimpleType[] baseMemberTypes)
	{
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x43F5980", Offset = "0x43F5980", VA = "0x43F5980", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x43F5B20", Offset = "0x43F5B20", VA = "0x43F5B20")]
	public XmlSchemaSimpleTypeUnion()
	{
	}
}
