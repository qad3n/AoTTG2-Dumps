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
		[Address(RVA = "0x445D210", Offset = "0x445D210", VA = "0x445D210", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x445BFC0", Offset = "0x445BFC0", VA = "0x445BFC0")]
	protected XmlEncodedRawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4457820", Offset = "0x4457820", VA = "0x4457820")]
	public XmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4457920", Offset = "0x4457920", VA = "0x4457920")]
	public XmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x445C420", Offset = "0x445C420", VA = "0x445C420", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x445C770", Offset = "0x445C770", VA = "0x445C770", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x445C7E0", Offset = "0x445C7E0", VA = "0x445C7E0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x445CAE0", Offset = "0x445CAE0", VA = "0x445CAE0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x445CC20", Offset = "0x445CC20", VA = "0x445CC20", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x445CC50", Offset = "0x445CC50", VA = "0x445CC50", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x445CE20", Offset = "0x445CE20", VA = "0x445CE20", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x445CF90", Offset = "0x445CF90", VA = "0x445CF90", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x445D110", Offset = "0x445D110", VA = "0x445D110", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x445D1C0", Offset = "0x445D1C0", VA = "0x445D1C0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x445D220", Offset = "0x445D220", VA = "0x445D220", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x445D470", Offset = "0x445D470", VA = "0x445D470", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x445D520", Offset = "0x445D520", VA = "0x445D520", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x445DAA0", Offset = "0x445DAA0", VA = "0x445DAA0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x445E020", Offset = "0x445E020", VA = "0x445E020", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x445E1A0", Offset = "0x445E1A0", VA = "0x445E1A0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x445E2C0", Offset = "0x445E2C0", VA = "0x445E2C0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x445E4D0", Offset = "0x445E4D0", VA = "0x445E4D0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x445EBD0", Offset = "0x445EBD0", VA = "0x445EBD0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x445ECA0", Offset = "0x445ECA0", VA = "0x445ECA0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x445EE40", Offset = "0x445EE40", VA = "0x445EE40", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4457E50", Offset = "0x4457E50", VA = "0x4457E50", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4457D10", Offset = "0x4457D10", VA = "0x4457D10", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x445F200", Offset = "0x445F200", VA = "0x445F200", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x445F350", Offset = "0x445F350", VA = "0x445F350", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x445F3B0", Offset = "0x445F3B0", VA = "0x445F3B0", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x445F650", Offset = "0x445F650", VA = "0x445F650")]
	private void EncodeChars(int startOffset, int endOffset, bool writeAllToStream)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x445F290", Offset = "0x445F290", VA = "0x445F290")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x445E5A0", Offset = "0x445E5A0", VA = "0x445E5A0")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x445E8A0", Offset = "0x445E8A0", VA = "0x445E8A0")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x445C730", Offset = "0x445C730", VA = "0x445C730")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x445FB60", Offset = "0x445FB60", VA = "0x445FB60")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x445EF20", Offset = "0x445EF20", VA = "0x445EF20")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x445DC10", Offset = "0x445DC10", VA = "0x445DC10")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x445D720", Offset = "0x445D720", VA = "0x445D720")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x445F8A0", Offset = "0x445F8A0", VA = "0x445F8A0")]
	private unsafe static char* EncodeSurrogate(char* pSrc, char* pSrcEnd, char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x445F9E0", Offset = "0x445F9E0", VA = "0x445F9E0")]
	private unsafe char* InvalidXmlChar(int ch, char* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x445FE00", Offset = "0x445FE00", VA = "0x445FE00")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref char* pDst)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x445C6C0", Offset = "0x445C6C0", VA = "0x445C6C0")]
	protected void ChangeTextContentMark(bool value)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x445FEC0", Offset = "0x445FEC0", VA = "0x445FEC0")]
	private void GrowTextContentMarks()
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x445FAE0", Offset = "0x445FAE0", VA = "0x445FAE0")]
	protected unsafe char* WriteNewLine(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x445F7E0", Offset = "0x445F7E0", VA = "0x445F7E0")]
	protected unsafe static char* LtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x445F800", Offset = "0x445F800", VA = "0x445F800")]
	protected unsafe static char* GtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x445F7C0", Offset = "0x445F7C0", VA = "0x445F7C0")]
	protected unsafe static char* AmpEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x445F820", Offset = "0x445F820", VA = "0x445F820")]
	protected unsafe static char* QuoteEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x445F840", Offset = "0x445F840", VA = "0x445F840")]
	protected unsafe static char* TabEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x445F880", Offset = "0x445F880", VA = "0x445F880")]
	protected unsafe static char* LineFeedEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x445F860", Offset = "0x445F860", VA = "0x445F860")]
	protected unsafe static char* CarriageReturnEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x445FD50", Offset = "0x445FD50", VA = "0x445FD50")]
	private unsafe static char* CharEntity(char* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x445FD30", Offset = "0x445FD30", VA = "0x445FD30")]
	protected unsafe static char* RawStartCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x445FD10", Offset = "0x445FD10", VA = "0x445FD10")]
	protected unsafe static char* RawEndCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x445C0D0", Offset = "0x445C0D0", VA = "0x445C0D0")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
