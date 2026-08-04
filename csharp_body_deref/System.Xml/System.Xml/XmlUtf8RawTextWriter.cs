// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlUtf8RawTextWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200006D")]
internal class XmlUtf8RawTextWriter : XmlRawWriter
{
	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool useAsync;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x30")]
	protected byte[] bufBytes;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x38")]
	protected Stream stream;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x40")]
	protected Encoding encoding;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x48")]
	protected XmlCharType xmlCharType;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x50")]
	protected int bufPos;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x54")]
	protected int textPos;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x58")]
	protected int contentPos;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x5C")]
	protected int cdataPos;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x60")]
	protected int attrEndPos;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x64")]
	protected int bufLen;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x68")]
	protected bool writeToNull;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x69")]
	protected bool hadDoubleBracket;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x6A")]
	protected bool inAttributeValue;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x6C")]
	protected NewLineHandling newLineHandling;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x70")]
	protected bool closeOutput;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x71")]
	protected bool omitXmlDeclaration;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x78")]
	protected string newLineChars;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x80")]
	protected bool checkCharacters;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x84")]
	protected XmlStandalone standalone;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x88")]
	protected XmlOutputMethod outputMethod;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x8C")]
	protected bool autoXmlDeclaration;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x8D")]
	protected bool mergeCDataSections;

	[Token(Token = "0x17000136")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x47ACBB0", Offset = "0x47ACBB0", VA = "0x47ACBB0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x47ABC20", Offset = "0x47ABC20", VA = "0x47ABC20")]
	protected XmlUtf8RawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x47AC060", Offset = "0x47AC060", VA = "0x47AC060")]
	public XmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x47AC1C0", Offset = "0x47AC1C0", VA = "0x47AC1C0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x47AC410", Offset = "0x47AC410", VA = "0x47AC410", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x47AC480", Offset = "0x47AC480", VA = "0x47AC480", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x47AC700", Offset = "0x47AC700", VA = "0x47AC700", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x47AC7C0", Offset = "0x47AC7C0", VA = "0x47AC7C0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x47AC7F0", Offset = "0x47AC7F0", VA = "0x47AC7F0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x47AC940", Offset = "0x47AC940", VA = "0x47AC940", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x47ACA30", Offset = "0x47ACA30", VA = "0x47ACA30", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x47ACB20", Offset = "0x47ACB20", VA = "0x47ACB20", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x47ACB60", Offset = "0x47ACB60", VA = "0x47ACB60", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x47ACBC0", Offset = "0x47ACBC0", VA = "0x47ACBC0", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x47ACCE0", Offset = "0x47ACCE0", VA = "0x47ACCE0", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x47ACD20", Offset = "0x47ACD20", VA = "0x47ACD20", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x47AD280", Offset = "0x47AD280", VA = "0x47AD280", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x47AD6F0", Offset = "0x47AD6F0", VA = "0x47AD6F0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x47AD800", Offset = "0x47AD800", VA = "0x47AD800", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x47AD8A0", Offset = "0x47AD8A0", VA = "0x47AD8A0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x47ADA40", Offset = "0x47ADA40", VA = "0x47ADA40", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x47AE080", Offset = "0x47AE080", VA = "0x47AE080", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x47AE0D0", Offset = "0x47AE0D0", VA = "0x47AE0D0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x47AE1F0", Offset = "0x47AE1F0", VA = "0x47AE1F0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x47AE230", Offset = "0x47AE230", VA = "0x47AE230", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x47AE520", Offset = "0x47AE520", VA = "0x47AE520", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x47AE570", Offset = "0x47AE570", VA = "0x47AE570", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x47AE600", Offset = "0x47AE600", VA = "0x47AE600", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x47AE640", Offset = "0x47AE640", VA = "0x47AE640", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x47AE5F0", Offset = "0x47AE5F0", VA = "0x47AE5F0")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x47ADA90", Offset = "0x47ADA90", VA = "0x47ADA90")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x47ADD40", Offset = "0x47ADD40", VA = "0x47ADD40")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x47AC3D0", Offset = "0x47AC3D0", VA = "0x47AC3D0")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x47AEBF0", Offset = "0x47AEBF0", VA = "0x47AEBF0")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x47AE270", Offset = "0x47AE270", VA = "0x47AE270")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x47AD380", Offset = "0x47AD380", VA = "0x47AD380")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x47ACF00", Offset = "0x47ACF00", VA = "0x47ACF00")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x47AEDA0", Offset = "0x47AEDA0", VA = "0x47AEDA0")]
	private static bool IsSurrogateByte(byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x47AE8A0", Offset = "0x47AE8A0", VA = "0x47AE8A0")]
	private unsafe static byte* EncodeSurrogate(char* pSrc, char* pSrcEnd, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x47AEA10", Offset = "0x47AEA10", VA = "0x47AEA10")]
	private unsafe byte* InvalidXmlChar(int ch, byte* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x47AEE50", Offset = "0x47AEE50", VA = "0x47AEE50")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x47AEB50", Offset = "0x47AEB50", VA = "0x47AEB50")]
	internal unsafe static byte* EncodeMultibyteUTF8(int ch, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x47AEF00", Offset = "0x47AEF00", VA = "0x47AEF00")]
	internal unsafe static void CharToUTF8(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x47AEB90", Offset = "0x47AEB90", VA = "0x47AEB90")]
	protected unsafe byte* WriteNewLine(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x47AE830", Offset = "0x47AE830", VA = "0x47AE830")]
	protected unsafe static byte* LtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x47AE840", Offset = "0x47AE840", VA = "0x47AE840")]
	protected unsafe static byte* GtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x47AE820", Offset = "0x47AE820", VA = "0x47AE820")]
	protected unsafe static byte* AmpEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x47AE850", Offset = "0x47AE850", VA = "0x47AE850")]
	protected unsafe static byte* QuoteEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x47AE870", Offset = "0x47AE870", VA = "0x47AE870")]
	protected unsafe static byte* TabEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x47AE890", Offset = "0x47AE890", VA = "0x47AE890")]
	protected unsafe static byte* LineFeedEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x47AE880", Offset = "0x47AE880", VA = "0x47AE880")]
	protected unsafe static byte* CarriageReturnEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x47AEDB0", Offset = "0x47AEDB0", VA = "0x47AEDB0")]
	private unsafe static byte* CharEntity(byte* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x47AED80", Offset = "0x47AED80", VA = "0x47AED80")]
	protected unsafe static byte* RawStartCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x47AED70", Offset = "0x47AED70", VA = "0x47AED70")]
	protected unsafe static byte* RawEndCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x47ABD10", Offset = "0x47ABD10", VA = "0x47ABD10")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
