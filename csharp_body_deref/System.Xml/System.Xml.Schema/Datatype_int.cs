using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BC")]
internal class Datatype_int : Datatype_long
{
	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004CD")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x4525430", Offset = "0x4525430", VA = "0x4525430", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CE")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x45254A0", Offset = "0x45254A0", VA = "0x45254A0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004CF")]
	public override Type ValueType
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x4525510", Offset = "0x4525510", VA = "0x4525510", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x4525580", Offset = "0x4525580", VA = "0x4525580", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x45254B0", Offset = "0x45254B0", VA = "0x45254B0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x45255F0", Offset = "0x45255F0", VA = "0x45255F0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x4519820", Offset = "0x4519820", VA = "0x4519820")]
	public Datatype_int()
	{
	}
}
