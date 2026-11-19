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
		[Address(RVA = "0x615E800", Offset = "0x615D800", VA = "0x615E800", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048F")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x615E870", Offset = "0x615D870", VA = "0x615E870", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000490")]
	public override Type ValueType
	{
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x615E880", Offset = "0x615D880", VA = "0x615E880", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000491")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x615E8F0", Offset = "0x615D8F0", VA = "0x615E8F0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000492")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x615E960", Offset = "0x615D960", VA = "0x615E960", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000493")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001116")]
		[Address(RVA = "0x615E970", Offset = "0x615D970", VA = "0x615E970", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x615E7F0", Offset = "0x615D7F0", VA = "0x615E7F0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x615E980", Offset = "0x615D980", VA = "0x615E980", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x615EA60", Offset = "0x615DA60", VA = "0x615EA60", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x6155480", Offset = "0x6154480", VA = "0x6155480")]
	public Datatype_hexBinary()
	{
	}
}
