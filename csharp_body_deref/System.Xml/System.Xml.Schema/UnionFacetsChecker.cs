using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001DA")]
internal class UnionFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001254")]
	[Address(RVA = "0x43707F0", Offset = "0x43707F0", VA = "0x43707F0", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x43708D0", Offset = "0x43708D0", VA = "0x43708D0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x43709A0", Offset = "0x43709A0", VA = "0x43709A0")]
	public UnionFacetsChecker()
	{
	}
}
