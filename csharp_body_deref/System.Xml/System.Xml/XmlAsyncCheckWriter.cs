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
		[Address(RVA = "0x445A720", Offset = "0x445A720", VA = "0x445A720", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x445A070", Offset = "0x445A070", VA = "0x445A070")]
	public XmlAsyncCheckWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x445A0F0", Offset = "0x445A0F0", VA = "0x445A0F0")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x445A170", Offset = "0x445A170", VA = "0x445A170", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x445A1A0", Offset = "0x445A1A0", VA = "0x445A1A0", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x445A1E0", Offset = "0x445A1E0", VA = "0x445A1E0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x445A210", Offset = "0x445A210", VA = "0x445A210", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x445A270", Offset = "0x445A270", VA = "0x445A270", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x445A2C0", Offset = "0x445A2C0", VA = "0x445A2C0", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x445A2F0", Offset = "0x445A2F0", VA = "0x445A2F0", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x445A320", Offset = "0x445A320", VA = "0x445A320", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x445A370", Offset = "0x445A370", VA = "0x445A370", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x445A3A0", Offset = "0x445A3A0", VA = "0x445A3A0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x445A3E0", Offset = "0x445A3E0", VA = "0x445A3E0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x445A420", Offset = "0x445A420", VA = "0x445A420", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x445A460", Offset = "0x445A460", VA = "0x445A460", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x445A4A0", Offset = "0x445A4A0", VA = "0x445A4A0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x445A4E0", Offset = "0x445A4E0", VA = "0x445A4E0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x445A520", Offset = "0x445A520", VA = "0x445A520", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x445A560", Offset = "0x445A560", VA = "0x445A560", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x445A5A0", Offset = "0x445A5A0", VA = "0x445A5A0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x445A5F0", Offset = "0x445A5F0", VA = "0x445A5F0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x445A640", Offset = "0x445A640", VA = "0x445A640", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x445A680", Offset = "0x445A680", VA = "0x445A680", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x445A6D0", Offset = "0x445A6D0", VA = "0x445A6D0", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x445A750", Offset = "0x445A750", VA = "0x445A750", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x445A780", Offset = "0x445A780", VA = "0x445A780", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x445A7B0", Offset = "0x445A7B0", VA = "0x445A7B0", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x445A7F0", Offset = "0x445A7F0", VA = "0x445A7F0", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x445A830", Offset = "0x445A830", VA = "0x445A830", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x445A870", Offset = "0x445A870", VA = "0x445A870", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x445A8B0", Offset = "0x445A8B0", VA = "0x445A8B0", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}
}
