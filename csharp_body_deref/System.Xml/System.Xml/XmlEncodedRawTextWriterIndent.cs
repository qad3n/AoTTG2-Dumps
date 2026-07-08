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
	[Address(RVA = "0x445FF40", Offset = "0x445FF40", VA = "0x445FF40")]
	public XmlEncodedRawTextWriterIndent(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x44600A0", Offset = "0x44600A0", VA = "0x44600A0")]
	public XmlEncodedRawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x44600D0", Offset = "0x44600D0", VA = "0x44600D0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x44601A0", Offset = "0x44601A0", VA = "0x44601A0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4460200", Offset = "0x4460200", VA = "0x4460200", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4460270", Offset = "0x4460270", VA = "0x4460270", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4460280", Offset = "0x4460280", VA = "0x4460280", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x44602F0", Offset = "0x44602F0", VA = "0x44602F0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x4460360", Offset = "0x4460360", VA = "0x4460360", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x44603A0", Offset = "0x44603A0", VA = "0x44603A0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x44603B0", Offset = "0x44603B0", VA = "0x44603B0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x44603F0", Offset = "0x44603F0", VA = "0x44603F0", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4460430", Offset = "0x4460430", VA = "0x4460430", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4460440", Offset = "0x4460440", VA = "0x4460440", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x4460450", Offset = "0x4460450", VA = "0x4460450", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x4460460", Offset = "0x4460460", VA = "0x4460460", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x4460470", Offset = "0x4460470", VA = "0x4460470", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x4460480", Offset = "0x4460480", VA = "0x4460480", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x4460490", Offset = "0x4460490", VA = "0x4460490", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x44604A0", Offset = "0x44604A0", VA = "0x44604A0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x44604B0", Offset = "0x44604B0", VA = "0x44604B0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x445FF60", Offset = "0x445FF60", VA = "0x445FF60")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x4460120", Offset = "0x4460120", VA = "0x4460120")]
	private void WriteIndent()
	{
	}
}
