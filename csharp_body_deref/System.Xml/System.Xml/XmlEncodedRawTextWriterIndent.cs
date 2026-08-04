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
	[Address(RVA = "0x479D6A0", Offset = "0x479D6A0", VA = "0x479D6A0")]
	public XmlEncodedRawTextWriterIndent(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x479D800", Offset = "0x479D800", VA = "0x479D800")]
	public XmlEncodedRawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x479D830", Offset = "0x479D830", VA = "0x479D830", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x479D900", Offset = "0x479D900", VA = "0x479D900", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x479D960", Offset = "0x479D960", VA = "0x479D960", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x479D9D0", Offset = "0x479D9D0", VA = "0x479D9D0", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x479D9E0", Offset = "0x479D9E0", VA = "0x479D9E0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x479DA50", Offset = "0x479DA50", VA = "0x479DA50", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x479DAC0", Offset = "0x479DAC0", VA = "0x479DAC0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x479DB00", Offset = "0x479DB00", VA = "0x479DB00", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x479DB10", Offset = "0x479DB10", VA = "0x479DB10", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x479DB50", Offset = "0x479DB50", VA = "0x479DB50", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x479DB90", Offset = "0x479DB90", VA = "0x479DB90", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x479DBA0", Offset = "0x479DBA0", VA = "0x479DBA0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x479DBB0", Offset = "0x479DBB0", VA = "0x479DBB0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x479DBC0", Offset = "0x479DBC0", VA = "0x479DBC0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x479DBD0", Offset = "0x479DBD0", VA = "0x479DBD0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x479DBE0", Offset = "0x479DBE0", VA = "0x479DBE0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x479DBF0", Offset = "0x479DBF0", VA = "0x479DBF0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x479DC00", Offset = "0x479DC00", VA = "0x479DC00", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x479DC10", Offset = "0x479DC10", VA = "0x479DC10", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x479D6C0", Offset = "0x479D6C0", VA = "0x479D6C0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x479D880", Offset = "0x479D880", VA = "0x479D880")]
	private void WriteIndent()
	{
	}
}
