// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_positiveInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x27A0980", Offset = "0x279EF80", VA = "0x1827A0980", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004ED")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0x847050", Offset = "0x845650", VA = "0x180847050", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x27A0900", Offset = "0x279EF00", VA = "0x1827A0900")]
	public Datatype_positiveInteger()
	{
	}
}
