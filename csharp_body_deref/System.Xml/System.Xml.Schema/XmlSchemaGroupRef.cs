// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaGroupRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023A")]
public class XmlSchemaGroupRef : XmlSchemaParticle
{
	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x78")]
	private XmlQualifiedName refName;

	[Token(Token = "0x4000BA7")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaGroupBase particle;

	[Token(Token = "0x4000BA8")]
	[FieldOffset(Offset = "0x88")]
	private XmlSchemaGroup refined;

	[Token(Token = "0x1700062D")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x6001680")]
		[Address(RVA = "0x4724F00", Offset = "0x4724F00", VA = "0x4724F00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x4722670", Offset = "0x4722670", VA = "0x4722670")]
		set
		{
		}
	}

	[Token(Token = "0x1700062E")]
	[XmlIgnore]
	public XmlSchemaGroupBase Particle
	{
		[Token(Token = "0x6001682")]
		[Address(RVA = "0x4724F10", Offset = "0x4724F10", VA = "0x4724F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700062F")]
	[XmlIgnore]
	internal XmlSchemaGroup Redefined
	{
		[Token(Token = "0x6001684")]
		[Address(RVA = "0x4724F30", Offset = "0x4724F30", VA = "0x4724F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001685")]
		[Address(RVA = "0x4724F40", Offset = "0x4724F40", VA = "0x4724F40")]
		set
		{
		}
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x4724F20", Offset = "0x4724F20", VA = "0x4724F20")]
	internal void SetParticle(XmlSchemaGroupBase value)
	{
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x4724F60", Offset = "0x4724F60", VA = "0x4724F60")]
	public XmlSchemaGroupRef()
	{
	}
}
