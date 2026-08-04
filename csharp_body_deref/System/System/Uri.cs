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
		[Address(RVA = "0x48FAA10", Offset = "0x48FAA10", VA = "0x48FAA10")]
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
		[Address(RVA = "0x48FAA20", Offset = "0x48FAA20", VA = "0x48FAA20")]
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
		[Address(RVA = "0x4870690", Offset = "0x4870690", VA = "0x4870690")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	private bool IsUncOrDosPath
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x48706A0", Offset = "0x48706A0", VA = "0x48706A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	private bool IsDosPath
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x48706B0", Offset = "0x48706B0", VA = "0x48706B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	private bool IsUncPath
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x48706C0", Offset = "0x48706C0", VA = "0x48706C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005D")]
	private Flags HostType
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x48706D0", Offset = "0x48706D0", VA = "0x48706D0")]
		get
		{
			return default(Flags);
		}
	}

	[Token(Token = "0x1700005E")]
	private UriParser Syntax
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x48706E0", Offset = "0x48706E0", VA = "0x48706E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005F")]
	private bool IsNotAbsoluteUri
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x48706F0", Offset = "0x48706F0", VA = "0x48706F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000060")]
	private bool AllowIdn
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x4870790", Offset = "0x4870790", VA = "0x4870790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000061")]
	internal bool UserDrivenParsing
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x4870910", Offset = "0x4870910", VA = "0x4870910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	private ushort SecuredPathIndex
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4870940", Offset = "0x4870940", VA = "0x4870940")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x17000063")]
	public string AbsolutePath
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x48746E0", Offset = "0x48746E0", VA = "0x48746E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	private string PrivateAbsolutePath
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x48747A0", Offset = "0x48747A0", VA = "0x48747A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000065")]
	public string AbsoluteUri
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x4874890", Offset = "0x4874890", VA = "0x4874890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public string LocalPath
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x48749C0", Offset = "0x48749C0", VA = "0x48749C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	public string Authority
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x4875150", Offset = "0x4875150", VA = "0x4875150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public UriHostNameType HostNameType
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x48751D0", Offset = "0x48751D0", VA = "0x48751D0")]
		get
		{
			return default(UriHostNameType);
		}
	}

	[Token(Token = "0x17000069")]
	public bool IsDefaultPort
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x4875330", Offset = "0x4875330", VA = "0x4875330")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public bool IsFile
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x4875400", Offset = "0x4875400", VA = "0x4875400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public bool IsLoopback
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x48754C0", Offset = "0x48754C0", VA = "0x48754C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	public string PathAndQuery
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x4875570", Offset = "0x4875570", VA = "0x4875570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public string[] Segments
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x4875630", Offset = "0x4875630", VA = "0x4875630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	public bool IsUnc
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x4875850", Offset = "0x4875850", VA = "0x4875850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public string Host
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x48758C0", Offset = "0x48758C0", VA = "0x48758C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	private static object InitializeLock
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4875960", Offset = "0x4875960", VA = "0x4875960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public int Port
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4876250", Offset = "0x4876250", VA = "0x4876250")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public string Query
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4876350", Offset = "0x4876350", VA = "0x4876350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public string Fragment
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4876480", Offset = "0x4876480", VA = "0x4876480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public string Scheme
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x48765B0", Offset = "0x48765B0", VA = "0x48765B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	private bool OriginalStringSwitched
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4876620", Offset = "0x4876620", VA = "0x4876620")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000076")]
	public string OriginalString
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x48737D0", Offset = "0x48737D0", VA = "0x48737D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public string DnsSafeHost
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x4876660", Offset = "0x4876660", VA = "0x4876660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public string IdnHost
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4876900", Offset = "0x4876900", VA = "0x4876900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public bool IsAbsoluteUri
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x48728F0", Offset = "0x48728F0", VA = "0x48728F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007A")]
	public bool UserEscaped
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4876930", Offset = "0x4876930", VA = "0x4876930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public string UserInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4876940", Offset = "0x4876940", VA = "0x4876940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	internal bool HasAuthority
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x487DC70", Offset = "0x487DC70", VA = "0x487DC70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4870700", Offset = "0x4870700", VA = "0x4870700")]
	internal static bool IriParsingStatic(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4870840", Offset = "0x4870840", VA = "0x4870840")]
	private bool AllowIdnStatic(UriParser syntax, Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4870900", Offset = "0x4870900", VA = "0x4870900")]
	private bool IsIntranet(string schemeHost)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4870920", Offset = "0x4870920", VA = "0x4870920")]
	private void SetUserDrivenParsing()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x4870830", Offset = "0x4870830", VA = "0x4870830")]
	private bool NotAny(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x4870990", Offset = "0x4870990", VA = "0x4870990")]
	private bool InFact(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x48708F0", Offset = "0x48708F0", VA = "0x48708F0")]
	private static bool StaticNotAny(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x48709A0", Offset = "0x48709A0", VA = "0x48709A0")]
	private static bool StaticInFact(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x48709B0", Offset = "0x48709B0", VA = "0x48709B0")]
	private UriInfo EnsureUriInfo()
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4871040", Offset = "0x4871040", VA = "0x4871040")]
	private void EnsureParseRemaining()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x48720C0", Offset = "0x48720C0", VA = "0x48720C0")]
	private void EnsureHostString(bool allowDnsOptimization)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4872580", Offset = "0x4872580", VA = "0x4872580")]
	public Uri(string uriString)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x48727C0", Offset = "0x48727C0", VA = "0x48727C0")]
	public Uri(string uriString, UriKind uriKind)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4872840", Offset = "0x4872840", VA = "0x4872840")]
	public Uri(Uri baseUri, string relativeUri)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4872900", Offset = "0x4872900", VA = "0x4872900")]
	private void CreateUri(Uri baseUri, string relativeUri, bool dontEscape)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4873220", Offset = "0x4873220", VA = "0x4873220")]
	public Uri(Uri baseUri, Uri relativeUri)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x4873460", Offset = "0x4873460", VA = "0x4873460")]
	private static ParsingError GetCombinedString(Uri baseUri, string relativeStr, bool dontEscape, ref string result)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x4874310", Offset = "0x4874310", VA = "0x4874310")]
	private static UriFormatException GetException(ParsingError err)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x4874480", Offset = "0x4874480", VA = "0x4874480")]
	protected Uri(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4874580", Offset = "0x4874580", VA = "0x4874580", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4874590", Offset = "0x4874590", VA = "0x4874590")]
	protected void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4875940", Offset = "0x4875940", VA = "0x4875940")]
	private static bool StaticIsFile(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4875A60", Offset = "0x4875A60", VA = "0x4875A60")]
	private static void InitializeUriConfig()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4874A30", Offset = "0x4874A30", VA = "0x4874A30")]
	private string GetLocalPath()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x48769C0", Offset = "0x48769C0", VA = "0x48769C0")]
	internal static bool IsGenDelim(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x48769F0", Offset = "0x48769F0", VA = "0x48769F0")]
	public static bool IsHexDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4876A10", Offset = "0x4876A10", VA = "0x4876A10")]
	public static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4876AA0", Offset = "0x4876AA0", VA = "0x4876AA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4876D00", Offset = "0x4876D00", VA = "0x4876D00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4877020", Offset = "0x4877020", VA = "0x4877020")]
	public static bool operator ==(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4873060", Offset = "0x4873060", VA = "0x4873060")]
	public static bool operator !=(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4877060", Offset = "0x4877060", VA = "0x4877060", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4877880", Offset = "0x4877880", VA = "0x4877880")]
	private static bool CheckForColonInFirstPathSegment(string uriString)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4877920", Offset = "0x4877920", VA = "0x4877920")]
	internal static string InternalEscapeString(string rawString)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x48779E0", Offset = "0x48779E0", VA = "0x48779E0")]
	private static ParsingError ParseScheme(string uriString, ref Flags flags, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4878020", Offset = "0x4878020", VA = "0x4878020")]
	internal UriFormatException ParseMinimal()
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4878090", Offset = "0x4878090", VA = "0x4878090")]
	private ParsingError PrivateParseMinimal()
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4879B40", Offset = "0x4879B40", VA = "0x4879B40")]
	private void PrivateParseMinimalIri(string newHost, ushort idx)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x48709D0", Offset = "0x48709D0", VA = "0x48709D0")]
	private void CreateUriInfo(Flags cF)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4872110", Offset = "0x4872110", VA = "0x4872110")]
	private void CreateHostString()
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x487A0C0", Offset = "0x487A0C0", VA = "0x487A0C0")]
	private static string CreateHostStringHelper(string str, ushort idx, ushort end, ref Flags flags, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4879C40", Offset = "0x4879C40", VA = "0x4879C40")]
	private void GetHostViaCustomSyntax()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x48746D0", Offset = "0x48746D0", VA = "0x48746D0")]
	internal string GetParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x487AA60", Offset = "0x487AA60", VA = "0x487AA60")]
	private string GetEscapedParts(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4876160", Offset = "0x4876160", VA = "0x4876160")]
	private string GetUnescapedParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x487B1C0", Offset = "0x487B1C0", VA = "0x487B1C0")]
	private string ReCreateParts(UriComponents parts, ushort nonCanonical, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x487AB50", Offset = "0x487AB50", VA = "0x487AB50")]
	private string GetUriPartsFromUserString(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4871050", Offset = "0x4871050", VA = "0x4871050")]
	private void ParseRemaining()
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4877AA0", Offset = "0x4877AA0", VA = "0x4877AA0")]
	private unsafe static ushort ParseSchemeCheckImplicitFile(char* uriString, ushort length, ref ParsingError err, ref Flags flags, ref UriParser syntax)
	{
		return default(ushort);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x487CC00", Offset = "0x487CC00", VA = "0x487CC00")]
	private unsafe static bool CheckKnownSchemes(long* lptr, ushort nChars, ref UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x48736B0", Offset = "0x48736B0", VA = "0x48736B0")]
	private unsafe static ParsingError CheckSchemeSyntax(char* ptr, ushort length, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x48788D0", Offset = "0x48788D0", VA = "0x48788D0")]
	private unsafe ushort CheckAuthorityHelper(char* pString, ushort idx, ushort length, ref ParsingError err, ref Flags flags, UriParser syntax, ref string newHost)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x487D0F0", Offset = "0x487D0F0", VA = "0x487D0F0")]
	private unsafe void CheckAuthorityHelperHandleDnsIri(char* pString, ushort start, int end, int startInput, bool iriParsing, bool hasUnicode, UriParser syntax, string userInfoString, ref Flags flags, ref bool justNormalized, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x487D4C0", Offset = "0x487D4C0", VA = "0x487D4C0")]
	private unsafe void CheckAuthorityHelperHandleAnyHostIri(char* pString, int startInput, int end, bool iriParsing, bool hasUnicode, UriParser syntax, ref Flags flags, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x487CAC0", Offset = "0x487CAC0", VA = "0x487CAC0")]
	private void FindEndOfComponent(string input, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x487D9C0", Offset = "0x487D9C0", VA = "0x487D9C0")]
	private unsafe void FindEndOfComponent(char* str, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x487A2E0", Offset = "0x487A2E0", VA = "0x487A2E0")]
	private unsafe Check CheckCanonical(char* str, ref ushort idx, ushort end, char delim)
	{
		return default(Check);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x487C250", Offset = "0x487C250", VA = "0x487C250")]
	private char[] GetCanonicalPath(char[] dest, ref int pos, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x487DA70", Offset = "0x487DA70", VA = "0x487DA70")]
	private unsafe static void UnescapeOnly(char* pch, int start, ref int end, char ch1, char ch2, char ch3)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4875C20", Offset = "0x4875C20", VA = "0x4875C20")]
	private static char[] Compress(char[] dest, ushort start, ref int destLength, UriParser syntax)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4876C10", Offset = "0x4876C10", VA = "0x4876C10")]
	internal static int CalculateCaseInsensitiveHashCode(string text)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4873810", Offset = "0x4873810", VA = "0x4873810")]
	private static string CombineUri(Uri basePart, string relativePart, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4878880", Offset = "0x4878880", VA = "0x4878880")]
	private static bool IsLWS(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x48788B0", Offset = "0x48788B0", VA = "0x48788B0")]
	private static bool IsAsciiLetter(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x487DC80", Offset = "0x487DC80", VA = "0x487DC80")]
	internal static bool IsAsciiLetterOrDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x487DCE0", Offset = "0x487DCE0", VA = "0x487DCE0")]
	internal static bool IsBidiControlCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x487D7E0", Offset = "0x487D7E0", VA = "0x487D7E0")]
	internal unsafe static string StripBidiControlCharacter(char* strToClean, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4872600", Offset = "0x4872600", VA = "0x4872600")]
	private void CreateThis(string uri, bool dontEscape, UriKind uriKind)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x487DD10", Offset = "0x487DD10", VA = "0x487DD10")]
	private void InitializeUri(ParsingError err, UriKind uriKind, out UriFormatException e)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x487E490", Offset = "0x487E490", VA = "0x487E490")]
	private bool CheckForConfigLoad(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x487E520", Offset = "0x487E520", VA = "0x487E520")]
	private bool CheckForUnicode(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x487E630", Offset = "0x487E630", VA = "0x487E630")]
	private bool CheckForEscapedUnreserved(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x48777B0", Offset = "0x48777B0", VA = "0x48777B0")]
	public static bool TryCreate(string uriString, UriKind uriKind, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x487EB20", Offset = "0x487EB20", VA = "0x487EB20")]
	public static bool TryCreate(Uri baseUri, string relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x487EBF0", Offset = "0x487EBF0", VA = "0x487EBF0")]
	public static bool TryCreate(Uri baseUri, Uri relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x487A8B0", Offset = "0x487A8B0", VA = "0x487A8B0")]
	public string GetComponents(UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x487F010", Offset = "0x487F010", VA = "0x487F010")]
	public bool IsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x487F590", Offset = "0x487F590", VA = "0x487F590")]
	public static bool IsWellFormedUriString(string uriString, UriKind uriKind)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x487F050", Offset = "0x487F050", VA = "0x487F050")]
	internal bool InternalIsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x487F650", Offset = "0x487F650", VA = "0x487F650")]
	public static string UnescapeDataString(string stringToUnescape)
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x487F7D0", Offset = "0x487F7D0", VA = "0x487F7D0")]
	public static string EscapeDataString(string stringToEscape)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x487CBC0", Offset = "0x487CBC0", VA = "0x487CBC0")]
	internal string EscapeUnescapeIri(string input, int start, int end, UriComponents component)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x487F8E0", Offset = "0x487F8E0", VA = "0x487F8E0")]
	private Uri(Flags flags, UriParser uriParser, string uri)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x487E850", Offset = "0x487E850", VA = "0x487E850")]
	internal static Uri CreateHelper(string uriString, bool dontEscape, UriKind uriKind, ref UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x4872AB0", Offset = "0x4872AB0", VA = "0x4872AB0")]
	internal static Uri ResolveHelper(Uri baseUri, Uri relativeUri, ref string newUriString, ref bool userEscaped, out UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x487EDE0", Offset = "0x487EDE0", VA = "0x487EDE0")]
	private string GetRelativeSerializationString(UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x4876DE0", Offset = "0x4876DE0", VA = "0x4876DE0")]
	internal string GetComponentsHelper(UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x487F930", Offset = "0x487F930", VA = "0x487F930")]
	public bool IsBaseOf(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x487F9E0", Offset = "0x487F9E0", VA = "0x487F9E0")]
	internal bool IsBaseOfHelper(Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x48730A0", Offset = "0x48730A0", VA = "0x48730A0")]
	private void CreateThisFromUri(Uri otherUri)
	{
	}
}
