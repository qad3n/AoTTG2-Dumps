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
	[FieldOffset(Offset = "0xC0")]
	private int indentLevel;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0xC4")]
	private int endBlockPos;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0xC8")]
	private string indentChars;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0xD0")]
	private bool newLineOnAttributes;

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x26E0280", Offset = "0x26DE880", VA = "0x1826E0280")]
	public HtmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x26DFD80", Offset = "0x26DE380", VA = "0x1826DFD80", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x26DFF60", Offset = "0x26DE560", VA = "0x1826DFF60", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x26DFCC0", Offset = "0x26DE2C0", VA = "0x1826DFCC0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x26DFDB0", Offset = "0x26DE3B0", VA = "0x1826DFDB0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x26DFEC0", Offset = "0x26DE4C0", VA = "0x1826DFEC0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x26DFC40", Offset = "0x26DE240", VA = "0x1826DFC40", Slot = "48")]
	protected override void FlushBuffer()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x26DFC60", Offset = "0x26DE260", VA = "0x1826DFC60")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x26DFE70", Offset = "0x26DE470", VA = "0x1826DFE70")]
	private void WriteIndent()
	{
	}
}
