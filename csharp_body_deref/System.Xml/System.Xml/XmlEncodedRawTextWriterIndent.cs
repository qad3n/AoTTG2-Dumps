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
	[Address(RVA = "0x26E6C00", Offset = "0x26E5200", VA = "0x1826E6C00")]
	public XmlEncodedRawTextWriterIndent(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x26E6C30", Offset = "0x26E5230", VA = "0x1826E6C30")]
	public XmlEncodedRawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x26E60F0", Offset = "0x26E46F0", VA = "0x1826E60F0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x26E6860", Offset = "0x26E4E60", VA = "0x1826E6860", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x26E5ED0", Offset = "0x26E44D0", VA = "0x1826E5ED0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x1D1FE40", Offset = "0x1D1E440", VA = "0x181D1FE40", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x26E6150", Offset = "0x26E4750", VA = "0x1826E6150", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x26E62A0", Offset = "0x26E48A0", VA = "0x1826E62A0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x26E6710", Offset = "0x26E4D10", VA = "0x1826E6710", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x26E6000", Offset = "0x26E4600", VA = "0x1826E6000", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x26E60B0", Offset = "0x26E46B0", VA = "0x1826E60B0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x26E64B0", Offset = "0x26E4AB0", VA = "0x1826E64B0", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x26E61D0", Offset = "0x26E47D0", VA = "0x1826E61D0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x26E6010", Offset = "0x26E4610", VA = "0x1826E6010", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x26E6A10", Offset = "0x26E5010", VA = "0x1826E6A10", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x26E6B80", Offset = "0x26E5180", VA = "0x1826E6B80", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x26E6990", Offset = "0x26E4F90", VA = "0x1826E6990", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x26E6020", Offset = "0x26E4620", VA = "0x1826E6020", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x26E6620", Offset = "0x26E4C20", VA = "0x1826E6620", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x26E66A0", Offset = "0x26E4CA0", VA = "0x1826E66A0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x26E5F40", Offset = "0x26E4540", VA = "0x1826E5F40", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x26E5DA0", Offset = "0x26E43A0", VA = "0x1826E5DA0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x26E6410", Offset = "0x26E4A10", VA = "0x1826E6410")]
	private void WriteIndent()
	{
	}
}
