// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ListFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D9")]
internal class ListFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001251")]
	[Address(RVA = "0x46ADC30", Offset = "0x46ADC30", VA = "0x46ADC30", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x46ADE70", Offset = "0x46ADE70", VA = "0x46ADE70", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x46ADF40", Offset = "0x46ADF40", VA = "0x46ADF40")]
	public ListFacetsChecker()
	{
	}
}
