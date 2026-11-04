// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Xml.SecurityParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Security;
using Il2CppDummyDll;

namespace Mono.Xml;

[Token(Token = "0x2000047")]
internal class SecurityParser : Mono.Xml.SmallXmlParser, Mono.Xml.SmallXmlParser.IContentHandler
{
	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x68")]
	private SecurityElement root;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x70")]
	private SecurityElement current;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x78")]
	private Stack stack;

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x194D5C0", Offset = "0x194BBC0", VA = "0x18194D5C0")]
	public SecurityParser()
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x194D0C0", Offset = "0x194B6C0", VA = "0x18194D0C0")]
	public void LoadXml(string xml)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
	public SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x194D290", Offset = "0x194B890", VA = "0x18194D290", Slot = "6")]
	public void OnStartElement(string name, IAttrList attrs)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x194D1E0", Offset = "0x194B7E0", VA = "0x18194D1E0", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x194D160", Offset = "0x194B760", VA = "0x18194D160", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
