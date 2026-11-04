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
		[Address(RVA = "0x26E5C60", Offset = "0x26E4260", VA = "0x1826E5C60", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	internal override bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x26E1A80", Offset = "0x26E0080", VA = "0x1826E1A80", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x26E5B80", Offset = "0x26E4180", VA = "0x1826E5B80")]
	private XmlAutoDetectWriter(XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x26E5B40", Offset = "0x26E4140", VA = "0x1826E5B40")]
	public XmlAutoDetectWriter(TextWriter textWriter, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x26E5B00", Offset = "0x26E4100", VA = "0x1826E5B00")]
	public XmlAutoDetectWriter(Stream strm, XmlWriterSettings writerSettings)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x26E5450", Offset = "0x26E3A50", VA = "0x1826E5450", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x26E5750", Offset = "0x26E3D50", VA = "0x1826E5750", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x26E56F0", Offset = "0x26E3CF0", VA = "0x1826E56F0", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x26E54B0", Offset = "0x26E3AB0", VA = "0x1826E54B0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x26E5300", Offset = "0x26E3900", VA = "0x1826E5300", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x26E5410", Offset = "0x26E3A10", VA = "0x1826E5410", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x26E55F0", Offset = "0x26E3BF0", VA = "0x1826E55F0", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x26E5A20", Offset = "0x26E4020", VA = "0x1826E5A20", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x26E58F0", Offset = "0x26E3EF0", VA = "0x1826E58F0", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x26E53D0", Offset = "0x26E39D0", VA = "0x1826E53D0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x26E5630", Offset = "0x26E3C30", VA = "0x1826E5630", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x26E5670", Offset = "0x26E3C70", VA = "0x1826E5670", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x26E5510", Offset = "0x26E3B10", VA = "0x1826E5510", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x26E5380", Offset = "0x26E3980", VA = "0x1826E5380", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x26E5970", Offset = "0x26E3F70", VA = "0x1826E5970", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x26E5240", Offset = "0x26E3840", VA = "0x1826E5240", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x26E52A0", Offset = "0x26E38A0", VA = "0x1826E52A0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x26E4E90", Offset = "0x26E3490", VA = "0x1826E4E90", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x26E50B0", Offset = "0x26E36B0", VA = "0x1826E50B0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x26E59D0", Offset = "0x26E3FD0", VA = "0x1826E59D0", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x26E5A60", Offset = "0x26E4060", VA = "0x1826E5A60", Slot = "36")]
	internal override void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x26E5AB0", Offset = "0x26E40B0", VA = "0x1826E5AB0", Slot = "37")]
	internal override void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x26E0F10", Offset = "0x26DF510", VA = "0x1826E0F10", Slot = "38")]
	internal override void StartElementContent()
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x26E54E0", Offset = "0x26E3AE0", VA = "0x1826E54E0", Slot = "40")]
	internal override void WriteEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x26E5560", Offset = "0x26E3B60", VA = "0x1826E5560", Slot = "41")]
	internal override void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x26E5590", Offset = "0x26E3B90", VA = "0x1826E5590", Slot = "42")]
	internal override void WriteNamespaceDeclaration(string prefix, string ns)
	{
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x26E58A0", Offset = "0x26E3EA0", VA = "0x1826E58A0", Slot = "44")]
	internal override void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x26E1160", Offset = "0x26DF760", VA = "0x1826E1160", Slot = "45")]
	internal override void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x26E50F0", Offset = "0x26E36F0", VA = "0x1826E50F0")]
	private static bool IsHtmlTag(string tagName)
	{
		return default(bool);
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x26E50A0", Offset = "0x26E36A0", VA = "0x1826E50A0")]
	private void EnsureWrappedWriter(XmlOutputMethod outMethod)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x26E51D0", Offset = "0x26E37D0", VA = "0x1826E51D0")]
	private bool TextBlockCreatesWriter(string textBlock)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x26E4ED0", Offset = "0x26E34D0", VA = "0x1826E4ED0")]
	private void CreateWrappedWriter(XmlOutputMethod outMethod)
	{
	}
}
