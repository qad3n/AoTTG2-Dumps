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
		[Address(RVA = "0x44598D0", Offset = "0x44598D0", VA = "0x44598D0", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006E")]
	public virtual int LinePosition
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x4459970", Offset = "0x4459970", VA = "0x4459970", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4458860", Offset = "0x4458860", VA = "0x4458860")]
	public XmlAsyncCheckReaderWithLineInfo(XmlReader reader)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4459840", Offset = "0x4459840", VA = "0x4459840", Slot = "56")]
	public virtual bool HasLineInfo()
	{
		return default(bool);
	}
}
