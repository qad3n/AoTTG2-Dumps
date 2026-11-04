// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_decimal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000197")]
internal class Datatype_decimal : Datatype_anySimpleType
{
	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x17000473")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x279DD10", Offset = "0x279C310", VA = "0x18279DD10", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000474")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x847160", Offset = "0x845760", VA = "0x180847160", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000475")]
	public override Type ValueType
	{
		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x279DDC0", Offset = "0x279C3C0", VA = "0x18279DDC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000476")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x279DD60", Offset = "0x279C360", VA = "0x18279DD60", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000477")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000478")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x279DDB0", Offset = "0x279C3B0", VA = "0x18279DDB0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x279D950", Offset = "0x279BF50", VA = "0x18279D950", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x279D8B0", Offset = "0x279BEB0", VA = "0x18279D8B0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x279D960", Offset = "0x279BF60", VA = "0x18279D960", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x279DC90", Offset = "0x279C290", VA = "0x18279DC90")]
	public Datatype_decimal()
	{
	}
}
