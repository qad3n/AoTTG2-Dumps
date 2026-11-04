// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000081")]
public abstract class XmlWriter : IDisposable
{
	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x10")]
	private char[] writeNodeBuffer;

	[Token(Token = "0x17000169")]
	public abstract WriteState WriteState
	{
		[Token(Token = "0x6000698")]
		get;
	}

	[Token(Token = "0x600067E")]
	public abstract void WriteStartDocument();

	[Token(Token = "0x600067F")]
	public abstract void WriteStartDocument(bool standalone);

	[Token(Token = "0x6000680")]
	public abstract void WriteEndDocument();

	[Token(Token = "0x6000681")]
	public abstract void WriteDocType(string name, string pubid, string sysid, string subset);

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x27165F0", Offset = "0x2714BF0", VA = "0x1827165F0")]
	public void WriteStartElement(string localName, string ns)
	{
	}

	[Token(Token = "0x6000683")]
	public abstract void WriteStartElement(string prefix, string localName, string ns);

	[Token(Token = "0x6000684")]
	public abstract void WriteEndElement();

	[Token(Token = "0x6000685")]
	public abstract void WriteFullEndElement();

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x2715C00", Offset = "0x2714200", VA = "0x182715C00")]
	public void WriteAttributeString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x2715C70", Offset = "0x2714270", VA = "0x182715C70")]
	public void WriteAttributeString(string localName, string value)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x2715CE0", Offset = "0x27142E0", VA = "0x182715CE0")]
	public void WriteAttributeString(string prefix, string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000689")]
	public abstract void WriteStartAttribute(string prefix, string localName, string ns);

	[Token(Token = "0x600068A")]
	public abstract void WriteEndAttribute();

	[Token(Token = "0x600068B")]
	public abstract void WriteCData(string text);

	[Token(Token = "0x600068C")]
	public abstract void WriteComment(string text);

	[Token(Token = "0x600068D")]
	public abstract void WriteProcessingInstruction(string name, string text);

	[Token(Token = "0x600068E")]
	public abstract void WriteEntityRef(string name);

	[Token(Token = "0x600068F")]
	public abstract void WriteCharEntity(char ch);

	[Token(Token = "0x6000690")]
	public abstract void WriteWhitespace(string ws);

	[Token(Token = "0x6000691")]
	public abstract void WriteString(string text);

	[Token(Token = "0x6000692")]
	public abstract void WriteSurrogateCharEntity(char lowChar, char highChar);

	[Token(Token = "0x6000693")]
	public abstract void WriteChars(char[] buffer, int index, int count);

	[Token(Token = "0x6000694")]
	public abstract void WriteRaw(char[] buffer, int index, int count);

	[Token(Token = "0x6000695")]
	public abstract void WriteRaw(string data);

	[Token(Token = "0x6000696")]
	public abstract void WriteBase64(byte[] buffer, int index, int count);

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x2716000", Offset = "0x2714600", VA = "0x182716000", Slot = "26")]
	public virtual void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "28")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600069A")]
	public abstract void Flush();

	[Token(Token = "0x600069B")]
	public abstract string LookupPrefix(string ns);

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x2716620", Offset = "0x2714C20", VA = "0x182716620", Slot = "31")]
	public virtual void WriteValue(string value)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x2715D30", Offset = "0x2714330", VA = "0x182715D30", Slot = "32")]
	public virtual void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x27160A0", Offset = "0x27146A0", VA = "0x1827160A0", Slot = "33")]
	public virtual void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x2716030", Offset = "0x2714630", VA = "0x182716030")]
	public void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x2715BE0", Offset = "0x27141E0", VA = "0x182715BE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x2715BA0", Offset = "0x27141A0", VA = "0x182715BA0", Slot = "34")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x2715AC0", Offset = "0x27140C0", VA = "0x182715AC0")]
	public static XmlWriter Create(Stream output, XmlWriterSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x2715B30", Offset = "0x2714130", VA = "0x182715B30")]
	public static XmlWriter Create(TextWriter output, XmlWriterSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XmlWriter()
	{
	}
}
