using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BA")]
internal class Datatype_negativeInteger : Datatype_nonPositiveInteger
{
	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004C6")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001170")]
		[Address(RVA = "0x4524E20", Offset = "0x4524E20", VA = "0x4524E20", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C7")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001171")]
		[Address(RVA = "0x4524E90", Offset = "0x4524E90", VA = "0x4524E90", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x4519E50", Offset = "0x4519E50", VA = "0x4519E50")]
	public Datatype_negativeInteger()
	{
	}
}
