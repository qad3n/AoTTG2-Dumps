using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BB")]
public class XmlWhitespace : XmlCharacterData
{
	[Token(Token = "0x170002D7")]
	public override string Name
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x44A77E0", Offset = "0x44A77E0", VA = "0x44A77E0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D8")]
	public override string LocalName
	{
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x44A7810", Offset = "0x44A7810", VA = "0x44A7810", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D9")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x44A7840", Offset = "0x44A7840", VA = "0x44A7840", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002DA")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x44A7850", Offset = "0x44A7850", VA = "0x44A7850", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002DB")]
	public override string Value
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x44A78D0", Offset = "0x44A78D0", VA = "0x44A78D0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x44A78F0", Offset = "0x44A78F0", VA = "0x44A78F0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002DC")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x44A7A30", Offset = "0x44A7A30", VA = "0x44A7A30", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002DD")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A65")]
		[Address(RVA = "0x44A7A50", Offset = "0x44A7A50", VA = "0x44A7A50", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002DE")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A66")]
		[Address(RVA = "0x44A7A60", Offset = "0x44A7A60", VA = "0x44A7A60", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x449B440", Offset = "0x449B440", VA = "0x449B440")]
	protected internal XmlWhitespace(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x44A7980", Offset = "0x44A7980", VA = "0x44A7980", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x44A79E0", Offset = "0x44A79E0", VA = "0x44A79E0", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x44A7A20", Offset = "0x44A7A20", VA = "0x44A7A20", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
