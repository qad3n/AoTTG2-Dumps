using Il2CppDummyDll;

namespace System.Xml.Linq;

[Token(Token = "0x200000D")]
public class XDocument : XContainer
{
	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x30")]
	private XDeclaration _declaration;

	[Token(Token = "0x1700000E")]
	public XDeclaration Declaration
	{
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4341880", Offset = "0x4341880", VA = "0x4341880")]
		get
		{
			return null;
		}
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4341890", Offset = "0x4341890", VA = "0x4341890")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x43418A0", Offset = "0x43418A0", VA = "0x43418A0", Slot = "7")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000010")]
	public XElement Root
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x43418B0", Offset = "0x43418B0", VA = "0x43418B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x43417F0", Offset = "0x43417F0", VA = "0x43417F0")]
	public XDocument()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4341800", Offset = "0x4341800", VA = "0x4341800")]
	public XDocument(XDocument other)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x43418F0", Offset = "0x43418F0", VA = "0x43418F0", Slot = "8")]
	public override void WriteTo(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4341A30", Offset = "0x4341A30", VA = "0x4341A30", Slot = "11")]
	internal override void AddAttribute(XAttribute a)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4341A80", Offset = "0x4341A80", VA = "0x4341A80", Slot = "12")]
	internal override void AddAttributeSkipNotify(XAttribute a)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4341AD0", Offset = "0x4341AD0", VA = "0x4341AD0", Slot = "10")]
	internal override XNode CloneNode()
	{
		return null;
	}

	[Token(Token = "0x6000053")]
	private T GetFirstNode<T>() where T : XNode
	{
		return null;
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4341BB0", Offset = "0x4341BB0", VA = "0x4341BB0")]
	internal static bool IsWhitespace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4341C20", Offset = "0x4341C20", VA = "0x4341C20", Slot = "13")]
	internal override void ValidateNode(XNode node, XNode previous)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4341DB0", Offset = "0x4341DB0", VA = "0x4341DB0")]
	private void ValidateDocument(XNode previous, XmlNodeType allowBefore, XmlNodeType allowAfter)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4341ED0", Offset = "0x4341ED0", VA = "0x4341ED0", Slot = "14")]
	internal override void ValidateString(string s)
	{
	}
}
