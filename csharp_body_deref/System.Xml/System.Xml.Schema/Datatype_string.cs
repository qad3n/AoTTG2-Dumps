// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_string
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000193")]
internal class Datatype_string : Datatype_anySimpleType
{
	[Token(Token = "0x1700045C")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010AE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700045D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x27A1000", Offset = "0x279F600", VA = "0x1827A1000", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045E")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010B0")]
		[Address(RVA = "0x847030", Offset = "0x845630", VA = "0x180847030", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700045F")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60010B1")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000460")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010B2")]
		[Address(RVA = "0x279A330", Offset = "0x2798930", VA = "0x18279A330", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x27A0E60", Offset = "0x279F460", VA = "0x1827A0E60", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x27A0E70", Offset = "0x279F470", VA = "0x1827A0E70", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x27A0F80", Offset = "0x279F580", VA = "0x1827A0F80")]
	public Datatype_string()
	{
	}
}
