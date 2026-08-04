// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.UnionFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001DA")]
internal class UnionFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001254")]
	[Address(RVA = "0x46ADF50", Offset = "0x46ADF50", VA = "0x46ADF50", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x46AE030", Offset = "0x46AE030", VA = "0x46AE030", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x46AE100", Offset = "0x46AE100", VA = "0x46AE100")]
	public UnionFacetsChecker()
	{
	}
}
