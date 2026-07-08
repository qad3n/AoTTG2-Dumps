using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001A9")]
internal class Datatype_base64Binary : Datatype_anySimpleType
{
	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000494")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x45230A0", Offset = "0x45230A0", VA = "0x45230A0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000495")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x4523110", Offset = "0x4523110", VA = "0x4523110", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000496")]
	public override Type ValueType
	{
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x4523120", Offset = "0x4523120", VA = "0x4523120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000497")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x4523190", Offset = "0x4523190", VA = "0x4523190", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000498")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001120")]
		[Address(RVA = "0x4523200", Offset = "0x4523200", VA = "0x4523200", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000499")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001121")]
		[Address(RVA = "0x4523210", Offset = "0x4523210", VA = "0x4523210", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x4523090", Offset = "0x4523090", VA = "0x4523090", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x4523220", Offset = "0x4523220", VA = "0x4523220", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x4523300", Offset = "0x4523300", VA = "0x4523300", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x45182C0", Offset = "0x45182C0", VA = "0x45182C0")]
	public Datatype_base64Binary()
	{
	}
}
