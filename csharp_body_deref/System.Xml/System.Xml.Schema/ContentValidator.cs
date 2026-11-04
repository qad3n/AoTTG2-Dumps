// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ContentValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000180")]
internal class ContentValidator
{
	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x10")]
	private XmlSchemaContentType contentType;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x14")]
	private bool isOpen;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0x15")]
	private bool isEmptiable;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ContentValidator Empty;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ContentValidator TextOnly;

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ContentValidator Mixed;

	[Token(Token = "0x400078F")]
	[FieldOffset(Offset = "0x18")]
	public static readonly ContentValidator Any;

	[Token(Token = "0x1700042D")]
	public XmlSchemaContentType ContentType
	{
		[Token(Token = "0x6001009")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x1700042E")]
	public bool PreserveWhitespace
	{
		[Token(Token = "0x600100A")]
		[Address(RVA = "0x277D250", Offset = "0x277B850", VA = "0x18277D250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042F")]
	public virtual bool IsEmptiable
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x1A78700", Offset = "0x1A76D00", VA = "0x181A78700", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000430")]
	public bool IsOpen
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x277D230", Offset = "0x277B830", VA = "0x18277D230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		set
		{
		}
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x277D1C0", Offset = "0x277B7C0", VA = "0x18277D1C0")]
	public ContentValidator(XmlSchemaContentType contentType)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x277D1F0", Offset = "0x277B7F0", VA = "0x18277D1F0")]
	protected ContentValidator(XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
	{
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x277D020", Offset = "0x277B620", VA = "0x18277D020", Slot = "6")]
	public virtual object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
	public virtual bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "8")]
	public virtual ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
	public virtual ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x277CFA0", Offset = "0x277B5A0", VA = "0x18277CFA0")]
	public static void AddParticleToExpected(XmlSchemaParticle p, XmlSchemaSet schemaSet, ArrayList particles)
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x277CD20", Offset = "0x277B320", VA = "0x18277CD20")]
	public static void AddParticleToExpected(XmlSchemaParticle p, XmlSchemaSet schemaSet, ArrayList particles, bool global)
	{
	}
}
