// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathNodeInfoAtom
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002DC")]
internal sealed class XPathNodeInfoAtom
{
	[Token(Token = "0x4000F0E")]
	[FieldOffset(Offset = "0x10")]
	private string _localName;

	[Token(Token = "0x4000F0F")]
	[FieldOffset(Offset = "0x18")]
	private string _namespaceUri;

	[Token(Token = "0x4000F10")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x4000F11")]
	[FieldOffset(Offset = "0x28")]
	private string _baseUri;

	[Token(Token = "0x4000F12")]
	[FieldOffset(Offset = "0x30")]
	private XPathNode[] _pageParent;

	[Token(Token = "0x4000F13")]
	[FieldOffset(Offset = "0x38")]
	private XPathNode[] _pageSibling;

	[Token(Token = "0x4000F14")]
	[FieldOffset(Offset = "0x40")]
	private XPathNode[] _pageSimilar;

	[Token(Token = "0x4000F15")]
	[FieldOffset(Offset = "0x48")]
	private XPathDocument _doc;

	[Token(Token = "0x4000F16")]
	[FieldOffset(Offset = "0x50")]
	private int _lineNumBase;

	[Token(Token = "0x4000F17")]
	[FieldOffset(Offset = "0x54")]
	private int _linePosBase;

	[Token(Token = "0x4000F18")]
	[FieldOffset(Offset = "0x58")]
	private XPathNodePageInfo _pageInfo;

	[Token(Token = "0x17000773")]
	public XPathNodePageInfo PageInfo
	{
		[Token(Token = "0x6001CDF")]
		[Address(RVA = "0x6098870", Offset = "0x6097870", VA = "0x6098870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000774")]
	public string LocalName
	{
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x6098880", Offset = "0x6097880", VA = "0x6098880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000775")]
	public string NamespaceUri
	{
		[Token(Token = "0x6001CE1")]
		[Address(RVA = "0x6098890", Offset = "0x6097890", VA = "0x6098890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000776")]
	public string Prefix
	{
		[Token(Token = "0x6001CE2")]
		[Address(RVA = "0x60988A0", Offset = "0x60978A0", VA = "0x60988A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000777")]
	public string BaseUri
	{
		[Token(Token = "0x6001CE3")]
		[Address(RVA = "0x60988B0", Offset = "0x60978B0", VA = "0x60988B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000778")]
	public XPathNode[] SiblingPage
	{
		[Token(Token = "0x6001CE4")]
		[Address(RVA = "0x60988C0", Offset = "0x60978C0", VA = "0x60988C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000779")]
	public XPathNode[] SimilarElementPage
	{
		[Token(Token = "0x6001CE5")]
		[Address(RVA = "0x60988D0", Offset = "0x60978D0", VA = "0x60988D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077A")]
	public XPathNode[] ParentPage
	{
		[Token(Token = "0x6001CE6")]
		[Address(RVA = "0x60988E0", Offset = "0x60978E0", VA = "0x60988E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077B")]
	public XPathDocument Document
	{
		[Token(Token = "0x6001CE7")]
		[Address(RVA = "0x60988F0", Offset = "0x60978F0", VA = "0x60988F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077C")]
	public int LineNumberBase
	{
		[Token(Token = "0x6001CE8")]
		[Address(RVA = "0x6098900", Offset = "0x6097900", VA = "0x6098900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700077D")]
	public int LinePositionBase
	{
		[Token(Token = "0x6001CE9")]
		[Address(RVA = "0x6098910", Offset = "0x6097910", VA = "0x6098910")]
		get
		{
			return default(int);
		}
	}
}
