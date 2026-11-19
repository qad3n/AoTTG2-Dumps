// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlEncodedRawTextWriterIndent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200004B")]
internal class XmlEncodedRawTextWriterIndent : XmlEncodedRawTextWriter
{
	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0xC0")]
	protected int indentLevel;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0xC4")]
	protected bool newLineOnAttributes;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0xC8")]
	protected string indentChars;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0xD0")]
	protected bool mixedContent;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0xD8")]
	private BitStack mixedContentStack;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0xE0")]
	protected ConformanceLevel conformanceLevel;

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x60A28C0", Offset = "0x60A18C0", VA = "0x60A28C0")]
	public XmlEncodedRawTextWriterIndent(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x60A2A10", Offset = "0x60A1A10", VA = "0x60A2A10")]
	public XmlEncodedRawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x60A2A40", Offset = "0x60A1A40", VA = "0x60A2A40", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x60A2B10", Offset = "0x60A1B10", VA = "0x60A2B10", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x60A2B70", Offset = "0x60A1B70", VA = "0x60A2B70", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x60A2BE0", Offset = "0x60A1BE0", VA = "0x60A2BE0", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x60A2BF0", Offset = "0x60A1BF0", VA = "0x60A2BF0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x60A2C60", Offset = "0x60A1C60", VA = "0x60A2C60", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x60A2CD0", Offset = "0x60A1CD0", VA = "0x60A2CD0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x60A2D10", Offset = "0x60A1D10", VA = "0x60A2D10", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x60A2D20", Offset = "0x60A1D20", VA = "0x60A2D20", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x60A2D60", Offset = "0x60A1D60", VA = "0x60A2D60", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x60A2DA0", Offset = "0x60A1DA0", VA = "0x60A2DA0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x60A2DB0", Offset = "0x60A1DB0", VA = "0x60A2DB0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x60A2DC0", Offset = "0x60A1DC0", VA = "0x60A2DC0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x60A2DD0", Offset = "0x60A1DD0", VA = "0x60A2DD0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x60A2DE0", Offset = "0x60A1DE0", VA = "0x60A2DE0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x60A2DF0", Offset = "0x60A1DF0", VA = "0x60A2DF0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x60A2E00", Offset = "0x60A1E00", VA = "0x60A2E00", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x60A2E10", Offset = "0x60A1E10", VA = "0x60A2E10", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x60A2E20", Offset = "0x60A1E20", VA = "0x60A2E20", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x60A28F0", Offset = "0x60A18F0", VA = "0x60A28F0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x60A2A90", Offset = "0x60A1A90", VA = "0x60A2A90")]
	private void WriteIndent()
	{
	}
}
