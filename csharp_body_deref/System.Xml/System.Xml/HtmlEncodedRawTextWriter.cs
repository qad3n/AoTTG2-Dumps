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
	[Address(RVA = "0x43563F0", Offset = "0x43563F0", VA = "0x43563F0")]
	public HtmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4356630", Offset = "0x4356630", VA = "0x4356630")]
	public HtmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4356660", Offset = "0x4356660", VA = "0x4356660", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4356670", Offset = "0x4356670", VA = "0x4356670", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4356680", Offset = "0x4356680", VA = "0x4356680", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4356880", Offset = "0x4356880", VA = "0x4356880", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x43569A0", Offset = "0x43569A0", VA = "0x43569A0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4356AE0", Offset = "0x4356AE0", VA = "0x4356AE0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4356C00", Offset = "0x4356C00", VA = "0x4356C00", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4356D20", Offset = "0x4356D20", VA = "0x4356D20", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4356E80", Offset = "0x4356E80", VA = "0x4356E80", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4356F90", Offset = "0x4356F90", VA = "0x4356F90", Slot = "16")]
	public override void WriteProcessingInstruction(string target, string text)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4357090", Offset = "0x4357090", VA = "0x4357090", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x43571D0", Offset = "0x43571D0", VA = "0x43571D0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4357230", Offset = "0x4357230", VA = "0x4357230", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4357290", Offset = "0x4357290", VA = "0x4357290", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x43572F0", Offset = "0x43572F0", VA = "0x43572F0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4356410", Offset = "0x4356410", VA = "0x4356410")]
	private void Init(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x43569E0", Offset = "0x43569E0", VA = "0x43569E0")]
	protected void WriteMetaElement()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x43571B0", Offset = "0x43571B0", VA = "0x43571B0")]
	protected unsafe void WriteHtmlElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4357170", Offset = "0x4357170", VA = "0x4357170")]
	protected unsafe void WriteHtmlAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x43576C0", Offset = "0x43576C0", VA = "0x43576C0")]
	private unsafe void WriteHtmlAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4357380", Offset = "0x4357380", VA = "0x4357380")]
	private unsafe void WriteUriAttributeText(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4356F10", Offset = "0x4356F10", VA = "0x4356F10")]
	private void OutputRestAmps()
	{
	}
}
