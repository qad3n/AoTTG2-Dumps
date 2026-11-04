// ==================== AoTTG2 cross-reference ====================
// Type: System.Uri
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000BB")]
[TypeConverter(typeof(UriTypeConverter))]
public class Uri : ISerializable
{
	[Token(Token = "0x20000BC")]
	[Flags]
	private enum Flags : ulong
	{
		[Token(Token = "0x4000256")]
		Zero = 0uL,
		[Token(Token = "0x4000257")]
		SchemeNotCanonical = 1uL,
		[Token(Token = "0x4000258")]
		UserNotCanonical = 2uL,
		[Token(Token = "0x4000259")]
		HostNotCanonical = 4uL,
		[Token(Token = "0x400025A")]
		PortNotCanonical = 8uL,
		[Token(Token = "0x400025B")]
		PathNotCanonical = 0x10uL,
		[Token(Token = "0x400025C")]
		QueryNotCanonical = 0x20uL,
		[Token(Token = "0x400025D")]
		FragmentNotCanonical = 0x40uL,
		[Token(Token = "0x400025E")]
		CannotDisplayCanonical = SchemeNotCanonical | UserNotCanonical | HostNotCanonical | PortNotCanonical | PathNotCanonical | QueryNotCanonical | FragmentNotCanonical,
		[Token(Token = "0x400025F")]
		E_UserNotCanonical = 0x80uL,
		[Token(Token = "0x4000260")]
		E_HostNotCanonical = 0x100uL,
		[Token(Token = "0x4000261")]
		E_PortNotCanonical = 0x200uL,
		[Token(Token = "0x4000262")]
		E_PathNotCanonical = 0x400uL,
		[Token(Token = "0x4000263")]
		E_QueryNotCanonical = 0x800uL,
		[Token(Token = "0x4000264")]
		E_FragmentNotCanonical = 0x1000uL,
		[Token(Token = "0x4000265")]
		E_CannotDisplayCanonical = E_UserNotCanonical | E_HostNotCanonical | E_PortNotCanonical | E_PathNotCanonical | E_QueryNotCanonical | E_FragmentNotCanonical,
		[Token(Token = "0x4000266")]
		ShouldBeCompressed = 0x2000uL,
		[Token(Token = "0x4000267")]
		FirstSlashAbsent = 0x4000uL,
		[Token(Token = "0x4000268")]
		BackslashInPath = 0x8000uL,
		[Token(Token = "0x4000269")]
		IndexMask = CannotDisplayCanonical | E_CannotDisplayCanonical | ShouldBeCompressed | FirstSlashAbsent | BackslashInPath,
		[Token(Token = "0x400026A")]
		HostTypeMask = 0x70000uL,
		[Token(Token = "0x400026B")]
		HostNotParsed = 0uL,
		[Token(Token = "0x400026C")]
		IPv6HostType = 0x10000uL,
		[Token(Token = "0x400026D")]
		IPv4HostType = 0x20000uL,
		[Token(Token = "0x400026E")]
		DnsHostType = 0x30000uL,
		[Token(Token = "0x400026F")]
		UncHostType = 0x40000uL,
		[Token(Token = "0x4000270")]
		BasicHostType = 0x50000uL,
		[Token(Token = "0x4000271")]
		UnusedHostType = 0x60000uL,
		[Token(Token = "0x4000272")]
		UnknownHostType = HostTypeMask,
		[Token(Token = "0x4000273")]
		UserEscaped = 0x80000uL,
		[Token(Token = "0x4000274")]
		AuthorityFound = 0x100000uL,
		[Token(Token = "0x4000275")]
		HasUserInfo = 0x200000uL,
		[Token(Token = "0x4000276")]
		LoopbackHost = 0x400000uL,
		[Token(Token = "0x4000277")]
		NotDefaultPort = 0x800000uL,
		[Token(Token = "0x4000278")]
		UserDrivenParsing = 0x1000000uL,
		[Token(Token = "0x4000279")]
		CanonicalDnsHost = 0x2000000uL,
		[Token(Token = "0x400027A")]
		ErrorOrParsingRecursion = 0x4000000uL,
		[Token(Token = "0x400027B")]
		DosPath = 0x8000000uL,
		[Token(Token = "0x400027C")]
		UncPath = 0x10000000uL,
		[Token(Token = "0x400027D")]
		ImplicitFile = 0x20000000uL,
		[Token(Token = "0x400027E")]
		MinimalUriInfoSet = 0x40000000uL,
		[Token(Token = "0x400027F")]
		AllUriInfoSet = 0x80000000uL,
		[Token(Token = "0x4000280")]
		IdnHost = 0x100000000uL,
		[Token(Token = "0x4000281")]
		HasUnicode = 0x200000000uL,
		[Token(Token = "0x4000282")]
		HostUnicodeNormalized = 0x400000000uL,
		[Token(Token = "0x4000283")]
		RestUnicodeNormalized = 0x800000000uL,
		[Token(Token = "0x4000284")]
		UnicodeHost = 0x1000000000uL,
		[Token(Token = "0x4000285")]
		IntranetUri = 0x2000000000uL,
		[Token(Token = "0x4000286")]
		UseOrigUncdStrOffset = 0x4000000000uL,
		[Token(Token = "0x4000287")]
		UserIriCanonical = 0x8000000000uL,
		[Token(Token = "0x4000288")]
		PathIriCanonical = 0x10000000000uL,
		[Token(Token = "0x4000289")]
		QueryIriCanonical = 0x20000000000uL,
		[Token(Token = "0x400028A")]
		FragmentIriCanonical = 0x40000000000uL,
		[Token(Token = "0x400028B")]
		IriCanonical = UserIriCanonical | PathIriCanonical | QueryIriCanonical | FragmentIriCanonical,
		[Token(Token = "0x400028C")]
		CompressedSlashes = 0x100000000000uL
	}

