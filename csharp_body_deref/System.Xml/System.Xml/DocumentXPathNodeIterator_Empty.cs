using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008D")]
internal sealed class DocumentXPathNodeIterator_Empty : XPathNodeIterator
{
	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x18")]
	private XPathNavigator nav;

	[Token(Token = "0x170001C2")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4489310", Offset = "0x4489310", VA = "0x4489310", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public override int CurrentPosition
	{
		[Token(Token = "0x600078D")]
		[Address(RVA = "0x4489320", Offset = "0x4489320", VA = "0x4489320", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C4")]
	public override int Count
	{
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x4489330", Offset = "0x4489330", VA = "0x4489330", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x4488CF0", Offset = "0x4488CF0", VA = "0x4488CF0")]
	internal DocumentXPathNodeIterator_Empty(DocumentXPathNavigator nav)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x4489230", Offset = "0x4489230", VA = "0x4489230")]
	internal DocumentXPathNodeIterator_Empty(DocumentXPathNodeIterator_Empty other)
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x4489280", Offset = "0x4489280", VA = "0x4489280", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x4489300", Offset = "0x4489300", VA = "0x4489300", Slot = "7")]
	public override bool MoveNext()
	{
		return default(bool);
	}
}
