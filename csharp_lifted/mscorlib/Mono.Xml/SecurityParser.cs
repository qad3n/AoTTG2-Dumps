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

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x52D99E0", Offset = "0x52D89E0", VA = "0x52D99E0")]
	public SecurityParser()
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x52D9B80", Offset = "0x52D8B80", VA = "0x52D9B80")]
	public void LoadXml(string xml)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x52D9E00", Offset = "0x52D8E00", VA = "0x52D9E00")]
	public SecurityElement ToXml()
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x52D9E10", Offset = "0x52D8E10", VA = "0x52D9E10", Slot = "4")]
	public void OnStartParsing(Mono.Xml.SmallXmlParser parser)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x52D9E20", Offset = "0x52D8E20", VA = "0x52D9E20", Slot = "8")]
	public void OnProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x52D9E30", Offset = "0x52D8E30", VA = "0x52D9E30", Slot = "10")]
	public void OnIgnorableWhitespace(string s)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x52D9E40", Offset = "0x52D8E40", VA = "0x52D9E40", Slot = "6")]
	public void OnStartElement(string name, IAttrList attrs)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x52DA150", Offset = "0x52D9150", VA = "0x52DA150", Slot = "7")]
	public void OnEndElement(string name)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x52DA1D0", Offset = "0x52D91D0", VA = "0x52DA1D0", Slot = "9")]
	public void OnChars(string ch)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x52DA240", Offset = "0x52D9240", VA = "0x52DA240", Slot = "5")]
	public void OnEndParsing(Mono.Xml.SmallXmlParser parser)
	{
	}
}
