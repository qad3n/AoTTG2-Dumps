// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.SettingsSectionInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Security;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200036E")]
internal sealed class SettingsSectionInternal
{
	[Token(Token = "0x4000E07")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SettingsSectionInternal instance;

	[Token(Token = "0x4000E08")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool HttpListenerUnescapeRequestUrl;

	[Token(Token = "0x4000E09")]
	[FieldOffset(Offset = "0x14")]
	internal readonly IPProtectionLevel IPProtectionLevel;

	[Token(Token = "0x17000511")]
	internal static SettingsSectionInternal Section
	{
		[Token(Token = "0x6001768")]
		[Address(RVA = "0x27F6BF0", Offset = "0x27F51F0", VA = "0x1827F6BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000512")]
	internal bool UseNagleAlgorithm
	{
		[Token(Token = "0x6001769")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600176A")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000513")]
	internal bool Expect100Continue
	{
		[Token(Token = "0x600176B")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000514")]
	internal bool CheckCertificateName
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0xB15840", Offset = "0xB13E40", VA = "0x180B15840")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600176E")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000515")]
	internal int DnsRefreshTimeout
	{
		[Token(Token = "0x600176F")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001770")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000516")]
	internal bool EnableDnsRoundRobin
	{
		[Token(Token = "0x6001771")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001772")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000517")]
	internal bool CheckCertificateRevocationList
	{
		[Token(Token = "0x6001773")]
		[Address(RVA = "0x1991920", Offset = "0x198FF20", VA = "0x181991920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001774")]
		[Address(RVA = "0x1991EB0", Offset = "0x19904B0", VA = "0x181991EB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000518")]
	internal EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6001775")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x6001776")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000519")]
	internal bool Ipv6Enabled
	{
		[Token(Token = "0x6001777")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x27F6BD0", Offset = "0x27F51D0", VA = "0x1827F6BD0")]
	public SettingsSectionInternal()
	{
	}
}
