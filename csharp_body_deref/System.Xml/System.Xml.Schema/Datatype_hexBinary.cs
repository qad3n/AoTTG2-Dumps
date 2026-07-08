using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001A8")]
internal class Datatype_hexBinary : Datatype_anySimpleType
{
	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x1700048E")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x4522B90", Offset = "0x4522B90", VA = "0x4522B90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048F")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x4522C00", Offset = "0x4522C00", VA = "0x4522C00", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000490")]
	public override Type ValueType
	{
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x4522C10", Offset = "0x4522C10", VA = "0x4522C10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000491")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x4522C80", Offset = "0x4522C80", VA = "0x4522C80", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000492")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x4522CF0", Offset = "0x4522CF0", VA = "0x4522CF0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000493")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001116")]
		[Address(RVA = "0x4522D00", Offset = "0x4522D00", VA = "0x4522D00", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x4522B80", Offset = "0x4522B80", VA = "0x4522B80", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x4522D10", Offset = "0x4522D10", VA = "0x4522D10", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x4522DF0", Offset = "0x4522DF0", VA = "0x4522DF0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x45195E0", Offset = "0x45195E0", VA = "0x45195E0")]
	public Datatype_hexBinary()
	{
	}
}
