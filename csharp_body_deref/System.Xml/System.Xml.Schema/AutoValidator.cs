using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000163")]
internal class AutoValidator : BaseValidator
{
	[Token(Token = "0x170003F1")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x6000F4A")]
		[Address(RVA = "0x4502570", Offset = "0x4502570", VA = "0x4502570", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x4502400", Offset = "0x4502400", VA = "0x4502400")]
	public AutoValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x4502580", Offset = "0x4502580", VA = "0x4502580", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6000F4C")]
	[Address(RVA = "0x4502A50", Offset = "0x4502A50", VA = "0x4502A50", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6000F4D")]
	[Address(RVA = "0x4502A60", Offset = "0x4502A60", VA = "0x4502A60", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6000F4E")]
	[Address(RVA = "0x4502660", Offset = "0x4502660", VA = "0x4502660")]
	private ValidationType DetectValidationType()
	{
		return default(ValidationType);
	}
}
