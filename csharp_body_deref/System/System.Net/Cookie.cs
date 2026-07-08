using System.Collections;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x200016B")]
public sealed class Cookie
{
	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly char[] PortSplitDelimiters;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] Reserved2Name;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] Reserved2Value;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0x18")]
	private static Comparer staticComparer;

	[Token(Token = "0x4000729")]
	[FieldOffset(Offset = "0x10")]
	private string m_comment;

	[Token(Token = "0x400072A")]
	[FieldOffset(Offset = "0x18")]
	private Uri m_commentUri;

	[Token(Token = "0x400072B")]
	[FieldOffset(Offset = "0x20")]
	private CookieVariant m_cookieVariant;

	[Token(Token = "0x400072C")]
	[FieldOffset(Offset = "0x24")]
	private bool m_discard;

	[Token(Token = "0x400072D")]
	[FieldOffset(Offset = "0x28")]
	private string m_domain;

	[Token(Token = "0x400072E")]
	[FieldOffset(Offset = "0x30")]
	private bool m_domain_implicit;

	[Token(Token = "0x400072F")]
	[FieldOffset(Offset = "0x38")]
	private DateTime m_expires;

	[Token(Token = "0x4000730")]
	[FieldOffset(Offset = "0x40")]
	private string m_name;

	[Token(Token = "0x4000731")]
	[FieldOffset(Offset = "0x48")]
	private string m_path;

	[Token(Token = "0x4000732")]
	[FieldOffset(Offset = "0x50")]
	private bool m_path_implicit;

	[Token(Token = "0x4000733")]
	[FieldOffset(Offset = "0x58")]
	private string m_port;

	[Token(Token = "0x4000734")]
	[FieldOffset(Offset = "0x60")]
	private bool m_port_implicit;

	[Token(Token = "0x4000735")]
	[FieldOffset(Offset = "0x68")]
	private int[] m_port_list;

	[Token(Token = "0x4000736")]
	[FieldOffset(Offset = "0x70")]
	private bool m_secure;

	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x71")]
	[OptionalField]
	private bool m_httpOnly;

	[Token(Token = "0x4000738")]
	[FieldOffset(Offset = "0x78")]
	private DateTime m_timeStamp;

	[Token(Token = "0x4000739")]
	[FieldOffset(Offset = "0x80")]
	private string m_value;

	[Token(Token = "0x400073A")]
	[FieldOffset(Offset = "0x88")]
	private int m_version;

	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x90")]
	private string m_domainKey;

	[Token(Token = "0x400073C")]
	[FieldOffset(Offset = "0x98")]
	internal bool IsQuotedVersion;

	[Token(Token = "0x400073D")]
	[FieldOffset(Offset = "0x99")]
	internal bool IsQuotedDomain;

	[Token(Token = "0x170001E9")]
	public string Comment
	{
		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x4646270", Offset = "0x4646270", VA = "0x4646270")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x4646280", Offset = "0x4646280", VA = "0x4646280")]
		set
		{
		}
	}

	[Token(Token = "0x170001EA")]
	public Uri CommentUri
	{
		[Token(Token = "0x60008AF")]
		[Address(RVA = "0x46462C0", Offset = "0x46462C0", VA = "0x46462C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EB")]
	public bool HttpOnly
	{
		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x46462D0", Offset = "0x46462D0", VA = "0x46462D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001EC")]
	public bool Discard
	{
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x46462E0", Offset = "0x46462E0", VA = "0x46462E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001ED")]
	public string Domain
	{
		[Token(Token = "0x60008B2")]
		[Address(RVA = "0x46462F0", Offset = "0x46462F0", VA = "0x46462F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x4646300", Offset = "0x4646300", VA = "0x4646300")]
		set
		{
		}
	}

	[Token(Token = "0x170001EE")]
	private string _Domain
	{
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4646370", Offset = "0x4646370", VA = "0x4646370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EF")]
	public bool Expired
	{
		[Token(Token = "0x60008B5")]
		[Address(RVA = "0x4646430", Offset = "0x4646430", VA = "0x4646430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F0")]
	public DateTime Expires
	{
		[Token(Token = "0x60008B6")]
		[Address(RVA = "0x46464D0", Offset = "0x46464D0", VA = "0x46464D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F1")]
	public string Name
	{
		[Token(Token = "0x60008B7")]
		[Address(RVA = "0x46464E0", Offset = "0x46464E0", VA = "0x46464E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public string Path
	{
		[Token(Token = "0x60008B9")]
		[Address(RVA = "0x46465F0", Offset = "0x46465F0", VA = "0x46465F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008BA")]
		[Address(RVA = "0x4646600", Offset = "0x4646600", VA = "0x4646600")]
		set
		{
		}
	}

	[Token(Token = "0x170001F3")]
	private string _Path
	{
		[Token(Token = "0x60008BB")]
		[Address(RVA = "0x4646640", Offset = "0x4646640", VA = "0x4646640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	internal bool Plain
	{
		[Token(Token = "0x60008BC")]
		[Address(RVA = "0x4646420", Offset = "0x4646420", VA = "0x4646420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F5")]
	public string Port
	{
		[Token(Token = "0x60008C0")]
		[Address(RVA = "0x4647550", Offset = "0x4647550", VA = "0x4647550")]
		set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	internal int[] PortList
	{
		[Token(Token = "0x60008C1")]
		[Address(RVA = "0x46479A0", Offset = "0x46479A0", VA = "0x46479A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F7")]
	private string _Port
	{
		[Token(Token = "0x60008C2")]
		[Address(RVA = "0x46479B0", Offset = "0x46479B0", VA = "0x46479B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F8")]
	public bool Secure
	{
		[Token(Token = "0x60008C3")]
		[Address(RVA = "0x4647A60", Offset = "0x4647A60", VA = "0x4647A60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x4647A70", Offset = "0x4647A70", VA = "0x4647A70")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	public string Value
	{
		[Token(Token = "0x60008C5")]
		[Address(RVA = "0x4647A80", Offset = "0x4647A80", VA = "0x4647A80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60008C6")]
		[Address(RVA = "0x4647A90", Offset = "0x4647A90", VA = "0x4647A90")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	internal CookieVariant Variant
	{
		[Token(Token = "0x60008C7")]
		[Address(RVA = "0x4647AD0", Offset = "0x4647AD0", VA = "0x4647AD0")]
		get
		{
			return default(CookieVariant);
		}
	}

	[Token(Token = "0x170001FB")]
	internal string DomainKey
	{
		[Token(Token = "0x60008C8")]
		[Address(RVA = "0x4647AE0", Offset = "0x4647AE0", VA = "0x4647AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FC")]
	public int Version
	{
		[Token(Token = "0x60008C9")]
		[Address(RVA = "0x4647B00", Offset = "0x4647B00", VA = "0x4647B00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008CA")]
		[Address(RVA = "0x4647B10", Offset = "0x4647B10", VA = "0x4647B10")]
		set
		{
		}
	}

	[Token(Token = "0x170001FD")]
	private string _Version
	{
		[Token(Token = "0x60008CB")]
		[Address(RVA = "0x4647B80", Offset = "0x4647B80", VA = "0x4647B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x4646110", Offset = "0x4646110", VA = "0x4646110")]
	public Cookie()
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x46464F0", Offset = "0x46464F0", VA = "0x46464F0")]
	internal bool InternalSetName(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x46466B0", Offset = "0x46466B0", VA = "0x46466B0")]
	private static bool IsDomainEqualToHost(string domain, string host)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x4646700", Offset = "0x4646700", VA = "0x4646700")]
	internal bool VerifySetDefaults(CookieVariant variant, Uri uri, bool isLocalDomain, string localDomain, bool set_default, bool isThrow)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4647460", Offset = "0x4647460", VA = "0x4647460")]
	private static bool DomainCharsTest(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x4647C70", Offset = "0x4647C70", VA = "0x4647C70")]
	internal static IComparer GetComparer()
	{
		return null;
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x4647CE0", Offset = "0x4647CE0", VA = "0x4647CE0", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x4647DB0", Offset = "0x4647DB0", VA = "0x4647DB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x4647F80", Offset = "0x4647F80", VA = "0x4647F80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
