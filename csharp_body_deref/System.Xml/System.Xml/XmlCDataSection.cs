using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009A")]
public class XmlCDataSection : XmlCharacterData
{
	[Token(Token = "0x170001E6")]
	public override string Name
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x448D800", Offset = "0x448D800", VA = "0x448D800", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E7")]
	public override string LocalName
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x448D830", Offset = "0x448D830", VA = "0x448D830", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E8")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x448D860", Offset = "0x448D860", VA = "0x448D860", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001E9")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x448D870", Offset = "0x448D870", VA = "0x448D870", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EA")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x448D9A0", Offset = "0x448D9A0", VA = "0x448D9A0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001EB")]
	internal override bool IsText
	{
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x448D9B0", Offset = "0x448D9B0", VA = "0x448D9B0", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public override XmlNode PreviousText
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x448D9C0", Offset = "0x448D9C0", VA = "0x448D9C0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x448D7A0", Offset = "0x448D7A0", VA = "0x448D7A0")]
	protected internal XmlCDataSection(string data, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x448D8F0", Offset = "0x448D8F0", VA = "0x448D8F0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x448D950", Offset = "0x448D950", VA = "0x448D950", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x448D990", Offset = "0x448D990", VA = "0x448D990", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
