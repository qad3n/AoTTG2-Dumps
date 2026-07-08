using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B9")]
public class XmlText : XmlCharacterData
{
	[Token(Token = "0x170002CD")]
	public override string Name
	{
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x44A7310", Offset = "0x44A7310", VA = "0x44A7310", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CE")]
	public override string LocalName
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x44A7340", Offset = "0x44A7340", VA = "0x44A7340", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CF")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x44A7370", Offset = "0x44A7370", VA = "0x44A7370", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002D0")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x44A7380", Offset = "0x44A7380", VA = "0x44A7380", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D1")]
	public override string Value
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x44A7460", Offset = "0x44A7460", VA = "0x44A7460", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x44A7480", Offset = "0x44A7480", VA = "0x44A7480", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x44A7590", Offset = "0x44A7590", VA = "0x44A7590", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002D3")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x44A75A0", Offset = "0x44A75A0", VA = "0x44A75A0", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002D4")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x44A75B0", Offset = "0x44A75B0", VA = "0x44A75B0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x44999B0", Offset = "0x44999B0", VA = "0x44999B0")]
	internal XmlText(string strData)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x44999A0", Offset = "0x44999A0", VA = "0x44999A0")]
	protected internal XmlText(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x44A7400", Offset = "0x44A7400", VA = "0x44A7400", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x44A7540", Offset = "0x44A7540", VA = "0x44A7540", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x44A7580", Offset = "0x44A7580", VA = "0x44A7580", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
