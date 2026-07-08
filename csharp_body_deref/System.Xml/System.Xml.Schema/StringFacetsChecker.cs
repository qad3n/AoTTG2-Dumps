using System.Collections;
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D5")]
internal class StringFacetsChecker : FacetsChecker
{
	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x0")]
	private static Regex languagePattern;

	[Token(Token = "0x170004F9")]
	private static Regex LanguagePattern
	{
		[Token(Token = "0x600123E")]
		[Address(RVA = "0x45329B0", Offset = "0x45329B0", VA = "0x45329B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x4532A60", Offset = "0x4532A60", VA = "0x4532A60", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x4532AC0", Offset = "0x4532AC0", VA = "0x4532AC0", Slot = "13")]
	internal override Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x45239A0", Offset = "0x45239A0", VA = "0x45239A0")]
	internal Exception CheckValueFacets(string value, XmlSchemaDatatype datatype, bool verifyUri)
	{
		return null;
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x4532ED0", Offset = "0x4532ED0", VA = "0x4532ED0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x4532D00", Offset = "0x4532D00", VA = "0x4532D00")]
	private bool MatchEnumeration(string value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x4532AD0", Offset = "0x4532AD0", VA = "0x4532AD0")]
	private Exception CheckBuiltInFacets(string s, XmlTypeCode typeCode, bool verifyUri)
	{
		return null;
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x4518150", Offset = "0x4518150", VA = "0x4518150")]
	public StringFacetsChecker()
	{
	}
}
