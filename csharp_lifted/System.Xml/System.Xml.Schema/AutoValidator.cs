// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.AutoValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000163")]
internal class AutoValidator : BaseValidator
{
	[Token(Token = "0x170003F1")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x613EB00", Offset = "0x613DB00", VA = "0x613EB00", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x613E990", Offset = "0x613D990", VA = "0x613E990")]
	public AutoValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x613EB10", Offset = "0x613DB10", VA = "0x613EB10", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x613F200", Offset = "0x613E200", VA = "0x613F200", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x613F210", Offset = "0x613E210", VA = "0x613F210", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x613EBF0", Offset = "0x613DBF0", VA = "0x613EBF0")]
	private ValidationType DetectValidationType()
	{
		return default(ValidationType);
	}
}
