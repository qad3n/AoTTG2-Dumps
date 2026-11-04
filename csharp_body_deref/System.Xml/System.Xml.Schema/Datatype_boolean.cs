// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_boolean
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000194")]
internal class Datatype_boolean : Datatype_anySimpleType
{
	[Token(Token = "0x4000835")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000836")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000461")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010B6")]
		[Address(RVA = "0x279C380", Offset = "0x279A980", VA = "0x18279C380", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000462")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x1B49610", Offset = "0x1B47C10", VA = "0x181B49610", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000463")]
	public override Type ValueType
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x279C420", Offset = "0x279AA20", VA = "0x18279C420", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000464")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x279C3D0", Offset = "0x279A9D0", VA = "0x18279C3D0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000465")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000466")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x846F60", Offset = "0x845560", VA = "0x180846F60", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x279C120", Offset = "0x279A720", VA = "0x18279C120", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x279C0B0", Offset = "0x279A6B0", VA = "0x18279C0B0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x279C130", Offset = "0x279A730", VA = "0x18279C130", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x279C300", Offset = "0x279A900", VA = "0x18279C300")]
	public Datatype_boolean()
	{
	}
}
