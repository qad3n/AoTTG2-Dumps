using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C4")]
internal class Datatype_positiveInteger : Datatype_nonNegativeInteger
{
	[Token(Token = "0x4000868")]
	[FieldOffset(Offset = "0x0")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004EC")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x4527550", Offset = "0x4527550", VA = "0x4527550", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004ED")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0x45275C0", Offset = "0x45275C0", VA = "0x45275C0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x451A110", Offset = "0x451A110", VA = "0x451A110")]
	public Datatype_positiveInteger()
	{
	}
}
