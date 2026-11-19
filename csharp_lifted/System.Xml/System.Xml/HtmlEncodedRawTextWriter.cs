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
	[Address(RVA = "0x5F9A710", Offset = "0x5F99710", VA = "0x5F9A710")]
	public HtmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x5F9A960", Offset = "0x5F99960", VA = "0x5F9A960")]
	public HtmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x5F9A990", Offset = "0x5F99990", VA = "0x5F9A990", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x5F9A9A0", Offset = "0x5F999A0", VA = "0x5F9A9A0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x5F9A9B0", Offset = "0x5F999B0", VA = "0x5F9A9B0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x5F9ABB0", Offset = "0x5F99BB0", VA = "0x5F9ABB0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x5F9ACD0", Offset = "0x5F99CD0", VA = "0x5F9ACD0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x5F9AE10", Offset = "0x5F99E10", VA = "0x5F9AE10", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x5F9AF20", Offset = "0x5F99F20", VA = "0x5F9AF20", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x5F9B030", Offset = "0x5F9A030", VA = "0x5F9B030", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x5F9B190", Offset = "0x5F9A190", VA = "0x5F9B190", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x5F9B2A0", Offset = "0x5F9A2A0", VA = "0x5F9B2A0", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x5F9B3A0", Offset = "0x5F9A3A0", VA = "0x5F9B3A0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x5F9B4E0", Offset = "0x5F9A4E0", VA = "0x5F9B4E0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x5F9B540", Offset = "0x5F9A540", VA = "0x5F9B540", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x5F9B5A0", Offset = "0x5F9A5A0", VA = "0x5F9B5A0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x5F9B600", Offset = "0x5F9A600", VA = "0x5F9B600", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x5F9A740", Offset = "0x5F99740", VA = "0x5F9A740")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x5F9AD10", Offset = "0x5F99D10", VA = "0x5F9AD10")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x5F9B4C0", Offset = "0x5F9A4C0", VA = "0x5F9B4C0")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x5F9B480", Offset = "0x5F9A480", VA = "0x5F9B480")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x5F9B9F0", Offset = "0x5F9A9F0", VA = "0x5F9B9F0")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x5F9B6A0", Offset = "0x5F9A6A0", VA = "0x5F9B6A0")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x5F9B220", Offset = "0x5F9A220", VA = "0x5F9B220")]
	private void OutputRestAmps()
	{
	}
}
