using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023A")]
public class XmlSchemaGroupRef : XmlSchemaParticle
{
	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x78")]
	private XmlQualifiedName refName;

	[Token(Token = "0x4000BA7")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaGroupBase particle;

	[Token(Token = "0x4000BA8")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaGroup refined;

	[Token(Token = "0x1700062D")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x6001680")]
		[Address(RVA = "0x43E77A0", Offset = "0x43E77A0", VA = "0x43E77A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x43E4F10", Offset = "0x43E4F10", VA = "0x43E4F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700062E")]
	[XmlIgnore]
	public XmlSchemaGroupBase Particle
	{
		[Token(Token = "0x6001682")]
		[Address(RVA = "0x43E77B0", Offset = "0x43E77B0", VA = "0x43E77B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700062F")]
	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		[Token(Token = "0x6001684")]
		[Address(RVA = "0x43E77D0", Offset = "0x43E77D0", VA = "0x43E77D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001685")]
		[Address(RVA = "0x43E77E0", Offset = "0x43E77E0", VA = "0x43E77E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x43E77C0", Offset = "0x43E77C0", VA = "0x43E77C0")]
	internal void SetParticle(XmlSchemaGroupBase value)
	{
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x43E7800", Offset = "0x43E7800", VA = "0x43E7800")]
	public XmlSchemaGroupRef()
	{
	}
}
