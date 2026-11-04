// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlRawWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000050")]
internal abstract class XmlRawWriter : XmlWriter
{
	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x18")]
	protected XmlRawWriterBase64Encoder base64Encoder;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x20")]
	protected IXmlNamespaceResolver resolver;

	[Token(Token = "0x1700008A")]
	public override WriteState WriteState
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x26ED2D0", Offset = "0x26EB8D0", VA = "0x1826ED2D0", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x1700008B")]
	internal virtual IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	internal virtual bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x26ED130", Offset = "0x26EB730", VA = "0x1826ED130", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x26ED190", Offset = "0x26EB790", VA = "0x1826ED190", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x26ECF50", Offset = "0x26EB550", VA = "0x1826ECF50", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x26ECFB0", Offset = "0x26EB5B0", VA = "0x1826ECFB0", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x26ED050", Offset = "0x26EB650", VA = "0x1826ED050", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x26ECDE0", Offset = "0x26EB3E0", VA = "0x1826ECDE0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x26ECD20", Offset = "0x26EB320", VA = "0x1826ECD20", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x26EC620", Offset = "0x26EAC20", VA = "0x1826EC620", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x26ECEA0", Offset = "0x26EB4A0", VA = "0x1826ECEA0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x26ED230", Offset = "0x26EB830", VA = "0x1826ED230", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x26EC620", Offset = "0x26EAC20", VA = "0x1826EC620", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x26E53D0", Offset = "0x26E39D0", VA = "0x1826E53D0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x26E53D0", Offset = "0x26E39D0", VA = "0x1826E53D0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x26EC620", Offset = "0x26EAC20", VA = "0x1826EC620", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x26EC620", Offset = "0x26EAC20", VA = "0x1826EC620", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x26ECD80", Offset = "0x26EB380", VA = "0x1826ECD80", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x26ED0D0", Offset = "0x26EB6D0", VA = "0x1826ED0D0", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "36")]
	internal virtual void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "37")]
	internal virtual void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000325")]
	internal abstract void StartElementContent();

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "39")]
	internal virtual void OnRootElement(ConformanceLevel conformanceLevel)
	{
	}

	[Token(Token = "0x6000327")]
	internal abstract void WriteEndElement(string prefix, string localName, string ns);

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x26ED0B0", Offset = "0x26EB6B0", VA = "0x1826ED0B0", Slot = "41")]
	internal virtual void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000329")]
	internal abstract void WriteNamespaceDeclaration(string prefix, string ns);

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x26ED1F0", Offset = "0x26EB7F0", VA = "0x1826ED1F0", Slot = "44")]
	internal virtual void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x26ED010", Offset = "0x26EB610", VA = "0x1826ED010", Slot = "45")]
	internal virtual void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x26ECF30", Offset = "0x26EB530", VA = "0x1826ECF30", Slot = "46")]
	internal virtual void WriteEndBase64()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x26ECD00", Offset = "0x26EB300", VA = "0x1826ECD00", Slot = "47")]
	internal virtual void Close(WriteState currentState)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected XmlRawWriter()
	{
	}
}
