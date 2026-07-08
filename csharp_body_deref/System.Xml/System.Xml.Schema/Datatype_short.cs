using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BD")]
internal class Datatype_short : Datatype_int
{
	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004D1")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001185")]
		[Address(RVA = "0x45258A0", Offset = "0x45258A0", VA = "0x45258A0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x4525910", Offset = "0x4525910", VA = "0x4525910", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004D3")]
	public override Type ValueType
	{
		[Token(Token = "0x6001188")]
		[Address(RVA = "0x4525980", Offset = "0x4525980", VA = "0x4525980", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D4")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001189")]
		[Address(RVA = "0x45259F0", Offset = "0x45259F0", VA = "0x45259F0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4525920", Offset = "0x4525920", VA = "0x4525920", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x4525A60", Offset = "0x4525A60", VA = "0x4525A60", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x451A2F0", Offset = "0x451A2F0", VA = "0x451A2F0")]
	public Datatype_short()
	{
	}
}
