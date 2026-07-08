using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001AA")]
internal class Datatype_anyURI : Datatype_anySimpleType
{
	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x1700049A")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001127")]
		[Address(RVA = "0x45235B0", Offset = "0x45235B0", VA = "0x45235B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001128")]
		[Address(RVA = "0x4523620", Offset = "0x4523620", VA = "0x4523620", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700049C")]
	public override Type ValueType
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x4523630", Offset = "0x4523630", VA = "0x4523630", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049D")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x45236A0", Offset = "0x45236A0", VA = "0x45236A0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700049E")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600112B")]
		[Address(RVA = "0x45236B0", Offset = "0x45236B0", VA = "0x45236B0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049F")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x4523720", Offset = "0x4523720", VA = "0x4523720", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x170004A0")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x4523730", Offset = "0x4523730", VA = "0x4523730", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x45235A0", Offset = "0x45235A0", VA = "0x45235A0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x4523740", Offset = "0x4523740", VA = "0x4523740", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x4523810", Offset = "0x4523810", VA = "0x4523810", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4518200", Offset = "0x4518200", VA = "0x4518200")]
	public Datatype_anyURI()
	{
	}
}
