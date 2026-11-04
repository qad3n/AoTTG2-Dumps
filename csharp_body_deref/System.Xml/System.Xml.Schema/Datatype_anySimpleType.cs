// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_anySimpleType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000190")]
internal class Datatype_anySimpleType : DatatypeImplementation
{
	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000451")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600109A")]
		[Address(RVA = "0x279B650", Offset = "0x2799C50", VA = "0x18279B650", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000452")]
	public override Type ValueType
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x279B6F0", Offset = "0x2799CF0", VA = "0x18279B6F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000454")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600109D")]
		[Address(RVA = "0x279B6A0", Offset = "0x2799CA0", VA = "0x18279B6A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000455")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x600109E")]
		[Address(RVA = "0x847030", Offset = "0x845630", VA = "0x180847030", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000456")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x600109F")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x17000457")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010A0")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x279B4C0", Offset = "0x2799AC0", VA = "0x18279B4C0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x279B450", Offset = "0x2799A50", VA = "0x18279B450", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x279B510", Offset = "0x2799B10", VA = "0x18279B510", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x279B600", Offset = "0x2799C00", VA = "0x18279B600")]
	public Datatype_anySimpleType()
	{
	}
}
