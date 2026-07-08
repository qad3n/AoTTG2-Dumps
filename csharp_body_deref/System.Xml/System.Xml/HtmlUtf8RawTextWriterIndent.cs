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
	[Address(RVA = "0x4455C80", Offset = "0x4455C80", VA = "0x4455C80")]
	public HtmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4455D20", Offset = "0x4455D20", VA = "0x4455D20", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4455D40", Offset = "0x4455D40", VA = "0x4455D40", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x44560C0", Offset = "0x44560C0", VA = "0x44560C0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4456160", Offset = "0x4456160", VA = "0x4456160", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4456230", Offset = "0x4456230", VA = "0x4456230", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x44562D0", Offset = "0x44562D0", VA = "0x44562D0", Slot = "48")]
	protected override void FlushBuffer()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x4455CD0", Offset = "0x4455CD0", VA = "0x4455CD0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4456080", Offset = "0x4456080", VA = "0x4456080")]
	private void WriteIndent()
	{
	}
}
