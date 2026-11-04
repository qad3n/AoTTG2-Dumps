// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlParserContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public string DocTypeName
	{
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string PublicId
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string SystemId
	{
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public string BaseURI
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public string InternalSubset
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	public string XmlLang
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000087")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000088")]
	public Encoding Encoding
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	internal bool HasDtdInfo
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x26ECC80", Offset = "0x26EB280", VA = "0x1826ECC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x26EC900", Offset = "0x26EAF00", VA = "0x1826EC900")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string xmlLang, XmlSpace xmlSpace)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x26EC960", Offset = "0x26EAF60", VA = "0x1826EC960")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x26EC9D0", Offset = "0x26EAFD0", VA = "0x1826EC9D0")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace, Encoding enc)
	{
	}
}
