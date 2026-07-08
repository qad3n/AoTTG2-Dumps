using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200024D")]
public abstract class XmlSchemaParticle : XmlSchemaAnnotated
{
	[Token(Token = "0x200024E")]
	[Flags]
	private enum Occurs
	{
		[Token(Token = "0x4000BDC")]
		None = 0,
		[Token(Token = "0x4000BDD")]
		Min = 1,
		[Token(Token = "0x4000BDE")]
		Max = 2
	}

	[Token(Token = "0x200024F")]
	private class EmptyParticle : XmlSchemaParticle
	{
		[Token(Token = "0x17000664")]
		internal override bool IsEmpty
		{
			[Token(Token = "0x6001713")]
			[Address(RVA = "0x43EA9A0", Offset = "0x43EA9A0", VA = "0x43EA9A0", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001714")]
		[Address(RVA = "0x43EA8C0", Offset = "0x43EA8C0", VA = "0x43EA8C0")]
		public EmptyParticle()
		{
		}
	}

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x50")]
	private decimal minOccurs;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x60")]
	private decimal maxOccurs;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x70")]
	private Occurs flags;

	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly XmlSchemaParticle Empty;

	[Token(Token = "0x1700065E")]
	[XmlAttribute("minOccurs")]
	public string MinOccursString
	{
		[Token(Token = "0x6001706")]
		[Address(RVA = "0x43E9D80", Offset = "0x43E9D80", VA = "0x43E9D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x43E9DF0", Offset = "0x43E9DF0", VA = "0x43E9DF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700065F")]
	[XmlAttribute("maxOccurs")]
	public string MaxOccursString
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0x43E9F40", Offset = "0x43E9F40", VA = "0x43E9F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x43EA040", Offset = "0x43EA040", VA = "0x43EA040")]
		set
		{
		}
	}

	[Token(Token = "0x17000660")]
	[XmlIgnore]
	public decimal MinOccurs
	{
		[Token(Token = "0x600170A")]
		[Address(RVA = "0x43EA250", Offset = "0x43EA250", VA = "0x43EA250")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x600170B")]
		[Address(RVA = "0x43EA260", Offset = "0x43EA260", VA = "0x43EA260")]
		set
		{
		}
	}

	[Token(Token = "0x17000661")]
	[XmlIgnore]
	public decimal MaxOccurs
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0x43EA380", Offset = "0x43EA380", VA = "0x43EA380")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x600170D")]
		[Address(RVA = "0x43EA390", Offset = "0x43EA390", VA = "0x43EA390")]
		set
		{
		}
	}

	[Token(Token = "0x17000662")]
	internal virtual bool IsEmpty
	{
		[Token(Token = "0x600170E")]
		[Address(RVA = "0x43EA500", Offset = "0x43EA500", VA = "0x43EA500", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000663")]
	internal virtual string NameString
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x43EA570", Offset = "0x43EA570", VA = "0x43EA570", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x43EA590", Offset = "0x43EA590", VA = "0x43EA590")]
	internal XmlQualifiedName GetQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x43EA700", Offset = "0x43EA700", VA = "0x43EA700")]
	protected XmlSchemaParticle()
	{
	}
}
