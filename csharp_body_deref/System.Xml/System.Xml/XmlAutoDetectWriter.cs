// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAutoDetectWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4798AC0", Offset = "0x4798AC0", VA = "0x4798AC0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x4798C90", Offset = "0x4798C90", VA = "0x4798C90", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x4798030", Offset = "0x4798030", VA = "0x4798030")]
	private XmlAutoDetectWriter(XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4798130", Offset = "0x4798130", VA = "0x4798130")]
	public XmlAutoDetectWriter(TextWriter textWriter, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4798160", Offset = "0x4798160", VA = "0x4798160")]
	public XmlAutoDetectWriter(Stream strm, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4798190", Offset = "0x4798190", VA = "0x4798190", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4798210", Offset = "0x4798210", VA = "0x4798210", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x47984E0", Offset = "0x47984E0", VA = "0x47984E0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x4798540", Offset = "0x4798540", VA = "0x4798540", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x4798570", Offset = "0x4798570", VA = "0x4798570", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4798650", Offset = "0x4798650", VA = "0x4798650", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4798680", Offset = "0x4798680", VA = "0x4798680", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x47986B0", Offset = "0x47986B0", VA = "0x47986B0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x47986E0", Offset = "0x47986E0", VA = "0x47986E0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4798760", Offset = "0x4798760", VA = "0x4798760", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x4798790", Offset = "0x4798790", VA = "0x4798790", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x47987C0", Offset = "0x47987C0", VA = "0x47987C0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x4798840", Offset = "0x4798840", VA = "0x4798840", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x4798890", Offset = "0x4798890", VA = "0x4798890", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x47988E0", Offset = "0x47988E0", VA = "0x47988E0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x4798930", Offset = "0x4798930", VA = "0x4798930", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x4798990", Offset = "0x4798990", VA = "0x4798990", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x47989F0", Offset = "0x47989F0", VA = "0x47989F0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4798A30", Offset = "0x4798A30", VA = "0x4798A30", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x4798A70", Offset = "0x4798A70", VA = "0x4798A70", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x4798B10", Offset = "0x4798B10", VA = "0x4798B10", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4798B60", Offset = "0x4798B60", VA = "0x4798B60", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4798BB0", Offset = "0x4798BB0", VA = "0x4798BB0", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4798BE0", Offset = "0x4798BE0", VA = "0x4798BE0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4798C10", Offset = "0x4798C10", VA = "0x4798C10", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4798C40", Offset = "0x4798C40", VA = "0x4798C40", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4798CC0", Offset = "0x4798CC0", VA = "0x4798CC0", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4798D10", Offset = "0x4798D10", VA = "0x4798D10", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4798290", Offset = "0x4798290", VA = "0x4798290")]
	private static bool IsHtmlTag(string tagName)
	{
		return default(bool);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4798200", Offset = "0x4798200", VA = "0x4798200")]
	private void EnsureWrappedWriter(XmlOutputMethod outMethod)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x47985F0", Offset = "0x47985F0", VA = "0x47985F0")]
	private bool TextBlockCreatesWriter(string textBlock)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4798380", Offset = "0x4798380", VA = "0x4798380")]
	private void CreateWrappedWriter(XmlOutputMethod outMethod)
	{
	}
}
