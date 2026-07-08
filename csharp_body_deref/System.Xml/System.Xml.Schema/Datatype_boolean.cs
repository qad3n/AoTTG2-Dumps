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
		[Address(RVA = "0x45208F0", Offset = "0x45208F0", VA = "0x45208F0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000462")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x4520960", Offset = "0x4520960", VA = "0x4520960", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000463")]
	public override Type ValueType
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x4520970", Offset = "0x4520970", VA = "0x4520970", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000464")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x45209E0", Offset = "0x45209E0", VA = "0x45209E0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000465")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x4520A50", Offset = "0x4520A50", VA = "0x4520A50", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000466")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x4520A60", Offset = "0x4520A60", VA = "0x4520A60", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x45208E0", Offset = "0x45208E0", VA = "0x45208E0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x4520A70", Offset = "0x4520A70", VA = "0x4520A70", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x4520AE0", Offset = "0x4520AE0", VA = "0x4520AE0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x4518380", Offset = "0x4518380", VA = "0x4518380")]
	public Datatype_boolean()
	{
	}
}
