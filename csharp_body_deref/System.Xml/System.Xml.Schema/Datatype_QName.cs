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
		[Address(RVA = "0x279B270", Offset = "0x2799870", VA = "0x18279B270", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x279B320", Offset = "0x2799920", VA = "0x18279B320", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004A3")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001135")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004A4")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001136")]
		[Address(RVA = "0x279A330", Offset = "0x2798930", VA = "0x18279A330", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x170004A5")]
	public override Type ValueType
	{
		[Token(Token = "0x6001137")]
		[Address(RVA = "0x279B330", Offset = "0x2799930", VA = "0x18279B330", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A6")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001138")]
		[Address(RVA = "0x279B2D0", Offset = "0x27998D0", VA = "0x18279B2D0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A7")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001139")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x279A490", Offset = "0x2798A90", VA = "0x18279A490", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x279AF50", Offset = "0x2799550", VA = "0x18279AF50", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x279B1F0", Offset = "0x27997F0", VA = "0x18279B1F0")]
	public Datatype_QName()
	{
	}
}
