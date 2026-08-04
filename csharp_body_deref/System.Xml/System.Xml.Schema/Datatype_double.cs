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
		[Address(RVA = "0x485E810", Offset = "0x485E810", VA = "0x485E810", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010CD")]
		[Address(RVA = "0x485E880", Offset = "0x485E880", VA = "0x485E880", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700046F")]
	public override Type ValueType
	{
		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x485E890", Offset = "0x485E890", VA = "0x485E890", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x485E900", Offset = "0x485E900", VA = "0x485E900", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000471")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x485E970", Offset = "0x485E970", VA = "0x485E970", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000472")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x485E980", Offset = "0x485E980", VA = "0x485E980", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x485E800", Offset = "0x485E800", VA = "0x485E800", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x485E990", Offset = "0x485E990", VA = "0x485E990", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x485E9F0", Offset = "0x485E9F0", VA = "0x485E9F0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x4856430", Offset = "0x4856430", VA = "0x4856430")]
	public Datatype_double()
	{
	}
}
