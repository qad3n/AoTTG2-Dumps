using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009B")]
public abstract class XmlCharacterData : XmlLinkedNode
{
	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x20")]
	private string data;

	[Token(Token = "0x170001ED")]
	public override string Value
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x448D9F0", Offset = "0x448D9F0", VA = "0x448D9F0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x448DA10", Offset = "0x448DA10", VA = "0x448DA10", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	public override string InnerText
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x448DA30", Offset = "0x448DA30", VA = "0x448DA30", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x448DA50", Offset = "0x448DA50", VA = "0x448DA50", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	public virtual string Data
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x448DA70", Offset = "0x448DA70", VA = "0x448DA70", Slot = "62")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x448DAA0", Offset = "0x448DAA0", VA = "0x448DAA0", Slot = "63")]
		set
		{
		}
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x448D7D0", Offset = "0x448D7D0", VA = "0x448D7D0")]
	protected internal XmlCharacterData(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x448DB60", Offset = "0x448DB60", VA = "0x448DB60")]
	internal bool CheckOnData(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x448DB90", Offset = "0x448DB90", VA = "0x448DB90")]
	internal bool DecideXPNodeTypeForTextNodes(XmlNode node, ref XPathNodeType xnt)
	{
		return default(bool);
	}
}
