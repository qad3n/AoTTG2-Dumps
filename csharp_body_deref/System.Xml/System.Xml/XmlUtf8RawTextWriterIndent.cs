// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlUtf8RawTextWriterIndent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200006E")]
internal class XmlUtf8RawTextWriterIndent : XmlUtf8RawTextWriter
{
	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x90")]
	protected int indentLevel;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x94")]
	protected bool newLineOnAttributes;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x98")]
	protected string indentChars;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0xA0")]
	protected bool mixedContent;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0xA8")]
	private BitStack mixedContentStack;

	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0xB0")]
	protected ConformanceLevel conformanceLevel;

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x60B39F0", Offset = "0x60B29F0", VA = "0x60B39F0")]
	public XmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x60B3B40", Offset = "0x60B2B40", VA = "0x60B3B40", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x60B3C10", Offset = "0x60B2C10", VA = "0x60B3C10", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x60B3C70", Offset = "0x60B2C70", VA = "0x60B3C70", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x60B3CE0", Offset = "0x60B2CE0", VA = "0x60B3CE0", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x60B3CF0", Offset = "0x60B2CF0", VA = "0x60B3CF0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x60B3D60", Offset = "0x60B2D60", VA = "0x60B3D60", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x60B3DD0", Offset = "0x60B2DD0", VA = "0x60B3DD0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x60B3E10", Offset = "0x60B2E10", VA = "0x60B3E10", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x60B3E20", Offset = "0x60B2E20", VA = "0x60B3E20", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x60B3E60", Offset = "0x60B2E60", VA = "0x60B3E60", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x60B3EA0", Offset = "0x60B2EA0", VA = "0x60B3EA0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x60B3EB0", Offset = "0x60B2EB0", VA = "0x60B3EB0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x60B3EC0", Offset = "0x60B2EC0", VA = "0x60B3EC0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x60B3ED0", Offset = "0x60B2ED0", VA = "0x60B3ED0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x60B3F30", Offset = "0x60B2F30", VA = "0x60B3F30", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x60B3F90", Offset = "0x60B2F90", VA = "0x60B3F90", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x60B3FE0", Offset = "0x60B2FE0", VA = "0x60B3FE0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x60B4030", Offset = "0x60B3030", VA = "0x60B4030", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x60B4080", Offset = "0x60B3080", VA = "0x60B4080", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x60B3A20", Offset = "0x60B2A20", VA = "0x60B3A20")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x60B3B90", Offset = "0x60B2B90", VA = "0x60B3B90")]
	private void WriteIndent()
	{
	}
}
