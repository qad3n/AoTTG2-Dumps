// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.HtmlEncodedRawTextWriterIndent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4689A40", Offset = "0x4689A40", VA = "0x4689A40")]
	public HtmlEncodedRawTextWriterIndent(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4689AF0", Offset = "0x4689AF0", VA = "0x4689AF0")]
	public HtmlEncodedRawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4689B50", Offset = "0x4689B50", VA = "0x4689B50", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4689B70", Offset = "0x4689B70", VA = "0x4689B70", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4689DE0", Offset = "0x4689DE0", VA = "0x4689DE0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4689E80", Offset = "0x4689E80", VA = "0x4689E80", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4689F60", Offset = "0x4689F60", VA = "0x4689F60", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x468A010", Offset = "0x468A010", VA = "0x468A010", Slot = "48")]
	protected override void FlushBuffer()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4689AA0", Offset = "0x4689AA0", VA = "0x4689AA0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4689D90", Offset = "0x4689D90", VA = "0x4689D90")]
	private void WriteIndent()
	{
	}
}
