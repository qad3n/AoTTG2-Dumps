using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C2")]
internal class Datatype_unsignedShort : Datatype_unsignedInt
{
	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004E4")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x4526C50", Offset = "0x4526C50", VA = "0x4526C50", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E5")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x4526CC0", Offset = "0x4526CC0", VA = "0x4526CC0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004E6")]
	public override Type ValueType
	{
		[Token(Token = "0x60011AD")]
		[Address(RVA = "0x4526D30", Offset = "0x4526D30", VA = "0x4526D30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E7")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x4526DA0", Offset = "0x4526DA0", VA = "0x4526DA0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4526CD0", Offset = "0x4526CD0", VA = "0x4526CD0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4526E10", Offset = "0x4526E10", VA = "0x4526E10", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x451AA20", Offset = "0x451AA20", VA = "0x451AA20")]
	public Datatype_unsignedShort()
	{
	}
}
