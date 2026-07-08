using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001DB")]
public interface IXmlSchemaInfo
{
	[Token(Token = "0x170004FA")]
	XmlSchemaValidity Validity
	{
		[Token(Token = "0x6001257")]
		get;
	}

	[Token(Token = "0x170004FB")]
	bool IsDefault
	{
		[Token(Token = "0x6001258")]
		get;
	}

	[Token(Token = "0x170004FC")]
	bool IsNil
	{
		[Token(Token = "0x6001259")]
		get;
	}

	[Token(Token = "0x170004FD")]
	XmlSchemaSimpleType MemberType
	{
		[Token(Token = "0x600125A")]
		get;
	}

	[Token(Token = "0x170004FE")]
	XmlSchemaType SchemaType
	{
		[Token(Token = "0x600125B")]
		get;
	}

	[Token(Token = "0x170004FF")]
	XmlSchemaElement SchemaElement
	{
		[Token(Token = "0x600125C")]
		get;
	}

	[Token(Token = "0x17000500")]
	XmlSchemaAttribute SchemaAttribute
	{
		[Token(Token = "0x600125D")]
		get;
	}
}
