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
		[Address(RVA = "0x279E820", Offset = "0x279CE20", VA = "0x18279E820", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x1CB0BF0", Offset = "0x1CAF1F0", VA = "0x181CB0BF0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700047B")]
	public override Type ValueType
	{
		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x279E8D0", Offset = "0x279CED0", VA = "0x18279E8D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047C")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x279E880", Offset = "0x279CE80", VA = "0x18279E880", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047D")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x1700047E")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x279D450", Offset = "0x279BA50", VA = "0x18279D450", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x279A490", Offset = "0x2798A90", VA = "0x18279A490", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x279E430", Offset = "0x279CA30", VA = "0x18279E430", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x279E4D0", Offset = "0x279CAD0", VA = "0x18279E4D0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x279E7A0", Offset = "0x279CDA0", VA = "0x18279E7A0")]
	public Datatype_duration()
	{
	}
}
