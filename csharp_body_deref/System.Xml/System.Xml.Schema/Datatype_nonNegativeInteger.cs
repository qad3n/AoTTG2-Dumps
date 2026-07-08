using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BF")]
internal class Datatype_nonNegativeInteger : Datatype_integer
{
	[Token(Token = "0x400085B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004D9")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x4526180", Offset = "0x4526180", VA = "0x4526180", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DA")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x45261F0", Offset = "0x45261F0", VA = "0x45261F0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004DB")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x4526200", Offset = "0x4526200", VA = "0x4526200", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x4519F70", Offset = "0x4519F70", VA = "0x4519F70")]
	public Datatype_nonNegativeInteger()
	{
	}
}
