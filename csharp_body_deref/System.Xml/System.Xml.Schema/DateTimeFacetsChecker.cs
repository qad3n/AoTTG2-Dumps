// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.DateTimeFacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D4")]
internal class DateTimeFacetsChecker : FacetsChecker
{
	[Token(Token = "0x6001239")]
	[Address(RVA = "0x27A3C20", Offset = "0x27A2220", VA = "0x1827A3C20", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x27A37D0", Offset = "0x27A1DD0", VA = "0x1827A37D0", Slot = "10")]
	internal override Exception CheckValueFacets(DateTime value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x27A3CA0", Offset = "0x27A22A0", VA = "0x1827A3CA0", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x27A3D20", Offset = "0x27A2320", VA = "0x1827A3D20")]
	private bool MatchEnumeration(DateTime value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DateTimeFacetsChecker()
	{
	}
}
