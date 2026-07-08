using System.Collections;
using System.Security;
using Il2CppDummyDll;

namespace Mono.Xml;

[Token(Token = "0x2000029")]
internal class SecurityParser : Mono.Xml.SmallXmlParser, Mono.Xml.SmallXmlParser.IContentHandler
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x68")]
	private SecurityElement root;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x70")]
	private SecurityElement current;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x78")]
	private Stack stack;

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4DE8850", Offset = "0x4DE8850", VA = "0x4DE8850")]
	public SecurityParser()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4DE89F0", Offset = "0x4DE89F0", VA = "0x4DE89F0")]
	public void LoadXml(string xml)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4DE8C70", Offset = "0x4DE8C70", VA = "0x4DE8C70")]
	public SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4DE8C80", Offset = "0x4DE8C80", VA = "0x4DE8C80", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4DE8C90", Offset = "0x4DE8C90", VA = "0x4DE8C90", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4DE8CA0", Offset = "0x4DE8CA0", VA = "0x4DE8CA0", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4DE8CB0", Offset = "0x4DE8CB0", VA = "0x4DE8CB0", Slot = "6")]
	public void OnStartElement(string name, IAttrList attrs)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4DE8FC0", Offset = "0x4DE8FC0", VA = "0x4DE8FC0", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4DE9040", Offset = "0x4DE9040", VA = "0x4DE9040", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4DE90B0", Offset = "0x4DE90B0", VA = "0x4DE90B0", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
