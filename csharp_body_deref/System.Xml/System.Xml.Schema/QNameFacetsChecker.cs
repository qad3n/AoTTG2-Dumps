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
	[Address(RVA = "0x5FBED30", Offset = "0x5FBDD30", VA = "0x5FBED30", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x5FBEE50", Offset = "0x5FBDE50", VA = "0x5FBEE50", Slot = "16")]
	internal override Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x5FBF140", Offset = "0x5FBE140", VA = "0x5FBF140", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x5FBF030", Offset = "0x5FBE030", VA = "0x5FBF030")]
	private bool MatchEnumeration(XmlQualifiedName value, ArrayList enumeration)
	{
		return default(bool);
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x5FBF240", Offset = "0x5FBE240", VA = "0x5FBF240")]
	public QNameFacetsChecker()
	{
	}
}
