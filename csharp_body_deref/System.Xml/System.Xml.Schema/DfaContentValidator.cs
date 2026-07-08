using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000182")]
internal sealed class DfaContentValidator : ContentValidator
{
	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0x18")]
	private int[][] transitionTable;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0x20")]
	private SymbolsDictionary symbols;

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x450E800", Offset = "0x450E800", VA = "0x450E800")]
	internal DfaContentValidator(int[][] transitionTable, SymbolsDictionary symbols, XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x450EBC0", Offset = "0x450EBC0", VA = "0x450EBC0", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x450EC20", Offset = "0x450EC20", VA = "0x450EC20", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x450ED40", Offset = "0x450ED40", VA = "0x450ED40", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x450ED50", Offset = "0x450ED50", VA = "0x450ED50", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x450EF80", Offset = "0x450EF80", VA = "0x450EF80", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
