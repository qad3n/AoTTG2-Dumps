using System.Net.Security;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20001E1")]
internal sealed class SettingsSectionInternal
{
	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SettingsSectionInternal instance;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool HttpListenerUnescapeRequestUrl;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x14")]
	internal readonly IPProtectionLevel IPProtectionLevel;

	[Token(Token = "0x170002BD")]
	internal static SettingsSectionInternal Section
	{
		[Token(Token = "0x6000BAC")]
		[Address(RVA = "0x467FAA0", Offset = "0x467FAA0", VA = "0x467FAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002BE")]
	internal bool UseNagleAlgorithm
	{
		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x467FB10", Offset = "0x467FB10", VA = "0x467FB10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BAE")]
		[Address(RVA = "0x467FB20", Offset = "0x467FB20", VA = "0x467FB20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BF")]
	internal bool Expect100Continue
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x467FB30", Offset = "0x467FB30", VA = "0x467FB30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x467FB40", Offset = "0x467FB40", VA = "0x467FB40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C0")]
	internal bool CheckCertificateName
	{
		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x467FB50", Offset = "0x467FB50", VA = "0x467FB50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BB2")]
		[Address(RVA = "0x467FB60", Offset = "0x467FB60", VA = "0x467FB60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002C1")]
	internal int DnsRefreshTimeout
	{
		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x467FB70", Offset = "0x467FB70", VA = "0x467FB70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000BB4")]
		[Address(RVA = "0x467FB80", Offset = "0x467FB80", VA = "0x467FB80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C2")]
	internal bool EnableDnsRoundRobin
	{
		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x467FB90", Offset = "0x467FB90", VA = "0x467FB90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x467FBA0", Offset = "0x467FBA0", VA = "0x467FBA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C3")]
	internal bool CheckCertificateRevocationList
	{
		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x467FBB0", Offset = "0x467FBB0", VA = "0x467FBB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BB8")]
		[Address(RVA = "0x467FBC0", Offset = "0x467FBC0", VA = "0x467FBC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002C4")]
	internal EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x467FBD0", Offset = "0x467FBD0", VA = "0x467FBD0")]
		[CompilerGenerated]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x6000BBA")]
		[Address(RVA = "0x467FBE0", Offset = "0x467FBE0", VA = "0x467FBE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170002C5")]
	internal bool Ipv6Enabled
	{
		[Token(Token = "0x6000BBB")]
		[Address(RVA = "0x467FBF0", Offset = "0x467FBF0", VA = "0x467FBF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x467FC00", Offset = "0x467FC00", VA = "0x467FC00")]
	public SettingsSectionInternal()
	{
	}
}
