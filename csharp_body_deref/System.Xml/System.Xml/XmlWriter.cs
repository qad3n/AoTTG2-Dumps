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
	[Address(RVA = "0x47BA240", Offset = "0x47BA240", VA = "0x47BA240")]
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
	[Address(RVA = "0x47BA260", Offset = "0x47BA260", VA = "0x47BA260")]
	public void WriteAttributeString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x47BA2C0", Offset = "0x47BA2C0", VA = "0x47BA2C0")]
	public void WriteAttributeString(string localName, string value)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x47BA320", Offset = "0x47BA320", VA = "0x47BA320")]
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
	[Address(RVA = "0x47BA370", Offset = "0x47BA370", VA = "0x47BA370", Slot = "26")]
	public virtual void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x47BA390", Offset = "0x47BA390", VA = "0x47BA390", Slot = "28")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600069A")]
	public abstract void Flush();

	[Token(Token = "0x600069B")]
	public abstract string LookupPrefix(string ns);

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x47BA3A0", Offset = "0x47BA3A0", VA = "0x47BA3A0", Slot = "31")]
	public virtual void WriteValue(string value)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x47BA3C0", Offset = "0x47BA3C0", VA = "0x47BA3C0", Slot = "32")]
	public virtual void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x47BA790", Offset = "0x47BA790", VA = "0x47BA790", Slot = "33")]
	public virtual void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x47BAC50", Offset = "0x47BAC50", VA = "0x47BAC50")]
	public void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x47BACC0", Offset = "0x47BACC0", VA = "0x47BACC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x47BACE0", Offset = "0x47BACE0", VA = "0x47BACE0", Slot = "34")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x47BAD20", Offset = "0x47BAD20", VA = "0x47BAD20")]
	public static XmlWriter Create(Stream output, XmlWriterSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x47BB320", Offset = "0x47BB320", VA = "0x47BB320")]
	public static XmlWriter Create(TextWriter output, XmlWriterSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x47BB6E0", Offset = "0x47BB6E0", VA = "0x47BB6E0")]
	protected XmlWriter()
	{
	}
}
