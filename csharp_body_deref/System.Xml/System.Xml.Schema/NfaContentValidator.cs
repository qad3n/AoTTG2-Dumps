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
	[Address(RVA = "0x450F1A0", Offset = "0x450F1A0", VA = "0x450F1A0")]
	internal NfaContentValidator(BitSet firstpos, BitSet[] followpos, SymbolsDictionary symbols, Positions positions, int endMarkerPos, XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x450F270", Offset = "0x450F270", VA = "0x450F270", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x450F350", Offset = "0x450F350", VA = "0x450F350", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x450F510", Offset = "0x450F510", VA = "0x450F510", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x450F550", Offset = "0x450F550", VA = "0x450F550", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x450F750", Offset = "0x450F750", VA = "0x450F750", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
