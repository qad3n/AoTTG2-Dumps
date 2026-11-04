// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleTypeUnion
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025A")]
public class XmlSchemaSimpleTypeUnion : XmlSchemaSimpleTypeContent
{
	[Token(Token = "0x4000C08")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObjectCollection baseTypes;

	[Token(Token = "0x4000C09")]
	[FieldOffset(Offset = "0x58")]
	private XmlQualifiedName[] memberTypes;

	[Token(Token = "0x4000C0A")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaSimpleType[] baseMemberTypes;

	[Token(Token = "0x17000689")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaObjectCollection BaseTypes
	{
		[Token(Token = "0x600177A")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068A")]
	[XmlAttribute("memberTypes")]
	public XmlQualifiedName[] MemberTypes
	{
		[Token(Token = "0x600177B")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600177C")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x1700068B")]
	[XmlIgnore]
	public XmlSchemaSimpleType[] BaseMemberTypes
	{
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
	internal void SetBaseMemberTypes(XmlSchemaSimpleType[] baseMemberTypes)
	{
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x267F260", Offset = "0x267D860", VA = "0x18267F260", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x267F430", Offset = "0x267DA30", VA = "0x18267F430")]
	public XmlSchemaSimpleTypeUnion()
	{
	}
}
