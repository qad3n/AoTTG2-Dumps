using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B7")]
public class XmlProcessingInstruction : XmlLinkedNode
{
	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x20")]
	private string target;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x28")]
	private string data;

	[Token(Token = "0x170002BD")]
	public override string Name
	{
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x44A6CF0", Offset = "0x44A6CF0", VA = "0x44A6CF0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BE")]
	public override string LocalName
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x44A6D20", Offset = "0x44A6D20", VA = "0x44A6D20", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BF")]
	public override string Value
	{
		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x44A6D40", Offset = "0x44A6D40", VA = "0x44A6D40", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x44A6D50", Offset = "0x44A6D50", VA = "0x44A6D50", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	public string Data
	{
		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x44A6E10", Offset = "0x44A6E10", VA = "0x44A6E10")]
		set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	public override string InnerText
	{
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x44A6ED0", Offset = "0x44A6ED0", VA = "0x44A6ED0", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x44A6EE0", Offset = "0x44A6EE0", VA = "0x44A6EE0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x44A6FA0", Offset = "0x44A6FA0", VA = "0x44A6FA0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002C3")]
	internal override string XPLocalName
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x44A7030", Offset = "0x44A7030", VA = "0x44A7030", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C4")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x44A7050", Offset = "0x44A7050", VA = "0x44A7050", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x449B4E0", Offset = "0x449B4E0", VA = "0x449B4E0")]
	protected internal XmlProcessingInstruction(string target, string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x44A6FB0", Offset = "0x44A6FB0", VA = "0x44A6FB0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x44A6FF0", Offset = "0x44A6FF0", VA = "0x44A6FF0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x44A7020", Offset = "0x44A7020", VA = "0x44A7020", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
