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
		[Address(RVA = "0x446F450", Offset = "0x446F450", VA = "0x446F450", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x446E4C0", Offset = "0x446E4C0", VA = "0x446E4C0")]
	protected XmlUtf8RawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x446E900", Offset = "0x446E900", VA = "0x446E900")]
	public XmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x446EA60", Offset = "0x446EA60", VA = "0x446EA60", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x446ECB0", Offset = "0x446ECB0", VA = "0x446ECB0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x446ED20", Offset = "0x446ED20", VA = "0x446ED20", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x446EFA0", Offset = "0x446EFA0", VA = "0x446EFA0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x446F060", Offset = "0x446F060", VA = "0x446F060", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x446F090", Offset = "0x446F090", VA = "0x446F090", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x446F1E0", Offset = "0x446F1E0", VA = "0x446F1E0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x446F2D0", Offset = "0x446F2D0", VA = "0x446F2D0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x446F3C0", Offset = "0x446F3C0", VA = "0x446F3C0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x446F400", Offset = "0x446F400", VA = "0x446F400", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x446F460", Offset = "0x446F460", VA = "0x446F460", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x446F580", Offset = "0x446F580", VA = "0x446F580", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x446F5C0", Offset = "0x446F5C0", VA = "0x446F5C0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x446FB20", Offset = "0x446FB20", VA = "0x446FB20", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x446FF90", Offset = "0x446FF90", VA = "0x446FF90", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x44700A0", Offset = "0x44700A0", VA = "0x44700A0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4470140", Offset = "0x4470140", VA = "0x4470140", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x44702E0", Offset = "0x44702E0", VA = "0x44702E0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x4470920", Offset = "0x4470920", VA = "0x4470920", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x4470970", Offset = "0x4470970", VA = "0x4470970", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x4470A90", Offset = "0x4470A90", VA = "0x4470A90", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x4470AD0", Offset = "0x4470AD0", VA = "0x4470AD0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x4470DC0", Offset = "0x4470DC0", VA = "0x4470DC0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x4470E10", Offset = "0x4470E10", VA = "0x4470E10", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x4470EA0", Offset = "0x4470EA0", VA = "0x4470EA0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x4470EE0", Offset = "0x4470EE0", VA = "0x4470EE0", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x4470E90", Offset = "0x4470E90", VA = "0x4470E90")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x4470330", Offset = "0x4470330", VA = "0x4470330")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x44705E0", Offset = "0x44705E0", VA = "0x44705E0")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x446EC70", Offset = "0x446EC70", VA = "0x446EC70")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x4471490", Offset = "0x4471490", VA = "0x4471490")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4470B10", Offset = "0x4470B10", VA = "0x4470B10")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x446FC20", Offset = "0x446FC20", VA = "0x446FC20")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x446F7A0", Offset = "0x446F7A0", VA = "0x446F7A0")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4471640", Offset = "0x4471640", VA = "0x4471640")]
	private static bool IsSurrogateByte(byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x4471140", Offset = "0x4471140", VA = "0x4471140")]
	private unsafe static byte* EncodeSurrogate(char* pSrc, char* pSrcEnd, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x44712B0", Offset = "0x44712B0", VA = "0x44712B0")]
	private unsafe byte* InvalidXmlChar(int ch, byte* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x44716F0", Offset = "0x44716F0", VA = "0x44716F0")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x44713F0", Offset = "0x44713F0", VA = "0x44713F0")]
	internal unsafe static byte* EncodeMultibyteUTF8(int ch, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x44717A0", Offset = "0x44717A0", VA = "0x44717A0")]
	internal unsafe static void CharToUTF8(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4471430", Offset = "0x4471430", VA = "0x4471430")]
	protected unsafe byte* WriteNewLine(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x44710D0", Offset = "0x44710D0", VA = "0x44710D0")]
	protected unsafe static byte* LtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x44710E0", Offset = "0x44710E0", VA = "0x44710E0")]
	protected unsafe static byte* GtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x44710C0", Offset = "0x44710C0", VA = "0x44710C0")]
	protected unsafe static byte* AmpEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x44710F0", Offset = "0x44710F0", VA = "0x44710F0")]
	protected unsafe static byte* QuoteEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x4471110", Offset = "0x4471110", VA = "0x4471110")]
	protected unsafe static byte* TabEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x4471130", Offset = "0x4471130", VA = "0x4471130")]
	protected unsafe static byte* LineFeedEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x4471120", Offset = "0x4471120", VA = "0x4471120")]
	protected unsafe static byte* CarriageReturnEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4471650", Offset = "0x4471650", VA = "0x4471650")]
	private unsafe static byte* CharEntity(byte* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x4471620", Offset = "0x4471620", VA = "0x4471620")]
	protected unsafe static byte* RawStartCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x4471610", Offset = "0x4471610", VA = "0x4471610")]
	protected unsafe static byte* RawEndCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x446E5B0", Offset = "0x446E5B0", VA = "0x446E5B0")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
