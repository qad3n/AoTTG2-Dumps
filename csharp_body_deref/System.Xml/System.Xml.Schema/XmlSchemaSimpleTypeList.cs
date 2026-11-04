// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleTypeList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000258")]
public class XmlSchemaSimpleTypeList : XmlSchemaSimpleTypeContent
{
	[Token(Token = "0x4000C02")]
	[FieldOffset(Offset = "0x50")]
	private XmlQualifiedName itemTypeName;

	[Token(Token = "0x4000C03")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaSimpleType itemType;

	[Token(Token = "0x4000C04")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaSimpleType baseItemType;

	[Token(Token = "0x17000683")]
	[XmlAttribute("itemType")]
	public XmlQualifiedName ItemTypeName
	{
		[Token(Token = "0x600176B")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x267EF20", Offset = "0x267D520", VA = "0x18267EF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000684")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType ItemType
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176E")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x17000685")]
	[XmlIgnore]
	public XmlSchemaSimpleType BaseItemType
	{
		[Token(Token = "0x600176F")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001770")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x267ED80", Offset = "0x267D380", VA = "0x18267ED80", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x267EEB0", Offset = "0x267D4B0", VA = "0x18267EEB0")]
	public XmlSchemaSimpleTypeList()
	{
	}
}
