// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.AllElementsContentValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x484E480", Offset = "0x484E480", VA = "0x484E480", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x484E240", Offset = "0x484E240", VA = "0x484E240")]
	public AllElementsContentValidator(XmlSchemaContentType contentType, int size, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x484E350", Offset = "0x484E350", VA = "0x484E350")]
	public bool AddElement(XmlQualifiedName name, object particle, bool isEmptiable)
	{
		return default(bool);
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x484E4A0", Offset = "0x484E4A0", VA = "0x484E4A0", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x484E530", Offset = "0x484E530", VA = "0x484E530", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x484E640", Offset = "0x484E640", VA = "0x484E640", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x484E680", Offset = "0x484E680", VA = "0x484E680", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x484EB40", Offset = "0x484EB40", VA = "0x484EB40", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
