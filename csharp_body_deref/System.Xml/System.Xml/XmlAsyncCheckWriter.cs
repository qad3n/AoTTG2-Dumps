// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAsyncCheckWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000048")]
internal class XmlAsyncCheckWriter : XmlWriter
{
	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x18")]
	private readonly XmlWriter coreWriter;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x20")]
	private Task lastTask;

	[Token(Token = "0x17000076")]
	public override WriteState WriteState
	{
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x609D400", Offset = "0x609C400", VA = "0x609D400", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x609CD50", Offset = "0x609BD50", VA = "0x609CD50")]
	public XmlAsyncCheckWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x609CDD0", Offset = "0x609BDD0", VA = "0x609CDD0")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x609CE50", Offset = "0x609BE50", VA = "0x609CE50", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x609CE80", Offset = "0x609BE80", VA = "0x609CE80", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x609CEC0", Offset = "0x609BEC0", VA = "0x609CEC0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x609CEF0", Offset = "0x609BEF0", VA = "0x609CEF0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x609CF50", Offset = "0x609BF50", VA = "0x609CF50", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x609CFA0", Offset = "0x609BFA0", VA = "0x609CFA0", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x609CFD0", Offset = "0x609BFD0", VA = "0x609CFD0", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x609D000", Offset = "0x609C000", VA = "0x609D000", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x609D050", Offset = "0x609C050", VA = "0x609D050", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x609D080", Offset = "0x609C080", VA = "0x609D080", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x609D0C0", Offset = "0x609C0C0", VA = "0x609D0C0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x609D100", Offset = "0x609C100", VA = "0x609D100", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x609D140", Offset = "0x609C140", VA = "0x609D140", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x609D180", Offset = "0x609C180", VA = "0x609D180", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x609D1C0", Offset = "0x609C1C0", VA = "0x609D1C0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x609D200", Offset = "0x609C200", VA = "0x609D200", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x609D240", Offset = "0x609C240", VA = "0x609D240", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x609D280", Offset = "0x609C280", VA = "0x609D280", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x609D2D0", Offset = "0x609C2D0", VA = "0x609D2D0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x609D320", Offset = "0x609C320", VA = "0x609D320", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x609D360", Offset = "0x609C360", VA = "0x609D360", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x609D3B0", Offset = "0x609C3B0", VA = "0x609D3B0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x609D430", Offset = "0x609C430", VA = "0x609D430", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x609D460", Offset = "0x609C460", VA = "0x609D460", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x609D490", Offset = "0x609C490", VA = "0x609D490", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x609D4D0", Offset = "0x609C4D0", VA = "0x609D4D0", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x609D510", Offset = "0x609C510", VA = "0x609D510", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x609D550", Offset = "0x609C550", VA = "0x609D550", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x609D590", Offset = "0x609C590", VA = "0x609D590", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}
}
