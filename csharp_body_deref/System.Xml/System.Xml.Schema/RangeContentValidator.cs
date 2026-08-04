// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.RangeContentValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x484D020", Offset = "0x484D020", VA = "0x484D020")]
	internal RangeContentValidator(BitSet firstpos, BitSet[] followpos, SymbolsDictionary symbols, Positions positions, int endMarkerPos, XmlSchemaContentType contentType, bool isEmptiable, BitSet positionsWithRangeTerminals, int minmaxNodesCount)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x484D100", Offset = "0x484D100", VA = "0x484D100", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x484D2F0", Offset = "0x484D2F0", VA = "0x484D2F0", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x484DD50", Offset = "0x484DD50", VA = "0x484DD50", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x484DD60", Offset = "0x484DD60", VA = "0x484DD60", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x484E010", Offset = "0x484E010", VA = "0x484E010", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
