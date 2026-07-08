using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200014A")]
internal class XmlTypeMapMemberAttribute : XmlTypeMapMember
{
	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0x58")]
	private string _attributeName;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x60")]
	private string _namespace;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaForm _form;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x70")]
	private XmlTypeMapping _mappedType;

	[Token(Token = "0x170003B4")]
	public string AttributeName
	{
		[Token(Token = "0x6000EB6")]
		[Address(RVA = "0x44FB650", Offset = "0x44FB650", VA = "0x44FB650")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EB7")]
		[Address(RVA = "0x44FB660", Offset = "0x44FB660", VA = "0x44FB660")]
		set
		{
		}
	}

	[Token(Token = "0x170003B5")]
	public string Namespace
	{
		[Token(Token = "0x6000EB8")]
		[Address(RVA = "0x44FB670", Offset = "0x44FB670", VA = "0x44FB670")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EB9")]
		[Address(RVA = "0x44FB680", Offset = "0x44FB680", VA = "0x44FB680")]
		set
		{
		}
	}

	[Token(Token = "0x170003B6")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000EBA")]
		[Address(RVA = "0x44FB690", Offset = "0x44FB690", VA = "0x44FB690")]
		set
		{
		}
	}

	[Token(Token = "0x170003B7")]
	public XmlTypeMapping MappedType
	{
		[Token(Token = "0x6000EBB")]
		[Address(RVA = "0x44FB6A0", Offset = "0x44FB6A0", VA = "0x44FB6A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000EBC")]
		[Address(RVA = "0x44FB6B0", Offset = "0x44FB6B0", VA = "0x44FB6B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x44FB5A0", Offset = "0x44FB5A0", VA = "0x44FB5A0")]
	public XmlTypeMapMemberAttribute()
	{
	}
}
