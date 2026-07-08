using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000022")]
internal class HtmlEncodedRawTextWriterIndent : HtmlEncodedRawTextWriter
{
	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0xEC")]
	private int indentLevel;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0xF0")]
	private int endBlockPos;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0xF8")]
	private string indentChars;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x100")]
	private bool newLineOnAttributes;

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4357970", Offset = "0x4357970", VA = "0x4357970")]
	public HtmlEncodedRawTextWriterIndent(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4357A20", Offset = "0x4357A20", VA = "0x4357A20")]
	public HtmlEncodedRawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4357A80", Offset = "0x4357A80", VA = "0x4357A80", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4357AA0", Offset = "0x4357AA0", VA = "0x4357AA0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4357D10", Offset = "0x4357D10", VA = "0x4357D10", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4357DB0", Offset = "0x4357DB0", VA = "0x4357DB0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4357E90", Offset = "0x4357E90", VA = "0x4357E90", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4357F40", Offset = "0x4357F40", VA = "0x4357F40", Slot = "48")]
	protected override void FlushBuffer()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x43579D0", Offset = "0x43579D0", VA = "0x43579D0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4357CC0", Offset = "0x4357CC0", VA = "0x4357CC0")]
	private void WriteIndent()
	{
	}
}
