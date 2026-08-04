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
		[Address(RVA = "0x4797E80", Offset = "0x4797E80", VA = "0x4797E80", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x47977D0", Offset = "0x47977D0", VA = "0x47977D0")]
	public XmlAsyncCheckWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4797850", Offset = "0x4797850", VA = "0x4797850")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x47978D0", Offset = "0x47978D0", VA = "0x47978D0", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4797900", Offset = "0x4797900", VA = "0x4797900", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4797940", Offset = "0x4797940", VA = "0x4797940", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4797970", Offset = "0x4797970", VA = "0x4797970", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x47979D0", Offset = "0x47979D0", VA = "0x47979D0", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4797A20", Offset = "0x4797A20", VA = "0x4797A20", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4797A50", Offset = "0x4797A50", VA = "0x4797A50", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4797A80", Offset = "0x4797A80", VA = "0x4797A80", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4797AD0", Offset = "0x4797AD0", VA = "0x4797AD0", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4797B00", Offset = "0x4797B00", VA = "0x4797B00", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4797B40", Offset = "0x4797B40", VA = "0x4797B40", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4797B80", Offset = "0x4797B80", VA = "0x4797B80", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4797BC0", Offset = "0x4797BC0", VA = "0x4797BC0", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x4797C00", Offset = "0x4797C00", VA = "0x4797C00", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4797C40", Offset = "0x4797C40", VA = "0x4797C40", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4797C80", Offset = "0x4797C80", VA = "0x4797C80", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4797CC0", Offset = "0x4797CC0", VA = "0x4797CC0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4797D00", Offset = "0x4797D00", VA = "0x4797D00", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4797D50", Offset = "0x4797D50", VA = "0x4797D50", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x4797DA0", Offset = "0x4797DA0", VA = "0x4797DA0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x4797DE0", Offset = "0x4797DE0", VA = "0x4797DE0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x4797E30", Offset = "0x4797E30", VA = "0x4797E30", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x4797EB0", Offset = "0x4797EB0", VA = "0x4797EB0", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x4797EE0", Offset = "0x4797EE0", VA = "0x4797EE0", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x4797F10", Offset = "0x4797F10", VA = "0x4797F10", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x4797F50", Offset = "0x4797F50", VA = "0x4797F50", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x4797F90", Offset = "0x4797F90", VA = "0x4797F90", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x4797FD0", Offset = "0x4797FD0", VA = "0x4797FD0", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x4798010", Offset = "0x4798010", VA = "0x4798010", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}
}
