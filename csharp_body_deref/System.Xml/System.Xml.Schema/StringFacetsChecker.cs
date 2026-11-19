// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.StringFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x616DDE0", Offset = "0x616CDE0", VA = "0x616DDE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x616DE90", Offset = "0x616CE90", VA = "0x616DE90", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x616DEF0", Offset = "0x616CEF0", VA = "0x616DEF0", Slot = "13")]
	internal override Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x615F5E0", Offset = "0x615E5E0", VA = "0x615F5E0")]
	internal Exception CheckValueFacets(string value, XmlSchemaDatatype datatype, bool verifyUri)
	{
		return null;
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x616E3A0", Offset = "0x616D3A0", VA = "0x616E3A0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x616E150", Offset = "0x616D150", VA = "0x616E150")]
	private bool MatchEnumeration(string value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x616DF00", Offset = "0x616CF00", VA = "0x616DF00")]
	private Exception CheckBuiltInFacets(string s, XmlTypeCode typeCode, bool verifyUri)
	{
		return null;
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x6153FF0", Offset = "0x6152FF0", VA = "0x6153FF0")]
	public StringFacetsChecker()
	{
	}
}
