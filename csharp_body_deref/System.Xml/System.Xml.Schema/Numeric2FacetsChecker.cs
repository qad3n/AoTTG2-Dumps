using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D2")]
internal class Numeric2FacetsChecker : FacetsChecker
{
	[Token(Token = "0x600122E")]
	[Address(RVA = "0x4531740", Offset = "0x4531740", VA = "0x4531740", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x45317B0", Offset = "0x45317B0", VA = "0x45317B0", Slot = "11")]
	internal override Exception CheckValueFacets(double value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x4531C10", Offset = "0x4531C10", VA = "0x4531C10", Slot = "12")]
	internal override Exception CheckValueFacets(float value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x4531C30", Offset = "0x4531C30", VA = "0x4531C30", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x4531B40", Offset = "0x4531B40", VA = "0x4531B40")]
	private bool MatchEnumeration(double value, ArrayList enumeration, XmlValueConverter valueConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x4518160", Offset = "0x4518160", VA = "0x4518160")]
	public Numeric2FacetsChecker()
	{
	}
}
