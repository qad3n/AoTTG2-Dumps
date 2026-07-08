using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000185")]
internal sealed class RangeContentValidator : ContentValidator
{
	[Token(Token = "0x40007A0")]
	[FieldOffset(Offset = "0x18")]
	private BitSet firstpos;

	[Token(Token = "0x40007A1")]
	[FieldOffset(Offset = "0x20")]
	private BitSet[] followpos;

	[Token(Token = "0x40007A2")]
	[FieldOffset(Offset = "0x28")]
	private BitSet positionsWithRangeTerminals;

	[Token(Token = "0x40007A3")]
	[FieldOffset(Offset = "0x30")]
	private SymbolsDictionary symbols;

	[Token(Token = "0x40007A4")]
	[FieldOffset(Offset = "0x38")]
	private Positions positions;

	[Token(Token = "0x40007A5")]
	[FieldOffset(Offset = "0x40")]
	private int minMaxNodesCount;

	[Token(Token = "0x40007A6")]
	[FieldOffset(Offset = "0x44")]
	private int endMarkerPos;

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x450F8C0", Offset = "0x450F8C0", VA = "0x450F8C0")]
	internal RangeContentValidator(BitSet firstpos, BitSet[] followpos, SymbolsDictionary symbols, Positions positions, int endMarkerPos, XmlSchemaContentType contentType, bool isEmptiable, BitSet positionsWithRangeTerminals, int minmaxNodesCount)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x450F9A0", Offset = "0x450F9A0", VA = "0x450F9A0", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x450FB90", Offset = "0x450FB90", VA = "0x450FB90", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x45105F0", Offset = "0x45105F0", VA = "0x45105F0", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x4510600", Offset = "0x4510600", VA = "0x4510600", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x45108B0", Offset = "0x45108B0", VA = "0x45108B0", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
