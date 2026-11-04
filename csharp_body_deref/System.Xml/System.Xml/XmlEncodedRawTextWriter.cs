// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlEncodedRawTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200004A")]
internal class XmlEncodedRawTextWriter : XmlRawWriter
{
	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool useAsync;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x30")]
	protected byte[] bufBytes;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x38")]
	protected Stream stream;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x40")]
	protected Encoding encoding;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x48")]
	protected XmlCharType xmlCharType;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x50")]
	protected int bufPos;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x54")]
	protected int textPos;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x58")]
	protected int contentPos;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x5C")]
	protected int cdataPos;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x60")]
	protected int attrEndPos;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x64")]
	protected int bufLen;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x68")]
	protected bool writeToNull;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x69")]
	protected bool hadDoubleBracket;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x6A")]
	protected bool inAttributeValue;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x6C")]
	protected int bufBytesUsed;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x70")]
	protected char[] bufChars;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x78")]
	protected Encoder encoder;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x80")]
	protected TextWriter writer;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x88")]
	protected bool trackTextContent;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x89")]
	protected bool inTextContent;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x8C")]
	private int lastMarkPos;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x90")]
	private int[] textContentMarks;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x98")]
	private CharEntityEncoderFallback charEntityFallback;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0xA0")]
	protected NewLineHandling newLineHandling;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0xA4")]
	protected bool closeOutput;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0xA5")]
	protected bool omitXmlDeclaration;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0xA8")]
	protected string newLineChars;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0xB0")]
	protected bool checkCharacters;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0xB4")]
	protected XmlStandalone standalone;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0xB8")]
	protected XmlOutputMethod outputMethod;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0xBC")]
	protected bool autoXmlDeclaration;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0xBD")]
	protected bool mergeCDataSections;

	[Token(Token = "0x17000079")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x26EA820", Offset = "0x26E8E20", VA = "0x1826EA820")]
	protected XmlEncodedRawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x26EAC90", Offset = "0x26E9290", VA = "0x1826EAC90")]
	public XmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x26EA930", Offset = "0x26E8F30", VA = "0x1826EA930")]
	public XmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x26EA570", Offset = "0x26E8B70", VA = "0x1826EA570", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x26EA7B0", Offset = "0x26E8DB0", VA = "0x1826EA7B0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x26E8FF0", Offset = "0x26E75F0", VA = "0x1826E8FF0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x26EA090", Offset = "0x26E8690", VA = "0x1826EA090", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x26E7C10", Offset = "0x26E6210", VA = "0x1826E7C10", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x26E9620", Offset = "0x26E7C20", VA = "0x1826E9620", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x26E98D0", Offset = "0x26E7ED0", VA = "0x1826E98D0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x26E9F50", Offset = "0x26E8550", VA = "0x1826E9F50", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x26E95C0", Offset = "0x26E7BC0", VA = "0x1826E95C0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x26E9A00", Offset = "0x26E8000", VA = "0x1826E9A00", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x26EA180", Offset = "0x26E8780", VA = "0x1826EA180", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x26E97A0", Offset = "0x26E7DA0", VA = "0x1826E97A0", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x26E8690", Offset = "0x26E6C90", VA = "0x1826E8690", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x26E8E90", Offset = "0x26E7490", VA = "0x1826E8E90", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x26E9AF0", Offset = "0x26E80F0", VA = "0x1826E9AF0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x26E9800", Offset = "0x26E7E00", VA = "0x1826E9800", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x26E88D0", Offset = "0x26E6ED0", VA = "0x1826E88D0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x26EA4F0", Offset = "0x26E8AF0", VA = "0x1826EA4F0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x26EA300", Offset = "0x26E8900", VA = "0x1826EA300", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x26EA380", Offset = "0x26E8980", VA = "0x1826EA380", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x25D29B0", Offset = "0x25D0FB0", VA = "0x1825D29B0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x26E9ED0", Offset = "0x26E84D0", VA = "0x1826E9ED0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x26E2340", Offset = "0x26E0940", VA = "0x1826E2340", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x26E6E40", Offset = "0x26E5440", VA = "0x1826E6E40", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x26E7700", Offset = "0x26E5D00", VA = "0x1826E7700", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x26E7270", Offset = "0x26E5870", VA = "0x1826E7270", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x26E6F90", Offset = "0x26E5590", VA = "0x1826E6F90")]
	private void EncodeChars(int startOffset, int endOffset, bool writeAllToStream)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x26E7630", Offset = "0x26E5C30", VA = "0x1826E7630")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x26E7FF0", Offset = "0x26E65F0", VA = "0x1826E7FF0")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x26E92A0", Offset = "0x26E78A0", VA = "0x1826E92A0")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x26E7BC0", Offset = "0x26E61C0", VA = "0x1826E7BC0")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x26E7A00", Offset = "0x26E6000", VA = "0x1826E7A00")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x26E9C40", Offset = "0x26E8240", VA = "0x1826E9C40")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x26E8AB0", Offset = "0x26E70B0", VA = "0x1826E8AB0")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x26E82F0", Offset = "0x26E68F0", VA = "0x1826E82F0")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x26E7110", Offset = "0x26E5710", VA = "0x1826E7110")]
	private unsafe static char* EncodeSurrogate(char* pSrc, char* pSrcEnd, char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x26E7840", Offset = "0x26E5E40", VA = "0x1826E7840")]
	private unsafe char* InvalidXmlChar(int ch, char* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x26E6EB0", Offset = "0x26E54B0", VA = "0x1826E6EB0")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref char* pDst)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x26E6CA0", Offset = "0x26E52A0", VA = "0x1826E6CA0")]
	protected void ChangeTextContentMark(bool value)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x26E7780", Offset = "0x26E5D80", VA = "0x1826E7780")]
	private void GrowTextContentMarks()
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x26E9A60", Offset = "0x26E8060", VA = "0x1826E9A60")]
	protected unsafe char* WriteNewLine(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x26E7970", Offset = "0x26E5F70", VA = "0x1826E7970")]
	protected unsafe static char* LtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x26E7820", Offset = "0x26E5E20", VA = "0x1826E7820")]
	protected unsafe static char* GtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x26E6C60", Offset = "0x26E5260", VA = "0x1826E6C60")]
	protected unsafe static char* AmpEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x26E7990", Offset = "0x26E5F90", VA = "0x1826E7990")]
	protected unsafe static char* QuoteEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x26E7C50", Offset = "0x26E6250", VA = "0x1826E7C50")]
	protected unsafe static char* TabEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x26E7950", Offset = "0x26E5F50", VA = "0x1826E7950")]
	protected unsafe static char* LineFeedEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x26E6C80", Offset = "0x26E5280", VA = "0x1826E6C80")]
	protected unsafe static char* CarriageReturnEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x26E6D90", Offset = "0x26E5390", VA = "0x1826E6D90")]
	private unsafe static char* CharEntity(char* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x26E79D0", Offset = "0x26E5FD0", VA = "0x1826E79D0")]
	protected unsafe static char* RawStartCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x26E79B0", Offset = "0x26E5FB0", VA = "0x1826E79B0")]
	protected unsafe static char* RawEndCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x26E7C70", Offset = "0x26E6270", VA = "0x1826E7C70")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
