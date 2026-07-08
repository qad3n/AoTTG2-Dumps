using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200006E")]
internal class XmlUtf8RawTextWriterIndent : XmlUtf8RawTextWriter
{
	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x90")]
	protected int indentLevel;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x94")]
	protected bool newLineOnAttributes;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x98")]
	protected string indentChars;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0xA0")]
	protected bool mixedContent;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0xA8")]
	private BitStack mixedContentStack;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0xB0")]
	protected ConformanceLevel conformanceLevel;

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x4471840", Offset = "0x4471840", VA = "0x4471840")]
	public XmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x4471990", Offset = "0x4471990", VA = "0x4471990", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x4471A60", Offset = "0x4471A60", VA = "0x4471A60", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x4471AC0", Offset = "0x4471AC0", VA = "0x4471AC0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x4471B30", Offset = "0x4471B30", VA = "0x4471B30", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x4471B40", Offset = "0x4471B40", VA = "0x4471B40", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x4471BB0", Offset = "0x4471BB0", VA = "0x4471BB0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x4471C20", Offset = "0x4471C20", VA = "0x4471C20", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x4471C60", Offset = "0x4471C60", VA = "0x4471C60", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x4471C70", Offset = "0x4471C70", VA = "0x4471C70", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4471CB0", Offset = "0x4471CB0", VA = "0x4471CB0", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x4471CF0", Offset = "0x4471CF0", VA = "0x4471CF0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x4471D00", Offset = "0x4471D00", VA = "0x4471D00", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x4471D10", Offset = "0x4471D10", VA = "0x4471D10", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x4471D20", Offset = "0x4471D20", VA = "0x4471D20", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x4471D80", Offset = "0x4471D80", VA = "0x4471D80", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x4471DE0", Offset = "0x4471DE0", VA = "0x4471DE0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x4471E20", Offset = "0x4471E20", VA = "0x4471E20", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x4471E60", Offset = "0x4471E60", VA = "0x4471E60", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x4471EB0", Offset = "0x4471EB0", VA = "0x4471EB0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x4471860", Offset = "0x4471860", VA = "0x4471860")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x44719E0", Offset = "0x44719E0", VA = "0x44719E0")]
	private void WriteIndent()
	{
	}
}
