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
		[Address(RVA = "0x450B6A0", Offset = "0x450B6A0", VA = "0x450B6A0")]
		get
		{
			return default(XmlSchemaContentType);
		}
	}

	[Token(Token = "0x1700042E")]
	public bool PreserveWhitespace
	{
		[Token(Token = "0x600100A")]
		[Address(RVA = "0x450B6B0", Offset = "0x450B6B0", VA = "0x450B6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042F")]
	public virtual bool IsEmptiable
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x450B6D0", Offset = "0x450B6D0", VA = "0x450B6D0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000430")]
	public bool IsOpen
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x450B6E0", Offset = "0x450B6E0", VA = "0x450B6E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x450B700", Offset = "0x450B700", VA = "0x450B700")]
		set
		{
		}
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x450B650", Offset = "0x450B650", VA = "0x450B650")]
	public ContentValidator(XmlSchemaContentType contentType)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x450B670", Offset = "0x450B670", VA = "0x450B670")]
	protected ContentValidator(XmlSchemaContentType contentType, bool isOpen, bool isEmptiable)
	{
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x450B710", Offset = "0x450B710", VA = "0x450B710", Slot = "5")]
	public virtual void InitValidation(ValidationState context)
	{
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x450B720", Offset = "0x450B720", VA = "0x450B720", Slot = "6")]
	public virtual object ValidateElement(XmlQualifiedName name, ValidationState context, out int errorCode)
	{
		return null;
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x450B740", Offset = "0x450B740", VA = "0x450B740", Slot = "7")]
	public virtual bool CompleteValidation(ValidationState context)
	{
		return default(bool);
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x450B750", Offset = "0x450B750", VA = "0x450B750", Slot = "8")]
	public virtual ArrayList ExpectedElements(ValidationState context, bool isRequiredOnly)
	{
		return null;
	}

	[Token(Token = "0x6001012")]
	[Address(RVA = "0x450B760", Offset = "0x450B760", VA = "0x450B760", Slot = "9")]
	public virtual ArrayList ExpectedParticles(ValidationState context, bool isRequiredOnly, XmlSchemaSet schemaSet)
	{
		return null;
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x450B770", Offset = "0x450B770", VA = "0x450B770")]
	public static void AddParticleToExpected(XmlSchemaParticle p, XmlSchemaSet schemaSet, ArrayList particles)
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x450B7D0", Offset = "0x450B7D0", VA = "0x450B7D0")]
	public static void AddParticleToExpected(XmlSchemaParticle p, XmlSchemaSet schemaSet, ArrayList particles, bool global)
	{
	}
}
