// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.HtmlEncodedRawTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000021")]
internal class HtmlEncodedRawTextWriter : XmlEncodedRawTextWriter
{
	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0xC0")]
	protected ByteStack elementScope;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0xC8")]
	protected ElementProperties currentElementProperties;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0xCC")]
	private AttributeProperties currentAttributeProperties;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0xD0")]
	private bool endsWithAmpersand;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0xD8")]
	private byte[] uriEscapingBuffer;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0xE0")]
	private string mediaType;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0xE8")]
	private bool doNotEscapeUriAttributes;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x0")]
	protected static TernaryTreeReadOnly elementPropertySearch;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x8")]
	protected static TernaryTreeReadOnly attributePropertySearch;

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x25D3CE0", Offset = "0x25D22E0", VA = "0x1825D3CE0")]
	public HtmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x25D3D10", Offset = "0x25D2310", VA = "0x1825D3D10")]
	public HtmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x25D2A30", Offset = "0x25D1030", VA = "0x1825D2A30", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x25D3680", Offset = "0x25D1C80", VA = "0x1825D3680", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x25D28F0", Offset = "0x25D0EF0", VA = "0x1825D28F0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x25D2CC0", Offset = "0x25D12C0", VA = "0x1825D2CC0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x25D2E50", Offset = "0x25D1450", VA = "0x1825D2E50", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x25D3510", Offset = "0x25D1B10", VA = "0x1825D3510", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x25D2C30", Offset = "0x25D1230", VA = "0x1825D2C30", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x25D33E0", Offset = "0x25D19E0", VA = "0x1825D33E0", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x25D37A0", Offset = "0x25D1DA0", VA = "0x1825D37A0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x25D2DF0", Offset = "0x25D13F0", VA = "0x1825D2DF0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x25D2950", Offset = "0x25D0F50", VA = "0x1825D2950", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x25D3890", Offset = "0x25D1E90", VA = "0x1825D3890", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x25D29B0", Offset = "0x25D0FB0", VA = "0x1825D29B0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x25D2630", Offset = "0x25D0C30", VA = "0x1825D2630")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x25D32D0", Offset = "0x25D18D0", VA = "0x1825D32D0")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x25D32B0", Offset = "0x25D18B0", VA = "0x1825D32B0")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x25D2F80", Offset = "0x25D1580", VA = "0x1825D2F80")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x25D2FD0", Offset = "0x25D15D0", VA = "0x1825D2FD0")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x25D38F0", Offset = "0x25D1EF0", VA = "0x1825D38F0")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x25D2850", Offset = "0x25D0E50", VA = "0x1825D2850")]
	private void OutputRestAmps()
	{
	}
}
