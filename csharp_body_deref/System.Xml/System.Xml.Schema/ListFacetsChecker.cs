using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D9")]
internal class ListFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001251")]
	[Address(RVA = "0x43704D0", Offset = "0x43704D0", VA = "0x43704D0", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x4370710", Offset = "0x4370710", VA = "0x4370710", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x43707E0", Offset = "0x43707E0", VA = "0x43707E0")]
	public ListFacetsChecker()
	{
	}
}
