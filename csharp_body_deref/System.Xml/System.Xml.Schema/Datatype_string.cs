using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000193")]
internal class Datatype_string : Datatype_anySimpleType
{
	[Token(Token = "0x1700045C")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010AE")]
		[Address(RVA = "0x4520740", Offset = "0x4520740", VA = "0x4520740", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700045D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x4520750", Offset = "0x4520750", VA = "0x4520750", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045E")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010B0")]
		[Address(RVA = "0x45207C0", Offset = "0x45207C0", VA = "0x45207C0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700045F")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60010B1")]
		[Address(RVA = "0x45207D0", Offset = "0x45207D0", VA = "0x45207D0", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000460")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010B2")]
		[Address(RVA = "0x45207E0", Offset = "0x45207E0", VA = "0x45207E0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x4520730", Offset = "0x4520730", VA = "0x4520730", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x45207F0", Offset = "0x45207F0", VA = "0x45207F0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x451A3A0", Offset = "0x451A3A0", VA = "0x451A3A0")]
	public Datatype_string()
	{
	}
}
