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
	[Address(RVA = "0x45219D0", Offset = "0x45219D0", VA = "0x45219D0")]
	internal Numeric10FacetsChecker(decimal minVal, decimal maxVal)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x4530D10", Offset = "0x4530D10", VA = "0x4530D10", Slot = "5")]
	internal override Exception CheckValueFacets(object value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x4530D80", Offset = "0x4530D80", VA = "0x4530D80", Slot = "6")]
	internal override Exception CheckValueFacets(decimal value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x45314E0", Offset = "0x45314E0", VA = "0x45314E0", Slot = "7")]
	internal override Exception CheckValueFacets(long value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x4531550", Offset = "0x4531550", VA = "0x4531550", Slot = "8")]
	internal override Exception CheckValueFacets(int value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x45315C0", Offset = "0x45315C0", VA = "0x45315C0", Slot = "9")]
	internal override Exception CheckValueFacets(short value, XmlSchemaDatatype datatype)
	{
		return null;
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x4531630", Offset = "0x4531630", VA = "0x4531630", Slot = "17")]
	internal override bool MatchEnumeration(object value, ArrayList enumeration, XmlSchemaDatatype datatype)
	{
		return default(bool);
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x45313B0", Offset = "0x45313B0", VA = "0x45313B0")]
	internal bool MatchEnumeration(decimal value, ArrayList enumeration, XmlValueConverter valueConverter)
	{
		return default(bool);
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x4528610", Offset = "0x4528610", VA = "0x4528610")]
	internal Exception CheckTotalAndFractionDigits(decimal value, int totalDigits, int fractionDigits, bool checkTotal, bool checkFraction)
	{
		return null;
	}
}
