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
	[Address(RVA = "0x25D5460", Offset = "0x25D3A60", VA = "0x1825D5460")]
	public HtmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x25D4300", Offset = "0x25D2900", VA = "0x1825D4300", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x25D4E60", Offset = "0x25D3460", VA = "0x1825D4E60", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x25D40F0", Offset = "0x25D26F0", VA = "0x1825D40F0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x25D4550", Offset = "0x25D2B50", VA = "0x1825D4550", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x25D46C0", Offset = "0x25D2CC0", VA = "0x1825D46C0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x25D4D10", Offset = "0x25D3310", VA = "0x1825D4D10", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x25D44E0", Offset = "0x25D2AE0", VA = "0x1825D44E0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x25D4C20", Offset = "0x25D3220", VA = "0x1825D4C20", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x25D4F60", Offset = "0x25D3560", VA = "0x1825D4F60", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x25D4660", Offset = "0x25D2C60", VA = "0x1825D4660", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x25D4240", Offset = "0x25D2840", VA = "0x1825D4240", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x25D5040", Offset = "0x25D3640", VA = "0x1825D5040", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x25D42A0", Offset = "0x25D28A0", VA = "0x1825D42A0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x25D3E30", Offset = "0x25D2430", VA = "0x1825D3E30")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x25D4B10", Offset = "0x25D3110", VA = "0x1825D4B10")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x25D4AF0", Offset = "0x25D30F0", VA = "0x1825D4AF0")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x25D47D0", Offset = "0x25D2DD0", VA = "0x1825D47D0")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x25D4820", Offset = "0x25D2E20", VA = "0x1825D4820")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x25D50A0", Offset = "0x25D36A0", VA = "0x1825D50A0")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x25D4050", Offset = "0x25D2650", VA = "0x1825D4050")]
	private void OutputRestAmps()
	{
	}
}
