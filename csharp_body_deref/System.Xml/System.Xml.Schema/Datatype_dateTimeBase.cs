// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_dateTimeBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200019B")]
internal class Datatype_dateTimeBase : Datatype_anySimpleType
{
	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x38")]
	private XsdDateTimeFlags dateTimeFlags;

	[Token(Token = "0x17000481")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x485FAA0", Offset = "0x485FAA0", VA = "0x485FAA0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000482")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010F4")]
		[Address(RVA = "0x485FB10", Offset = "0x485FB10", VA = "0x485FB10", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000483")]
	public override Type ValueType
	{
		[Token(Token = "0x60010F6")]
		[Address(RVA = "0x485FBE0", Offset = "0x485FBE0", VA = "0x485FBE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000484")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x485FC50", Offset = "0x485FC50", VA = "0x485FC50", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000485")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010F8")]
		[Address(RVA = "0x485FCC0", Offset = "0x485FCC0", VA = "0x485FCC0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000486")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010F9")]
		[Address(RVA = "0x485FCD0", Offset = "0x485FCD0", VA = "0x485FCD0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x485FA90", Offset = "0x485FA90", VA = "0x485FA90", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x485FB20", Offset = "0x485FB20", VA = "0x485FB20")]
	internal Datatype_dateTimeBase(XsdDateTimeFlags dateTimeFlags)
	{
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x485FCE0", Offset = "0x485FCE0", VA = "0x485FCE0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x485FE30", Offset = "0x485FE30", VA = "0x485FE30", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}
}
