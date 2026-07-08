using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008E")]
internal abstract class DocumentXPathNodeIterator_ElemDescendants : XPathNodeIterator
{
	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x18")]
	private DocumentXPathNavigator nav;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x20")]
	private int level;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x24")]
	private int position;

	[Token(Token = "0x170001C5")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x4489490", Offset = "0x4489490", VA = "0x4489490", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x44894A0", Offset = "0x44894A0", VA = "0x44894A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x4489340", Offset = "0x4489340", VA = "0x4489340")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x44893E0", Offset = "0x44893E0", VA = "0x44893E0")]
	internal DocumentXPathNodeIterator_ElemDescendants(DocumentXPathNodeIterator_ElemDescendants other)
	{
	}

	[Token(Token = "0x6000791")]
	protected abstract bool Match(XmlNode node);

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x44894B0", Offset = "0x44894B0", VA = "0x44894B0")]
	protected void SetPosition(int pos)
	{
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x44894C0", Offset = "0x44894C0", VA = "0x44894C0", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
