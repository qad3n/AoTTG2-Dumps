using System.ComponentModel;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200007C")]
[TypeConverter(typeof(UriTypeConverter))]
public class Uri : ISerializable
{
	[Token(Token = "0x200007D")]
	[Flags]
	private enum Flags : ulong
	{
		[Token(Token = "0x4000186")]
		Zero = 0uL,
		[Token(Token = "0x4000187")]
		SchemeNotCanonical = 1uL,
		[Token(Token = "0x4000188")]
		UserNotCanonical = 2uL,
		[Token(Token = "0x4000189")]
		HostNotCanonical = 4uL,
		[Token(Token = "0x400018A")]
		PortNotCanonical = 8uL,
		[Token(Token = "0x400018B")]
		PathNotCanonical = 0x10uL,
		[Token(Token = "0x400018C")]
		QueryNotCanonical = 0x20uL,
		[Token(Token = "0x400018D")]
		FragmentNotCanonical = 0x40uL,
		[Token(Token = "0x400018E")]
		CannotDisplayCanonical = 0x7FuL,
		[Token(Token = "0x400018F")]
		E_UserNotCanonical = 0x80uL,
		[Token(Token = "0x4000190")]
		E_HostNotCanonical = 0x100uL,
		[Token(Token = "0x4000191")]
		E_PortNotCanonical = 0x200uL,
		[Token(Token = "0x4000192")]
		E_PathNotCanonical = 0x400uL,
		[Token(Token = "0x4000193")]
		E_QueryNotCanonical = 0x800uL,
		[Token(Token = "0x4000194")]
		E_FragmentNotCanonical = 0x1000uL,
		[Token(Token = "0x4000195")]
		E_CannotDisplayCanonical = 0x1F80uL,
		[Token(Token = "0x4000196")]
		ShouldBeCompressed = 0x2000uL,
		[Token(Token = "0x4000197")]
		FirstSlashAbsent = 0x4000uL,
		[Token(Token = "0x4000198")]
		BackslashInPath = 0x8000uL,
		[Token(Token = "0x4000199")]
		IndexMask = 0xFFFFuL,
		[Token(Token = "0x400019A")]
		HostTypeMask = 0x70000uL,
		[Token(Token = "0x400019B")]
		HostNotParsed = 0uL,
		[Token(Token = "0x400019C")]
		IPv6HostType = 0x10000uL,
		[Token(Token = "0x400019D")]
		IPv4HostType = 0x20000uL,
		[Token(Token = "0x400019E")]
		DnsHostType = 0x30000uL,
		[Token(Token = "0x400019F")]
		UncHostType = 0x40000uL,
		[Token(Token = "0x40001A0")]
		BasicHostType = 0x50000uL,
		[Token(Token = "0x40001A1")]
		UnusedHostType = 0x60000uL,
		[Token(Token = "0x40001A2")]
		UnknownHostType = 0x70000uL,
		[Token(Token = "0x40001A3")]
		UserEscaped = 0x80000uL,
		[Token(Token = "0x40001A4")]
		AuthorityFound = 0x100000uL,
		[Token(Token = "0x40001A5")]
		HasUserInfo = 0x200000uL,
		[Token(Token = "0x40001A6")]
		LoopbackHost = 0x400000uL,
		[Token(Token = "0x40001A7")]
		NotDefaultPort = 0x800000uL,
		[Token(Token = "0x40001A8")]
		UserDrivenParsing = 0x1000000uL,
		[Token(Token = "0x40001A9")]
		CanonicalDnsHost = 0x2000000uL,
		[Token(Token = "0x40001AA")]
		ErrorOrParsingRecursion = 0x4000000uL,
		[Token(Token = "0x40001AB")]
		DosPath = 0x8000000uL,
		[Token(Token = "0x40001AC")]
		UncPath = 0x10000000uL,
		[Token(Token = "0x40001AD")]
		ImplicitFile = 0x20000000uL,
		[Token(Token = "0x40001AE")]
		MinimalUriInfoSet = 0x40000000uL,
		[Token(Token = "0x40001AF")]
		AllUriInfoSet = 0x80000000uL,
		[Token(Token = "0x40001B0")]
		IdnHost = 0x100000000uL,
		[Token(Token = "0x40001B1")]
		HasUnicode = 0x200000000uL,
		[Token(Token = "0x40001B2")]
		HostUnicodeNormalized = 0x400000000uL,
		[Token(Token = "0x40001B3")]
		RestUnicodeNormalized = 0x800000000uL,
		[Token(Token = "0x40001B4")]
		UnicodeHost = 0x1000000000uL,
		[Token(Token = "0x40001B5")]
		IntranetUri = 0x2000000000uL,
		[Token(Token = "0x40001B6")]
		UseOrigUncdStrOffset = 0x4000000000uL,
		[Token(Token = "0x40001B7")]
		UserIriCanonical = 0x8000000000uL,
		[Token(Token = "0x40001B8")]
		PathIriCanonical = 0x10000000000uL,
		[Token(Token = "0x40001B9")]
		QueryIriCanonical = 0x20000000000uL,
		[Token(Token = "0x40001BA")]
		FragmentIriCanonical = 0x40000000000uL,
		[Token(Token = "0x40001BB")]
		IriCanonical = 0x78000000000uL,
		[Token(Token = "0x40001BC")]
		CompressedSlashes = 0x100000000000uL
	}

