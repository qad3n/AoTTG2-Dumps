using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D2")]
internal abstract class XPathDocumentBaseIterator : XPathNodeIterator
{
	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x18")]
	protected XPathDocumentNavigator ctxt;

	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0x20")]
	protected int pos;

	[Token(Token = "0x1700074C")]
	public override XPathNavigator Current
	{
		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x4451970", Offset = "0x4451970", VA = "0x4451970", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074D")]
	public override int CurrentPosition
	{
		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x4451980", Offset = "0x4451980", VA = "0x4451980", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C6A")]
	[Address(RVA = "0x44517B0", Offset = "0x44517B0", VA = "0x44517B0")]
	protected XPathDocumentBaseIterator(XPathDocumentNavigator ctxt)
	{
	}

	[Token(Token = "0x6001C6B")]
	[Address(RVA = "0x44518E0", Offset = "0x44518E0", VA = "0x44518E0")]
	protected XPathDocumentBaseIterator(XPathDocumentBaseIterator iter)
	{
	}
}
