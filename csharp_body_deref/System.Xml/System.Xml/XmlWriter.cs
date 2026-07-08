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
	[Address(RVA = "0x447CAE0", Offset = "0x447CAE0", VA = "0x447CAE0")]
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
	[Address(RVA = "0x447CB00", Offset = "0x447CB00", VA = "0x447CB00")]
	public void WriteAttributeString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x447CB60", Offset = "0x447CB60", VA = "0x447CB60")]
	public void WriteAttributeString(string localName, string value)
	{
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x447CBC0", Offset = "0x447CBC0", VA = "0x447CBC0")]
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
	[Address(RVA = "0x447CC10", Offset = "0x447CC10", VA = "0x447CC10", Slot = "26")]
	public virtual void WriteBinHex(byte[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x447CC30", Offset = "0x447CC30", VA = "0x447CC30", Slot = "28")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600069A")]
	public abstract void Flush();

	[Token(Token = "0x600069B")]
	public abstract string LookupPrefix(string ns);

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x447CC40", Offset = "0x447CC40", VA = "0x447CC40", Slot = "31")]
	public virtual void WriteValue(string value)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x447CC60", Offset = "0x447CC60", VA = "0x447CC60", Slot = "32")]
	public virtual void WriteAttributes(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x447D030", Offset = "0x447D030", VA = "0x447D030", Slot = "33")]
	public virtual void WriteNode(XmlReader reader, bool defattr)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x447D4F0", Offset = "0x447D4F0", VA = "0x447D4F0")]
	public void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x447D560", Offset = "0x447D560", VA = "0x447D560", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x447D580", Offset = "0x447D580", VA = "0x447D580", Slot = "34")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x447D5C0", Offset = "0x447D5C0", VA = "0x447D5C0")]
	public static XmlWriter Create(Stream output, XmlWriterSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x447DBC0", Offset = "0x447DBC0", VA = "0x447DBC0")]
	public static XmlWriter Create(TextWriter output, XmlWriterSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x447DF80", Offset = "0x447DF80", VA = "0x447DF80")]
	protected XmlWriter()
	{
	}
}
