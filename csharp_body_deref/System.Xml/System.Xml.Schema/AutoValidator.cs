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
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x2776180", Offset = "0x2774780", VA = "0x182776180")]
	public AutoValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x2776090", Offset = "0x2774690", VA = "0x182776090", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x2775CB0", Offset = "0x27742B0", VA = "0x182775CB0")]
	private ValidationType DetectValidationType()
	{
		return default(ValidationType);
	}
}
