// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Numeric10FacetsChecker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001D1")]
internal class Numeric10FacetsChecker : FacetsChecker
{
	[Token(Token = "0x4000884")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] signs;

	[Token(Token = "0x4000885")]
	[FieldOffset(Offset = "0x10")]
	private decimal maxValue;

	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x20")]
	private decimal minValue;

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x615D660", Offset = "0x615C660", VA = "0x615D660")]
	internal Numeric10FacetsChecker(decimal minVal, decimal maxVal)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x616C0D0", Offset = "0x616B0D0", VA = "0x616C0D0", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x616C140", Offset = "0x616B140", VA = "0x616C140", Slot = "6")]
	internal override Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x616C8C0", Offset = "0x616B8C0", VA = "0x616C8C0", Slot = "7")]
	internal override Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x616C930", Offset = "0x616B930", VA = "0x616C930", Slot = "8")]
	internal override Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x616C9A0", Offset = "0x616B9A0", VA = "0x616C9A0", Slot = "9")]
	internal override Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x616CA10", Offset = "0x616BA10", VA = "0x616CA10", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x616C790", Offset = "0x616B790", VA = "0x616C790")]
	internal bool MatchEnumeration(decimal value, ArrayList enumeration, XmlValueConverter valueConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x61641C0", Offset = "0x61631C0", VA = "0x61641C0")]
	internal Exception CheckTotalAndFractionDigits(decimal value, int totalDigits, int fractionDigits, bool checkTotal, bool checkFraction)
	{
		return null;
	}
}