	[Token(Token = "0x20000BD")]
	private class UriInfo
	{
		[Token(Token = "0x400028D")]
		[FieldOffset(Offset = "0x10")]
		public string Host;

		[Token(Token = "0x400028E")]
		[FieldOffset(Offset = "0x18")]
		public string ScopeId;

		[Token(Token = "0x400028F")]
		[FieldOffset(Offset = "0x20")]
		public string String;

		[Token(Token = "0x4000290")]
		[FieldOffset(Offset = "0x28")]
		public Offset Offset;

		[Token(Token = "0x4000291")]
		[FieldOffset(Offset = "0x38")]
		public string DnsSafeHost;

		[Token(Token = "0x4000292")]
		[FieldOffset(Offset = "0x40")]
		public MoreInfo MoreInfo;

		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public UriInfo()
		{
		}
	}

	[Token(Token = "0x20000BE")]
	private struct Offset
	{
		[Token(Token = "0x4000293")]
		[FieldOffset(Offset = "0x0")]
		public ushort Scheme;

		[Token(Token = "0x4000294")]
		[FieldOffset(Offset = "0x2")]
		public ushort User;

		[Token(Token = "0x4000295")]
		[FieldOffset(Offset = "0x4")]
		public ushort Host;

		[Token(Token = "0x4000296")]
		[FieldOffset(Offset = "0x6")]
		public ushort PortValue;

		[Token(Token = "0x4000297")]
		[FieldOffset(Offset = "0x8")]
		public ushort Path;

		[Token(Token = "0x4000298")]
		[FieldOffset(Offset = "0xA")]
		public ushort Query;

		[Token(Token = "0x4000299")]
		[FieldOffset(Offset = "0xC")]
		public ushort Fragment;

		[Token(Token = "0x400029A")]
		[FieldOffset(Offset = "0xE")]
		public ushort End;
	}

	[Token(Token = "0x20000BF")]
	private class MoreInfo
	{
		[Token(Token = "0x400029B")]
		[FieldOffset(Offset = "0x10")]
		public string Path;

		[Token(Token = "0x400029C")]
		[FieldOffset(Offset = "0x18")]
		public string Query;

		[Token(Token = "0x400029D")]
		[FieldOffset(Offset = "0x20")]
		public string Fragment;

