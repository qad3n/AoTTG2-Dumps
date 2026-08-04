// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.DurationFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D3")]
internal class DurationFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001234")]
	[Address(RVA = "0x486F4B0", Offset = "0x486F4B0", VA = "0x486F4B0", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x486F5C0", Offset = "0x486F5C0", VA = "0x486F5C0", Slot = "15")]
	internal override Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x486FA20", Offset = "0x486FA20", VA = "0x486FA20", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x486F940", Offset = "0x486F940", VA = "0x486F940")]
	private bool MatchEnumeration(TimeSpan value, ArrayList enumeration)
	{
		return default(bool);
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x48558E0", Offset = "0x48558E0", VA = "0x48558E0")]
	public DurationFacetsChecker()
	{
	}
}
