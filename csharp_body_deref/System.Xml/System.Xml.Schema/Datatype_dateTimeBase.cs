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
		[Address(RVA = "0x4522340", Offset = "0x4522340", VA = "0x4522340", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000482")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010F4")]
		[Address(RVA = "0x45223B0", Offset = "0x45223B0", VA = "0x45223B0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000483")]
	public override Type ValueType
	{
		[Token(Token = "0x60010F6")]
		[Address(RVA = "0x4522480", Offset = "0x4522480", VA = "0x4522480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000484")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x45224F0", Offset = "0x45224F0", VA = "0x45224F0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000485")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010F8")]
		[Address(RVA = "0x4522560", Offset = "0x4522560", VA = "0x4522560", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000486")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010F9")]
		[Address(RVA = "0x4522570", Offset = "0x4522570", VA = "0x4522570", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x4522330", Offset = "0x4522330", VA = "0x4522330", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x45223C0", Offset = "0x45223C0", VA = "0x45223C0")]
	internal Datatype_dateTimeBase(XsdDateTimeFlags dateTimeFlags)
	{
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x4522580", Offset = "0x4522580", VA = "0x4522580", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x45226D0", Offset = "0x45226D0", VA = "0x45226D0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}
}
