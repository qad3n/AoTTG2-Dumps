using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.XPath;

[Token(Token = "0x2000286")]
internal sealed class AbsoluteQuery : ContextQuery
{
	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x443A080", Offset = "0x443A080", VA = "0x443A080")]
	public AbsoluteQuery()
	{
	}

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x443A0C0", Offset = "0x443A0C0", VA = "0x443A0C0")]
	private AbsoluteQuery(AbsoluteQuery other)
	{
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x443A140", Offset = "0x443A140", VA = "0x443A140", Slot = "14")]
	public override object Evaluate(XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x443A1C0", Offset = "0x443A1C0", VA = "0x443A1C0", Slot = "6")]
	public override XPathNodeIterator Clone()
	{
		return null;
	}
}
