// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_base64Binary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001A9")]
internal class Datatype_base64Binary : Datatype_anySimpleType
{
	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000494")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x279BFB0", Offset = "0x279A5B0", VA = "0x18279BFB0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000495")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x279C050", Offset = "0x279A650", VA = "0x18279C050", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000496")]
	public override Type ValueType
	{
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x279C060", Offset = "0x279A660", VA = "0x18279C060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000497")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x279C000", Offset = "0x279A600", VA = "0x18279C000", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000498")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001120")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000499")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001121")]
		[Address(RVA = "0x279A330", Offset = "0x2798930", VA = "0x18279A330", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x279A490", Offset = "0x2798A90", VA = "0x18279A490", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x279BC00", Offset = "0x279A200", VA = "0x18279BC00", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x279BD00", Offset = "0x279A300", VA = "0x18279BD00", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x279BF30", Offset = "0x279A530", VA = "0x18279BF30")]
	public Datatype_base64Binary()
	{
	}
}
