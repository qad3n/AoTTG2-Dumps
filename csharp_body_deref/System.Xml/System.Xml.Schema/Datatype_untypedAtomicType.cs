using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000192")]
internal class Datatype_untypedAtomicType : Datatype_anyAtomicType
{
	[Token(Token = "0x1700045A")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010AA")]
		[Address(RVA = "0x4520710", Offset = "0x4520710", VA = "0x4520710", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700045B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010AB")]
		[Address(RVA = "0x4520720", Offset = "0x4520720", VA = "0x4520720", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x45206A0", Offset = "0x45206A0", VA = "0x45206A0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x451B1C0", Offset = "0x451B1C0", VA = "0x451B1C0")]
	public Datatype_untypedAtomicType()
	{
	}
}
