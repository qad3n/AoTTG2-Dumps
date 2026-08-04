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
	[Address(RVA = "0x46884C0", Offset = "0x46884C0", VA = "0x46884C0")]
	public HtmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4688700", Offset = "0x4688700", VA = "0x4688700")]
	public HtmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4688730", Offset = "0x4688730", VA = "0x4688730", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4688740", Offset = "0x4688740", VA = "0x4688740", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4688750", Offset = "0x4688750", VA = "0x4688750", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4688950", Offset = "0x4688950", VA = "0x4688950", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4688A70", Offset = "0x4688A70", VA = "0x4688A70", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4688BB0", Offset = "0x4688BB0", VA = "0x4688BB0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4688CD0", Offset = "0x4688CD0", VA = "0x4688CD0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4688DF0", Offset = "0x4688DF0", VA = "0x4688DF0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4688F50", Offset = "0x4688F50", VA = "0x4688F50", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4689060", Offset = "0x4689060", VA = "0x4689060", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4689160", Offset = "0x4689160", VA = "0x4689160", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x46892A0", Offset = "0x46892A0", VA = "0x46892A0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4689300", Offset = "0x4689300", VA = "0x4689300", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4689360", Offset = "0x4689360", VA = "0x4689360", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x46893C0", Offset = "0x46893C0", VA = "0x46893C0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x46884E0", Offset = "0x46884E0", VA = "0x46884E0")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4688AB0", Offset = "0x4688AB0", VA = "0x4688AB0")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4689280", Offset = "0x4689280", VA = "0x4689280")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4689240", Offset = "0x4689240", VA = "0x4689240")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4689790", Offset = "0x4689790", VA = "0x4689790")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4689450", Offset = "0x4689450", VA = "0x4689450")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4688FE0", Offset = "0x4688FE0", VA = "0x4688FE0")]
	private void OutputRestAmps()
	{
	}
}
