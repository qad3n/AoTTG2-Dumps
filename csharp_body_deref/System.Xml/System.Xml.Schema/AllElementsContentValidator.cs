using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000186")]
internal sealed class AllElementsContentValidator : ContentValidator
{
	[Token(Token = "0x40007A7")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable elements;

	[Token(Token = "0x40007A8")]
	[FieldOffset(Offset = "0x20")]
	private object[] particles;

	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x28")]
	private BitSet isRequired;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x30")]
	private int countRequired;

	[Token(Token = "0x17000431")]
	public override bool IsEmptiable
	{
		[Token(Token = "0x6001044")]
		[Address(RVA = "0x4510D20", Offset = "0x4510D20", VA = "0x4510D20", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x4510AE0", Offset = "0x4510AE0", VA = "0x4510AE0")]
	public AllElementsContentValidator(XmlSchemaContentType contentType, int size, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x4510BF0", Offset = "0x4510BF0", VA = "0x4510BF0")]
	public bool AddElement(XmlQualifiedName name, object particle, bool isEmptiable)
	{
		return default(bool);
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x4510D40", Offset = "0x4510D40", VA = "0x4510D40", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x4510DD0", Offset = "0x4510DD0", VA = "0x4510DD0", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x4510EE0", Offset = "0x4510EE0", VA = "0x4510EE0", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x4510F20", Offset = "0x4510F20", VA = "0x4510F20", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x45113E0", Offset = "0x45113E0", VA = "0x45113E0", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
