// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.QNameFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D6")]
internal class QNameFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001246")]
	[Address(RVA = "0x46AD2F0", Offset = "0x46AD2F0", VA = "0x46AD2F0", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x46AD410", Offset = "0x46AD410", VA = "0x46AD410", Slot = "16")]
	internal override Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x46AD700", Offset = "0x46AD700", VA = "0x46AD700", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x46AD5F0", Offset = "0x46AD5F0", VA = "0x46AD5F0")]
	private bool MatchEnumeration(XmlQualifiedName value, ArrayList enumeration)
	{
		return default(bool);
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x46AD800", Offset = "0x46AD800", VA = "0x46AD800")]
	public QNameFacetsChecker()
	{
	}
}
