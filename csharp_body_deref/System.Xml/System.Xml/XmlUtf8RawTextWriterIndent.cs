// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlUtf8RawTextWriterIndent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x26F8E90", Offset = "0x26F7490", VA = "0x1826F8E90")]
	public XmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x26F8510", Offset = "0x26F6B10", VA = "0x1826F8510", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x26F8BC0", Offset = "0x26F71C0", VA = "0x1826F8BC0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x26F82C0", Offset = "0x26F68C0", VA = "0x1826F82C0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x1C5E460", Offset = "0x1C5CA60", VA = "0x181C5E460", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x26F8570", Offset = "0x26F6B70", VA = "0x1826F8570", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x26F86B0", Offset = "0x26F6CB0", VA = "0x1826F86B0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x26F8AA0", Offset = "0x26F70A0", VA = "0x1826F8AA0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x26F8350", Offset = "0x26F6950", VA = "0x1826F8350", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x26F83D0", Offset = "0x26F69D0", VA = "0x1826F83D0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x26F88A0", Offset = "0x26F6EA0", VA = "0x1826F88A0", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x26F85F0", Offset = "0x26F6BF0", VA = "0x1826F85F0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x26F8360", Offset = "0x26F6960", VA = "0x1826F8360", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x26F8D40", Offset = "0x26F7340", VA = "0x1826F8D40", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x26F8CD0", Offset = "0x26F72D0", VA = "0x1826F8CD0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x26F8CD0", Offset = "0x26F72D0", VA = "0x1826F8CD0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x26F8370", Offset = "0x26F6970", VA = "0x1826F8370", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x26F8A40", Offset = "0x26F7040", VA = "0x1826F8A40", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x26F89E0", Offset = "0x26F6FE0", VA = "0x1826F89E0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x26F8330", Offset = "0x26F6930", VA = "0x1826F8330", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x26F81A0", Offset = "0x26F67A0", VA = "0x1826F81A0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x26F8800", Offset = "0x26F6E00", VA = "0x1826F8800")]
	private void WriteIndent()
	{
	}
}
