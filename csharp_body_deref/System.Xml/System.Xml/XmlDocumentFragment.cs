using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A1")]
public class XmlDocumentFragment : XmlNode
{
	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x18")]
	private XmlLinkedNode lastChild;

	[Token(Token = "0x1700021E")]
	public override string Name
	{
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x44937B0", Offset = "0x44937B0", VA = "0x44937B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021F")]
	public override string LocalName
	{
		[Token(Token = "0x60008A0")]
		[Address(RVA = "0x44937E0", Offset = "0x44937E0", VA = "0x44937E0", Slot = "39")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000220")]
	public override XmlNodeType NodeType
	{
		[Token(Token = "0x60008A1")]
		[Address(RVA = "0x4493810", Offset = "0x4493810", VA = "0x4493810", Slot = "11")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000221")]
	public override XmlNode ParentNode
	{
		[Token(Token = "0x60008A2")]
		[Address(RVA = "0x4493820", Offset = "0x4493820", VA = "0x4493820", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public override XmlDocument OwnerDocument
	{
		[Token(Token = "0x60008A3")]
		[Address(RVA = "0x4493830", Offset = "0x4493830", VA = "0x4493830", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000223")]
	public override string InnerXml
	{
		[Token(Token = "0x60008A4")]
		[Address(RVA = "0x4493890", Offset = "0x4493890", VA = "0x4493890", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000224")]
	internal override bool IsContainer
	{
		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x4493C20", Offset = "0x4493C20", VA = "0x4493C20", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000225")]
	internal override XmlLinkedNode LastNode
	{
		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x4493C30", Offset = "0x4493C30", VA = "0x4493C30", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x4493C40", Offset = "0x4493C40", VA = "0x4493C40", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000226")]
	internal override XPathNodeType XPNodeType
	{
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x4494170", Offset = "0x4494170", VA = "0x4494170", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x600089E")]
	[Address(RVA = "0x4493710", Offset = "0x4493710", VA = "0x4493710")]
	protected internal XmlDocumentFragment(XmlDocument ownerDocument)
	{
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x4493BA0", Offset = "0x4493BA0", VA = "0x4493BA0", Slot = "34")]
	public override XmlNode CloneNode(bool deep)
	{
		return null;
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x4493C50", Offset = "0x4493C50", VA = "0x4493C50", Slot = "30")]
	internal override bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x4493CA0", Offset = "0x4493CA0", VA = "0x4493CA0", Slot = "32")]
	internal override bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x4493D10", Offset = "0x4493D10", VA = "0x4493D10", Slot = "31")]
	internal override bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x4493D70", Offset = "0x4493D70", VA = "0x4493D70", Slot = "46")]
	public override void WriteTo(XmlWriter w)
	{
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x4493D90", Offset = "0x4493D90", VA = "0x4493D90", Slot = "47")]
	public override void WriteContentTo(XmlWriter w)
	{
	}
}
