// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_NOTATION
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B7")]
internal class Datatype_NOTATION : Datatype_anySimpleType
{
	[Token(Token = "0x400084B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004BB")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x6160010", Offset = "0x615F010", VA = "0x6160010", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BC")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x6160080", Offset = "0x615F080", VA = "0x6160080", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004BD")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x6160090", Offset = "0x615F090", VA = "0x6160090", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004BE")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x61600A0", Offset = "0x615F0A0", VA = "0x61600A0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x170004BF")]
	public override Type ValueType
	{
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x61600B0", Offset = "0x615F0B0", VA = "0x61600B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x6160120", Offset = "0x615F120", VA = "0x6160120", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C1")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x6160190", Offset = "0x615F190", VA = "0x6160190", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x6160000", Offset = "0x615F000", VA = "0x6160000", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x61601A0", Offset = "0x615F1A0", VA = "0x61601A0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x6160400", Offset = "0x615F400", VA = "0x6160400", Slot = "22")]
	internal override void VerifySchemaValid(XmlSchemaObjectTable notations, XmlSchemaObject caller)
	{
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x6155EF0", Offset = "0x6154EF0", VA = "0x6155EF0")]
	public Datatype_NOTATION()
	{
	}
}
