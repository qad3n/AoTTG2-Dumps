// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaDatatype
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000222")]
public abstract class XmlSchemaDatatype
{
	[Token(Token = "0x170005EF")]
	public abstract Type ValueType
	{
		[Token(Token = "0x60015DF")]
		get;
	}

	[Token(Token = "0x170005F0")]
	public abstract XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60015E0")]
		get;
	}

	[Token(Token = "0x170005F1")]
	public virtual XmlSchemaDatatypeVariety Variety
	{
		[Token(Token = "0x60015E2")]
		[Address(RVA = "0x602A850", Offset = "0x6029850", VA = "0x602A850", Slot = "7")]
		get
		{
			return default(XmlSchemaDatatypeVariety);
		}
	}

	[Token(Token = "0x170005F2")]
	public virtual XmlTypeCode TypeCode
	{
		[Token(Token = "0x60015E3")]
		[Address(RVA = "0x602A860", Offset = "0x6029860", VA = "0x602A860", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170005F3")]
	internal abstract bool HasLexicalFacets
	{
		[Token(Token = "0x60015E5")]
		get;
	}

	[Token(Token = "0x170005F4")]
	internal abstract bool HasValueFacets
	{
		[Token(Token = "0x60015E6")]
		get;
	}

	[Token(Token = "0x170005F5")]
	internal abstract XmlValueConverter ValueConverter
	{
		[Token(Token = "0x60015E7")]
		get;
	}

	[Token(Token = "0x170005F6")]
	internal abstract RestrictionFacets Restriction
	{
		[Token(Token = "0x60015E8")]
		get;
	}

	[Token(Token = "0x170005F7")]
	internal abstract FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60015ED")]
		get;
	}

	[Token(Token = "0x170005F8")]
	internal abstract XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60015EE")]
		get;
	}

	[Token(Token = "0x170005F9")]
	internal string TypeCodeString
	{
		[Token(Token = "0x60015F4")]
		[Address(RVA = "0x602A880", Offset = "0x6029880", VA = "0x602A880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015E1")]
	public abstract object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr);

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x602A870", Offset = "0x6029870", VA = "0x602A870", Slot = "9")]
	public virtual bool IsDerivedFrom(XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E9")]
	internal abstract int Compare(object value1, object value2);

	[Token(Token = "0x60015EA")]
	internal abstract object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, bool createAtomicValue);

	[Token(Token = "0x60015EB")]
	internal abstract Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue);

	[Token(Token = "0x60015EC")]
	internal abstract Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue);

	[Token(Token = "0x60015EF")]
	internal abstract XmlSchemaDatatype DeriveByRestriction(XmlSchemaObjectCollection facets, XmlNameTable nameTable, XmlSchemaType schemaType);

	[Token(Token = "0x60015F0")]
	internal abstract XmlSchemaDatatype DeriveByList(XmlSchemaType schemaType);

	[Token(Token = "0x60015F1")]
	internal abstract void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller);

	[Token(Token = "0x60015F2")]
	internal abstract bool IsEqual(object o1, object o2);

	[Token(Token = "0x60015F3")]
	internal abstract bool IsComparable(XmlSchemaDatatype dtype);

	[Token(Token = "0x60015F5")]
	[Address(RVA = "0x602A970", Offset = "0x6029970", VA = "0x602A970")]
	internal string TypeCodeToString(XmlTypeCode typeCode)
	{
		return null;
	}

	[Token(Token = "0x60015F6")]
	[Address(RVA = "0x602AEB0", Offset = "0x6029EB0", VA = "0x602AEB0")]
	internal static string ConcatenatedToString(object value)
	{
		return null;
	}

	[Token(Token = "0x60015F7")]
	[Address(RVA = "0x6019170", Offset = "0x6018170", VA = "0x6019170")]
	internal static XmlSchemaDatatype FromXmlTokenizedType(XmlTokenizedType token)
	{
		return null;
	}

	[Token(Token = "0x60015F8")]
	[Address(RVA = "0x602B5F0", Offset = "0x602A5F0", VA = "0x602B5F0")]
	internal static XmlSchemaDatatype FromXmlTokenizedTypeXsd(XmlTokenizedType token)
	{
		return null;
	}

	[Token(Token = "0x60015F9")]
	[Address(RVA = "0x60177A0", Offset = "0x60167A0", VA = "0x60177A0")]
	internal static XmlSchemaDatatype FromXdrName(string name)
	{
		return null;
	}

	[Token(Token = "0x60015FA")]
	[Address(RVA = "0x602B650", Offset = "0x602A650", VA = "0x602B650")]
	internal static XmlSchemaDatatype DeriveByUnion(XmlSchemaSimpleType[] types, XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60015FB")]
	[Address(RVA = "0x6014F30", Offset = "0x6013F30", VA = "0x6014F30")]
	internal static string XdrCanonizeUri(string uri, XmlNameTable nameTable, SchemaNames schemaNames)
	{
		return null;
	}

	[Token(Token = "0x60015FC")]
	[Address(RVA = "0x602B6B0", Offset = "0x602A6B0", VA = "0x602B6B0")]
	protected XmlSchemaDatatype()
	{
	}
}
