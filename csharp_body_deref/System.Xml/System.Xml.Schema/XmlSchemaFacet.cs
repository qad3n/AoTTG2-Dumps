using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000229")]
public abstract class XmlSchemaFacet : XmlSchemaAnnotated
{
	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x50")]
	private string value;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x58")]
	private bool isFixed;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x5C")]
	private FacetType facetType;

	[Token(Token = "0x17000622")]
	[XmlAttribute("value")]
	public string Value
	{
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x43E73B0", Offset = "0x43E73B0", VA = "0x43E73B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001659")]
		[Address(RVA = "0x43E73C0", Offset = "0x43E73C0", VA = "0x43E73C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000623")]
	[XmlAttribute("fixed")]
	[DefaultValue(false)]
	public virtual bool IsFixed
	{
		[Token(Token = "0x600165A")]
		[Address(RVA = "0x43E73D0", Offset = "0x43E73D0", VA = "0x43E73D0", Slot = "14")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600165B")]
		[Address(RVA = "0x43E73E0", Offset = "0x43E73E0", VA = "0x43E73E0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000624")]
	internal FacetType FacetType
	{
		[Token(Token = "0x600165C")]
		[Address(RVA = "0x43E7480", Offset = "0x43E7480", VA = "0x43E7480")]
		get
		{
			return default(FacetType);
		}
		[Token(Token = "0x600165D")]
		[Address(RVA = "0x43E7490", Offset = "0x43E7490", VA = "0x43E7490")]
		set
		{
		}
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x43E74A0", Offset = "0x43E74A0", VA = "0x43E74A0")]
	protected XmlSchemaFacet()
	{
	}
}
