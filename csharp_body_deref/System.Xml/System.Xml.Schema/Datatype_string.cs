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
		[Address(RVA = "0x485DEA0", Offset = "0x485DEA0", VA = "0x485DEA0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700045D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x485DEB0", Offset = "0x485DEB0", VA = "0x485DEB0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045E")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010B0")]
		[Address(RVA = "0x485DF20", Offset = "0x485DF20", VA = "0x485DF20", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700045F")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60010B1")]
		[Address(RVA = "0x485DF30", Offset = "0x485DF30", VA = "0x485DF30", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000460")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010B2")]
		[Address(RVA = "0x485DF40", Offset = "0x485DF40", VA = "0x485DF40", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x485DE90", Offset = "0x485DE90", VA = "0x485DE90", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x485DF50", Offset = "0x485DF50", VA = "0x485DF50", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x4857B00", Offset = "0x4857B00", VA = "0x4857B00")]
	public Datatype_string()
	{
	}
}
