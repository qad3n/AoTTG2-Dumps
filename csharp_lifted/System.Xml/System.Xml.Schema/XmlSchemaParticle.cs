// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaParticle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x6030220", Offset = "0x602F220", VA = "0x6030220", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001714")]
		[Address(RVA = "0x6030140", Offset = "0x602F140", VA = "0x6030140")]
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
		[Address(RVA = "0x602F610", Offset = "0x602E610", VA = "0x602F610")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x602F680", Offset = "0x602E680", VA = "0x602F680")]
		set
		{
		}
	}

	[Token(Token = "0x1700065F")]
	[XmlAttribute("maxOccurs")]
	public string MaxOccursString
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0x602F7D0", Offset = "0x602E7D0", VA = "0x602F7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x602F8D0", Offset = "0x602E8D0", VA = "0x602F8D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000660")]
	[XmlIgnore]
	public decimal MinOccurs
	{
		[Token(Token = "0x600170A")]
		[Address(RVA = "0x602FAE0", Offset = "0x602EAE0", VA = "0x602FAE0")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x600170B")]
		[Address(RVA = "0x602FAF0", Offset = "0x602EAF0", VA = "0x602FAF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000661")]
	[XmlIgnore]
	public decimal MaxOccurs
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0x602FC10", Offset = "0x602EC10", VA = "0x602FC10")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x600170D")]
		[Address(RVA = "0x602FC20", Offset = "0x602EC20", VA = "0x602FC20")]
		set
		{
		}
	}

	[Token(Token = "0x17000662")]
	internal virtual bool IsEmpty
	{
		[Token(Token = "0x600170E")]
		[Address(RVA = "0x602FD90", Offset = "0x602ED90", VA = "0x602FD90", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000663")]
	internal virtual string NameString
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x602FE00", Offset = "0x602EE00", VA = "0x602FE00", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x602FE20", Offset = "0x602EE20", VA = "0x602FE20")]
	internal XmlQualifiedName GetQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x602FF80", Offset = "0x602EF80", VA = "0x602FF80")]
	protected XmlSchemaParticle()
	{
	}
}
