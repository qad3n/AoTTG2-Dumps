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
		[Address(RVA = "0x26E4E50", Offset = "0x26E3450", VA = "0x1826E4E50", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x26E4DC0", Offset = "0x26E33C0", VA = "0x1826E4DC0")]
	public XmlAsyncCheckWriter(XmlWriter writer)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x26E4400", Offset = "0x26E2A00", VA = "0x1826E4400")]
	private void CheckAsync()
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x26E4BD0", Offset = "0x26E31D0", VA = "0x1826E4BD0", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x26E4B80", Offset = "0x26E3180", VA = "0x1826E4B80", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x26E48A0", Offset = "0x26E2EA0", VA = "0x1826E48A0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x26E4800", Offset = "0x26E2E00", VA = "0x1826E4800", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x26E4C10", Offset = "0x26E3210", VA = "0x1826E4C10", Slot = "9")]
	public override void WriteStartElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x26E48E0", Offset = "0x26E2EE0", VA = "0x1826E48E0", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x26E4970", Offset = "0x26E2F70", VA = "0x1826E4970", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x26E4B20", Offset = "0x26E3120", VA = "0x1826E4B20", Slot = "12")]
	public override void WriteStartAttribute(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x26E4860", Offset = "0x26E2E60", VA = "0x1826E4860", Slot = "13")]
	public override void WriteEndAttribute()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x26E46B0", Offset = "0x26E2CB0", VA = "0x1826E46B0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x26E47B0", Offset = "0x26E2DB0", VA = "0x1826E47B0", Slot = "15")]
	public override void WriteComment(string text)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x26E4A10", Offset = "0x26E3010", VA = "0x1826E4A10", Slot = "16")]
	public override void WriteProcessingInstruction(string name, string text)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x26E4920", Offset = "0x26E2F20", VA = "0x1826E4920", Slot = "17")]
	public override void WriteEntityRef(string name)
	{
	}

	[Token(Token = "0x600024A")]
	[Address(RVA = "0x26E4700", Offset = "0x26E2D00", VA = "0x1826E4700", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x26E4D70", Offset = "0x26E3370", VA = "0x1826E4D70", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x26E4C70", Offset = "0x26E3270", VA = "0x1826E4C70", Slot = "20")]
	public override void WriteString(string text)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x26E4CC0", Offset = "0x26E32C0", VA = "0x1826E4CC0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x26E4750", Offset = "0x26E2D50", VA = "0x1826E4750", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x26E4A70", Offset = "0x26E3070", VA = "0x1826E4A70", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x26E4AD0", Offset = "0x26E30D0", VA = "0x1826E4AD0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x26E45F0", Offset = "0x26E2BF0", VA = "0x1826E45F0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x26E4650", Offset = "0x26E2C50", VA = "0x1826E4650", Slot = "26")]
	public override void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x26E4490", Offset = "0x26E2A90", VA = "0x1826E4490", Slot = "28")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x26E4500", Offset = "0x26E2B00", VA = "0x1826E4500", Slot = "29")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x26E4540", Offset = "0x26E2B40", VA = "0x1826E4540", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x26E4D20", Offset = "0x26E3320", VA = "0x1826E4D20", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x26E4590", Offset = "0x26E2B90", VA = "0x1826E4590", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x26E49B0", Offset = "0x26E2FB0", VA = "0x1826E49B0", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x26E44D0", Offset = "0x26E2AD0", VA = "0x1826E44D0", Slot = "34")]
	protected override void Dispose(bool disposing)
	{
	}
}
