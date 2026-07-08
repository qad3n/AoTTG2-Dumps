using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BB")]
internal class Datatype_long : Datatype_integer
{
	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004C8")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001174")]
		[Address(RVA = "0x4524FA0", Offset = "0x4524FA0", VA = "0x4524FA0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C9")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x4525010", Offset = "0x4525010", VA = "0x4525010", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004CA")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x4525020", Offset = "0x4525020", VA = "0x4525020", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004CB")]
	public override Type ValueType
	{
		[Token(Token = "0x6001178")]
		[Address(RVA = "0x4525090", Offset = "0x4525090", VA = "0x4525090", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001179")]
		[Address(RVA = "0x4525100", Offset = "0x4525100", VA = "0x4525100", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x4525030", Offset = "0x4525030", VA = "0x4525030", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x4525170", Offset = "0x4525170", VA = "0x4525170", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x4519A60", Offset = "0x4519A60", VA = "0x4519A60")]
	public Datatype_long()
	{
	}
}
