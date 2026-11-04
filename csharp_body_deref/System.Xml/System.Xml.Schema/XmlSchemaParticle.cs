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
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001714")]
		[Address(RVA = "0x266E7E0", Offset = "0x266CDE0", VA = "0x18266E7E0")]
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
		[Address(RVA = "0x26767A0", Offset = "0x2674DA0", VA = "0x1826767A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x2676BE0", Offset = "0x26751E0", VA = "0x182676BE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700065F")]
	[XmlAttribute("maxOccurs")]
	public string MaxOccursString
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0x2676680", Offset = "0x2674C80", VA = "0x182676680")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x2676810", Offset = "0x2674E10", VA = "0x182676810")]
		set
		{
		}
	}

	[Token(Token = "0x17000660")]
	[XmlIgnore]
	public decimal MinOccurs
	{
		[Token(Token = "0x600170A")]
		[Address(RVA = "0xD73860", Offset = "0xD71E60", VA = "0x180D73860")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x600170B")]
		[Address(RVA = "0x2676D50", Offset = "0x2675350", VA = "0x182676D50")]
		set
		{
		}
	}

	[Token(Token = "0x17000661")]
	[XmlIgnore]
	public decimal MaxOccurs
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0x1BD8500", Offset = "0x1BD6B00", VA = "0x181BD8500")]
		get
		{
			return 0m;
		}
		[Token(Token = "0x600170D")]
		[Address(RVA = "0x2676A40", Offset = "0x2675040", VA = "0x182676A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000662")]
	internal virtual bool IsEmpty
	{
		[Token(Token = "0x600170E")]
		[Address(RVA = "0x2676600", Offset = "0x2674C00", VA = "0x182676600", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000663")]
	internal virtual string NameString
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x26762F0", Offset = "0x26748F0", VA = "0x1826762F0")]
	internal XmlQualifiedName GetQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x2676580", Offset = "0x2674B80", VA = "0x182676580")]
	protected XmlSchemaParticle()
	{
	}
}
