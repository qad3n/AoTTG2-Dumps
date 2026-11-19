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
	[Address(RVA = "0x616CB20", Offset = "0x616BB20", VA = "0x616CB20", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x616CB90", Offset = "0x616BB90", VA = "0x616CB90", Slot = "11")]
	internal override Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x616D010", Offset = "0x616C010", VA = "0x616D010", Slot = "12")]
	internal override Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x616D030", Offset = "0x616C030", VA = "0x616D030", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x616CF30", Offset = "0x616BF30", VA = "0x616CF30")]
	private bool MatchEnumeration(double value, ArrayList enumeration, XmlValueConverter valueConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x6154000", Offset = "0x6153000", VA = "0x6154000")]
	public Numeric2FacetsChecker()
	{
	}
}
