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
	[Address(RVA = "0x485F130", Offset = "0x485F130", VA = "0x485F130")]
	internal Numeric10FacetsChecker(decimal minVal, decimal maxVal)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x486E470", Offset = "0x486E470", VA = "0x486E470", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x486E4E0", Offset = "0x486E4E0", VA = "0x486E4E0", Slot = "6")]
	internal override Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x486EC40", Offset = "0x486EC40", VA = "0x486EC40", Slot = "7")]
	internal override Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x486ECB0", Offset = "0x486ECB0", VA = "0x486ECB0", Slot = "8")]
	internal override Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x486ED20", Offset = "0x486ED20", VA = "0x486ED20", Slot = "9")]
	internal override Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x486ED90", Offset = "0x486ED90", VA = "0x486ED90", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x486EB10", Offset = "0x486EB10", VA = "0x486EB10")]
	internal bool MatchEnumeration(decimal value, ArrayList enumeration, XmlValueConverter valueConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x4865D70", Offset = "0x4865D70", VA = "0x4865D70")]
	internal Exception CheckTotalAndFractionDigits(decimal value, int totalDigits, int fractionDigits, bool checkTotal, bool checkFraction)
	{
		return null;
	}
}
