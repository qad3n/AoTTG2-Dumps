using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025C")]
internal class XmlSchemaSubstitutionGroupV1Compat : XmlSchemaSubstitutionGroup
{
	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x48")]
	private XmlSchemaChoice choice;

	[Token(Token = "0x1700068E")]
	[XmlIgnore]
	internal XmlSchemaChoice Choice
	{
		[Token(Token = "0x6001785")]
		[Address(RVA = "0x43F5C50", Offset = "0x43F5C50", VA = "0x43F5C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x43F5C60", Offset = "0x43F5C60", VA = "0x43F5C60")]
	public XmlSchemaSubstitutionGroupV1Compat()
	{
	}
}
