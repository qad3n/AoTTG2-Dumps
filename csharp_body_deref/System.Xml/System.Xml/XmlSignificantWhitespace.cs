using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000B8")]
public class XmlSignificantWhitespace : XmlCharacterData
{
	[Token(Token = "0x170002C5")]
	public override string Name
	{
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x44A7060", Offset = "0x44A7060", VA = "0x44A7060", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C6")]
	public override string LocalName
	{
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x44A7090", Offset = "0x44A7090", VA = "0x44A7090", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x44A70C0", Offset = "0x44A70C0", VA = "0x44A70C0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170002C8")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x44A70D0", Offset = "0x44A70D0", VA = "0x44A70D0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C9")]
	public override string Value
	{
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x44A71B0", Offset = "0x44A71B0", VA = "0x44A71B0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x44A71D0", Offset = "0x44A71D0", VA = "0x44A71D0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x44A72B0", Offset = "0x44A72B0", VA = "0x44A72B0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170002CB")]
	internal override bool IsText
	{
		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x44A72D0", Offset = "0x44A72D0", VA = "0x44A72D0", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CC")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x44A72E0", Offset = "0x44A72E0", VA = "0x44A72E0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x449B3A0", Offset = "0x449B3A0", VA = "0x449B3A0")]
	protected internal XmlSignificantWhitespace(string strData, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x44A7150", Offset = "0x44A7150", VA = "0x44A7150", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x44A7260", Offset = "0x44A7260", VA = "0x44A7260", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x44A72A0", Offset = "0x44A72A0", VA = "0x44A72A0", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
