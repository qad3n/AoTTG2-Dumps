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
		[Address(RVA = "0x479F4D0", Offset = "0x479F4D0", VA = "0x479F4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public XmlNamespaceManager NamespaceManager
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x479F4E0", Offset = "0x479F4E0", VA = "0x479F4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public string DocTypeName
	{
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x479F4F0", Offset = "0x479F4F0", VA = "0x479F4F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string PublicId
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x479F500", Offset = "0x479F500", VA = "0x479F500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string SystemId
	{
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x479F510", Offset = "0x479F510", VA = "0x479F510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public string BaseURI
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x479F520", Offset = "0x479F520", VA = "0x479F520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public string InternalSubset
	{
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x479F530", Offset = "0x479F530", VA = "0x479F530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	public string XmlLang
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x479F540", Offset = "0x479F540", VA = "0x479F540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000087")]
	public XmlSpace XmlSpace
	{
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x479F550", Offset = "0x479F550", VA = "0x479F550")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x17000088")]
	public Encoding Encoding
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x479F560", Offset = "0x479F560", VA = "0x479F560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	internal bool HasDtdInfo
	{
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x479F570", Offset = "0x479F570", VA = "0x479F570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x479F120", Offset = "0x479F120", VA = "0x479F120")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string xmlLang, XmlSpace xmlSpace)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x479F170", Offset = "0x479F170", VA = "0x479F170")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x479F1B0", Offset = "0x479F1B0", VA = "0x479F1B0")]
	public XmlParserContext(XmlNameTable nt, XmlNamespaceManager nsMgr, string docTypeName, string pubId, string sysId, string internalSubset, string baseURI, string xmlLang, XmlSpace xmlSpace, Encoding enc)
	{
	}
}
