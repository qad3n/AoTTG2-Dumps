using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000196")]
internal class Datatype_double : Datatype_anySimpleType
{
	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x1700046D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010CC")]
		[Address(RVA = "0x45210B0", Offset = "0x45210B0", VA = "0x45210B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010CD")]
		[Address(RVA = "0x4521120", Offset = "0x4521120", VA = "0x4521120", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700046F")]
	public override Type ValueType
	{
		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x4521130", Offset = "0x4521130", VA = "0x4521130", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x45211A0", Offset = "0x45211A0", VA = "0x45211A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000471")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x4521210", Offset = "0x4521210", VA = "0x4521210", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000472")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x4521220", Offset = "0x4521220", VA = "0x4521220", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x45210A0", Offset = "0x45210A0", VA = "0x45210A0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x4521230", Offset = "0x4521230", VA = "0x4521230", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x4521290", Offset = "0x4521290", VA = "0x4521290", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x4518CD0", Offset = "0x4518CD0", VA = "0x4518CD0")]
	public Datatype_double()
	{
	}
}
