using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000197")]
internal class Datatype_decimal : Datatype_anySimpleType
{
	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x17000473")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x45214B0", Offset = "0x45214B0", VA = "0x45214B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000474")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x4521520", Offset = "0x4521520", VA = "0x4521520", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000475")]
	public override Type ValueType
	{
		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x4521530", Offset = "0x4521530", VA = "0x4521530", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000476")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x45215A0", Offset = "0x45215A0", VA = "0x45215A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000477")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x4521610", Offset = "0x4521610", VA = "0x4521610", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x17000478")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x4521620", Offset = "0x4521620", VA = "0x4521620", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x45214A0", Offset = "0x45214A0", VA = "0x45214A0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x4521630", Offset = "0x4521630", VA = "0x4521630", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x45216D0", Offset = "0x45216D0", VA = "0x45216D0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x4518C10", Offset = "0x4518C10", VA = "0x4518C10")]
	public Datatype_decimal()
	{
	}
}
