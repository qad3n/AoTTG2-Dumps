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
	[Address(RVA = "0x2611D20", Offset = "0x2610320", VA = "0x182611D20", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x2611B30", Offset = "0x2610130", VA = "0x182611B30", Slot = "16")]
	internal override Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x2611F40", Offset = "0x2610540", VA = "0x182611F40", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x2611E50", Offset = "0x2610450", VA = "0x182611E50")]
	private bool MatchEnumeration(XmlQualifiedName value, ArrayList enumeration)
	{
		return default(bool);
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public QNameFacetsChecker()
	{
	}
}
