using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D4")]
internal class DateTimeFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001239")]
	[Address(RVA = "0x4532330", Offset = "0x4532330", VA = "0x4532330", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x45323A0", Offset = "0x45323A0", VA = "0x45323A0", Slot = "10")]
	internal override Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x4532950", Offset = "0x4532950", VA = "0x4532950", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x45327B0", Offset = "0x45327B0", VA = "0x45327B0")]
	private bool MatchEnumeration(DateTime value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x4518170", Offset = "0x4518170", VA = "0x4518170")]
	public DateTimeFacetsChecker()
	{
	}
}
