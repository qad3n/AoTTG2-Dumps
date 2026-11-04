// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cookie
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002F3")]
public sealed class Cookie
{
	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly char[] PortSplitDelimiters;

	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] Reserved2Name;

	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] Reserved2Value;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x18")]
	private static Comparer staticComparer;

	[Token(Token = "0x4000B3F")]
	[FieldOffset(Offset = "0x10")]
	private string m_comment;

	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x18")]
	private Uri m_commentUri;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x20")]
	private CookieVariant m_cookieVariant;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x24")]
	private bool m_discard;

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x28")]
	private string m_domain;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x30")]
	private bool m_domain_implicit;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x38")]
	private DateTime m_expires;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0x40")]
	private string m_name;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x48")]
	private string m_path;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x50")]
	private bool m_path_implicit;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x58")]
	private string m_port;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x60")]
	private bool m_port_implicit;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0x68")]
	private int[] m_port_list;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x70")]
	private bool m_secure;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x71")]
	[OptionalField]
	private bool m_httpOnly;

	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0x78")]
	private DateTime m_timeStamp;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x80")]
	private string m_value;

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x88")]
	private int m_version;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x90")]
	private string m_domainKey;

	[Token(Token = "0x4000B52")]
	[FieldOffset(Offset = "0x98")]
	internal bool IsQuotedVersion;

	[Token(Token = "0x4000B53")]
	[FieldOffset(Offset = "0x99")]
	internal bool IsQuotedDomain;

	[Token(Token = "0x1700043E")]
	public string Comment
	{
		[Token(Token = "0x600146D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600146E")]
		[Address(RVA = "0x24EE510", Offset = "0x24ECB10", VA = "0x1824EE510")]
		set
		{
		}
	}

	[Token(Token = "0x1700043F")]
	public Uri CommentUri
	{
		[Token(Token = "0x600146F")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000440")]
	public bool HttpOnly
	{
		[Token(Token = "0x6001470")]
		[Address(RVA = "0x1BD40B0", Offset = "0x1BD26B0", VA = "0x181BD40B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000441")]
	public bool Discard
	{
		[Token(Token = "0x6001471")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		set
		{
		}
	}

	[Token(Token = "0x17000442")]
	public string Domain
	{
		[Token(Token = "0x6001472")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001473")]
		[Address(RVA = "0x27C8AF0", Offset = "0x27C70F0", VA = "0x1827C8AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000443")]
	private string _Domain
	{
		[Token(Token = "0x6001474")]
		[Address(RVA = "0x27C8800", Offset = "0x27C6E00", VA = "0x1827C8800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000444")]
	public bool Expired
	{
		[Token(Token = "0x6001475")]
		[Address(RVA = "0x27C8740", Offset = "0x27C6D40", VA = "0x1827C8740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000445")]
	public DateTime Expires
	{
		[Token(Token = "0x6001476")]
		[Address(RVA = "0x16EF920", Offset = "0x16EDF20", VA = "0x1816EF920")]
		set
		{
		}
	}

	[Token(Token = "0x17000446")]
	public string Name
	{
		[Token(Token = "0x6001477")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000447")]
	public string Path
	{
		[Token(Token = "0x6001479")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600147A")]
		[Address(RVA = "0x27C8B60", Offset = "0x27C7160", VA = "0x1827C8B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000448")]
	private string _Path
	{
		[Token(Token = "0x600147B")]
		[Address(RVA = "0x27C88D0", Offset = "0x27C6ED0", VA = "0x1827C88D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000449")]
	internal bool Plain
	{
		[Token(Token = "0x600147C")]
		[Address(RVA = "0x2736BA0", Offset = "0x27351A0", VA = "0x182736BA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700044A")]
	public string Port
	{
		[Token(Token = "0x6001480")]
		[Address(RVA = "0x27C8BB0", Offset = "0x27C71B0", VA = "0x1827C8BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044B")]
	internal int[] PortList
	{
		[Token(Token = "0x6001481")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044C")]
	private string _Port
	{
		[Token(Token = "0x6001482")]
		[Address(RVA = "0x27C8950", Offset = "0x27C6F50", VA = "0x1827C8950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044D")]
	public bool Secure
	{
		[Token(Token = "0x6001483")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001484")]
		[Address(RVA = "0xABD3A0", Offset = "0xABB9A0", VA = "0x180ABD3A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700044E")]
	public string Value
	{
		[Token(Token = "0x6001485")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001486")]
		[Address(RVA = "0x27C9070", Offset = "0x27C7670", VA = "0x1827C9070")]
		set
		{
		}
	}

	[Token(Token = "0x1700044F")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x6001487")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x17000450")]
	internal string DomainKey
	{
		[Token(Token = "0x6001488")]
		[Address(RVA = "0x27C8720", Offset = "0x27C6D20", VA = "0x1827C8720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000451")]
	public int Version
	{
		[Token(Token = "0x6001489")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600148A")]
		[Address(RVA = "0x27C90B0", Offset = "0x27C76B0", VA = "0x1827C90B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000452")]
	private string _Version
	{
		[Token(Token = "0x600148B")]
		[Address(RVA = "0x27C8A00", Offset = "0x27C7000", VA = "0x1827C8A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x27C85C0", Offset = "0x27C6BC0", VA = "0x1827C85C0")]
	public Cookie()
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x27C6DB0", Offset = "0x27C53B0", VA = "0x1827C6DB0")]
	internal bool InternalSetName(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x27C6EA0", Offset = "0x27C54A0", VA = "0x1827C6EA0")]
	private static bool IsDomainEqualToHost(string domain, string host)
	{
		return default(bool);
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x27C73D0", Offset = "0x27C59D0", VA = "0x1827C73D0")]
	internal bool VerifySetDefaults(CookieVariant variant, Uri uri, bool isLocalDomain, string localDomain, bool set_default, bool isThrow)
	{
		return default(bool);
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x27C6A00", Offset = "0x27C5000", VA = "0x1827C6A00")]
	private static bool DomainCharsTest(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x27C6BA0", Offset = "0x27C51A0", VA = "0x1827C6BA0")]
	internal static IComparer GetComparer()
	{
		return null;
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x27C6A90", Offset = "0x27C5090", VA = "0x1827C6A90", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x27C6BF0", Offset = "0x27C51F0", VA = "0x1827C6BF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x27C6F00", Offset = "0x27C5500", VA = "0x1827C6F00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
