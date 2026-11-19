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
		[Token(Token = "0x4000187")]
		Zero = 0uL,
		[Token(Token = "0x4000188")]
		SchemeNotCanonical = 1uL,
		[Token(Token = "0x4000189")]
		UserNotCanonical = 2uL,
		[Token(Token = "0x400018A")]
		HostNotCanonical = 4uL,
		[Token(Token = "0x400018B")]
		PortNotCanonical = 8uL,
		[Token(Token = "0x400018C")]
		PathNotCanonical = 0x10uL,
		[Token(Token = "0x400018D")]
		QueryNotCanonical = 0x20uL,
		[Token(Token = "0x400018E")]
		FragmentNotCanonical = 0x40uL,
		[Token(Token = "0x400018F")]
		CannotDisplayCanonical = SchemeNotCanonical | UserNotCanonical | HostNotCanonical | PortNotCanonical | PathNotCanonical | QueryNotCanonical | FragmentNotCanonical,
		[Token(Token = "0x4000190")]
		E_UserNotCanonical = 0x80uL,
		[Token(Token = "0x4000191")]
		E_HostNotCanonical = 0x100uL,
		[Token(Token = "0x4000192")]
		E_PortNotCanonical = 0x200uL,
		[Token(Token = "0x4000193")]
		E_PathNotCanonical = 0x400uL,
		[Token(Token = "0x4000194")]
		E_QueryNotCanonical = 0x800uL,
		[Token(Token = "0x4000195")]
		E_FragmentNotCanonical = 0x1000uL,
		[Token(Token = "0x4000196")]
		E_CannotDisplayCanonical = E_UserNotCanonical | E_HostNotCanonical | E_PortNotCanonical | E_PathNotCanonical | E_QueryNotCanonical | E_FragmentNotCanonical,
		[Token(Token = "0x4000197")]
		ShouldBeCompressed = 0x2000uL,
		[Token(Token = "0x4000198")]
		FirstSlashAbsent = 0x4000uL,
		[Token(Token = "0x4000199")]
		BackslashInPath = 0x8000uL,
		[Token(Token = "0x400019A")]
		IndexMask = CannotDisplayCanonical | E_CannotDisplayCanonical | ShouldBeCompressed | FirstSlashAbsent | BackslashInPath,
		[Token(Token = "0x400019B")]
		HostTypeMask = 0x70000uL,
		[Token(Token = "0x400019C")]
		HostNotParsed = 0uL,
		[Token(Token = "0x400019D")]
		IPv6HostType = 0x10000uL,
		[Token(Token = "0x400019E")]
		IPv4HostType = 0x20000uL,
		[Token(Token = "0x400019F")]
		DnsHostType = 0x30000uL,
		[Token(Token = "0x40001A0")]
		UncHostType = 0x40000uL,
		[Token(Token = "0x40001A1")]
		BasicHostType = 0x50000uL,
		[Token(Token = "0x40001A2")]
		UnusedHostType = 0x60000uL,
		[Token(Token = "0x40001A3")]
		UnknownHostType = HostTypeMask,
		[Token(Token = "0x40001A4")]
		UserEscaped = 0x80000uL,
		[Token(Token = "0x40001A5")]
		AuthorityFound = 0x100000uL,
		[Token(Token = "0x40001A6")]
		HasUserInfo = 0x200000uL,
		[Token(Token = "0x40001A7")]
		LoopbackHost = 0x400000uL,
		[Token(Token = "0x40001A8")]
		NotDefaultPort = 0x800000uL,
		[Token(Token = "0x40001A9")]
		UserDrivenParsing = 0x1000000uL,
		[Token(Token = "0x40001AA")]
		CanonicalDnsHost = 0x2000000uL,
		[Token(Token = "0x40001AB")]
		ErrorOrParsingRecursion = 0x4000000uL,
		[Token(Token = "0x40001AC")]
		DosPath = 0x8000000uL,
		[Token(Token = "0x40001AD")]
		UncPath = 0x10000000uL,
		[Token(Token = "0x40001AE")]
		ImplicitFile = 0x20000000uL,
		[Token(Token = "0x40001AF")]
		MinimalUriInfoSet = 0x40000000uL,
		[Token(Token = "0x40001B0")]
		AllUriInfoSet = 0x80000000uL,
		[Token(Token = "0x40001B1")]
		IdnHost = 0x100000000uL,
		[Token(Token = "0x40001B2")]
		HasUnicode = 0x200000000uL,
		[Token(Token = "0x40001B3")]
		HostUnicodeNormalized = 0x400000000uL,
		[Token(Token = "0x40001B4")]
		RestUnicodeNormalized = 0x800000000uL,
		[Token(Token = "0x40001B5")]
		UnicodeHost = 0x1000000000uL,
		[Token(Token = "0x40001B6")]
		IntranetUri = 0x2000000000uL,
		[Token(Token = "0x40001B7")]
		UseOrigUncdStrOffset = 0x4000000000uL,
		[Token(Token = "0x40001B8")]
		UserIriCanonical = 0x8000000000uL,
		[Token(Token = "0x40001B9")]
		PathIriCanonical = 0x10000000000uL,
		[Token(Token = "0x40001BA")]
		QueryIriCanonical = 0x20000000000uL,
		[Token(Token = "0x40001BB")]
		FragmentIriCanonical = 0x40000000000uL,
		[Token(Token = "0x40001BC")]
		IriCanonical = UserIriCanonical | PathIriCanonical | QueryIriCanonical | FragmentIriCanonical,
		[Token(Token = "0x40001BD")]
		CompressedSlashes = 0x100000000000uL
	}

	[Token(Token = "0x200007E")]
	private class UriInfo
	{
		[Token(Token = "0x40001BE")]
		[FieldOffset(Offset = "0x10")]
		public string Host;

		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x18")]
		public string ScopeId;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x20")]
		public string String;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x28")]
		public Offset Offset;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x38")]
		public string DnsSafeHost;

		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x40")]
		public MoreInfo MoreInfo;

		[Token(Token = "0x600024A")]
		[Address(RVA = "0x61D72B0", Offset = "0x61D62B0", VA = "0x61D72B0")]
		public UriInfo()
		{
		}
	}

	[Token(Token = "0x200007F")]
	private struct Offset
	{
		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x0")]
		public ushort Scheme;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x2")]
		public ushort User;

		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x4")]
		public ushort Host;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x6")]
		public ushort PortValue;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x8")]
		public ushort Path;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0xA")]
		public ushort Query;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0xC")]
		public ushort Fragment;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0xE")]
		public ushort End;
	}

	[Token(Token = "0x2000080")]
	private class MoreInfo
	{
		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x10")]
		public string Path;

		[Token(Token = "0x40001CD")]
		[FieldOffset(Offset = "0x18")]
		public string Query;

		[Token(Token = "0x40001CE")]
		[FieldOffset(Offset = "0x20")]
		public string Fragment;

		[Token(Token = "0x40001CF")]
		[FieldOffset(Offset = "0x28")]
		public string AbsoluteUri;

		[Token(Token = "0x40001D0")]
		[FieldOffset(Offset = "0x30")]
		public int Hash;

		[Token(Token = "0x40001D1")]
		[FieldOffset(Offset = "0x38")]
		public string RemoteUrl;

		[Token(Token = "0x600024B")]
		[Address(RVA = "0x61D72C0", Offset = "0x61D62C0", VA = "0x61D72C0")]
		public MoreInfo()
		{
		}
	}

	[Token(Token = "0x2000081")]
	[Flags]
	private enum Check
	{
		[Token(Token = "0x40001D3")]
		None = 0,
		[Token(Token = "0x40001D4")]
		EscapedCanonical = 1,
		[Token(Token = "0x40001D5")]
		DisplayCanonical = 2,
		[Token(Token = "0x40001D6")]
		DotSlashAttn = 4,
		[Token(Token = "0x40001D7")]
		DotSlashEscaped = 0x80,
		[Token(Token = "0x40001D8")]
		BackslashInPath = 0x10,
		[Token(Token = "0x40001D9")]
		ReservedFound = 0x20,
		[Token(Token = "0x40001DA")]
		NotIriCanonical = 0x40,
		[Token(Token = "0x40001DB")]
		FoundNonAscii = 8
	}

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string UriSchemeFile;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string UriSchemeFtp;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string UriSchemeGopher;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x18")]
	public static readonly string UriSchemeHttp;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x20")]
	public static readonly string UriSchemeHttps;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly string UriSchemeWs;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly string UriSchemeWss;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string UriSchemeMailto;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string UriSchemeNews;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string UriSchemeNntp;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string UriSchemeNetTcp;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x58")]
	public static readonly string UriSchemeNetPipe;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x60")]
	public static readonly string SchemeDelimiter;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x10")]
	private string m_String;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x18")]
	private string m_originalUnicodeString;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x20")]
	private UriParser m_Syntax;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x28")]
	private string m_DnsSafeHost;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x30")]
	private Flags m_Flags;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x38")]
	private UriInfo m_Info;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x40")]
	private bool m_iriParsing;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x68")]
	private static bool s_ConfigInitialized;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x69")]
	private static bool s_ConfigInitializing;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x6C")]
	private static UriIdnScope s_IdnScope;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x70")]
	private static bool s_IriParsing;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x71")]
	private static bool useDotNetRelativeOrAbsolute;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x72")]
	internal static readonly bool IsWindowsFileSystem;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x78")]
	private static object s_initLock;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x80")]
	internal static readonly char[] HexLowerChars;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x88")]
	private static readonly char[] _WSchars;

	[Token(Token = "0x17000059")]
	private bool IsImplicitFile
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x616E400", Offset = "0x616D400", VA = "0x616E400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005A")]
	private bool IsUncOrDosPath
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x616E410", Offset = "0x616D410", VA = "0x616E410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005B")]
	private bool IsDosPath
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x616E420", Offset = "0x616D420", VA = "0x616E420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005C")]
	private bool IsUncPath
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x616E430", Offset = "0x616D430", VA = "0x616E430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005D")]
	private Flags HostType
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x616E440", Offset = "0x616D440", VA = "0x616E440")]
		get
		{
			return default(Flags);
		}
	}

	[Token(Token = "0x1700005E")]
	private UriParser Syntax
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x616E450", Offset = "0x616D450", VA = "0x616E450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005F")]
	private bool IsNotAbsoluteUri
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x616E460", Offset = "0x616D460", VA = "0x616E460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000060")]
	private bool AllowIdn
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x616E500", Offset = "0x616D500", VA = "0x616E500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000061")]
	internal bool UserDrivenParsing
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x616E680", Offset = "0x616D680", VA = "0x616E680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	private ushort SecuredPathIndex
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x616E6B0", Offset = "0x616D6B0", VA = "0x616E6B0")]
		get
		{
			return default(ushort);
		}
	}

	[Token(Token = "0x17000063")]
	public string AbsolutePath
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x6172250", Offset = "0x6171250", VA = "0x6172250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	private string PrivateAbsolutePath
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x6172310", Offset = "0x6171310", VA = "0x6172310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000065")]
	public string AbsoluteUri
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x61723F0", Offset = "0x61713F0", VA = "0x61723F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000066")]
	public string LocalPath
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x6172520", Offset = "0x6171520", VA = "0x6172520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	public string Authority
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x6172CC0", Offset = "0x6171CC0", VA = "0x6172CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public UriHostNameType HostNameType
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x6172D40", Offset = "0x6171D40", VA = "0x6172D40")]
		get
		{
			return default(UriHostNameType);
		}
	}

	[Token(Token = "0x17000069")]
	public bool IsDefaultPort
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x6172EA0", Offset = "0x6171EA0", VA = "0x6172EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public bool IsFile
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x6172F70", Offset = "0x6171F70", VA = "0x6172F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public bool IsLoopback
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x6173030", Offset = "0x6172030", VA = "0x6173030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	public string PathAndQuery
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x61730E0", Offset = "0x61720E0", VA = "0x61730E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006D")]
	public string[] Segments
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x61731A0", Offset = "0x61721A0", VA = "0x61731A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	public bool IsUnc
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x61733B0", Offset = "0x61723B0", VA = "0x61733B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public string Host
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x6173420", Offset = "0x6172420", VA = "0x6173420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	private static object InitializeLock
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x61734C0", Offset = "0x61724C0", VA = "0x61734C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public int Port
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x6173D70", Offset = "0x6172D70", VA = "0x6173D70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000072")]
	public string Query
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x6173E70", Offset = "0x6172E70", VA = "0x6173E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	public string Fragment
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x6173FA0", Offset = "0x6172FA0", VA = "0x6173FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public string Scheme
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x61740D0", Offset = "0x61730D0", VA = "0x61740D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	private bool OriginalStringSwitched
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x6174140", Offset = "0x6173140", VA = "0x6174140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000076")]
	public string OriginalString
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x6171300", Offset = "0x6170300", VA = "0x6171300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000077")]
	public string DnsSafeHost
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x6174180", Offset = "0x6173180", VA = "0x6174180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public string IdnHost
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x6174420", Offset = "0x6173420", VA = "0x6174420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	public bool IsAbsoluteUri
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x61704A0", Offset = "0x616F4A0", VA = "0x61704A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007A")]
	public bool UserEscaped
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x6174450", Offset = "0x6173450", VA = "0x6174450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public string UserInfo
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x6174460", Offset = "0x6173460", VA = "0x6174460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	internal bool HasAuthority
	{
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x617B420", Offset = "0x617A420", VA = "0x617B420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x616E470", Offset = "0x616D470", VA = "0x616E470")]
	internal static bool IriParsingStatic(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x616E5B0", Offset = "0x616D5B0", VA = "0x616E5B0")]
	private bool AllowIdnStatic(UriParser syntax, Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x616E670", Offset = "0x616D670", VA = "0x616E670")]
	private bool IsIntranet(string schemeHost)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x616E690", Offset = "0x616D690", VA = "0x616E690")]
	private void SetUserDrivenParsing()
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x616E5A0", Offset = "0x616D5A0", VA = "0x616E5A0")]
	private bool NotAny(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x616E700", Offset = "0x616D700", VA = "0x616E700")]
	private bool InFact(Flags flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x616E660", Offset = "0x616D660", VA = "0x616E660")]
	private static bool StaticNotAny(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x616E710", Offset = "0x616D710", VA = "0x616E710")]
	private static bool StaticInFact(Flags allFlags, Flags checkFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x616E720", Offset = "0x616D720", VA = "0x616E720")]
	private UriInfo EnsureUriInfo()
	{
		return null;
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x616ED00", Offset = "0x616DD00", VA = "0x616ED00")]
	private void EnsureParseRemaining()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x616FCA0", Offset = "0x616ECA0", VA = "0x616FCA0")]
	private void EnsureHostString(bool allowDnsOptimization)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x6170130", Offset = "0x616F130", VA = "0x6170130")]
	public Uri(string uriString)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x6170370", Offset = "0x616F370", VA = "0x6170370")]
	public Uri(string uriString, UriKind uriKind)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x61703F0", Offset = "0x616F3F0", VA = "0x61703F0")]
	public Uri(Uri baseUri, string relativeUri)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x61704B0", Offset = "0x616F4B0", VA = "0x61704B0")]
	private void CreateUri(Uri baseUri, string relativeUri, bool dontEscape)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x6170D80", Offset = "0x616FD80", VA = "0x6170D80")]
	public Uri(Uri baseUri, Uri relativeUri)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x6170FB0", Offset = "0x616FFB0", VA = "0x6170FB0")]
	private static ParsingError GetCombinedString(Uri baseUri, string relativeStr, bool dontEscape, ref string result)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x6171E90", Offset = "0x6170E90", VA = "0x6171E90")]
	private static UriFormatException GetException(ParsingError err)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x6171FF0", Offset = "0x6170FF0", VA = "0x6171FF0")]
	protected Uri(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x61720F0", Offset = "0x61710F0", VA = "0x61720F0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x6172100", Offset = "0x6171100", VA = "0x6172100")]
	protected void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x61734A0", Offset = "0x61724A0", VA = "0x61734A0")]
	private static bool StaticIsFile(UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x61735C0", Offset = "0x61725C0", VA = "0x61735C0")]
	private static void InitializeUriConfig()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x6172590", Offset = "0x6171590", VA = "0x6172590")]
	private string GetLocalPath()
	{
		return null;
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x61744E0", Offset = "0x61734E0", VA = "0x61744E0")]
	internal static bool IsGenDelim(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x6174500", Offset = "0x6173500", VA = "0x6174500")]
	public static bool IsHexDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x6174520", Offset = "0x6173520", VA = "0x6174520")]
	public static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x61745A0", Offset = "0x61735A0", VA = "0x61745A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x6174810", Offset = "0x6173810", VA = "0x6174810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x6174B40", Offset = "0x6173B40", VA = "0x6174B40")]
	public static bool operator ==(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x6170BC0", Offset = "0x616FBC0", VA = "0x6170BC0")]
	public static bool operator !=(Uri uri1, Uri uri2)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x6174B80", Offset = "0x6173B80", VA = "0x6174B80", Slot = "0")]
	public override bool Equals(object comparand)
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x6175360", Offset = "0x6174360", VA = "0x6175360")]
	private static bool CheckForColonInFirstPathSegment(string uriString)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x6175400", Offset = "0x6174400", VA = "0x6175400")]
	internal static string InternalEscapeString(string rawString)
	{
		return null;
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x61754B0", Offset = "0x61744B0", VA = "0x61754B0")]
	private static ParsingError ParseScheme(string uriString, ref Flags flags, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x6175B10", Offset = "0x6174B10", VA = "0x6175B10")]
	internal UriFormatException ParseMinimal()
	{
		return null;
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x6175B80", Offset = "0x6174B80", VA = "0x6175B80")]
	private ParsingError PrivateParseMinimal()
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x6177430", Offset = "0x6176430", VA = "0x6177430")]
	private void PrivateParseMinimalIri(string newHost, ushort idx)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x616E740", Offset = "0x616D740", VA = "0x616E740")]
	private void CreateUriInfo(Flags cF)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x616FD00", Offset = "0x616ED00", VA = "0x616FD00")]
	private void CreateHostString()
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x6177980", Offset = "0x6176980", VA = "0x6177980")]
	private static string CreateHostStringHelper(string str, ushort idx, ushort end, ref Flags flags, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x6177530", Offset = "0x6176530", VA = "0x6177530")]
	private void GetHostViaCustomSyntax()
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x6172240", Offset = "0x6171240", VA = "0x6172240")]
	internal string GetParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x6178190", Offset = "0x6177190", VA = "0x6178190")]
	private string GetEscapedParts(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x6173C90", Offset = "0x6172C90", VA = "0x6173C90")]
	private string GetUnescapedParts(UriComponents uriParts, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x6178940", Offset = "0x6177940", VA = "0x6178940")]
	private string ReCreateParts(UriComponents parts, ushort nonCanonical, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x6178270", Offset = "0x6177270", VA = "0x6178270")]
	private string GetUriPartsFromUserString(UriComponents uriParts)
	{
		return null;
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x616ED10", Offset = "0x616DD10", VA = "0x616ED10")]
	private void ParseRemaining()
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x6175570", Offset = "0x6174570", VA = "0x6175570")]
	private unsafe static ushort ParseSchemeCheckImplicitFile(char* uriString, ushort length, ref ParsingError err, ref Flags flags, ref UriParser syntax)
	{
		return default(ushort);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x617A380", Offset = "0x6179380", VA = "0x617A380")]
	private unsafe static bool CheckKnownSchemes(long* lptr, ushort nChars, ref UriParser syntax)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x61711F0", Offset = "0x61701F0", VA = "0x61711F0")]
	private unsafe static ParsingError CheckSchemeSyntax(char* ptr, ushort length, ref UriParser syntax)
	{
		return default(ParsingError);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x6176370", Offset = "0x6175370", VA = "0x6176370")]
	private unsafe ushort CheckAuthorityHelper(char* pString, ushort idx, ushort length, ref ParsingError err, ref Flags flags, UriParser syntax, ref string newHost)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x617A880", Offset = "0x6179880", VA = "0x617A880")]
	private unsafe void CheckAuthorityHelperHandleDnsIri(char* pString, ushort start, int end, int startInput, bool iriParsing, bool hasUnicode, UriParser syntax, string userInfoString, ref Flags flags, ref bool justNormalized, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x617ACE0", Offset = "0x6179CE0", VA = "0x617ACE0")]
	private unsafe void CheckAuthorityHelperHandleAnyHostIri(char* pString, int startInput, int end, bool iriParsing, bool hasUnicode, UriParser syntax, ref Flags flags, ref string newHost, ref ParsingError err)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x617A260", Offset = "0x6179260", VA = "0x617A260")]
	private void FindEndOfComponent(string input, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x617B190", Offset = "0x617A190", VA = "0x617B190")]
	private unsafe void FindEndOfComponent(char* str, ref ushort idx, ushort end, char delim)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x6177B50", Offset = "0x6176B50", VA = "0x6177B50")]
	private unsafe Check CheckCanonical(char* str, ref ushort idx, ushort end, char delim)
	{
		return default(Check);
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x6179920", Offset = "0x6178920", VA = "0x6179920")]
	private char[] GetCanonicalPath(char[] dest, ref int pos, UriFormat formatAs)
	{
		return null;
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x617B230", Offset = "0x617A230", VA = "0x617B230")]
	private unsafe static void UnescapeOnly(char* pch, int start, ref int end, char ch1, char ch2, char ch3)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x6173750", Offset = "0x6172750", VA = "0x6173750")]
	private static char[] Compress(char[] dest, ushort start, ref int destLength, UriParser syntax)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x6174720", Offset = "0x6173720", VA = "0x6174720")]
	internal static int CalculateCaseInsensitiveHashCode(string text)
	{
		return default(int);
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x6171340", Offset = "0x6170340", VA = "0x6171340")]
	private static string CombineUri(Uri basePart, string relativePart, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x6176340", Offset = "0x6175340", VA = "0x6176340")]
	private static bool IsLWS(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x6176360", Offset = "0x6175360", VA = "0x6176360")]
	private static bool IsAsciiLetter(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x617B430", Offset = "0x617A430", VA = "0x617B430")]
	internal static bool IsAsciiLetterOrDigit(char character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x617B490", Offset = "0x617A490", VA = "0x617B490")]
	internal static bool IsBidiControlCharacter(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x617AFE0", Offset = "0x6179FE0", VA = "0x617AFE0")]
	internal unsafe static string StripBidiControlCharacter(char* strToClean, int start, int length)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x61701B0", Offset = "0x616F1B0", VA = "0x61701B0")]
	private void CreateThis(string uri, bool dontEscape, UriKind uriKind)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x617B4C0", Offset = "0x617A4C0", VA = "0x617B4C0")]
	private void InitializeUri(ParsingError err, UriKind uriKind, out UriFormatException e)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x617BC00", Offset = "0x617AC00", VA = "0x617BC00")]
	private bool CheckForConfigLoad(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x617BCE0", Offset = "0x617ACE0", VA = "0x617BCE0")]
	private bool CheckForUnicode(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x617BDD0", Offset = "0x617ADD0", VA = "0x617BDD0")]
	private bool CheckForEscapedUnreserved(string data)
	{
		return default(bool);
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x6175290", Offset = "0x6174290", VA = "0x6175290")]
	public static bool TryCreate(string uriString, UriKind uriKind, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x617C2B0", Offset = "0x617B2B0", VA = "0x617C2B0")]
	public static bool TryCreate(Uri baseUri, string relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x617C380", Offset = "0x617B380", VA = "0x617C380")]
	public static bool TryCreate(Uri baseUri, Uri relativeUri, out Uri result)
	{
		return default(bool);
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x6177FF0", Offset = "0x6176FF0", VA = "0x6177FF0")]
	public string GetComponents(UriComponents components, UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x617C760", Offset = "0x617B760", VA = "0x617C760")]
	public bool IsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x617CCB0", Offset = "0x617BCB0", VA = "0x617CCB0")]
	public static bool IsWellFormedUriString(string uriString, UriKind uriKind)
	{
		return default(bool);
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x617C7A0", Offset = "0x617B7A0", VA = "0x617C7A0")]
	internal bool InternalIsWellFormedOriginalString()
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x617CD70", Offset = "0x617BD70", VA = "0x617CD70")]
	public static string UnescapeDataString(string stringToUnescape)
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x617CEE0", Offset = "0x617BEE0", VA = "0x617CEE0")]
	public static string EscapeDataString(string stringToEscape)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x617A330", Offset = "0x6179330", VA = "0x617A330")]
	internal string EscapeUnescapeIri(string input, int start, int end, UriComponents component)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x617CFF0", Offset = "0x617BFF0", VA = "0x617CFF0")]
	private Uri(Flags flags, UriParser uriParser, string uri)
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x617C000", Offset = "0x617B000", VA = "0x617C000")]
	internal static Uri CreateHelper(string uriString, bool dontEscape, UriKind uriKind, ref UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x6170660", Offset = "0x616F660", VA = "0x6170660")]
	internal static Uri ResolveHelper(Uri baseUri, Uri relativeUri, ref string newUriString, ref bool userEscaped, out UriFormatException e)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x617C550", Offset = "0x617B550", VA = "0x617C550")]
	private string GetRelativeSerializationString(UriFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x6174900", Offset = "0x6173900", VA = "0x6174900")]
	internal string GetComponentsHelper(UriComponents uriComponents, UriFormat uriFormat)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x617D040", Offset = "0x617C040", VA = "0x617D040")]
	public bool IsBaseOf(Uri uri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x617D0F0", Offset = "0x617C0F0", VA = "0x617D0F0")]
	internal bool IsBaseOfHelper(Uri uriLink)
	{
		return default(bool);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x6170C00", Offset = "0x616FC00", VA = "0x6170C00")]
	private void CreateThisFromUri(Uri otherUri)
	{
	}
}
