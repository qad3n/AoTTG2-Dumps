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
		[Address(RVA = "0x44620E0", Offset = "0x44620E0", VA = "0x44620E0", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x1700008B")]
	internal virtual IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x44623F0", Offset = "0x44623F0", VA = "0x44623F0", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	internal virtual bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x4462450", Offset = "0x4462450", VA = "0x4462450", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4461E90", Offset = "0x4461E90", VA = "0x4461E90", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4461EF0", Offset = "0x4461EF0", VA = "0x4461EF0", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4461F50", Offset = "0x4461F50", VA = "0x4461F50", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4461FB0", Offset = "0x4461FB0", VA = "0x4461FB0", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x4461FC0", Offset = "0x4461FC0", VA = "0x4461FC0", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4462020", Offset = "0x4462020", VA = "0x4462020", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4460560", Offset = "0x4460560", VA = "0x4460560", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4462080", Offset = "0x4462080", VA = "0x4462080", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4462140", Offset = "0x4462140", VA = "0x4462140", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4462160", Offset = "0x4462160", VA = "0x4462160", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x44621E0", Offset = "0x44621E0", VA = "0x44621E0", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4462270", Offset = "0x4462270", VA = "0x4462270", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4462290", Offset = "0x4462290", VA = "0x4462290", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x44622C0", Offset = "0x44622C0", VA = "0x44622C0", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x44622F0", Offset = "0x44622F0", VA = "0x44622F0", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x4462310", Offset = "0x4462310", VA = "0x4462310", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4462330", Offset = "0x4462330", VA = "0x4462330", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4462390", Offset = "0x4462390", VA = "0x4462390", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4462400", Offset = "0x4462400", VA = "0x4462400", Slot = "36")]
	internal virtual void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4462410", Offset = "0x4462410", VA = "0x4462410", Slot = "37")]
	internal virtual void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000325")]
	internal abstract void StartElementContent();

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4462420", Offset = "0x4462420", VA = "0x4462420", Slot = "39")]
	internal virtual void OnRootElement(ConformanceLevel conformanceLevel)
	{
	}

	[Token(Token = "0x6000327")]
	internal abstract void WriteEndElement(string prefix, string localName, string ns);

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4462430", Offset = "0x4462430", VA = "0x4462430", Slot = "41")]
	internal virtual void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000329")]
	internal abstract void WriteNamespaceDeclaration(string prefix, string ns);

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4462460", Offset = "0x4462460", VA = "0x4462460", Slot = "44")]
	internal virtual void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x44624A0", Offset = "0x44624A0", VA = "0x44624A0", Slot = "45")]
	internal virtual void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x44624E0", Offset = "0x44624E0", VA = "0x44624E0", Slot = "46")]
	internal virtual void WriteEndBase64()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4462500", Offset = "0x4462500", VA = "0x4462500", Slot = "47")]
	internal virtual void Close(WriteState currentState)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4456790", Offset = "0x4456790", VA = "0x4456790")]
	protected XmlRawWriter()
	{
	}
}
