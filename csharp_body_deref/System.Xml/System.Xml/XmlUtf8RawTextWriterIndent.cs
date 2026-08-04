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
	[Address(RVA = "0x47AEFA0", Offset = "0x47AEFA0", VA = "0x47AEFA0")]
	public XmlUtf8RawTextWriterIndent(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005BB")]
	[Address(RVA = "0x47AF0F0", Offset = "0x47AF0F0", VA = "0x47AF0F0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60005BC")]
	[Address(RVA = "0x47AF1C0", Offset = "0x47AF1C0", VA = "0x47AF1C0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005BD")]
	[Address(RVA = "0x47AF220", Offset = "0x47AF220", VA = "0x47AF220", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60005BE")]
	[Address(RVA = "0x47AF290", Offset = "0x47AF290", VA = "0x47AF290", Slot = "39")]
	internal override void OnRootElement(ConformanceLevel currentConformanceLevel)
	{
	}

	[Token(Token = "0x60005BF")]
	[Address(RVA = "0x47AF2A0", Offset = "0x47AF2A0", VA = "0x47AF2A0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C0")]
	[Address(RVA = "0x47AF310", Offset = "0x47AF310", VA = "0x47AF310", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C1")]
	[Address(RVA = "0x47AF380", Offset = "0x47AF380", VA = "0x47AF380", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x47AF3C0", Offset = "0x47AF3C0", VA = "0x47AF3C0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x47AF3D0", Offset = "0x47AF3D0", VA = "0x47AF3D0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x47AF410", Offset = "0x47AF410", VA = "0x47AF410", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x47AF450", Offset = "0x47AF450", VA = "0x47AF450", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x47AF460", Offset = "0x47AF460", VA = "0x47AF460", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x47AF470", Offset = "0x47AF470", VA = "0x47AF470", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x47AF480", Offset = "0x47AF480", VA = "0x47AF480", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x47AF4E0", Offset = "0x47AF4E0", VA = "0x47AF4E0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x47AF540", Offset = "0x47AF540", VA = "0x47AF540", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x47AF580", Offset = "0x47AF580", VA = "0x47AF580", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x47AF5C0", Offset = "0x47AF5C0", VA = "0x47AF5C0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x47AF610", Offset = "0x47AF610", VA = "0x47AF610", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x47AEFC0", Offset = "0x47AEFC0", VA = "0x47AEFC0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x47AF140", Offset = "0x47AF140", VA = "0x47AF140")]
	private void WriteIndent()
	{
	}
}
