using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B7")]
internal class Datatype_NOTATION : Datatype_anySimpleType
{
	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004BB")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x45243C0", Offset = "0x45243C0", VA = "0x45243C0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BC")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x4524430", Offset = "0x4524430", VA = "0x4524430", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004BD")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x4524440", Offset = "0x4524440", VA = "0x4524440", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004BE")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x4524450", Offset = "0x4524450", VA = "0x4524450", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x170004BF")]
	public override Type ValueType
	{
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x4524460", Offset = "0x4524460", VA = "0x4524460", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x45244D0", Offset = "0x45244D0", VA = "0x45244D0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C1")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x4524540", Offset = "0x4524540", VA = "0x4524540", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x45243B0", Offset = "0x45243B0", VA = "0x45243B0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x4524550", Offset = "0x4524550", VA = "0x4524550", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x45247C0", Offset = "0x45247C0", VA = "0x45247C0", Slot = "22")]
	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller)
	{
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x451A050", Offset = "0x451A050", VA = "0x451A050")]
	public Datatype_NOTATION()
	{
	}
}
