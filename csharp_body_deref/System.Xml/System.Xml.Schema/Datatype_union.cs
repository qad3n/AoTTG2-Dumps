using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200018F")]
internal class Datatype_union : Datatype_anySimpleType
{
	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x38")]
	private XmlSchemaSimpleType[] types;

	[Token(Token = "0x1700044B")]
	public override Type ValueType
	{
		[Token(Token = "0x600108E")]
		[Address(RVA = "0x451F900", Offset = "0x451F900", VA = "0x451F900", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044C")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x451F970", Offset = "0x451F970", VA = "0x451F970", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700044D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x451F980", Offset = "0x451F980", VA = "0x451F980", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044E")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001091")]
		[Address(RVA = "0x451F9F0", Offset = "0x451F9F0", VA = "0x451F9F0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044F")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001092")]
		[Address(RVA = "0x451FA60", Offset = "0x451FA60", VA = "0x451FA60", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x17000450")]
	internal XmlSchemaSimpleType[] BaseMemberTypes
	{
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x451FA70", Offset = "0x451FA70", VA = "0x451FA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x451F800", Offset = "0x451F800", VA = "0x451F800", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x451D1C0", Offset = "0x451D1C0", VA = "0x451D1C0")]
	internal Datatype_union(XmlSchemaSimpleType[] types)
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x451F810", Offset = "0x451F810", VA = "0x451F810", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x451CFB0", Offset = "0x451CFB0", VA = "0x451CFB0")]
	internal bool HasAtomicMembers()
	{
		return default(bool);
	}

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x451D4F0", Offset = "0x451D4F0", VA = "0x451D4F0")]
	internal bool IsUnionBaseOf(DatatypeImplementation derivedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001096")]
	[Address(RVA = "0x451FA80", Offset = "0x451FA80", VA = "0x451FA80", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x451FCB0", Offset = "0x451FCB0", VA = "0x451FCB0", Slot = "17")]
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}
}
