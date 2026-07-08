using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200004F")]
public class XmlParserContext
{
	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x10")]
	private XmlNameTable _nt;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x18")]
	private XmlNamespaceManager _nsMgr;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x20")]
	private string _docTypeName;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x28")]
	private string _pubId;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x30")]
	private string _sysId;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x38")]
	private string _internalSubset;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x40")]
	private string _xmlLang;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x48")]
	private XmlSpace _xmlSpace;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x50")]
	private string _baseURI;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x58")]
	private Encoding _encoding;

	[Token(Token = "0x1700007F")]
	public XmlNameTable NameTable
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x4461D70", Offset = "0x4461D70", VA = "0x4461D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x4461D80", Offset = "0x4461D80", VA = "0x4461D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public string DocTypeName
	{
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x4461D90", Offset = "0x4461D90", VA = "0x4461D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string PublicId
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x4461DA0", Offset = "0x4461DA0", VA = "0x4461DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string SystemId
	{
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x4461DB0", Offset = "0x4461DB0", VA = "0x4461DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public string BaseURI
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x4461DC0", Offset = "0x4461DC0", VA = "0x4461DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public string InternalSubset
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x4461DD0", Offset = "0x4461DD0", VA = "0x4461DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	public string XmlLang
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x4461DE0", Offset = "0x4461DE0", VA = "0x4461DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000087")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x4461DF0", Offset = "0x4461DF0", VA = "0x4461DF0")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000088")]
	public Encoding Encoding
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x4461E00", Offset = "0x4461E00", VA = "0x4461E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	internal bool HasDtdInfo
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x4461E10", Offset = "0x4461E10", VA = "0x4461E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x44619C0", Offset = "0x44619C0", VA = "0x44619C0")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string xmlLang, XmlSpace xmlSpace)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4461A10", Offset = "0x4461A10", VA = "0x4461A10")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4461A50", Offset = "0x4461A50", VA = "0x4461A50")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace, Encoding enc)
	{
	}
}
