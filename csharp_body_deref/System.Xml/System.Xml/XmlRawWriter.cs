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
		[Address(RVA = "0x479F840", Offset = "0x479F840", VA = "0x479F840", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x1700008B")]
	internal virtual IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x479FB50", Offset = "0x479FB50", VA = "0x479FB50", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	internal virtual bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x479FBB0", Offset = "0x479FBB0", VA = "0x479FBB0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x479F5F0", Offset = "0x479F5F0", VA = "0x479F5F0", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x479F650", Offset = "0x479F650", VA = "0x479F650", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x479F6B0", Offset = "0x479F6B0", VA = "0x479F6B0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x479F710", Offset = "0x479F710", VA = "0x479F710", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x479F720", Offset = "0x479F720", VA = "0x479F720", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x479F780", Offset = "0x479F780", VA = "0x479F780", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x479DCC0", Offset = "0x479DCC0", VA = "0x479DCC0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x479F7E0", Offset = "0x479F7E0", VA = "0x479F7E0", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x479F8A0", Offset = "0x479F8A0", VA = "0x479F8A0", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x479F8C0", Offset = "0x479F8C0", VA = "0x479F8C0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x479F940", Offset = "0x479F940", VA = "0x479F940", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x479F9D0", Offset = "0x479F9D0", VA = "0x479F9D0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x479F9F0", Offset = "0x479F9F0", VA = "0x479F9F0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x479FA20", Offset = "0x479FA20", VA = "0x479FA20", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x479FA50", Offset = "0x479FA50", VA = "0x479FA50", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x479FA70", Offset = "0x479FA70", VA = "0x479FA70", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x479FA90", Offset = "0x479FA90", VA = "0x479FA90", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x479FAF0", Offset = "0x479FAF0", VA = "0x479FAF0", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x479FB60", Offset = "0x479FB60", VA = "0x479FB60", Slot = "36")]
	internal virtual void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x479FB70", Offset = "0x479FB70", VA = "0x479FB70", Slot = "37")]
	internal virtual void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000325")]
	internal abstract void StartElementContent();

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x479FB80", Offset = "0x479FB80", VA = "0x479FB80", Slot = "39")]
	internal virtual void OnRootElement(ConformanceLevel conformanceLevel)
	{
	}

	[Token(Token = "0x6000327")]
	internal abstract void WriteEndElement(string prefix, string localName, string ns);

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x479FB90", Offset = "0x479FB90", VA = "0x479FB90", Slot = "41")]
	internal virtual void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000329")]
	internal abstract void WriteNamespaceDeclaration(string prefix, string ns);

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x479FBC0", Offset = "0x479FBC0", VA = "0x479FBC0", Slot = "44")]
	internal virtual void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x479FC00", Offset = "0x479FC00", VA = "0x479FC00", Slot = "45")]
	internal virtual void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x479FC40", Offset = "0x479FC40", VA = "0x479FC40", Slot = "46")]
	internal virtual void WriteEndBase64()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x479FC60", Offset = "0x479FC60", VA = "0x479FC60", Slot = "47")]
	internal virtual void Close(WriteState currentState)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4793EF0", Offset = "0x4793EF0", VA = "0x4793EF0")]
	protected XmlRawWriter()
	{
	}
}
