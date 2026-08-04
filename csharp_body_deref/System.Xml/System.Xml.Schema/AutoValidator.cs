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
		[Address(RVA = "0x483FCD0", Offset = "0x483FCD0", VA = "0x483FCD0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x483FB60", Offset = "0x483FB60", VA = "0x483FB60")]
	public AutoValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x483FCE0", Offset = "0x483FCE0", VA = "0x483FCE0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x48401B0", Offset = "0x48401B0", VA = "0x48401B0", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x48401C0", Offset = "0x48401C0", VA = "0x48401C0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x483FDC0", Offset = "0x483FDC0", VA = "0x483FDC0")]
	private ValidationType DetectValidationType()
	{
		return default(ValidationType);
	}
}
