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
	[Address(RVA = "0x4358050", Offset = "0x4358050", VA = "0x4358050")]
	public HtmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4358290", Offset = "0x4358290", VA = "0x4358290", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x43582A0", Offset = "0x43582A0", VA = "0x43582A0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x43582B0", Offset = "0x43582B0", VA = "0x43582B0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4358490", Offset = "0x4358490", VA = "0x4358490", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4358590", Offset = "0x4358590", VA = "0x4358590", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x43586D0", Offset = "0x43586D0", VA = "0x43586D0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x43587D0", Offset = "0x43587D0", VA = "0x43587D0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x43588D0", Offset = "0x43588D0", VA = "0x43588D0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4358A20", Offset = "0x4358A20", VA = "0x4358A20", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4358B20", Offset = "0x4358B20", VA = "0x4358B20", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4358C10", Offset = "0x4358C10", VA = "0x4358C10", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4358D30", Offset = "0x4358D30", VA = "0x4358D30", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4358D90", Offset = "0x4358D90", VA = "0x4358D90", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4358DF0", Offset = "0x4358DF0", VA = "0x4358DF0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4358E50", Offset = "0x4358E50", VA = "0x4358E50", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4358070", Offset = "0x4358070", VA = "0x4358070")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x43585D0", Offset = "0x43585D0", VA = "0x43585D0")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4358D10", Offset = "0x4358D10", VA = "0x4358D10")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4358CD0", Offset = "0x4358CD0", VA = "0x4358CD0")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x43591B0", Offset = "0x43591B0", VA = "0x43591B0")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4358E90", Offset = "0x4358E90", VA = "0x4358E90")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4358A90", Offset = "0x4358A90", VA = "0x4358A90")]
	private void OutputRestAmps()
	{
	}
}
