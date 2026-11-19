// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_double
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000196")]
internal class Datatype_double : Datatype_anySimpleType
{
	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x1700046D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010CC")]
		[Address(RVA = "0x615CD50", Offset = "0x615BD50", VA = "0x615CD50", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010CD")]
		[Address(RVA = "0x615CDC0", Offset = "0x615BDC0", VA = "0x615CDC0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700046F")]
	public override Type ValueType
	{
		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x615CDD0", Offset = "0x615BDD0", VA = "0x615CDD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x615CE40", Offset = "0x615BE40", VA = "0x615CE40", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000471")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x615CEB0", Offset = "0x615BEB0", VA = "0x615CEB0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000472")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x615CEC0", Offset = "0x615BEC0", VA = "0x615CEC0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x615CD40", Offset = "0x615BD40", VA = "0x615CD40", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x615CED0", Offset = "0x615BED0", VA = "0x615CED0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x615CF30", Offset = "0x615BF30", VA = "0x615CF30", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x6154B70", Offset = "0x6153B70", VA = "0x6154B70")]
	public Datatype_double()
	{
	}
}
