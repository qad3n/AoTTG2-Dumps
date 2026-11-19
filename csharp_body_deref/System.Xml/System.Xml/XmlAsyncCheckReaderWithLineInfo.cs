// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAsyncCheckReaderWithLineInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000045")]
internal class XmlAsyncCheckReaderWithLineInfo : XmlAsyncCheckReader, IXmlLineInfo
{
	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x20")]
	private readonly IXmlLineInfo readerAsIXmlLineInfo;

	[Token(Token = "0x1700006D")]
	public virtual int LineNumber
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x609C5B0", Offset = "0x609B5B0", VA = "0x609C5B0", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006E")]
	public virtual int LinePosition
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x609C650", Offset = "0x609B650", VA = "0x609C650", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x609B540", Offset = "0x609A540", VA = "0x609B540")]
	public XmlAsyncCheckReaderWithLineInfo(XmlReader reader)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x609C520", Offset = "0x609B520", VA = "0x609C520", Slot = "56")]
	public virtual bool HasLineInfo()
	{
		return default(bool);
	}
}
