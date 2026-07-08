using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000049")]
internal class XmlAutoDetectWriter : XmlRawWriter
{
	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x28")]
	private XmlRawWriter wrapped;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x30")]
	private OnRemoveWriter onRemove;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x38")]
	private XmlWriterSettings writerSettings;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x40")]
	private XmlEventCache eventCache;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x48")]
	private TextWriter textWriter;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x50")]
	private Stream strm;

	[Token(Token = "0x17000077")]
	internal override IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x445B360", Offset = "0x445B360", VA = "0x445B360", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x445B530", Offset = "0x445B530", VA = "0x445B530", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x445A8D0", Offset = "0x445A8D0", VA = "0x445A8D0")]
	private XmlAutoDetectWriter(XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x445A9D0", Offset = "0x445A9D0", VA = "0x445A9D0")]
	public XmlAutoDetectWriter(TextWriter textWriter, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x445AA00", Offset = "0x445AA00", VA = "0x445AA00")]
	public XmlAutoDetectWriter(Stream strm, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x445AA30", Offset = "0x445AA30", VA = "0x445AA30", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x445AAB0", Offset = "0x445AAB0", VA = "0x445AAB0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x445AD80", Offset = "0x445AD80", VA = "0x445AD80", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x445ADE0", Offset = "0x445ADE0", VA = "0x445ADE0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x445AE10", Offset = "0x445AE10", VA = "0x445AE10", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x445AEF0", Offset = "0x445AEF0", VA = "0x445AEF0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x445AF20", Offset = "0x445AF20", VA = "0x445AF20", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x445AF50", Offset = "0x445AF50", VA = "0x445AF50", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x445AF80", Offset = "0x445AF80", VA = "0x445AF80", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x445B000", Offset = "0x445B000", VA = "0x445B000", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x445B030", Offset = "0x445B030", VA = "0x445B030", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x445B060", Offset = "0x445B060", VA = "0x445B060", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x445B0E0", Offset = "0x445B0E0", VA = "0x445B0E0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x445B130", Offset = "0x445B130", VA = "0x445B130", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x445B180", Offset = "0x445B180", VA = "0x445B180", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x445B1D0", Offset = "0x445B1D0", VA = "0x445B1D0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x445B230", Offset = "0x445B230", VA = "0x445B230", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x445B290", Offset = "0x445B290", VA = "0x445B290", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x445B2D0", Offset = "0x445B2D0", VA = "0x445B2D0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x445B310", Offset = "0x445B310", VA = "0x445B310", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x445B3B0", Offset = "0x445B3B0", VA = "0x445B3B0", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x445B400", Offset = "0x445B400", VA = "0x445B400", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x445B450", Offset = "0x445B450", VA = "0x445B450", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x445B480", Offset = "0x445B480", VA = "0x445B480", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x445B4B0", Offset = "0x445B4B0", VA = "0x445B4B0", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x445B4E0", Offset = "0x445B4E0", VA = "0x445B4E0", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x445B560", Offset = "0x445B560", VA = "0x445B560", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x445B5B0", Offset = "0x445B5B0", VA = "0x445B5B0", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x445AB30", Offset = "0x445AB30", VA = "0x445AB30")]
	private static bool IsHtmlTag(string tagName)
	{
		return default(bool);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x445AAA0", Offset = "0x445AAA0", VA = "0x445AAA0")]
	private void EnsureWrappedWriter(XmlOutputMethod outMethod)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x445AE90", Offset = "0x445AE90", VA = "0x445AE90")]
	private bool TextBlockCreatesWriter(string textBlock)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x445AC20", Offset = "0x445AC20", VA = "0x445AC20")]
	private void CreateWrappedWriter(XmlOutputMethod outMethod)
	{
	}
}
