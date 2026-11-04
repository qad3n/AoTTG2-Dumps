// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_negativeInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x27A04F0", Offset = "0x279EAF0", VA = "0x1827A04F0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C7")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001171")]
		[Address(RVA = "0x27A0540", Offset = "0x279EB40", VA = "0x1827A0540", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x27A0470", Offset = "0x279EA70", VA = "0x1827A0470")]
	public Datatype_negativeInteger()
	{
	}
}
