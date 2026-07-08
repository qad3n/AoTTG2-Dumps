using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BE")]
internal class Datatype_byte : Datatype_short
{
	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000859")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004D5")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600118D")]
		[Address(RVA = "0x4525D10", Offset = "0x4525D10", VA = "0x4525D10", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D6")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600118E")]
		[Address(RVA = "0x4525D80", Offset = "0x4525D80", VA = "0x4525D80", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004D7")]
	public override Type ValueType
	{
		[Token(Token = "0x6001190")]
		[Address(RVA = "0x4525DF0", Offset = "0x4525DF0", VA = "0x4525DF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D8")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001191")]
		[Address(RVA = "0x4525E60", Offset = "0x4525E60", VA = "0x4525E60", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x4525D90", Offset = "0x4525D90", VA = "0x4525D90", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x4525ED0", Offset = "0x4525ED0", VA = "0x4525ED0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x4518440", Offset = "0x4518440", VA = "0x4518440")]
	public Datatype_byte()
	{
	}
}
