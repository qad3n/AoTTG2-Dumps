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

[Token(Token = "0x200032A")]
internal sealed class SettingsSectionInternal
{
	[Token(Token = "0x4000D1F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly SettingsSectionInternal instance;

	[Token(Token = "0x4000D20")]
	[FieldOffset(Offset = "0x10")]
	internal readonly bool HttpListenerUnescapeRequestUrl;

	[Token(Token = "0x4000D21")]
	[FieldOffset(Offset = "0x14")]
	internal readonly IPProtectionLevel IPProtectionLevel;

	[Token(Token = "0x170004E4")]
	internal static SettingsSectionInternal Section
	{
		[Token(Token = "0x60015AF")]
		[Address(RVA = "0x61A4F00", Offset = "0x61A3F00", VA = "0x61A4F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E5")]
	internal bool UseNagleAlgorithm
	{
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x61A4F70", Offset = "0x61A3F70", VA = "0x61A4F70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015B1")]
		[Address(RVA = "0x61A4F80", Offset = "0x61A3F80", VA = "0x61A4F80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004E6")]
	internal bool Expect100Continue
	{
		[Token(Token = "0x60015B2")]
		[Address(RVA = "0x61A4F90", Offset = "0x61A3F90", VA = "0x61A4F90")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015B3")]
		[Address(RVA = "0x61A4FA0", Offset = "0x61A3FA0", VA = "0x61A4FA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004E7")]
	internal bool CheckCertificateName
	{
		[Token(Token = "0x60015B4")]
		[Address(RVA = "0x61A4FB0", Offset = "0x61A3FB0", VA = "0x61A4FB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015B5")]
		[Address(RVA = "0x61A4FC0", Offset = "0x61A3FC0", VA = "0x61A4FC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004E8")]
	internal int DnsRefreshTimeout
	{
		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x61A4FD0", Offset = "0x61A3FD0", VA = "0x61A4FD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x61A4FE0", Offset = "0x61A3FE0", VA = "0x61A4FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004E9")]
	internal bool EnableDnsRoundRobin
	{
		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x61A4FF0", Offset = "0x61A3FF0", VA = "0x61A4FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015B9")]
		[Address(RVA = "0x61A5000", Offset = "0x61A4000", VA = "0x61A5000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004EA")]
	internal bool CheckCertificateRevocationList
	{
		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x61A5010", Offset = "0x61A4010", VA = "0x61A5010")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015BB")]
		[Address(RVA = "0x61A5020", Offset = "0x61A4020", VA = "0x61A5020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004EB")]
	internal EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x60015BC")]
		[Address(RVA = "0x61A5030", Offset = "0x61A4030", VA = "0x61A5030")]
		[CompilerGenerated]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x61A5040", Offset = "0x61A4040", VA = "0x61A5040")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170004EC")]
	internal bool Ipv6Enabled
	{
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x61A5050", Offset = "0x61A4050", VA = "0x61A5050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x61A5060", Offset = "0x61A4060", VA = "0x61A5060")]
	public SettingsSectionInternal()
	{
	}
}
