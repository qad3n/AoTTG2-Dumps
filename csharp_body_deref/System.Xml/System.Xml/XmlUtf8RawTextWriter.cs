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
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x26FC540", Offset = "0x26FAB40", VA = "0x1826FC540")]
	protected XmlUtf8RawTextWriter(XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x26FC300", Offset = "0x26FA900", VA = "0x1826FC300")]
	public XmlUtf8RawTextWriter(Stream stream, XmlWriterSettings settings)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x26FC070", Offset = "0x26FA670", VA = "0x1826FC070", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x26FC290", Offset = "0x26FA890", VA = "0x1826FC290", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x26FAD30", Offset = "0x26F9330", VA = "0x1826FAD30", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x26FBCC0", Offset = "0x26FA2C0", VA = "0x1826FBCC0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x26F9A60", Offset = "0x26F8060", VA = "0x1826F9A60", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x26FB2E0", Offset = "0x26F98E0", VA = "0x1826FB2E0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x26FB530", Offset = "0x26F9B30", VA = "0x1826FB530", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x26FBBB0", Offset = "0x26FA1B0", VA = "0x1826FBBB0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x26FB2A0", Offset = "0x26F98A0", VA = "0x1826FB2A0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x26E9A00", Offset = "0x26E8000", VA = "0x1826E9A00", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string namespaceName)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x26FBD90", Offset = "0x26FA390", VA = "0x1826FBD90", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x6000591")]
	[Address(RVA = "0x26FB440", Offset = "0x26F9A40", VA = "0x1826FB440", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x26FA490", Offset = "0x26F8A90", VA = "0x1826FA490", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x26FAC10", Offset = "0x26F9210", VA = "0x1826FAC10", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000594")]
	[Address(RVA = "0x26FB6C0", Offset = "0x26F9CC0", VA = "0x1826FB6C0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000595")]
	[Address(RVA = "0x26FB480", Offset = "0x26F9A80", VA = "0x1826FB480", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x26FA680", Offset = "0x26F8C80", VA = "0x1826FA680", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x6000597")]
	[Address(RVA = "0x26FBEC0", Offset = "0x26FA4C0", VA = "0x1826FBEC0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x26FBEC0", Offset = "0x26FA4C0", VA = "0x1826FBEC0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x26FBF20", Offset = "0x26FA520", VA = "0x1826FBF20", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x25D42A0", Offset = "0x25D28A0", VA = "0x1825D42A0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x26FBB00", Offset = "0x26FA100", VA = "0x1826FBB00", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x26FBB60", Offset = "0x26FA160", VA = "0x1826FBB60", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x26F9150", Offset = "0x26F7750", VA = "0x1826F9150", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x26F95D0", Offset = "0x26F7BD0", VA = "0x1826F95D0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x26F9470", Offset = "0x26F7A70", VA = "0x1826F9470", Slot = "48")]
	protected virtual void FlushBuffer()
	{
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void FlushEncoder()
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x26F9E30", Offset = "0x26F8430", VA = "0x1826F9E30")]
	protected unsafe void WriteAttributeTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x26FAFB0", Offset = "0x26F95B0", VA = "0x1826FAFB0")]
	protected unsafe void WriteElementTextBlock(char* pSrc, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x26F9800", Offset = "0x26F7E00", VA = "0x1826F9800")]
	protected void RawText(string s)
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x26F9850", Offset = "0x26F7E50", VA = "0x1826F9850")]
	protected unsafe void RawText(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x26FB7F0", Offset = "0x26F9DF0", VA = "0x1826FB7F0")]
	protected unsafe void WriteRawWithCharChecking(char* pSrcBegin, char* pSrcEnd)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x26FA830", Offset = "0x26F8E30", VA = "0x1826FA830")]
	protected void WriteCommentOrPi(string text, int stopChar)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x26FA0F0", Offset = "0x26F86F0", VA = "0x1826FA0F0")]
	protected void WriteCDataSection(string text)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x26F9780", Offset = "0x26F7D80", VA = "0x1826F9780")]
	private static bool IsSurrogateByte(byte b)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x26F92E0", Offset = "0x26F78E0", VA = "0x1826F92E0")]
	private unsafe static byte* EncodeSurrogate(char* pSrc, char* pSrcEnd, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x26F9620", Offset = "0x26F7C20", VA = "0x1826F9620")]
	private unsafe byte* InvalidXmlChar(int ch, byte* pDst, bool entitize)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x26F91B0", Offset = "0x26F77B0", VA = "0x1826F91B0")]
	internal unsafe void EncodeChar(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x26F9290", Offset = "0x26F7890", VA = "0x1826F9290")]
	internal unsafe static byte* EncodeMultibyteUTF8(int ch, byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x26F9090", Offset = "0x26F7690", VA = "0x1826F9090")]
	internal unsafe static void CharToUTF8(ref char* pSrc, char* pSrcEnd, ref byte* pDst)
	{
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x26FB640", Offset = "0x26F9C40", VA = "0x1826FB640")]
	protected unsafe byte* WriteNewLine(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x26F97A0", Offset = "0x26F7DA0", VA = "0x1826F97A0")]
	protected unsafe static byte* LtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x26F9610", Offset = "0x26F7C10", VA = "0x1826F9610")]
	protected unsafe static byte* GtEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x26F8FC0", Offset = "0x26F75C0", VA = "0x1826F8FC0")]
	protected unsafe static byte* AmpEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x26F97B0", Offset = "0x26F7DB0", VA = "0x1826F97B0")]
	protected unsafe static byte* QuoteEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x26F9AA0", Offset = "0x26F80A0", VA = "0x1826F9AA0")]
	protected unsafe static byte* TabEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x26F9790", Offset = "0x26F7D90", VA = "0x1826F9790")]
	protected unsafe static byte* LineFeedEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x26F8FD0", Offset = "0x26F75D0", VA = "0x1826F8FD0")]
	protected unsafe static byte* CarriageReturnEntity(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x26F8FE0", Offset = "0x26F75E0", VA = "0x1826F8FE0")]
	private unsafe static byte* CharEntity(byte* pDst, char ch)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x26F97E0", Offset = "0x26F7DE0", VA = "0x1826F97E0")]
	protected unsafe static byte* RawStartCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x26F97D0", Offset = "0x26F7DD0", VA = "0x1826F97D0")]
	protected unsafe static byte* RawEndCData(byte* pDst)
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x26F9AB0", Offset = "0x26F80B0", VA = "0x1826F9AB0")]
	protected void ValidateContentChars(string chars, string propertyName, bool allowOnlyWhitespace)
	{
	}
}
