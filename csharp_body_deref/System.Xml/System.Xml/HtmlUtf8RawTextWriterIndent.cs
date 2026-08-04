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
	[Address(RVA = "0x47933E0", Offset = "0x47933E0", VA = "0x47933E0")]
	public HtmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4793480", Offset = "0x4793480", VA = "0x4793480", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x47934A0", Offset = "0x47934A0", VA = "0x47934A0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4793820", Offset = "0x4793820", VA = "0x4793820", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x47938C0", Offset = "0x47938C0", VA = "0x47938C0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4793990", Offset = "0x4793990", VA = "0x4793990", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4793A30", Offset = "0x4793A30", VA = "0x4793A30", Slot = "48")]
	protected override void FlushBuffer()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4793430", Offset = "0x4793430", VA = "0x4793430")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x47937E0", Offset = "0x47937E0", VA = "0x47937E0")]
	private void WriteIndent()
	{
	}
}
