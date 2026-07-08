using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200009E")]
public class XmlComment : XmlCharacterData
{
	[Token(Token = "0x170001F3")]
	public override string Name
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x448E080", Offset = "0x448E080", VA = "0x448E080", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public override string LocalName
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x448E0B0", Offset = "0x448E0B0", VA = "0x448E0B0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x448E0E0", Offset = "0x448E0E0", VA = "0x448E0E0", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x170001F6")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x6000825")]
		[Address(RVA = "0x448E1A0", Offset = "0x448E1A0", VA = "0x448E1A0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x448E050", Offset = "0x448E050", VA = "0x448E050")]
	protected internal XmlComment(string comment, XmlDocument doc)
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x448E0F0", Offset = "0x448E0F0", VA = "0x448E0F0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x448E150", Offset = "0x448E150", VA = "0x448E150", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x448E190", Offset = "0x448E190", VA = "0x448E190", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
