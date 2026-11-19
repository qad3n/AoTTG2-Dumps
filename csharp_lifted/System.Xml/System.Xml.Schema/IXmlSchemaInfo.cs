// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.IXmlSchemaInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
