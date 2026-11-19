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
		[Address(RVA = "0x609E010", Offset = "0x609D010", VA = "0x609E010", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x609E1E0", Offset = "0x609D1E0", VA = "0x609E1E0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x609D5B0", Offset = "0x609C5B0", VA = "0x609D5B0")]
	private XmlAutoDetectWriter(XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x609D6B0", Offset = "0x609C6B0", VA = "0x609D6B0")]
	public XmlAutoDetectWriter(TextWriter textWriter, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x609D6E0", Offset = "0x609C6E0", VA = "0x609D6E0")]
	public XmlAutoDetectWriter(Stream strm, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x609D710", Offset = "0x609C710", VA = "0x609D710", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x609D790", Offset = "0x609C790", VA = "0x609D790", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x609DA60", Offset = "0x609CA60", VA = "0x609DA60", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x609DAC0", Offset = "0x609CAC0", VA = "0x609DAC0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x609DAF0", Offset = "0x609CAF0", VA = "0x609DAF0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x609DBC0", Offset = "0x609CBC0", VA = "0x609DBC0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x609DBF0", Offset = "0x609CBF0", VA = "0x609DBF0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x609DC20", Offset = "0x609CC20", VA = "0x609DC20", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x609DC50", Offset = "0x609CC50", VA = "0x609DC50", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x609DCC0", Offset = "0x609CCC0", VA = "0x609DCC0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x609DCF0", Offset = "0x609CCF0", VA = "0x609DCF0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x609DD20", Offset = "0x609CD20", VA = "0x609DD20", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x609DD90", Offset = "0x609CD90", VA = "0x609DD90", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x609DDE0", Offset = "0x609CDE0", VA = "0x609DDE0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x609DE30", Offset = "0x609CE30", VA = "0x609DE30", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x609DE80", Offset = "0x609CE80", VA = "0x609DE80", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x609DEE0", Offset = "0x609CEE0", VA = "0x609DEE0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x609DF40", Offset = "0x609CF40", VA = "0x609DF40", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x609DF80", Offset = "0x609CF80", VA = "0x609DF80", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x609DFC0", Offset = "0x609CFC0", VA = "0x609DFC0", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x609E060", Offset = "0x609D060", VA = "0x609E060", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x609E0B0", Offset = "0x609D0B0", VA = "0x609E0B0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x609E100", Offset = "0x609D100", VA = "0x609E100", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x609E130", Offset = "0x609D130", VA = "0x609E130", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x609E160", Offset = "0x609D160", VA = "0x609E160", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x609E190", Offset = "0x609D190", VA = "0x609E190", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x609E210", Offset = "0x609D210", VA = "0x609E210", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x609E260", Offset = "0x609D260", VA = "0x609E260", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x609D810", Offset = "0x609C810", VA = "0x609D810")]
	private static bool IsHtmlTag(string tagName)
	{
		return default(bool);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x609D780", Offset = "0x609C780", VA = "0x609D780")]
	private void EnsureWrappedWriter(XmlOutputMethod outMethod)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x609DB60", Offset = "0x609CB60", VA = "0x609DB60")]
	private bool TextBlockCreatesWriter(string textBlock)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x609D900", Offset = "0x609C900", VA = "0x609D900")]
	private void CreateWrappedWriter(XmlOutputMethod outMethod)
	{
	}
}
