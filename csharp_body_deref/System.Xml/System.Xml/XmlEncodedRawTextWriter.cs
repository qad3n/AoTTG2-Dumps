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
		[Address(RVA = "0x479A970", Offset = "0x479A970", VA = "0x479A970", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4799720", Offset = "0x4799720", VA = "0x4799720")]
	protected XmlEncodedRawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4794F80", Offset = "0x4794F80", VA = "0x4794F80")]
	public XmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4795080", Offset = "0x4795080", VA = "0x4795080")]
	public XmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4799B80", Offset = "0x4799B80", VA = "0x4799B80", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x4799ED0", Offset = "0x4799ED0", VA = "0x4799ED0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x4799F40", Offset = "0x4799F40", VA = "0x4799F40", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x479A240", Offset = "0x479A240", VA = "0x479A240", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x479A380", Offset = "0x479A380", VA = "0x479A380", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x479A3B0", Offset = "0x479A3B0", VA = "0x479A3B0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x479A580", Offset = "0x479A580", VA = "0x479A580", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x479A6F0", Offset = "0x479A6F0", VA = "0x479A6F0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x479A870", Offset = "0x479A870", VA = "0x479A870", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x479A920", Offset = "0x479A920", VA = "0x479A920", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x479A980", Offset = "0x479A980", VA = "0x479A980", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x479ABD0", Offset = "0x479ABD0", VA = "0x479ABD0", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x479AC80", Offset = "0x479AC80", VA = "0x479AC80", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x479B200", Offset = "0x479B200", VA = "0x479B200", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x479B780", Offset = "0x479B780", VA = "0x479B780", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x479B900", Offset = "0x479B900", VA = "0x479B900", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x479BA20", Offset = "0x479BA20", VA = "0x479BA20", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x479BC30", Offset = "0x479BC30", VA = "0x479BC30", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x479C330", Offset = "0x479C330", VA = "0x479C330", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x479C400", Offset = "0x479C400", VA = "0x479C400", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x479C5A0", Offset = "0x479C5A0", VA = "0x479C5A0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x47955B0", Offset = "0x47955B0", VA = "0x47955B0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x4795470", Offset = "0x4795470", VA = "0x4795470", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x479C960", Offset = "0x479C960", VA = "0x479C960", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x479CAB0", Offset = "0x479CAB0", VA = "0x479CAB0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x479CB10", Offset = "0x479CB10", VA = "0x479CB10", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x479CDB0", Offset = "0x479CDB0", VA = "0x479CDB0")]
	private void EncodeChars(int startOffset, int endOffset, bool writeAllToStream)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x479C9F0", Offset = "0x479C9F0", VA = "0x479C9F0")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x479BD00", Offset = "0x479BD00", VA = "0x479BD00")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x479C000", Offset = "0x479C000", VA = "0x479C000")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x4799E90", Offset = "0x4799E90", VA = "0x4799E90")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x479D2C0", Offset = "0x479D2C0", VA = "0x479D2C0")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x479C680", Offset = "0x479C680", VA = "0x479C680")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x479B370", Offset = "0x479B370", VA = "0x479B370")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x479AE80", Offset = "0x479AE80", VA = "0x479AE80")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x479D000", Offset = "0x479D000", VA = "0x479D000")]
	private unsafe static char* EncodeSurrogate(char* pSrc, char* pSrcEnd, char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x479D140", Offset = "0x479D140", VA = "0x479D140")]
	private unsafe char* InvalidXmlChar(int ch, char* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x479D560", Offset = "0x479D560", VA = "0x479D560")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref char* pDst)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x4799E20", Offset = "0x4799E20", VA = "0x4799E20")]
	protected void ChangeTextContentMark(bool value)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x479D620", Offset = "0x479D620", VA = "0x479D620")]
	private void GrowTextContentMarks()
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x479D240", Offset = "0x479D240", VA = "0x479D240")]
	protected unsafe char* WriteNewLine(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x479CF40", Offset = "0x479CF40", VA = "0x479CF40")]
	protected unsafe static char* LtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x479CF60", Offset = "0x479CF60", VA = "0x479CF60")]
	protected unsafe static char* GtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x479CF20", Offset = "0x479CF20", VA = "0x479CF20")]
	protected unsafe static char* AmpEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x479CF80", Offset = "0x479CF80", VA = "0x479CF80")]
	protected unsafe static char* QuoteEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x479CFA0", Offset = "0x479CFA0", VA = "0x479CFA0")]
	protected unsafe static char* TabEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x479CFE0", Offset = "0x479CFE0", VA = "0x479CFE0")]
	protected unsafe static char* LineFeedEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x479CFC0", Offset = "0x479CFC0", VA = "0x479CFC0")]
	protected unsafe static char* CarriageReturnEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x479D4B0", Offset = "0x479D4B0", VA = "0x479D4B0")]
	private unsafe static char* CharEntity(char* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x479D490", Offset = "0x479D490", VA = "0x479D490")]
	protected unsafe static char* RawStartCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x479D470", Offset = "0x479D470", VA = "0x479D470")]
	protected unsafe static char* RawEndCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4799830", Offset = "0x4799830", VA = "0x4799830")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