		[Token(Token = "0x400029E")]
		[FieldOffset(Offset = "0x28")]
		public string AbsoluteUri;

		[Token(Token = "0x400029F")]
		[FieldOffset(Offset = "0x30")]
		public int Hash;

		[Token(Token = "0x40002A0")]
		[FieldOffset(Offset = "0x38")]
		public string RemoteUrl;

		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MoreInfo()
		{
		}
	}

	[Token(Token = "0x20000C0")]
	[Flags]
	private enum Check
	{
		[Token(Token = "0x40002A2")]
		None = 0,
		[Token(Token = "0x40002A3")]
		EscapedCanonical = 1,
		[Token(Token = "0x40002A4")]
		DisplayCanonical = 2,
		[Token(Token = "0x40002A5")]
		DotSlashAttn = 4,
		[Token(Token = "0x40002A6")]
		DotSlashEscaped = 0x80,
		[Token(Token = "0x40002A7")]
		BackslashInPath = 0x10,
		[Token(Token = "0x40002A8")]
		ReservedFound = 0x20,
		[Token(Token = "0x40002A9")]
		NotIriCanonical = 0x40,
		[Token(Token = "0x40002AA")]
		FoundNonAscii = 8
	}

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string UriSchemeFile;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string UriSchemeFtp;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string UriSchemeGopher;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string UriSchemeHttp;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string UriSchemeHttps;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly string UriSchemeWs;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string UriSchemeWss;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string UriSchemeMailto;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string UriSchemeNews;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string UriSchemeNntp;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string UriSchemeNetTcp;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string UriSchemeNetPipe;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string SchemeDelimiter;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x10")]
	private string m_String;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x18")]
	private string m_originalUnicodeString;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x20")]
	private UriParser m_Syntax;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x28")]
	private string m_DnsSafeHost;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x30")]
	private Flags m_Flags;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x38")]
	private UriInfo m_Info;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x40")]
	private bool m_iriParsing;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x68")]
	private static bool s_ConfigInitialized;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x69")]
	private static bool s_ConfigInitializing;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x6C")]
	private static UriIdnScope s_IdnScope;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x70")]
	private static bool s_IriParsing;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x71")]
	private static bool useDotNetRelativeOrAbsolute;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x72")]
	internal static readonly bool IsWindowsFileSystem;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x78")]
	private static object s_initLock;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x80")]
	internal static readonly char[] HexLowerChars;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x88")]
	private static readonly char[] _WSchars;

	[Token(Token = "0x17000088")]
	private bool IsImplicitFile
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x27BF400", Offset = "0x27BDA00", VA = "0x1827BF400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000089")]
	private bool IsUncOrDosPath
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x27BF4D0", Offset = "0x27BDAD0", VA = "0x1827BF4D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008A")]
	private bool IsDosPath
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x27BF320", Offset = "0x27BD920", VA = "0x1827BF320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008B")]
	private bool IsUncPath
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x27BF4E0", Offset = "0x27BDAE0", VA = "0x1827BF4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008C")]
	private Flags HostType
	{
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x27BF050", Offset = "0x27BD650", VA = "0x1827BF050")]
		get
		{
			return default(Flags);
		}
	}

