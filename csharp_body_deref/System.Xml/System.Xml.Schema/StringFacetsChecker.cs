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
		[Address(RVA = "0x27AF9F0", Offset = "0x27ADFF0", VA = "0x1827AF9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x27AF380", Offset = "0x27AD980", VA = "0x1827AF380", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x27AF360", Offset = "0x27AD960", VA = "0x1827AF360", Slot = "13")]
	internal override Exception CheckValueFacets(string value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x27AF400", Offset = "0x27ADA00", VA = "0x1827AF400")]
	internal Exception CheckValueFacets(string value, XmlSchemaDatatype datatype, bool verifyUri)
	{
		return null;
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x27AF810", Offset = "0x27ADE10", VA = "0x1827AF810", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x27AF650", Offset = "0x27ADC50", VA = "0x1827AF650")]
	private bool MatchEnumeration(string value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x27AF060", Offset = "0x27AD660", VA = "0x1827AF060")]
	private Exception CheckBuiltInFacets(string s, XmlTypeCode typeCode, bool verifyUri)
	{
		return null;
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public StringFacetsChecker()
	{
	}
}