	[Token(Token = "0x200007E")]
	private class UriInfo
	{
		[Token(Token = "0x40001BD")]
		[FieldOffset(Offset = "0x10")]
		public string Host;

		[Token(Token = "0x40001BE")]
		[FieldOffset(Offset = "0x18")]
		public string ScopeId;

		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x20")]
		public string String;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x28")]
		public Offset Offset;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x38")]
		public string DnsSafeHost;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x40")]
		public MoreInfo MoreInfo;

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x45D5910", Offset = "0x45D5910", VA = "0x45D5910")]
		public UriInfo()
		{
		}
	}

	[Token(Token = "0x200007F")]
	private struct Offset
	{
		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x0")]
		public ushort Scheme;

		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x2")]
		public ushort User;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x4")]
		public ushort Host;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x6")]
		public ushort PortValue;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x8")]
		public ushort Path;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0xA")]
		public ushort Query;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0xC")]
		public ushort Fragment;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0xE")]
		public ushort End;
	}

	[Token(Token = "0x2000080")]
	private class MoreInfo
	{
		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x10")]
		public string Path;

		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x18")]
		public string Query;

		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x20")]
		public string Fragment;

		[Token(Token = "0x40001CE")]
		[FieldOffset(Offset = "0x28")]
		public string AbsoluteUri;

		[Token(Token = "0x40001CF")]
		[FieldOffset(Offset = "0x30")]
		public int Hash;

		[Token(Token = "0x40001D0")]
		[FieldOffset(Offset = "0x38")]
		public string RemoteUrl;

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x45D5920", Offset = "0x45D5920", VA = "0x45D5920")]
		public MoreInfo()
		{
		}
	}

	[Token(Token = "0x2000081")]
	[Flags]
	private enum Check
	{
		[Token(Token = "0x40001D2")]
		None = 0,
		[Token(Token = "0x40001D3")]
		EscapedCanonical = 1,
		[Token(Token = "0x40001D4")]
		DisplayCanonical = 2,
		[Token(Token = "0x40001D5")]
		DotSlashAttn = 4,
		[Token(Token = "0x40001D6")]
		DotSlashEscaped = 0x80,
		[Token(Token = "0x40001D7")]
		BackslashInPath = 0x10,
		[Token(Token = "0x40001D8")]
		ReservedFound = 0x20,
		[Token(Token = "0x40001D9")]
		NotIriCanonical = 0x40,
		[Token(Token = "0x40001DA")]
		FoundNonAscii = 8
	}

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string UriSchemeFile;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string UriSchemeFtp;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string UriSchemeGopher;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string UriSchemeHttp;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string UriSchemeHttps;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly string UriSchemeWs;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string UriSchemeWss;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string UriSchemeMailto;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string UriSchemeNews;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string UriSchemeNntp;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string UriSchemeNetTcp;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string UriSchemeNetPipe;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string SchemeDelimiter;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x10")]
	private string m_String;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x18")]
	private string m_originalUnicodeString;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x20")]
	private UriParser m_Syntax;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x28")]
	private string m_DnsSafeHost;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x30")]
	private Flags m_Flags;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x38")]
	private UriInfo m_Info;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x40")]
	private bool m_iriParsing;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x68")]
	private static bool s_ConfigInitialized;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x69")]
	private static bool s_ConfigInitializing;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x6C")]
	private static UriIdnScope s_IdnScope;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x70")]
	private static bool s_IriParsing;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x71")]
	private static bool useDotNetRelativeOrAbsolute;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x72")]
	internal static readonly bool IsWindowsFileSystem;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x78")]
	private static object s_initLock;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x80")]
	internal static readonly char[] HexLowerChars;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x88")]
	private static readonly char[] _WSchars;

