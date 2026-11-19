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
		[Address(RVA = "0x614CEA0", Offset = "0x614BEA0", VA = "0x614CEA0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x614CC50", Offset = "0x614BC50", VA = "0x614CC50")]
	public AllElementsContentValidator(XmlSchemaContentType contentType, int size, bool isEmptiable)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x614CD60", Offset = "0x614BD60", VA = "0x614CD60")]
	public bool AddElement(XmlQualifiedName name, object particle, bool isEmptiable)
	{
		return default(bool);
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x614CEC0", Offset = "0x614BEC0", VA = "0x614CEC0", Slot = "5")]
	public override void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x614CF50", Offset = "0x614BF50", VA = "0x614CF50", Slot = "6")]
	public override object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x614D060", Offset = "0x614C060", VA = "0x614D060", Slot = "7")]
	public override bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x614D0A0", Offset = "0x614C0A0", VA = "0x614D0A0", Slot = "8")]
	public override ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x614D4E0", Offset = "0x614C4E0", VA = "0x614D4E0", Slot = "9")]
	public override ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}
}
