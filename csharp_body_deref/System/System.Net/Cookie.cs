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
[Token(Token = "0x20002B4")]
public sealed class Cookie
{
	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly char[] PortSplitDelimiters;

	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] Reserved2Name;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] Reserved2Value;

	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x18")]
	private static Comparer staticComparer;

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x10")]
	private string m_comment;

	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x18")]
	private Uri m_commentUri;

	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x20")]
	private CookieVariant m_cookieVariant;

	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x24")]
	private bool m_discard;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x28")]
	private string m_domain;

	[Token(Token = "0x4000A75")]
	[FieldOffset(Offset = "0x30")]
	private bool m_domain_implicit;

	[Token(Token = "0x4000A76")]
	[FieldOffset(Offset = "0x38")]
	private DateTime m_expires;

	[Token(Token = "0x4000A77")]
	[FieldOffset(Offset = "0x40")]
	private string m_name;

	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x48")]
	private string m_path;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x50")]
	private bool m_path_implicit;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x58")]
	private string m_port;

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x60")]
	private bool m_port_implicit;

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x68")]
	private int[] m_port_list;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x70")]
	private bool m_secure;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x71")]
	[OptionalField]
	private bool m_httpOnly;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x78")]
	private DateTime m_timeStamp;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x80")]
	private string m_value;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x88")]
	private int m_version;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x90")]
	private string m_domainKey;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x98")]
	internal bool IsQuotedVersion;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x99")]
	internal bool IsQuotedDomain;

	[Token(Token = "0x1700040F")]
	public string Comment
	{
		[Token(Token = "0x60012AF")]
		[Address(RVA = "0x62B2870", Offset = "0x62B1870", VA = "0x62B2870")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x62B2880", Offset = "0x62B1880", VA = "0x62B2880")]
		set
		{
		}
	}

	[Token(Token = "0x17000410")]
	public Uri CommentUri
	{
		[Token(Token = "0x60012B1")]
		[Address(RVA = "0x62B28C0", Offset = "0x62B18C0", VA = "0x62B28C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000411")]
	public bool HttpOnly
	{
		[Token(Token = "0x60012B2")]
		[Address(RVA = "0x62B28D0", Offset = "0x62B18D0", VA = "0x62B28D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000412")]
	public bool Discard
	{
		[Token(Token = "0x60012B3")]
		[Address(RVA = "0x62B28E0", Offset = "0x62B18E0", VA = "0x62B28E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000413")]
	public string Domain
	{
		[Token(Token = "0x60012B4")]
		[Address(RVA = "0x62B28F0", Offset = "0x62B18F0", VA = "0x62B28F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012B5")]
		[Address(RVA = "0x62B2900", Offset = "0x62B1900", VA = "0x62B2900")]
		set
		{
		}
	}

	[Token(Token = "0x17000414")]
	private string _Domain
	{
		[Token(Token = "0x60012B6")]
		[Address(RVA = "0x62B2970", Offset = "0x62B1970", VA = "0x62B2970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000415")]
	public bool Expired
	{
		[Token(Token = "0x60012B7")]
		[Address(RVA = "0x62B2A30", Offset = "0x62B1A30", VA = "0x62B2A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000416")]
	public DateTime Expires
	{
		[Token(Token = "0x60012B8")]
		[Address(RVA = "0x62B2AD0", Offset = "0x62B1AD0", VA = "0x62B2AD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000417")]
	public string Name
	{
		[Token(Token = "0x60012B9")]
		[Address(RVA = "0x62B2AE0", Offset = "0x62B1AE0", VA = "0x62B2AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000418")]
	public string Path
	{
		[Token(Token = "0x60012BB")]
		[Address(RVA = "0x62B2C00", Offset = "0x62B1C00", VA = "0x62B2C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012BC")]
		[Address(RVA = "0x62B2C10", Offset = "0x62B1C10", VA = "0x62B2C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000419")]
	private string _Path
	{
		[Token(Token = "0x60012BD")]
		[Address(RVA = "0x62B2C50", Offset = "0x62B1C50", VA = "0x62B2C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041A")]
	internal bool Plain
	{
		[Token(Token = "0x60012BE")]
		[Address(RVA = "0x62B2A20", Offset = "0x62B1A20", VA = "0x62B2A20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700041B")]
	public string Port
	{
		[Token(Token = "0x60012C2")]
		[Address(RVA = "0x62B3910", Offset = "0x62B2910", VA = "0x62B3910")]
		set
		{
		}
	}

	[Token(Token = "0x1700041C")]
	internal int[] PortList
	{
		[Token(Token = "0x60012C3")]
		[Address(RVA = "0x62B3D50", Offset = "0x62B2D50", VA = "0x62B3D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041D")]
	private string _Port
	{
		[Token(Token = "0x60012C4")]
		[Address(RVA = "0x62B3D60", Offset = "0x62B2D60", VA = "0x62B3D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041E")]
	public bool Secure
	{
		[Token(Token = "0x60012C5")]
		[Address(RVA = "0x62B3E10", Offset = "0x62B2E10", VA = "0x62B3E10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60012C6")]
		[Address(RVA = "0x62B3E20", Offset = "0x62B2E20", VA = "0x62B3E20")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	public string Value
	{
		[Token(Token = "0x60012C7")]
		[Address(RVA = "0x62B3E30", Offset = "0x62B2E30", VA = "0x62B3E30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012C8")]
		[Address(RVA = "0x62B3E40", Offset = "0x62B2E40", VA = "0x62B3E40")]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x62B3E80", Offset = "0x62B2E80", VA = "0x62B3E80")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x17000421")]
	internal string DomainKey
	{
		[Token(Token = "0x60012CA")]
		[Address(RVA = "0x62B3E90", Offset = "0x62B2E90", VA = "0x62B3E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000422")]
	public int Version
	{
		[Token(Token = "0x60012CB")]
		[Address(RVA = "0x62B3EB0", Offset = "0x62B2EB0", VA = "0x62B3EB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60012CC")]
		[Address(RVA = "0x62B3EC0", Offset = "0x62B2EC0", VA = "0x62B3EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000423")]
	private string _Version
	{
		[Token(Token = "0x60012CD")]
		[Address(RVA = "0x62B3F30", Offset = "0x62B2F30", VA = "0x62B3F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x62B2710", Offset = "0x62B1710", VA = "0x62B2710")]
	public Cookie()
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x62B2AF0", Offset = "0x62B1AF0", VA = "0x62B2AF0")]
	internal bool InternalSetName(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x62B2CC0", Offset = "0x62B1CC0", VA = "0x62B2CC0")]
	private static bool IsDomainEqualToHost(string domain, string host)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x62B2D10", Offset = "0x62B1D10", VA = "0x62B2D10")]
	internal bool VerifySetDefaults(CookieVariant variant, Uri uri, bool isLocalDomain, string localDomain, bool set_default, bool isThrow)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x62B3800", Offset = "0x62B2800", VA = "0x62B3800")]
	private static bool DomainCharsTest(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x62B4020", Offset = "0x62B3020", VA = "0x62B4020")]
	internal static IComparer GetComparer()
	{
		return null;
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x62B4090", Offset = "0x62B3090", VA = "0x62B4090", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x62B4160", Offset = "0x62B3160", VA = "0x62B4160", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x62B4330", Offset = "0x62B3330", VA = "0x62B4330", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
