using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D6")]
internal class QNameFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001246")]
	[Address(RVA = "0x436FB90", Offset = "0x436FB90", VA = "0x436FB90", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x436FCB0", Offset = "0x436FCB0", VA = "0x436FCB0", Slot = "16")]
	internal override Exception CheckValueFacets(XmlQualifiedName value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001248")]
	[Address(RVA = "0x436FFA0", Offset = "0x436FFA0", VA = "0x436FFA0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001249")]
	[Address(RVA = "0x436FE90", Offset = "0x436FE90", VA = "0x436FE90")]
	private bool MatchEnumeration(XmlQualifiedName value, ArrayList enumeration)
	{
		return default(bool);
	}

	[Token(Token = "0x600124A")]
	[Address(RVA = "0x43700A0", Offset = "0x43700A0", VA = "0x43700A0")]
	public QNameFacetsChecker()
	{
	}
}
