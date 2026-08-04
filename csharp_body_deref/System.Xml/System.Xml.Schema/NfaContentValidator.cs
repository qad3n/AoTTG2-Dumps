// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.NfaContentValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000183")]
internal sealed class NfaContentValidator : ContentValidator
{
	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x18")]
	private BitSet firstpos;

	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0x20")]
	private BitSet[] followpos;

	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0x28")]
	private SymbolsDictionary symbols;

	[Token(Token = "0x400079C")]
	[FieldOffset(Offset = "0x30")]
	private Positions positions;

	[Token(Token = "0x400079D")]
	[FieldOffset(Offset = "0x38")]
	private int endMarkerPos;

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x484C900", Offset = "0x484C900", VA = "0x484C900")]
	internal NfaContentValidator(BitSet firstpos, BitSet[] followpos, SymbolsDictionary symbols, Positions positions, int endMarkerPos, XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x484C9D0", Offset = "0x484C9D0", VA = "0x484C9D0", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x484CAB0", Offset = "0x484CAB0", VA = "0x484CAB0", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x484CC70", Offset = "0x484CC70", VA = "0x484CC70", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x484CCB0", Offset = "0x484CCB0", VA = "0x484CCB0", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x484CEB0", Offset = "0x484CEB0", VA = "0x484CEB0", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
