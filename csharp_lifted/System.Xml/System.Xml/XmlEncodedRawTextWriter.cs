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
		[Address(RVA = "0x609FC80", Offset = "0x609EC80", VA = "0x609FC80", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x609EAC0", Offset = "0x609DAC0", VA = "0x609EAC0")]
	protected XmlEncodedRawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x609A4F0", Offset = "0x60994F0", VA = "0x609A4F0")]
	public XmlEncodedRawTextWriter(TextWriter writer, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x609A5F0", Offset = "0x60995F0", VA = "0x609A5F0")]
	public XmlEncodedRawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x609EEE0", Offset = "0x609DEE0", VA = "0x609EEE0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x609F220", Offset = "0x609E220", VA = "0x609F220", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x609F290", Offset = "0x609E290", VA = "0x609F290", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x609F580", Offset = "0x609E580", VA = "0x609F580", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x609F6B0", Offset = "0x609E6B0", VA = "0x609F6B0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x609F6E0", Offset = "0x609E6E0", VA = "0x609F6E0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x609F8A0", Offset = "0x609E8A0", VA = "0x609F8A0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x609FA10", Offset = "0x609EA10", VA = "0x609FA10", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x609FB80", Offset = "0x609EB80", VA = "0x609FB80", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x609FC30", Offset = "0x609EC30", VA = "0x609FC30", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x609FC90", Offset = "0x609EC90", VA = "0x609FC90", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x609FEC0", Offset = "0x609EEC0", VA = "0x609FEC0", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x609FF70", Offset = "0x609EF70", VA = "0x609FF70", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x60A0500", Offset = "0x609F500", VA = "0x60A0500", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x60A0A60", Offset = "0x609FA60", VA = "0x60A0A60", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x60A0BD0", Offset = "0x609FBD0", VA = "0x60A0BD0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x60A0CF0", Offset = "0x609FCF0", VA = "0x60A0CF0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x60A0EF0", Offset = "0x609FEF0", VA = "0x60A0EF0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x60A15D0", Offset = "0x60A05D0", VA = "0x60A15D0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x60A16A0", Offset = "0x60A06A0", VA = "0x60A16A0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x60A1830", Offset = "0x60A0830", VA = "0x60A1830", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x609AB20", Offset = "0x6099B20", VA = "0x609AB20", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x609A9E0", Offset = "0x60999E0", VA = "0x609A9E0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x60A1BE0", Offset = "0x60A0BE0", VA = "0x60A1BE0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x60A1D20", Offset = "0x60A0D20", VA = "0x60A1D20", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x60A1D80", Offset = "0x60A0D80", VA = "0x60A1D80", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x60A2000", Offset = "0x60A1000", VA = "0x60A2000")]
	private void EncodeChars(int startOffset, int endOffset, bool writeAllToStream)
	{
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x60A1C70", Offset = "0x60A0C70", VA = "0x60A1C70")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x60A0FC0", Offset = "0x609FFC0", VA = "0x60A0FC0")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x60A1290", Offset = "0x60A0290", VA = "0x60A1290")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x609F1E0", Offset = "0x609E1E0", VA = "0x609F1E0")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60002A3")]
	[Address(RVA = "0x60A24F0", Offset = "0x60A14F0", VA = "0x60A24F0")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A4")]
	[Address(RVA = "0x60A1920", Offset = "0x60A0920", VA = "0x60A1920")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x60A0660", Offset = "0x609F660", VA = "0x60A0660")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x60A0160", Offset = "0x609F160", VA = "0x60A0160")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x60A2250", Offset = "0x60A1250", VA = "0x60A2250")]
	private unsafe static char* EncodeSurrogate(char* pSrc, char* pSrcEnd, char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x60A2380", Offset = "0x60A1380", VA = "0x60A2380")]
	private unsafe char* InvalidXmlChar(int ch, char* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x60A2780", Offset = "0x60A1780", VA = "0x60A2780")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref char* pDst)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x609F170", Offset = "0x609E170", VA = "0x609F170")]
	protected void ChangeTextContentMark(bool value)
	{
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x60A2840", Offset = "0x60A1840", VA = "0x60A2840")]
	private void GrowTextContentMarks()
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x60A2470", Offset = "0x60A1470", VA = "0x60A2470")]
	protected unsafe char* WriteNewLine(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x60A2190", Offset = "0x60A1190", VA = "0x60A2190")]
	protected unsafe static char* LtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x60A21B0", Offset = "0x60A11B0", VA = "0x60A21B0")]
	protected unsafe static char* GtEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x60A2170", Offset = "0x60A1170", VA = "0x60A2170")]
	protected unsafe static char* AmpEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x60A21D0", Offset = "0x60A11D0", VA = "0x60A21D0")]
	protected unsafe static char* QuoteEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x60A21F0", Offset = "0x60A11F0", VA = "0x60A21F0")]
	protected unsafe static char* TabEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x60A2230", Offset = "0x60A1230", VA = "0x60A2230")]
	protected unsafe static char* LineFeedEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x60A2210", Offset = "0x60A1210", VA = "0x60A2210")]
	protected unsafe static char* CarriageReturnEntity(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x60A26D0", Offset = "0x60A16D0", VA = "0x60A26D0")]
	private unsafe static char* CharEntity(char* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x60A26B0", Offset = "0x60A16B0", VA = "0x60A26B0")]
	protected unsafe static char* RawStartCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x60A2690", Offset = "0x60A1690", VA = "0x60A2690")]
	protected unsafe static char* RawEndCData(char* pDst)
	{
		//IL_0002: Expected I, but got O
		return (char*)unchecked((nint)null);
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x609EBD0", Offset = "0x609DBD0", VA = "0x609EBD0")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