	[Token(Token = "0x17000059")]
	private bool IsImplicitFile
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x454B590", Offset = "0x454B590", VA = "0x454B590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	private bool IsUncOrDosPath
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x454B5A0", Offset = "0x454B5A0", VA = "0x454B5A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	private bool IsDosPath
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x454B5B0", Offset = "0x454B5B0", VA = "0x454B5B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	private bool IsUncPath
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x454B5C0", Offset = "0x454B5C0", VA = "0x454B5C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005D")]
	private Flags HostType
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x454B5D0", Offset = "0x454B5D0", VA = "0x454B5D0")]
		get
		{
			return default(Flags);
		}
	}

	[Token(Token = "0x1700005E")]
	private UriParser Syntax
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x454B5E0", Offset = "0x454B5E0", VA = "0x454B5E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005F")]
	private bool IsNotAbsoluteUri
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x454B5F0", Offset = "0x454B5F0", VA = "0x454B5F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000060")]
	private bool AllowIdn
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x454B690", Offset = "0x454B690", VA = "0x454B690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000061")]
	internal bool UserDrivenParsing
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x454B810", Offset = "0x454B810", VA = "0x454B810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	private ushort SecuredPathIndex
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x454B840", Offset = "0x454B840", VA = "0x454B840")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x17000063")]
	public string AbsolutePath
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x454F5E0", Offset = "0x454F5E0", VA = "0x454F5E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	private string PrivateAbsolutePath
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x454F6A0", Offset = "0x454F6A0", VA = "0x454F6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000065")]
	public string AbsoluteUri
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x454F790", Offset = "0x454F790", VA = "0x454F790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public string LocalPath
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x454F8C0", Offset = "0x454F8C0", VA = "0x454F8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	public string Authority
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x4550050", Offset = "0x4550050", VA = "0x4550050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public UriHostNameType HostNameType
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x45500D0", Offset = "0x45500D0", VA = "0x45500D0")]
		get
		{
			return default(UriHostNameType);
		}
	}

	[Token(Token = "0x17000069")]
	public bool IsDefaultPort
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x4550230", Offset = "0x4550230", VA = "0x4550230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public bool IsFile
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x4550300", Offset = "0x4550300", VA = "0x4550300")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public bool IsLoopback
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x45503C0", Offset = "0x45503C0", VA = "0x45503C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	public string PathAndQuery
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x4550470", Offset = "0x4550470", VA = "0x4550470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public string[] Segments
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x4550530", Offset = "0x4550530", VA = "0x4550530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	public bool IsUnc
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x4550750", Offset = "0x4550750", VA = "0x4550750")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public string Host
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x45507C0", Offset = "0x45507C0", VA = "0x45507C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	private static object InitializeLock
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4550860", Offset = "0x4550860", VA = "0x4550860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public int Port
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4551150", Offset = "0x4551150", VA = "0x4551150")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public string Query
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4551250", Offset = "0x4551250", VA = "0x4551250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public string Fragment
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4551380", Offset = "0x4551380", VA = "0x4551380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public string Scheme
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x45514B0", Offset = "0x45514B0", VA = "0x45514B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	private bool OriginalStringSwitched
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4551520", Offset = "0x4551520", VA = "0x4551520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000076")]
	public string OriginalString
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x454E6D0", Offset = "0x454E6D0", VA = "0x454E6D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public string DnsSafeHost
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x4551560", Offset = "0x4551560", VA = "0x4551560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public string IdnHost
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4551800", Offset = "0x4551800", VA = "0x4551800")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public bool IsAbsoluteUri
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x454D7F0", Offset = "0x454D7F0", VA = "0x454D7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007A")]
	public bool UserEscaped
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4551830", Offset = "0x4551830", VA = "0x4551830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public string UserInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4551840", Offset = "0x4551840", VA = "0x4551840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	internal bool HasAuthority
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x4558B70", Offset = "0x4558B70", VA = "0x4558B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x454B600", Offset = "0x454B600", VA = "0x454B600")]
	internal static bool IriParsingStatic(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x454B740", Offset = "0x454B740", VA = "0x454B740")]
	private bool AllowIdnStatic(UriParser syntax, Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x454B800", Offset = "0x454B800", VA = "0x454B800")]
	private bool IsIntranet(string schemeHost)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x454B820", Offset = "0x454B820", VA = "0x454B820")]
	private void SetUserDrivenParsing()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x454B730", Offset = "0x454B730", VA = "0x454B730")]
	private bool NotAny(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x454B890", Offset = "0x454B890", VA = "0x454B890")]
	private bool InFact(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x454B7F0", Offset = "0x454B7F0", VA = "0x454B7F0")]
	private static bool StaticNotAny(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x454B8A0", Offset = "0x454B8A0", VA = "0x454B8A0")]
	private static bool StaticInFact(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x454B8B0", Offset = "0x454B8B0", VA = "0x454B8B0")]
	private UriInfo EnsureUriInfo()
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x454BF40", Offset = "0x454BF40", VA = "0x454BF40")]
	private void EnsureParseRemaining()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x454CFC0", Offset = "0x454CFC0", VA = "0x454CFC0")]
	private void EnsureHostString(bool allowDnsOptimization)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x454D480", Offset = "0x454D480", VA = "0x454D480")]
	public Uri(string uriString)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x454D6C0", Offset = "0x454D6C0", VA = "0x454D6C0")]
	public Uri(string uriString, UriKind uriKind)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x454D740", Offset = "0x454D740", VA = "0x454D740")]
	public Uri(Uri baseUri, string relativeUri)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x454D800", Offset = "0x454D800", VA = "0x454D800")]
	private void CreateUri(Uri baseUri, string relativeUri, bool dontEscape)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x454E120", Offset = "0x454E120", VA = "0x454E120")]
	public Uri(Uri baseUri, Uri relativeUri)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x454E360", Offset = "0x454E360", VA = "0x454E360")]
	private static ParsingError GetCombinedString(Uri baseUri, string relativeStr, bool dontEscape, ref string result)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x454F210", Offset = "0x454F210", VA = "0x454F210")]
	private static UriFormatException GetException(ParsingError err)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x454F380", Offset = "0x454F380", VA = "0x454F380")]
	protected Uri(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x454F480", Offset = "0x454F480", VA = "0x454F480", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x454F490", Offset = "0x454F490", VA = "0x454F490")]
	protected void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4550840", Offset = "0x4550840", VA = "0x4550840")]
	private static bool StaticIsFile(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4550960", Offset = "0x4550960", VA = "0x4550960")]
	private static void InitializeUriConfig()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x454F930", Offset = "0x454F930", VA = "0x454F930")]
	private string GetLocalPath()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x45518C0", Offset = "0x45518C0", VA = "0x45518C0")]
	internal static bool IsGenDelim(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x45518F0", Offset = "0x45518F0", VA = "0x45518F0")]
	public static bool IsHexDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4551910", Offset = "0x4551910", VA = "0x4551910")]
	public static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x45519A0", Offset = "0x45519A0", VA = "0x45519A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4551C00", Offset = "0x4551C00", VA = "0x4551C00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4551F20", Offset = "0x4551F20", VA = "0x4551F20")]
	public static bool operator ==(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x454DF60", Offset = "0x454DF60", VA = "0x454DF60")]
	public static bool operator !=(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4551F60", Offset = "0x4551F60", VA = "0x4551F60", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4552780", Offset = "0x4552780", VA = "0x4552780")]
	private static bool CheckForColonInFirstPathSegment(string uriString)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4552820", Offset = "0x4552820", VA = "0x4552820")]
	internal static string InternalEscapeString(string rawString)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x45528E0", Offset = "0x45528E0", VA = "0x45528E0")]
	private static ParsingError ParseScheme(string uriString, ref Flags flags, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4552F20", Offset = "0x4552F20", VA = "0x4552F20")]
	internal UriFormatException ParseMinimal()
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4552F90", Offset = "0x4552F90", VA = "0x4552F90")]
	private ParsingError PrivateParseMinimal()
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4554A40", Offset = "0x4554A40", VA = "0x4554A40")]
	private void PrivateParseMinimalIri(string newHost, ushort idx)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x454B8D0", Offset = "0x454B8D0", VA = "0x454B8D0")]
	private void CreateUriInfo(Flags cF)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x454D010", Offset = "0x454D010", VA = "0x454D010")]
	private void CreateHostString()
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4554FC0", Offset = "0x4554FC0", VA = "0x4554FC0")]
	private static string CreateHostStringHelper(string str, ushort idx, ushort end, ref Flags flags, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4554B40", Offset = "0x4554B40", VA = "0x4554B40")]
	private void GetHostViaCustomSyntax()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x454F5D0", Offset = "0x454F5D0", VA = "0x454F5D0")]
	internal string GetParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4555960", Offset = "0x4555960", VA = "0x4555960")]
	private string GetEscapedParts(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4551060", Offset = "0x4551060", VA = "0x4551060")]
	private string GetUnescapedParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x45560C0", Offset = "0x45560C0", VA = "0x45560C0")]
	private string ReCreateParts(UriComponents parts, ushort nonCanonical, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4555A50", Offset = "0x4555A50", VA = "0x4555A50")]
	private string GetUriPartsFromUserString(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x454BF50", Offset = "0x454BF50", VA = "0x454BF50")]
	private void ParseRemaining()
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x45529A0", Offset = "0x45529A0", VA = "0x45529A0")]
	private unsafe static ushort ParseSchemeCheckImplicitFile(char* uriString, ushort length, ref ParsingError err, ref Flags flags, ref UriParser syntax)
	{
		return default(ushort);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4557B00", Offset = "0x4557B00", VA = "0x4557B00")]
	private unsafe static bool CheckKnownSchemes(long* lptr, ushort nChars, ref UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x454E5B0", Offset = "0x454E5B0", VA = "0x454E5B0")]
	private unsafe static ParsingError CheckSchemeSyntax(char* ptr, ushort length, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x45537D0", Offset = "0x45537D0", VA = "0x45537D0")]
	private unsafe ushort CheckAuthorityHelper(char* pString, ushort idx, ushort length, ref ParsingError err, ref Flags flags, UriParser syntax, ref string newHost)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4557FF0", Offset = "0x4557FF0", VA = "0x4557FF0")]
	private unsafe void CheckAuthorityHelperHandleDnsIri(char* pString, ushort start, int end, int startInput, bool iriParsing, bool hasUnicode, UriParser syntax, string userInfoString, ref Flags flags, ref bool justNormalized, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x45583C0", Offset = "0x45583C0", VA = "0x45583C0")]
	private unsafe void CheckAuthorityHelperHandleAnyHostIri(char* pString, int startInput, int end, bool iriParsing, bool hasUnicode, UriParser syntax, ref Flags flags, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x45579C0", Offset = "0x45579C0", VA = "0x45579C0")]
	private void FindEndOfComponent(string input, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x45588C0", Offset = "0x45588C0", VA = "0x45588C0")]
	private unsafe void FindEndOfComponent(char* str, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x45551E0", Offset = "0x45551E0", VA = "0x45551E0")]
	private unsafe Check CheckCanonical(char* str, ref ushort idx, ushort end, char delim)
	{
		return default(Check);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4557150", Offset = "0x4557150", VA = "0x4557150")]
	private char[] GetCanonicalPath(char[] dest, ref int pos, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4558970", Offset = "0x4558970", VA = "0x4558970")]
	private unsafe static void UnescapeOnly(char* pch, int start, ref int end, char ch1, char ch2, char ch3)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4550B20", Offset = "0x4550B20", VA = "0x4550B20")]
	private static char[] Compress(char[] dest, ushort start, ref int destLength, UriParser syntax)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4551B10", Offset = "0x4551B10", VA = "0x4551B10")]
	internal static int CalculateCaseInsensitiveHashCode(string text)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x454E710", Offset = "0x454E710", VA = "0x454E710")]
	private static string CombineUri(Uri basePart, string relativePart, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4553780", Offset = "0x4553780", VA = "0x4553780")]
	private static bool IsLWS(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x45537B0", Offset = "0x45537B0", VA = "0x45537B0")]
	private static bool IsAsciiLetter(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4558B80", Offset = "0x4558B80", VA = "0x4558B80")]
	internal static bool IsAsciiLetterOrDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4558BE0", Offset = "0x4558BE0", VA = "0x4558BE0")]
	internal static bool IsBidiControlCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x45586E0", Offset = "0x45586E0", VA = "0x45586E0")]
	internal unsafe static string StripBidiControlCharacter(char* strToClean, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x454D500", Offset = "0x454D500", VA = "0x454D500")]
	private void CreateThis(string uri, bool dontEscape, UriKind uriKind)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4558C10", Offset = "0x4558C10", VA = "0x4558C10")]
	private void InitializeUri(ParsingError err, UriKind uriKind, out UriFormatException e)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4559390", Offset = "0x4559390", VA = "0x4559390")]
	private bool CheckForConfigLoad(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4559420", Offset = "0x4559420", VA = "0x4559420")]
	private bool CheckForUnicode(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4559530", Offset = "0x4559530", VA = "0x4559530")]
	private bool CheckForEscapedUnreserved(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x45526B0", Offset = "0x45526B0", VA = "0x45526B0")]
	public static bool TryCreate(string uriString, UriKind uriKind, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4559A20", Offset = "0x4559A20", VA = "0x4559A20")]
	public static bool TryCreate(Uri baseUri, string relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4559AF0", Offset = "0x4559AF0", VA = "0x4559AF0")]
	public static bool TryCreate(Uri baseUri, Uri relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x45557B0", Offset = "0x45557B0", VA = "0x45557B0")]
	public string GetComponents(UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4559F10", Offset = "0x4559F10", VA = "0x4559F10")]
	public bool IsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x455A490", Offset = "0x455A490", VA = "0x455A490")]
	public static bool IsWellFormedUriString(string uriString, UriKind uriKind)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4559F50", Offset = "0x4559F50", VA = "0x4559F50")]
	internal bool InternalIsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x455A550", Offset = "0x455A550", VA = "0x455A550")]
	public static string UnescapeDataString(string stringToUnescape)
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x455A6D0", Offset = "0x455A6D0", VA = "0x455A6D0")]
	public static string EscapeDataString(string stringToEscape)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4557AC0", Offset = "0x4557AC0", VA = "0x4557AC0")]
	internal string EscapeUnescapeIri(string input, int start, int end, UriComponents component)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x455A7E0", Offset = "0x455A7E0", VA = "0x455A7E0")]
	private Uri(Flags flags, UriParser uriParser, string uri)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4559750", Offset = "0x4559750", VA = "0x4559750")]
	internal static Uri CreateHelper(string uriString, bool dontEscape, UriKind uriKind, ref UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x454D9B0", Offset = "0x454D9B0", VA = "0x454D9B0")]
	internal static Uri ResolveHelper(Uri baseUri, Uri relativeUri, ref string newUriString, ref bool userEscaped, out UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x4559CE0", Offset = "0x4559CE0", VA = "0x4559CE0")]
	private string GetRelativeSerializationString(UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4551CE0", Offset = "0x4551CE0", VA = "0x4551CE0")]
	internal string GetComponentsHelper(UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x455A830", Offset = "0x455A830", VA = "0x455A830")]
	public bool IsBaseOf(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x455A8E0", Offset = "0x455A8E0", VA = "0x455A8E0")]
	internal bool IsBaseOfHelper(Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x454DFA0", Offset = "0x454DFA0", VA = "0x454DFA0")]
	private void CreateThisFromUri(Uri otherUri)
	{
	}
}
