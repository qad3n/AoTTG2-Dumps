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
		[Address(RVA = "0x60B1540", Offset = "0x60B0540", VA = "0x60B1540", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x60B05D0", Offset = "0x60AF5D0", VA = "0x60B05D0")]
	protected XmlUtf8RawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x60B09E0", Offset = "0x60AF9E0", VA = "0x60B09E0")]
	public XmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x60B0B50", Offset = "0x60AFB50", VA = "0x60B0B50", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x60B0DA0", Offset = "0x60AFDA0", VA = "0x60B0DA0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x60B0E10", Offset = "0x60AFE10", VA = "0x60B0E10", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x60B1090", Offset = "0x60B0090", VA = "0x60B1090", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x60B1150", Offset = "0x60B0150", VA = "0x60B1150", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x60B1180", Offset = "0x60B0180", VA = "0x60B1180", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x60B12D0", Offset = "0x60B02D0", VA = "0x60B12D0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x60B13C0", Offset = "0x60B03C0", VA = "0x60B13C0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x60B14B0", Offset = "0x60B04B0", VA = "0x60B14B0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x60B14F0", Offset = "0x60B04F0", VA = "0x60B14F0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x60B1550", Offset = "0x60B0550", VA = "0x60B1550", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x60B1670", Offset = "0x60B0670", VA = "0x60B1670", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x60B16B0", Offset = "0x60B06B0", VA = "0x60B16B0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x60B1C10", Offset = "0x60B0C10", VA = "0x60B1C10", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x60B20C0", Offset = "0x60B10C0", VA = "0x60B20C0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x60B21D0", Offset = "0x60B11D0", VA = "0x60B21D0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x60B2270", Offset = "0x60B1270", VA = "0x60B2270", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x60B2410", Offset = "0x60B1410", VA = "0x60B2410", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x60B2A30", Offset = "0x60B1A30", VA = "0x60B2A30", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x60B2A80", Offset = "0x60B1A80", VA = "0x60B2A80", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x60B2BA0", Offset = "0x60B1BA0", VA = "0x60B2BA0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x60B2BE0", Offset = "0x60B1BE0", VA = "0x60B2BE0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x60B2EC0", Offset = "0x60B1EC0", VA = "0x60B2EC0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x60B2F10", Offset = "0x60B1F10", VA = "0x60B2F10", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x60B3020", Offset = "0x60B2020", VA = "0x60B3020", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x60B3060", Offset = "0x60B2060", VA = "0x60B3060", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x60B3010", Offset = "0x60B2010", VA = "0x60B3010")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x60B2460", Offset = "0x60B1460", VA = "0x60B2460")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x60B2710", Offset = "0x60B1710", VA = "0x60B2710")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x60B0D60", Offset = "0x60AFD60", VA = "0x60B0D60")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x60B3620", Offset = "0x60B2620", VA = "0x60B3620")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x60B2C20", Offset = "0x60B1C20", VA = "0x60B2C20")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x60B1D10", Offset = "0x60B0D10", VA = "0x60B1D10")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x60B1890", Offset = "0x60B0890", VA = "0x60B1890")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x60B37D0", Offset = "0x60B27D0", VA = "0x60B37D0")]
	private static bool IsSurrogateByte(byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x60B32C0", Offset = "0x60B22C0", VA = "0x60B32C0")]
	private unsafe static byte* EncodeSurrogate(char* pSrc, char* pSrcEnd, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x60B3440", Offset = "0x60B2440", VA = "0x60B3440")]
	private unsafe byte* InvalidXmlChar(int ch, byte* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x60B3890", Offset = "0x60B2890", VA = "0x60B3890")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x60B3570", Offset = "0x60B2570", VA = "0x60B3570")]
	internal unsafe static byte* EncodeMultibyteUTF8(int ch, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x60B3940", Offset = "0x60B2940", VA = "0x60B3940")]
	internal unsafe static void CharToUTF8(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x60B35C0", Offset = "0x60B25C0", VA = "0x60B35C0")]
	protected unsafe byte* WriteNewLine(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x60B3250", Offset = "0x60B2250", VA = "0x60B3250")]
	protected unsafe static byte* LtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x60B3260", Offset = "0x60B2260", VA = "0x60B3260")]
	protected unsafe static byte* GtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x60B3240", Offset = "0x60B2240", VA = "0x60B3240")]
	protected unsafe static byte* AmpEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x60B3270", Offset = "0x60B2270", VA = "0x60B3270")]
	protected unsafe static byte* QuoteEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x60B3290", Offset = "0x60B2290", VA = "0x60B3290")]
	protected unsafe static byte* TabEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x60B32B0", Offset = "0x60B22B0", VA = "0x60B32B0")]
	protected unsafe static byte* LineFeedEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x60B32A0", Offset = "0x60B22A0", VA = "0x60B32A0")]
	protected unsafe static byte* CarriageReturnEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x60B37E0", Offset = "0x60B27E0", VA = "0x60B37E0")]
	private unsafe static byte* CharEntity(byte* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x60B37B0", Offset = "0x60B27B0", VA = "0x60B37B0")]
	protected unsafe static byte* RawStartCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x60B37A0", Offset = "0x60B27A0", VA = "0x60B37A0")]
	protected unsafe static byte* RawEndCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x60B06D0", Offset = "0x60AF6D0", VA = "0x60B06D0")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
