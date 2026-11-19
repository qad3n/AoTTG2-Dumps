// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.BinaryFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D8")]
internal class BinaryFacetsChecker : FacetsChecker
{
	[Token(Token = "0x600124C")]
	[Address(RVA = "0x5FBF260", Offset = "0x5FBE260", VA = "0x5FBF260", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x5FBF2F0", Offset = "0x5FBE2F0", VA = "0x5FBF2F0", Slot = "14")]
	internal override Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x5FBF5F0", Offset = "0x5FBE5F0", VA = "0x5FBF5F0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x5FBF4C0", Offset = "0x5FBE4C0", VA = "0x5FBF4C0")]
	private bool MatchEnumeration(byte[] value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x5FBF670", Offset = "0x5FBE670", VA = "0x5FBF670")]
	public BinaryFacetsChecker()
	{
	}
}
