// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.HtmlUtf8RawTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000024")]
internal class HtmlUtf8RawTextWriter : XmlUtf8RawTextWriter
{
	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x90")]
	protected ByteStack elementScope;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x98")]
	protected ElementProperties currentElementProperties;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x9C")]
	private AttributeProperties currentAttributeProperties;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0xA0")]
	private bool endsWithAmpersand;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0xA8")]
	private byte[] uriEscapingBuffer;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0xB0")]
	private string mediaType;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0xB8")]
	private bool doNotEscapeUriAttributes;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x0")]
	protected static TernaryTreeReadOnly elementPropertySearch;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x8")]
	protected static TernaryTreeReadOnly attributePropertySearch;

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x5F9C2F0", Offset = "0x5F9B2F0", VA = "0x5F9C2F0")]
	public HtmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x5F9C540", Offset = "0x5F9B540", VA = "0x5F9C540", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5F9C550", Offset = "0x5F9B550", VA = "0x5F9C550", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x5F9C560", Offset = "0x5F9B560", VA = "0x5F9C560", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5F9C740", Offset = "0x5F9B740", VA = "0x5F9C740", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x5F9C840", Offset = "0x5F9B840", VA = "0x5F9C840", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5F9C980", Offset = "0x5F9B980", VA = "0x5F9C980", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5F9CA60", Offset = "0x5F9BA60", VA = "0x5F9CA60", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x5F9CB40", Offset = "0x5F9BB40", VA = "0x5F9CB40", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x5F9CC90", Offset = "0x5F9BC90", VA = "0x5F9CC90", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x5F9CD80", Offset = "0x5F9BD80", VA = "0x5F9CD80", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x5F9CE70", Offset = "0x5F9BE70", VA = "0x5F9CE70", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x5F9CF90", Offset = "0x5F9BF90", VA = "0x5F9CF90", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x5F9CFF0", Offset = "0x5F9BFF0", VA = "0x5F9CFF0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x5F9D050", Offset = "0x5F9C050", VA = "0x5F9D050", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x5F9D0B0", Offset = "0x5F9C0B0", VA = "0x5F9D0B0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x5F9C320", Offset = "0x5F9B320", VA = "0x5F9C320")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x5F9C880", Offset = "0x5F9B880", VA = "0x5F9C880")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x5F9CF70", Offset = "0x5F9BF70", VA = "0x5F9CF70")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x5F9CF30", Offset = "0x5F9BF30", VA = "0x5F9CF30")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x5F9D430", Offset = "0x5F9C430", VA = "0x5F9D430")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x5F9D100", Offset = "0x5F9C100", VA = "0x5F9D100")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x5F9CCF0", Offset = "0x5F9BCF0", VA = "0x5F9CCF0")]
	private void OutputRestAmps()
	{
	}
}
