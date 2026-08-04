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
		[Address(RVA = "0x485E050", Offset = "0x485E050", VA = "0x485E050", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000462")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x485E0C0", Offset = "0x485E0C0", VA = "0x485E0C0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000463")]
	public override Type ValueType
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x485E0D0", Offset = "0x485E0D0", VA = "0x485E0D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000464")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x485E140", Offset = "0x485E140", VA = "0x485E140", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000465")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x485E1B0", Offset = "0x485E1B0", VA = "0x485E1B0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000466")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x485E1C0", Offset = "0x485E1C0", VA = "0x485E1C0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x485E040", Offset = "0x485E040", VA = "0x485E040", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x485E1D0", Offset = "0x485E1D0", VA = "0x485E1D0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x485E240", Offset = "0x485E240", VA = "0x485E240", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x4855AE0", Offset = "0x4855AE0", VA = "0x4855AE0")]
	public Datatype_boolean()
	{
	}
}
