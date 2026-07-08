using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000191")]
internal class Datatype_anyAtomicType : Datatype_anySimpleType
{
	[Token(Token = "0x17000458")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x4520680", Offset = "0x4520680", VA = "0x4520680", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000459")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010A7")]
		[Address(RVA = "0x4520690", Offset = "0x4520690", VA = "0x4520690", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x4520610", Offset = "0x4520610", VA = "0x4520610", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x451AFE0", Offset = "0x451AFE0", VA = "0x451AFE0")]
	public Datatype_anyAtomicType()
	{
	}
}
