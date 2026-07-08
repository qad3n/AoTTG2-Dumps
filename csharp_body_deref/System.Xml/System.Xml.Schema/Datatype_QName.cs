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
		[Address(RVA = "0x4523CB0", Offset = "0x4523CB0", VA = "0x4523CB0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x4523D20", Offset = "0x4523D20", VA = "0x4523D20", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004A3")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001135")]
		[Address(RVA = "0x4523D30", Offset = "0x4523D30", VA = "0x4523D30", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004A4")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001136")]
		[Address(RVA = "0x4523D40", Offset = "0x4523D40", VA = "0x4523D40", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x170004A5")]
	public override Type ValueType
	{
		[Token(Token = "0x6001137")]
		[Address(RVA = "0x4523D50", Offset = "0x4523D50", VA = "0x4523D50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A6")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001138")]
		[Address(RVA = "0x4523DC0", Offset = "0x4523DC0", VA = "0x4523DC0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A7")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x6001139")]
		[Address(RVA = "0x4523E30", Offset = "0x4523E30", VA = "0x4523E30", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x4523CA0", Offset = "0x4523CA0", VA = "0x4523CA0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x4523E40", Offset = "0x4523E40", VA = "0x4523E40", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x451A170", Offset = "0x451A170", VA = "0x451A170")]
	public Datatype_QName()
	{
	}
}
