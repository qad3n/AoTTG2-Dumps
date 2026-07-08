using System.Collections;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025B")]
internal class XmlSchemaSubstitutionGroup : XmlSchemaObject
{
	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x38")]
	private ArrayList membersList;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x40")]
	private XmlQualifiedName examplar;

	[Token(Token = "0x1700068C")]
	[XmlIgnore]
	internal ArrayList Members
	{
		[Token(Token = "0x6001781")]
		[Address(RVA = "0x43F5B80", Offset = "0x43F5B80", VA = "0x43F5B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068D")]
	[XmlIgnore]
	internal XmlQualifiedName Examplar
	{
		[Token(Token = "0x6001782")]
		[Address(RVA = "0x43F5B90", Offset = "0x43F5B90", VA = "0x43F5B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001783")]
		[Address(RVA = "0x43F5BA0", Offset = "0x43F5BA0", VA = "0x43F5BA0")]
		set
		{
		}
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x43F5BB0", Offset = "0x43F5BB0", VA = "0x43F5BB0")]
	public XmlSchemaSubstitutionGroup()
	{
	}
}
