using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C1")]
internal class Datatype_unsignedInt : Datatype_unsignedLong
{
	[Token(Token = "0x400085F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000861")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004E0")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60011A2")]
		[Address(RVA = "0x45267D0", Offset = "0x45267D0", VA = "0x45267D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E1")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x4526840", Offset = "0x4526840", VA = "0x4526840", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004E2")]
	public override Type ValueType
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x45268B0", Offset = "0x45268B0", VA = "0x45268B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x4526920", Offset = "0x4526920", VA = "0x4526920", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4526850", Offset = "0x4526850", VA = "0x4526850", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x4526990", Offset = "0x4526990", VA = "0x4526990", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x451A910", Offset = "0x451A910", VA = "0x451A910")]
	public Datatype_unsignedInt()
	{
	}
}
