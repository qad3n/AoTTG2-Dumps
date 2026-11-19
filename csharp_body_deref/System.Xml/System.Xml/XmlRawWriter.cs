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
		[Address(RVA = "0x60A4A30", Offset = "0x60A3A30", VA = "0x60A4A30", Slot = "27")]
		get
		{
			return default(WriteState);
		}
	}

	[Token(Token = "0x1700008B")]
	internal virtual IXmlNamespaceResolver NamespaceResolver
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x60A4D40", Offset = "0x60A3D40", VA = "0x60A4D40", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	internal virtual bool SupportsNamespaceDeclarationInChunks
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x60A4DA0", Offset = "0x60A3DA0", VA = "0x60A4DA0", Slot = "43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x60A47E0", Offset = "0x60A37E0", VA = "0x60A47E0", Slot = "5")]
	public override void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x60A4840", Offset = "0x60A3840", VA = "0x60A4840", Slot = "6")]
	public override void WriteStartDocument(bool standalone)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x60A48A0", Offset = "0x60A38A0", VA = "0x60A48A0", Slot = "7")]
	public override void WriteEndDocument()
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x60A4900", Offset = "0x60A3900", VA = "0x60A4900", Slot = "8")]
	public override void WriteDocType(string name, string pubid, string sysid, string subset)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x60A4910", Offset = "0x60A3910", VA = "0x60A4910", Slot = "10")]
	public override void WriteEndElement()
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x60A4970", Offset = "0x60A3970", VA = "0x60A4970", Slot = "11")]
	public override void WriteFullEndElement()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x60A2ED0", Offset = "0x60A1ED0", VA = "0x60A2ED0", Slot = "25")]
	public override void WriteBase64(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x60A49D0", Offset = "0x60A39D0", VA = "0x60A49D0", Slot = "30")]
	public override string LookupPrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x60A4A90", Offset = "0x60A3A90", VA = "0x60A4A90", Slot = "14")]
	public override void WriteCData(string text)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x60A4AB0", Offset = "0x60A3AB0", VA = "0x60A4AB0", Slot = "18")]
	public override void WriteCharEntity(char ch)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x60A4B30", Offset = "0x60A3B30", VA = "0x60A4B30", Slot = "21")]
	public override void WriteSurrogateCharEntity(char lowChar, char highChar)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x60A4BC0", Offset = "0x60A3BC0", VA = "0x60A4BC0", Slot = "19")]
	public override void WriteWhitespace(string ws)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x60A4BE0", Offset = "0x60A3BE0", VA = "0x60A4BE0", Slot = "22")]
	public override void WriteChars(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x60A4C10", Offset = "0x60A3C10", VA = "0x60A4C10", Slot = "23")]
	public override void WriteRaw(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x60A4C40", Offset = "0x60A3C40", VA = "0x60A4C40", Slot = "24")]
	public override void WriteRaw(string data)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x60A4C60", Offset = "0x60A3C60", VA = "0x60A4C60", Slot = "31")]
	public override void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x60A4C80", Offset = "0x60A3C80", VA = "0x60A4C80", Slot = "32")]
	public override void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x60A4CE0", Offset = "0x60A3CE0", VA = "0x60A4CE0", Slot = "33")]
	public override void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x60A4D50", Offset = "0x60A3D50", VA = "0x60A4D50", Slot = "36")]
	internal virtual void WriteXmlDeclaration(XmlStandalone standalone)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x60A4D60", Offset = "0x60A3D60", VA = "0x60A4D60", Slot = "37")]
	internal virtual void WriteXmlDeclaration(string xmldecl)
	{
	}

	[Token(Token = "0x6000325")]
	internal abstract void StartElementContent();

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x60A4D70", Offset = "0x60A3D70", VA = "0x60A4D70", Slot = "39")]
	internal virtual void OnRootElement(ConformanceLevel conformanceLevel)
	{
	}

	[Token(Token = "0x6000327")]
	internal abstract void WriteEndElement(string prefix, string localName, string ns);

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x60A4D80", Offset = "0x60A3D80", VA = "0x60A4D80", Slot = "41")]
	internal virtual void WriteFullEndElement(string prefix, string localName, string ns)
	{
	}

	[Token(Token = "0x6000329")]
	internal abstract void WriteNamespaceDeclaration(string prefix, string ns);

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x60A4DB0", Offset = "0x60A3DB0", VA = "0x60A4DB0", Slot = "44")]
	internal virtual void WriteStartNamespaceDeclaration(string prefix)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x60A4DF0", Offset = "0x60A3DF0", VA = "0x60A4DF0", Slot = "45")]
	internal virtual void WriteEndNamespaceDeclaration()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x60A4E30", Offset = "0x60A3E30", VA = "0x60A4E30", Slot = "46")]
	internal virtual void WriteEndBase64()
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x60A4E50", Offset = "0x60A3E50", VA = "0x60A4E50", Slot = "47")]
	internal virtual void Close(WriteState currentState)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x6099460", Offset = "0x6098460", VA = "0x6099460")]
	protected XmlRawWriter()
	{
	}
}
