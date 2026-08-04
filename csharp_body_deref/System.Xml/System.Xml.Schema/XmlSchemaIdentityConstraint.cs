// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaIdentityConstraint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023B")]
public class XmlSchemaIdentityConstraint : XmlSchemaAnnotated
{
	[Token(Token = "0x4000BA9")]
	[FieldOffset(Offset = "0x50")]
	private string name;

	[Token(Token = "0x4000BAA")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaXPath selector;

	[Token(Token = "0x4000BAB")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaObjectCollection fields;

	[Token(Token = "0x4000BAC")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName qualifiedName;

	[Token(Token = "0x4000BAD")]
	[FieldOffset(Offset = "0x70")]
	private CompiledIdentityConstraint compiledConstraint;

	[Token(Token = "0x17000630")]
	[XmlAttribute("name")]
	public string Name
	{
		[Token(Token = "0x6001687")]
		[Address(RVA = "0x4724FF0", Offset = "0x4724FF0", VA = "0x4724FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001688")]
		[Address(RVA = "0x4725000", Offset = "0x4725000", VA = "0x4725000")]
		set
		{
		}
	}

	[Token(Token = "0x17000631")]
	[XmlElement("selector", typeof(XmlSchemaXPath))]
	public XmlSchemaXPath Selector
	{
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x4725010", Offset = "0x4725010", VA = "0x4725010")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x4725020", Offset = "0x4725020", VA = "0x4725020")]
		set
		{
		}
	}

	[Token(Token = "0x17000632")]
	[XmlElement("field", typeof(XmlSchemaXPath))]
	public XmlSchemaObjectCollection Fields
	{
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x4725030", Offset = "0x4725030", VA = "0x4725030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000633")]
	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		[Token(Token = "0x600168C")]
		[Address(RVA = "0x4725040", Offset = "0x4725040", VA = "0x4725040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000634")]
	[XmlIgnore]
	internal CompiledIdentityConstraint CompiledConstraint
	{
		[Token(Token = "0x600168E")]
		[Address(RVA = "0x4725060", Offset = "0x4725060", VA = "0x4725060")]
		get
		{
			return null;
		}
		[Token(Token = "0x600168F")]
		[Address(RVA = "0x4725070", Offset = "0x4725070", VA = "0x4725070")]
		set
		{
		}
	}

	[Token(Token = "0x17000635")]
	[XmlIgnore]
	internal override string NameAttribute
	{
		[Token(Token = "0x6001690")]
		[Address(RVA = "0x4725080", Offset = "0x4725080", VA = "0x4725080", Slot = "11")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001691")]
		[Address(RVA = "0x4725090", Offset = "0x4725090", VA = "0x4725090", Slot = "12")]
		set
		{
		}
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x4725050", Offset = "0x4725050", VA = "0x4725050")]
	internal void SetQualifiedName(XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x47250A0", Offset = "0x47250A0", VA = "0x47250A0")]
	public XmlSchemaIdentityConstraint()
	{
	}
}
