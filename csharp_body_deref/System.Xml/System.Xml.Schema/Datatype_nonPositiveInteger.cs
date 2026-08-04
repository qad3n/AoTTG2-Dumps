// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_nonPositiveInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48623F0", Offset = "0x48623F0", VA = "0x48623F0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C4")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600116C")]
		[Address(RVA = "0x4862460", Offset = "0x4862460", VA = "0x4862460", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004C5")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x600116D")]
		[Address(RVA = "0x4862470", Offset = "0x4862470", VA = "0x4862470", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x48576E0", Offset = "0x48576E0", VA = "0x48576E0")]
	public Datatype_nonPositiveInteger()
	{
	}
}
