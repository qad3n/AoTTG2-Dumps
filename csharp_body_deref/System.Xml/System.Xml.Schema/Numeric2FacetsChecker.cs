// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Numeric2FacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D2")]
internal class Numeric2FacetsChecker : FacetsChecker
{
	[Token(Token = "0x600122E")]
	[Address(RVA = "0x27ADD30", Offset = "0x27AC330", VA = "0x1827ADD30", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x27AD9F0", Offset = "0x27ABFF0", VA = "0x1827AD9F0", Slot = "11")]
	internal override Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x27ADD10", Offset = "0x27AC310", VA = "0x1827ADD10", Slot = "12")]
	internal override Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x27ADE50", Offset = "0x27AC450", VA = "0x1827ADE50", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x27ADDB0", Offset = "0x27AC3B0", VA = "0x1827ADDB0")]
	private bool MatchEnumeration(double value, ArrayList enumeration, XmlValueConverter valueConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Numeric2FacetsChecker()
	{
	}
}
