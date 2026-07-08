using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000195")]
internal class Datatype_float : Datatype_anySimpleType
{
	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000467")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010C1")]
		[Address(RVA = "0x4520CB0", Offset = "0x4520CB0", VA = "0x4520CB0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000468")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010C2")]
		[Address(RVA = "0x4520D20", Offset = "0x4520D20", VA = "0x4520D20", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000469")]
	public override Type ValueType
	{
		[Token(Token = "0x60010C3")]
		[Address(RVA = "0x4520D30", Offset = "0x4520D30", VA = "0x4520D30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046A")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010C4")]
		[Address(RVA = "0x4520DA0", Offset = "0x4520DA0", VA = "0x4520DA0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046B")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010C5")]
		[Address(RVA = "0x4520E10", Offset = "0x4520E10", VA = "0x4520E10", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700046C")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010C6")]
		[Address(RVA = "0x4520E20", Offset = "0x4520E20", VA = "0x4520E20", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x4520CA0", Offset = "0x4520CA0", VA = "0x4520CA0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4520E30", Offset = "0x4520E30", VA = "0x4520E30", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x4520E90", Offset = "0x4520E90", VA = "0x4520E90", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x4519400", Offset = "0x4519400", VA = "0x4519400")]
	public Datatype_float()
	{
	}
}
