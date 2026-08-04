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
			[Address(RVA = "0x4728100", Offset = "0x4728100", VA = "0x4728100", Slot = "14")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001714")]
		[Address(RVA = "0x4728020", Offset = "0x4728020", VA = "0x4728020")]
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
		[Address(RVA = "0x47274E0", Offset = "0x47274E0", VA = "0x47274E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x4727550", Offset = "0x4727550", VA = "0x4727550")]
		set
		{
		}
	}

	[Token(Token = "0x1700065F")]
	[XmlAttribute("maxOccurs")]
	public string MaxOccursString
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0x47276A0", Offset = "0x47276A0", VA = "0x47276A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001709")]
		[Address(RVA = "0x47277A0", Offset = "0x47277A0", VA = "0x47277A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000660")]
	[XmlIgnore]
	public decimal MinOccurs
	{
		[Token(Token = "0x600170A")]
		[Address(RVA = "0x47279B0", Offset = "0x47279B0", VA = "0x47279B0")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x600170B")]
		[Address(RVA = "0x47279C0", Offset = "0x47279C0", VA = "0x47279C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000661")]
	[XmlIgnore]
	public decimal MaxOccurs
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0x4727AE0", Offset = "0x4727AE0", VA = "0x4727AE0")]
		get
		{
			return default(decimal);
		}
		[Token(Token = "0x600170D")]
		[Address(RVA = "0x4727AF0", Offset = "0x4727AF0", VA = "0x4727AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000662")]
	internal virtual bool IsEmpty
	{
		[Token(Token = "0x600170E")]
		[Address(RVA = "0x4727C60", Offset = "0x4727C60", VA = "0x4727C60", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000663")]
	internal virtual string NameString
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x4727CD0", Offset = "0x4727CD0", VA = "0x4727CD0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001710")]
	[Address(RVA = "0x4727CF0", Offset = "0x4727CF0", VA = "0x4727CF0")]
	internal XmlQualifiedName GetQualifiedName()
	{
		return null;
	}

	[Token(Token = "0x6001711")]
	[Address(RVA = "0x4727E60", Offset = "0x4727E60", VA = "0x4727E60")]
	protected XmlSchemaParticle()
	{
	}
}
