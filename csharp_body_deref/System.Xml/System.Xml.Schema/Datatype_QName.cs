// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_QName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001AB")]
internal class Datatype_QName : Datatype_anySimpleType
{
	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004A1")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x615F910", Offset = "0x615E910", VA = "0x615F910", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x615F980", Offset = "0x615E980", VA = "0x615F980", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004A3")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001135")]
		[Address(RVA = "0x615F990", Offset = "0x615E990", VA = "0x615F990", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004A4")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001136")]
		[Address(RVA = "0x615F9A0", Offset = "0x615E9A0", VA = "0x615F9A0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x170004A5")]
	public override Type ValueType
	{
		[Token(Token = "0x6001137")]
		[Address(RVA = "0x615F9B0", Offset = "0x615E9B0", VA = "0x615F9B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A6")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001138")]
		[Address(RVA = "0x615FA20", Offset = "0x615EA20", VA = "0x615FA20", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A7")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001139")]
		[Address(RVA = "0x615FA90", Offset = "0x615EA90", VA = "0x615FA90", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x615F900", Offset = "0x615E900", VA = "0x615F900", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x615FAA0", Offset = "0x615EAA0", VA = "0x615FAA0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x6156010", Offset = "0x6155010", VA = "0x6156010")]
	public Datatype_QName()
	{
	}
}
