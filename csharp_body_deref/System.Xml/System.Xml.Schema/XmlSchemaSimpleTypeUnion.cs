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
		[Address(RVA = "0x4733090", Offset = "0x4733090", VA = "0x4733090")]
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
		[Address(RVA = "0x47330A0", Offset = "0x47330A0", VA = "0x47330A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600177C")]
		[Address(RVA = "0x47330B0", Offset = "0x47330B0", VA = "0x47330B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700068B")]
	[XmlIgnore]
	public XmlSchemaSimpleType[] BaseMemberTypes
	{
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x47330C0", Offset = "0x47330C0", VA = "0x47330C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x47330D0", Offset = "0x47330D0", VA = "0x47330D0")]
	internal void SetBaseMemberTypes(XmlSchemaSimpleType[] baseMemberTypes)
	{
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x47330E0", Offset = "0x47330E0", VA = "0x47330E0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x4733280", Offset = "0x4733280", VA = "0x4733280")]
	public XmlSchemaSimpleTypeUnion()
	{
	}
}
