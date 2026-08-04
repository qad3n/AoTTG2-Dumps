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
		[Address(RVA = "0x4732C90", Offset = "0x4732C90", VA = "0x4732C90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x4732CA0", Offset = "0x4732CA0", VA = "0x4732CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000684")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType ItemType
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x4732D30", Offset = "0x4732D30", VA = "0x4732D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176E")]
		[Address(RVA = "0x4732D40", Offset = "0x4732D40", VA = "0x4732D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000685")]
	[XmlIgnore]
	public XmlSchemaSimpleType BaseItemType
	{
		[Token(Token = "0x600176F")]
		[Address(RVA = "0x4732D50", Offset = "0x4732D50", VA = "0x4732D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001770")]
		[Address(RVA = "0x4732D60", Offset = "0x4732D60", VA = "0x4732D60")]
		set
		{
		}
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x4732D70", Offset = "0x4732D70", VA = "0x4732D70", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x4732E10", Offset = "0x4732E10", VA = "0x4732E10")]
	public XmlSchemaSimpleTypeList()
	{
	}
}
