// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.DfaContentValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x277D8C0", Offset = "0x277BEC0", VA = "0x18277D8C0")]
	internal DfaContentValidator(int[][] transitionTable, SymbolsDictionary symbols, XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x277D690", Offset = "0x277BC90", VA = "0x18277D690", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x277D6F0", Offset = "0x277BCF0", VA = "0x18277D6F0", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x277D330", Offset = "0x277B930", VA = "0x18277D330", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x277D350", Offset = "0x277B950", VA = "0x18277D350", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x277D520", Offset = "0x277BB20", VA = "0x18277D520", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
