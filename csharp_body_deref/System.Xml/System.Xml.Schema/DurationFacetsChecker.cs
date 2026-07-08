using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D3")]
internal class DurationFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001234")]
	[Address(RVA = "0x4531D50", Offset = "0x4531D50", VA = "0x4531D50", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x4531E60", Offset = "0x4531E60", VA = "0x4531E60", Slot = "15")]
	internal override Exception CheckValueFacets(TimeSpan value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x45322C0", Offset = "0x45322C0", VA = "0x45322C0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x45321E0", Offset = "0x45321E0", VA = "0x45321E0")]
	private bool MatchEnumeration(TimeSpan value, ArrayList enumeration)
	{
		return default(bool);
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x4518180", Offset = "0x4518180", VA = "0x4518180")]
	public DurationFacetsChecker()
	{
	}
}
