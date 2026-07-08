using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B9")]
internal class Datatype_nonPositiveInteger : Datatype_integer
{
	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004C3")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600116B")]
		[Address(RVA = "0x4524C90", Offset = "0x4524C90", VA = "0x4524C90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C4")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x4524D00", Offset = "0x4524D00", VA = "0x4524D00", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004C5")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x600116D")]
		[Address(RVA = "0x4524D10", Offset = "0x4524D10", VA = "0x4524D10", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x4519F80", Offset = "0x4519F80", VA = "0x4519F80")]
	public Datatype_nonPositiveInteger()
	{
	}
}
