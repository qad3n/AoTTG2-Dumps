using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A8")]
public abstract class XmlLinkedNode : XmlNode
{
	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x18")]
	internal XmlLinkedNode next;

	[Token(Token = "0x17000259")]
	public override XmlNode PreviousSibling
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x4497CC0", Offset = "0x4497CC0", VA = "0x4497CC0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025A")]
	public override XmlNode NextSibling
	{
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x4497D20", Offset = "0x4497D20", VA = "0x4497D20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x44942C0", Offset = "0x44942C0", VA = "0x44942C0")]
	internal XmlLinkedNode(XmlDocument doc)
	{
	}
}
