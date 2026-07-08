using System.Configuration;
using System.Net.Security;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200039F")]
public sealed class ServicePointManagerElement : ConfigurationElement
{
	[Token(Token = "0x17000578")]
	public bool CheckCertificateName
	{
		[Token(Token = "0x6001810")]
		[Address(RVA = "0x45CFC60", Offset = "0x45CFC60", VA = "0x45CFC60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001811")]
		[Address(RVA = "0x45CFC90", Offset = "0x45CFC90", VA = "0x45CFC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000579")]
	public bool CheckCertificateRevocationList
	{
		[Token(Token = "0x6001812")]
		[Address(RVA = "0x45CFCC0", Offset = "0x45CFCC0", VA = "0x45CFCC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001813")]
		[Address(RVA = "0x45CFCF0", Offset = "0x45CFCF0", VA = "0x45CFCF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057A")]
	public int DnsRefreshTimeout
	{
		[Token(Token = "0x6001814")]
		[Address(RVA = "0x45CFD20", Offset = "0x45CFD20", VA = "0x45CFD20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001815")]
		[Address(RVA = "0x45CFD50", Offset = "0x45CFD50", VA = "0x45CFD50")]
		set
		{
		}
	}

	[Token(Token = "0x1700057B")]
	public bool EnableDnsRoundRobin
	{
		[Token(Token = "0x6001816")]
		[Address(RVA = "0x45CFD80", Offset = "0x45CFD80", VA = "0x45CFD80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001817")]
		[Address(RVA = "0x45CFDB0", Offset = "0x45CFDB0", VA = "0x45CFDB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057C")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6001818")]
		[Address(RVA = "0x45CFDE0", Offset = "0x45CFDE0", VA = "0x45CFDE0")]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x6001819")]
		[Address(RVA = "0x45CFE10", Offset = "0x45CFE10", VA = "0x45CFE10")]
		set
		{
		}
	}

	[Token(Token = "0x1700057D")]
	public bool Expect100Continue
	{
		[Token(Token = "0x600181A")]
		[Address(RVA = "0x45CFE40", Offset = "0x45CFE40", VA = "0x45CFE40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600181B")]
		[Address(RVA = "0x45CFE70", Offset = "0x45CFE70", VA = "0x45CFE70")]
		set
		{
		}
	}

	[Token(Token = "0x1700057E")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600181C")]
		[Address(RVA = "0x45CFEA0", Offset = "0x45CFEA0", VA = "0x45CFEA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057F")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x600181D")]
		[Address(RVA = "0x45CFED0", Offset = "0x45CFED0", VA = "0x45CFED0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600181E")]
		[Address(RVA = "0x45CFF00", Offset = "0x45CFF00", VA = "0x45CFF00")]
		set
		{
		}
	}

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x45CFC30", Offset = "0x45CFC30", VA = "0x45CFC30")]
	public ServicePointManagerElement()
	{
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x45CFF30", Offset = "0x45CFF30", VA = "0x45CFF30", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
