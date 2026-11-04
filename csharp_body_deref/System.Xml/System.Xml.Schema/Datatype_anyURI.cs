// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_anyURI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x279BB10", Offset = "0x279A110", VA = "0x18279BB10", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049B")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001128")]
		[Address(RVA = "0x846FB0", Offset = "0x8455B0", VA = "0x180846FB0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700049C")]
	public override Type ValueType
	{
		[Token(Token = "0x6001129")]
		[Address(RVA = "0x279BBB0", Offset = "0x279A1B0", VA = "0x18279BBB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049D")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700049E")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600112B")]
		[Address(RVA = "0x279BB60", Offset = "0x279A160", VA = "0x18279BB60", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049F")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x170004A0")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x279A330", Offset = "0x2798930", VA = "0x18279A330", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x279A490", Offset = "0x2798A90", VA = "0x18279A490", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x279B740", Offset = "0x2799D40", VA = "0x18279B740", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x279B810", Offset = "0x2799E10", VA = "0x18279B810", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x279BA90", Offset = "0x279A090", VA = "0x18279BA90")]
	public Datatype_anyURI()
	{
	}
}
