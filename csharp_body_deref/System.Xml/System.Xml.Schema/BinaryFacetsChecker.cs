using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D8")]
internal class BinaryFacetsChecker : FacetsChecker
{
	[Token(Token = "0x600124C")]
	[Address(RVA = "0x43700C0", Offset = "0x43700C0", VA = "0x43700C0", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x4370150", Offset = "0x4370150", VA = "0x4370150", Slot = "14")]
	internal override Exception CheckValueFacets(byte[] value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x4370440", Offset = "0x4370440", VA = "0x4370440", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x4370320", Offset = "0x4370320", VA = "0x4370320")]
	private bool MatchEnumeration(byte[] value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x43704C0", Offset = "0x43704C0", VA = "0x43704C0")]
	public BinaryFacetsChecker()
	{
	}
}
