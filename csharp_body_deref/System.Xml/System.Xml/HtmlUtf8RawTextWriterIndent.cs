// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.HtmlUtf8RawTextWriterIndent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000025")]
internal class HtmlUtf8RawTextWriterIndent : HtmlUtf8RawTextWriter
{
	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0xBC")]
	private int indentLevel;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0xC0")]
	private int endBlockPos;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0xC8")]
	private string indentChars;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0xD0")]
	private bool newLineOnAttributes;

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x6098980", Offset = "0x6097980", VA = "0x6098980")]
	public HtmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x6098A20", Offset = "0x6097A20", VA = "0x6098A20", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x6098A40", Offset = "0x6097A40", VA = "0x6098A40", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x6098DA0", Offset = "0x6097DA0", VA = "0x6098DA0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x6098E40", Offset = "0x6097E40", VA = "0x6098E40", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x6098F10", Offset = "0x6097F10", VA = "0x6098F10", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x6098FB0", Offset = "0x6097FB0", VA = "0x6098FB0", Slot = "48")]
	protected override void FlushBuffer()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x60989D0", Offset = "0x60979D0", VA = "0x60989D0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x6098D60", Offset = "0x6097D60", VA = "0x6098D60")]
	private void WriteIndent()
	{
	}
}
