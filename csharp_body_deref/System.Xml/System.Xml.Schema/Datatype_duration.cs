using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000198")]
internal class Datatype_duration : Datatype_anySimpleType
{
	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000479")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x4521A20", Offset = "0x4521A20", VA = "0x4521A20", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x4521A90", Offset = "0x4521A90", VA = "0x4521A90", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700047B")]
	public override Type ValueType
	{
		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x4521AA0", Offset = "0x4521AA0", VA = "0x4521AA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047C")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x4521B10", Offset = "0x4521B10", VA = "0x4521B10", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047D")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x4521B80", Offset = "0x4521B80", VA = "0x4521B80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700047E")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x4521B90", Offset = "0x4521B90", VA = "0x4521B90", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x4521A10", Offset = "0x4521A10", VA = "0x4521A10", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x4521BA0", Offset = "0x4521BA0", VA = "0x4521BA0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x4521C40", Offset = "0x4521C40", VA = "0x4521C40", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x4518EB0", Offset = "0x4518EB0", VA = "0x4518EB0")]
	public Datatype_duration()
	{
	}
}
