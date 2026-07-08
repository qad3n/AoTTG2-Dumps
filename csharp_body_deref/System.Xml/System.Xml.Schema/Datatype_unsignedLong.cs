using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C0")]
internal class Datatype_unsignedLong : Datatype_nonNegativeInteger
{
	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x400085E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004DC")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x4526310", Offset = "0x4526310", VA = "0x4526310", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DD")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600119B")]
		[Address(RVA = "0x4526380", Offset = "0x4526380", VA = "0x4526380", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004DE")]
	public override Type ValueType
	{
		[Token(Token = "0x600119D")]
		[Address(RVA = "0x45263F0", Offset = "0x45263F0", VA = "0x45263F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DF")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600119E")]
		[Address(RVA = "0x4526460", Offset = "0x4526460", VA = "0x4526460", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4526390", Offset = "0x4526390", VA = "0x4526390", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x45264D0", Offset = "0x45264D0", VA = "0x45264D0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x451A9C0", Offset = "0x451A9C0", VA = "0x451A9C0")]
	public Datatype_unsignedLong()
	{
	}
}
