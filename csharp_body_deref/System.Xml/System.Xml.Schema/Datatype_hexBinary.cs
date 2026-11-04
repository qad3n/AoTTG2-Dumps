// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_hexBinary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001A8")]
internal class Datatype_hexBinary : Datatype_anySimpleType
{
	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x1700048E")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x279F730", Offset = "0x279DD30", VA = "0x18279F730", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048F")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x21C6620", Offset = "0x21C4C20", VA = "0x1821C6620", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000490")]
	public override Type ValueType
	{
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x279F7D0", Offset = "0x279DDD0", VA = "0x18279F7D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000491")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x279F780", Offset = "0x279DD80", VA = "0x18279F780", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000492")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000493")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001116")]
		[Address(RVA = "0x279A330", Offset = "0x2798930", VA = "0x18279A330", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x279A490", Offset = "0x2798A90", VA = "0x18279A490", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x279F380", Offset = "0x279D980", VA = "0x18279F380", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x279F480", Offset = "0x279DA80", VA = "0x18279F480", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x279F6B0", Offset = "0x279DCB0", VA = "0x18279F6B0")]
	public Datatype_hexBinary()
	{
	}
}
