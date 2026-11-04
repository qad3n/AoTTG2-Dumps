// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_nonNegativeInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x27A0650", Offset = "0x279EC50", VA = "0x1827A0650", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DA")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001196")]
		[Address(RVA = "0x232BB30", Offset = "0x232A130", VA = "0x18232BB30", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004DB")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x6001197")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x279FE30", Offset = "0x279E430", VA = "0x18279FE30")]
	public Datatype_nonNegativeInteger()
	{
	}
}
