// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaComplexContent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021A")]
public class XmlSchemaComplexContent : XmlSchemaContentModel
{
	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaContent content;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x58")]
	private bool isMixed;

	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x59")]
	private bool hasMixedAttribute;

	[Token(Token = "0x170005D2")]
	[XmlAttribute("mixed")]
	public bool IsMixed
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x6028880", Offset = "0x6027880", VA = "0x6028880")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x6028890", Offset = "0x6027890", VA = "0x6028890")]
		set
		{
		}
	}

	[Token(Token = "0x170005D3")]
	[XmlElement("restriction", typeof(XmlSchemaComplexContentRestriction))]
	[XmlElement("extension", typeof(XmlSchemaComplexContentExtension))]
	public override XmlSchemaContent Content
	{
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x60288A0", Offset = "0x60278A0", VA = "0x60288A0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600159E")]
		[Address(RVA = "0x60288B0", Offset = "0x60278B0", VA = "0x60288B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170005D4")]
	[XmlIgnore]
	internal bool HasMixedAttribute
	{
		[Token(Token = "0x600159F")]
		[Address(RVA = "0x60288C0", Offset = "0x60278C0", VA = "0x60288C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x60288D0", Offset = "0x60278D0", VA = "0x60288D0")]
	public XmlSchemaComplexContent()
	{
	}
}
