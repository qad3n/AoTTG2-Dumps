// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_float
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000195")]
internal class Datatype_float : Datatype_anySimpleType
{
	[Token(Token = "0x4000837")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000467")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010C1")]
		[Address(RVA = "0x615C950", Offset = "0x615B950", VA = "0x615C950", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000468")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010C2")]
		[Address(RVA = "0x615C9C0", Offset = "0x615B9C0", VA = "0x615C9C0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000469")]
	public override Type ValueType
	{
		[Token(Token = "0x60010C3")]
		[Address(RVA = "0x615C9D0", Offset = "0x615B9D0", VA = "0x615C9D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046A")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010C4")]
		[Address(RVA = "0x615CA40", Offset = "0x615BA40", VA = "0x615CA40", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046B")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010C5")]
		[Address(RVA = "0x615CAB0", Offset = "0x615BAB0", VA = "0x615CAB0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700046C")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010C6")]
		[Address(RVA = "0x615CAC0", Offset = "0x615BAC0", VA = "0x615CAC0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x615C940", Offset = "0x615B940", VA = "0x615C940", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x615CAD0", Offset = "0x615BAD0", VA = "0x615CAD0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x615CB30", Offset = "0x615BB30", VA = "0x615CB30", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x61552A0", Offset = "0x61542A0", VA = "0x61552A0")]
	public Datatype_float()
	{
	}
}