	[Token(Token = "0x1700008D")]
	private UriParser Syntax
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008E")]
	private bool IsNotAbsoluteUri
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x13B7EF0", Offset = "0x13B64F0", VA = "0x1813B7EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008F")]
	private bool AllowIdn
	{
		[Token(Token = "0x6000387")]
		[Address(RVA = "0x27BE910", Offset = "0x27BCF10", VA = "0x1827BE910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000090")]
	internal bool UserDrivenParsing
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x27BFDB0", Offset = "0x27BE3B0", VA = "0x1827BFDB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000091")]
	private ushort SecuredPathIndex
	{
		[Token(Token = "0x600038C")]
		[Address(RVA = "0x27BFB70", Offset = "0x27BE170", VA = "0x1827BFB70")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x17000092")]
	public string AbsolutePath
	{
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x27BE6F0", Offset = "0x27BCCF0", VA = "0x1827BE6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000093")]
	private string PrivateAbsolutePath
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x27BF8A0", Offset = "0x27BDEA0", VA = "0x1827BF8A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000094")]
	public string AbsoluteUri
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x27BE7C0", Offset = "0x27BCDC0", VA = "0x1827BE7C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000095")]
	public string LocalPath
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x27BF580", Offset = "0x27BDB80", VA = "0x1827BF580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000096")]
	public string Authority
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x27BEA00", Offset = "0x27BD000", VA = "0x1827BEA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000097")]
	public UriHostNameType HostNameType
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x27BEF00", Offset = "0x27BD500", VA = "0x1827BEF00")]
		get
		{
			return default(UriHostNameType);
		}
	}

	[Token(Token = "0x17000098")]
	public bool IsDefaultPort
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x27BF220", Offset = "0x27BD820", VA = "0x1827BF220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000099")]
	public bool IsFile
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x27BF330", Offset = "0x27BD930", VA = "0x1827BF330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009A")]
	public bool IsLoopback
	{
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x27BF410", Offset = "0x27BDA10", VA = "0x1827BF410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009B")]
	public string PathAndQuery
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x27BF6C0", Offset = "0x27BDCC0", VA = "0x1827BF6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009C")]
	public string[] Segments
	{
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x27BFBD0", Offset = "0x27BE1D0", VA = "0x1827BFBD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public bool IsUnc
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x27BF4F0", Offset = "0x27BDAF0", VA = "0x1827BF4F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009E")]
	public string Host
	{
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x27BF060", Offset = "0x27BD660", VA = "0x1827BF060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	private static object InitializeLock
	{
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x27BF130", Offset = "0x27BD730", VA = "0x1827BF130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	public int Port
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x27BF790", Offset = "0x27BDD90", VA = "0x1827BF790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A1")]
	public string Query
	{
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x27BF990", Offset = "0x27BDF90", VA = "0x1827BF990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A2")]
	public string Fragment
	{
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x27BEDA0", Offset = "0x27BD3A0", VA = "0x1827BEDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	public string Scheme
	{
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x27BFAE0", Offset = "0x27BE0E0", VA = "0x1827BFAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	private bool OriginalStringSwitched
	{
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x27BF600", Offset = "0x27BDC00", VA = "0x1827BF600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A5")]
	public string OriginalString
	{
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x27BF660", Offset = "0x27BDC60", VA = "0x1827BF660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A6")]
	public string DnsSafeHost
	{
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x27BEA90", Offset = "0x27BD090", VA = "0x1827BEA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	public string IdnHost
	{
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x27BF0F0", Offset = "0x27BD6F0", VA = "0x1827BF0F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	public bool IsAbsoluteUri
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x2450AE0", Offset = "0x244F0E0", VA = "0x182450AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A9")]
	public bool UserEscaped
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x27BFDC0", Offset = "0x27BE3C0", VA = "0x1827BFDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AA")]
	public string UserInfo
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x27BFDD0", Offset = "0x27BE3D0", VA = "0x1827BFDD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	internal bool HasAuthority
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x27BEEF0", Offset = "0x27BD4F0", VA = "0x1827BEEF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x27B9630", Offset = "0x27B7C30", VA = "0x1827B9630")]
	internal static bool IriParsingStatic(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x27AFAA0", Offset = "0x27AE0A0", VA = "0x1827AFAA0")]
	private bool AllowIdnStatic(UriParser syntax, Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private bool IsIntranet(string schemeHost)
	{
		return default(bool);
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x27BCF20", Offset = "0x27BB520", VA = "0x1827BCF20")]
	private void SetUserDrivenParsing()
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x27B9D40", Offset = "0x27B8340", VA = "0x1827B9D40")]
	private bool NotAny(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x27B8230", Offset = "0x27B6830", VA = "0x1827B8230")]
	private bool InFact(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x27BCF70", Offset = "0x27BB570", VA = "0x1827BCF70")]
	private static bool StaticNotAny(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x27BCF40", Offset = "0x27BB540", VA = "0x1827BCF40")]
	private static bool StaticInFact(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x27B47D0", Offset = "0x27B2DD0", VA = "0x1827B47D0")]
	private UriInfo EnsureUriInfo()
	{
		return null;
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x27B47B0", Offset = "0x27B2DB0", VA = "0x1827B47B0")]
	private void EnsureParseRemaining()
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x27B4740", Offset = "0x27B2D40", VA = "0x1827B4740")]
	private void EnsureHostString(bool allowDnsOptimization)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x27BE410", Offset = "0x27BCA10", VA = "0x1827BE410")]
	public Uri(string uriString)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x27BE110", Offset = "0x27BC710", VA = "0x1827BE110")]
	public Uri(string uriString, UriKind uriKind)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x27BE4F0", Offset = "0x27BCAF0", VA = "0x1827BE4F0")]
	public Uri(Uri baseUri, string relativeUri)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x27B44C0", Offset = "0x27B2AC0", VA = "0x1827B44C0")]
	private void CreateUri(Uri baseUri, string relativeUri, bool dontEscape)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x27BE1B0", Offset = "0x27BC7B0", VA = "0x1827BE1B0")]
	public Uri(Uri baseUri, Uri relativeUri)
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x27B5B50", Offset = "0x27B4150", VA = "0x1827B5B50")]
	private static ParsingError GetCombinedString(Uri baseUri, string relativeStr, bool dontEscape, ref string result)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x27B6360", Offset = "0x27B4960", VA = "0x1827B6360")]
	private static UriFormatException GetException(ParsingError err)
	{
		return null;
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x27BE5E0", Offset = "0x27BCBE0", VA = "0x1827BE5E0")]
	protected Uri(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x27B7400", Offset = "0x27B5A00", VA = "0x1827B7400", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x27B7400", Offset = "0x27B5A00", VA = "0x1827B7400")]
	protected void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x27BCF50", Offset = "0x27BB550", VA = "0x1827BCF50")]
	private static bool StaticIsFile(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x27B8240", Offset = "0x27B6840", VA = "0x1827B8240")]
	private static void InitializeUriConfig()
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x27B6B90", Offset = "0x27B5190", VA = "0x1827B6B90")]
	private string GetLocalPath()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x27B9AF0", Offset = "0x27B80F0", VA = "0x1827B9AF0")]
	internal static bool IsGenDelim(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x27B9B20", Offset = "0x27B8120", VA = "0x1827B9B20")]
	public static bool IsHexDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x27B5250", Offset = "0x27B3850", VA = "0x1827B5250")]
	public static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x27B6510", Offset = "0x27B4B10", VA = "0x1827B6510", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x27BD0E0", Offset = "0x27BB6E0", VA = "0x1827BD0E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x27BFE60", Offset = "0x27BE460", VA = "0x1827BFE60")]
	public static bool operator ==(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x27BFE90", Offset = "0x27BE490", VA = "0x1827BFE90")]
	public static bool operator !=(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x27B4810", Offset = "0x27B2E10", VA = "0x1827B4810", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x27B18D0", Offset = "0x27AFED0", VA = "0x1827B18D0")]
	private static bool CheckForColonInFirstPathSegment(string uriString)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x27B9000", Offset = "0x27B7600", VA = "0x1827B9000")]
	internal static string InternalEscapeString(string rawString)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x27BB010", Offset = "0x27B9610", VA = "0x1827BB010")]
	private static ParsingError ParseScheme(string uriString, ref Flags flags, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x27B9D50", Offset = "0x27B8350", VA = "0x1827B9D50")]
	internal UriFormatException ParseMinimal()
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x27BB210", Offset = "0x27B9810", VA = "0x1827BB210")]
	private ParsingError PrivateParseMinimal()
	{
		return default(ParsingError);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x27BB0F0", Offset = "0x27B96F0", VA = "0x1827BB0F0")]
	private void PrivateParseMinimalIri(string newHost, ushort idx)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x27B3EF0", Offset = "0x27B24F0", VA = "0x1827B3EF0")]
	private void CreateUriInfo(Flags cF)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x27B36F0", Offset = "0x27B1CF0", VA = "0x1827B36F0")]
	private void CreateHostString()
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x27B34F0", Offset = "0x27B1AF0", VA = "0x1827B34F0")]
	private static string CreateHostStringHelper(string str, ushort idx, ushort end, ref Flags flags, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x27B66C0", Offset = "0x27B4CC0", VA = "0x1827B66C0")]
	private void GetHostViaCustomSyntax()
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x27B74E0", Offset = "0x27B5AE0", VA = "0x1827B74E0")]
	internal string GetParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x27B6290", Offset = "0x27B4890", VA = "0x1827B6290")]
	private string GetEscapedParts(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x27B78D0", Offset = "0x27B5ED0", VA = "0x1827B78D0")]
	private string GetUnescapedParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x27BB970", Offset = "0x27B9F70", VA = "0x1827BB970")]
	private string ReCreateParts(UriComponents parts, ushort nonCanonical, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x27B7990", Offset = "0x27B5F90", VA = "0x1827B7990")]
	private string GetUriPartsFromUserString(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x27B9DD0", Offset = "0x27B83D0", VA = "0x1827B9DD0")]
	private void ParseRemaining()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x27BAB70", Offset = "0x27B9170", VA = "0x1827BAB70")]
	private unsafe static ushort ParseSchemeCheckImplicitFile(char* uriString, ushort length, ref ParsingError err, ref Flags flags, ref UriParser syntax)
	{
		return default(ushort);
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x27B1D30", Offset = "0x27B0330", VA = "0x1827B1D30")]
	private unsafe static bool CheckKnownSchemes(long* lptr, ushort nChars, ref UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x27B2250", Offset = "0x27B0850", VA = "0x1827B2250")]
	private unsafe static ParsingError CheckSchemeSyntax(char* ptr, ushort length, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x27B0490", Offset = "0x27AEA90", VA = "0x1827B0490")]
	private unsafe ushort CheckAuthorityHelper(char* pString, ushort idx, ushort length, ref ParsingError err, ref Flags flags, UriParser syntax, ref string newHost)
	{
		return default(ushort);
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x27AFF60", Offset = "0x27AE560", VA = "0x1827AFF60")]
	private unsafe void CheckAuthorityHelperHandleDnsIri(char* pString, ushort start, int end, int startInput, bool iriParsing, bool hasUnicode, UriParser syntax, string userInfoString, ref Flags flags, ref bool justNormalized, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x27AFC50", Offset = "0x27AE250", VA = "0x1827AFC50")]
	private unsafe void CheckAuthorityHelperHandleAnyHostIri(char* pString, int startInput, int end, bool iriParsing, bool hasUnicode, UriParser syntax, ref Flags flags, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x27B51A0", Offset = "0x27B37A0", VA = "0x1827B51A0")]
	private void FindEndOfComponent(string input, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x27B5100", Offset = "0x27B3700", VA = "0x1827B5100")]
	private unsafe void FindEndOfComponent(char* str, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x27B14B0", Offset = "0x27AFAB0", VA = "0x1827B14B0")]
	private unsafe Check CheckCanonical(char* str, ref ushort idx, ushort end, char delim)
	{
		return default(Check);
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x27B52F0", Offset = "0x27B38F0", VA = "0x1827B52F0")]
	private char[] GetCanonicalPath(char[] dest, ref int pos, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x27BD960", Offset = "0x27BBF60", VA = "0x1827BD960")]
	private unsafe static void UnescapeOnly(char* pch, int start, ref int end, char ch1, char ch2, char ch3)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x27B2D60", Offset = "0x27B1360", VA = "0x1827B2D60")]
	private static char[] Compress(char[] dest, ushort start, ref int destLength, UriParser syntax)
	{
		return null;
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x27AFBA0", Offset = "0x27AE1A0", VA = "0x1827AFBA0")]
	internal static int CalculateCaseInsensitiveHashCode(string text)
	{
		return default(int);
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x27B2370", Offset = "0x27B0970", VA = "0x1827B2370")]
	private static string CombineUri(Uri basePart, string relativePart, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x27B9B50", Offset = "0x27B8150", VA = "0x1827B9B50")]
	private static bool IsLWS(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x27B9750", Offset = "0x27B7D50", VA = "0x1827B9750")]
	private static bool IsAsciiLetter(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x27B96D0", Offset = "0x27B7CD0", VA = "0x1827B96D0")]
	internal static bool IsAsciiLetterOrDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x27B9AB0", Offset = "0x27B80B0", VA = "0x1827B9AB0")]
	internal static bool IsBidiControlCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x27BCF80", Offset = "0x27BB580", VA = "0x1827BCF80")]
	internal unsafe static string StripBidiControlCharacter(char* strToClean, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x27B3D30", Offset = "0x27B2330", VA = "0x1827B3D30")]
	private void CreateThis(string uri, bool dontEscape, UriKind uriKind)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x27B84B0", Offset = "0x27B6AB0", VA = "0x1827B84B0")]
	private void InitializeUri(ParsingError err, UriKind uriKind, out UriFormatException e)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x27B1980", Offset = "0x27AFF80", VA = "0x1827B1980")]
	private bool CheckForConfigLoad(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x27B1BE0", Offset = "0x27B01E0", VA = "0x1827B1BE0")]
	private bool CheckForUnicode(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x27B1A30", Offset = "0x27B0030", VA = "0x1827B1A30")]
	private bool CheckForEscapedUnreserved(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x27BD220", Offset = "0x27BB820", VA = "0x1827BD220")]
	public static bool TryCreate(string uriString, UriKind uriKind, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x27BD300", Offset = "0x27BB900", VA = "0x1827BD300")]
	public static bool TryCreate(Uri baseUri, string relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x27BD5F0", Offset = "0x27BBBF0", VA = "0x1827BD5F0")]
	public static bool TryCreate(Uri baseUri, Uri relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x27B6090", Offset = "0x27B4690", VA = "0x1827B6090")]
	public string GetComponents(UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x27B9B80", Offset = "0x27B8180", VA = "0x1827B9B80")]
	public bool IsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x27B9BD0", Offset = "0x27B81D0", VA = "0x1827B9BD0")]
	public static bool IsWellFormedUriString(string uriString, UriKind uriKind)
	{
		return default(bool);
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x27B90E0", Offset = "0x27B76E0", VA = "0x1827B90E0")]
	internal bool InternalIsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x27BD7B0", Offset = "0x27BBDB0", VA = "0x1827BD7B0")]
	public static string UnescapeDataString(string stringToUnescape)
	{
		return null;
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x27B4F70", Offset = "0x27B3570", VA = "0x1827B4F70")]
	public static string EscapeDataString(string stringToEscape)
	{
		return null;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x27B50A0", Offset = "0x27B36A0", VA = "0x1827B50A0")]
	internal string EscapeUnescapeIri(string input, int start, int end, UriComponents component)
	{
		return null;
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x27BE4A0", Offset = "0x27BCAA0", VA = "0x1827BE4A0")]
	private Uri(Flags flags, UriParser uriParser, string uri)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x27B3200", Offset = "0x27B1800", VA = "0x1827B3200")]
	internal static Uri CreateHelper(string uriString, bool dontEscape, UriKind uriKind, ref UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x27BC9F0", Offset = "0x27BAFF0", VA = "0x1827BC9F0")]
	internal static Uri ResolveHelper(Uri baseUri, Uri relativeUri, ref string newUriString, ref bool userEscaped, out UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x27B74F0", Offset = "0x27B5AF0", VA = "0x1827B74F0")]
	private string GetRelativeSerializationString(UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x27B5D70", Offset = "0x27B4370", VA = "0x1827B5D70")]
	internal string GetComponentsHelper(UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x27B99E0", Offset = "0x27B7FE0", VA = "0x1827B99E0")]
	public bool IsBaseOf(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x27B9770", Offset = "0x27B7D70", VA = "0x1827B9770")]
	internal bool IsBaseOfHelper(Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x27B3B70", Offset = "0x27B2170", VA = "0x1827B3B70")]
	private void CreateThisFromUri(Uri otherUri)
	{
	}
}
