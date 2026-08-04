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
		[Address(RVA = "0x4797030", Offset = "0x4797030", VA = "0x4797030", Slot = "57")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006E")]
	public virtual int LinePosition
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x47970D0", Offset = "0x47970D0", VA = "0x47970D0", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4795FC0", Offset = "0x4795FC0", VA = "0x4795FC0")]
	public XmlAsyncCheckReaderWithLineInfo(XmlReader reader)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4796FA0", Offset = "0x4796FA0", VA = "0x4796FA0", Slot = "56")]
	public virtual bool HasLineInfo()
	{
		return default(bool);
	}
}
