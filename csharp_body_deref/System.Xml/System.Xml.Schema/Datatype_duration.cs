// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_duration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000198")]
internal class Datatype_duration : Datatype_anySimpleType
{
	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000479")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x615D6B0", Offset = "0x615C6B0", VA = "0x615D6B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x615D720", Offset = "0x615C720", VA = "0x615D720", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700047B")]
	public override Type ValueType
	{
		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x615D730", Offset = "0x615C730", VA = "0x615D730", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047C")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x615D7A0", Offset = "0x615C7A0", VA = "0x615D7A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047D")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x615D810", Offset = "0x615C810", VA = "0x615D810", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700047E")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x615D820", Offset = "0x615C820", VA = "0x615D820", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x615D6A0", Offset = "0x615C6A0", VA = "0x615D6A0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x615D830", Offset = "0x615C830", VA = "0x615D830", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x615D8C0", Offset = "0x615C8C0", VA = "0x615D8C0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x6154D50", Offset = "0x6153D50", VA = "0x6154D50")]
	public Datatype_duration()
	{
	}
}
