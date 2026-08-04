// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.ServicePointManagerElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48F4D60", Offset = "0x48F4D60", VA = "0x48F4D60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001811")]
		[Address(RVA = "0x48F4D90", Offset = "0x48F4D90", VA = "0x48F4D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000579")]
	public bool CheckCertificateRevocationList
	{
		[Token(Token = "0x6001812")]
		[Address(RVA = "0x48F4DC0", Offset = "0x48F4DC0", VA = "0x48F4DC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001813")]
		[Address(RVA = "0x48F4DF0", Offset = "0x48F4DF0", VA = "0x48F4DF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057A")]
	public int DnsRefreshTimeout
	{
		[Token(Token = "0x6001814")]
		[Address(RVA = "0x48F4E20", Offset = "0x48F4E20", VA = "0x48F4E20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001815")]
		[Address(RVA = "0x48F4E50", Offset = "0x48F4E50", VA = "0x48F4E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700057B")]
	public bool EnableDnsRoundRobin
	{
		[Token(Token = "0x6001816")]
		[Address(RVA = "0x48F4E80", Offset = "0x48F4E80", VA = "0x48F4E80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001817")]
		[Address(RVA = "0x48F4EB0", Offset = "0x48F4EB0", VA = "0x48F4EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700057C")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6001818")]
		[Address(RVA = "0x48F4EE0", Offset = "0x48F4EE0", VA = "0x48F4EE0")]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x6001819")]
		[Address(RVA = "0x48F4F10", Offset = "0x48F4F10", VA = "0x48F4F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700057D")]
	public bool Expect100Continue
	{
		[Token(Token = "0x600181A")]
		[Address(RVA = "0x48F4F40", Offset = "0x48F4F40", VA = "0x48F4F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600181B")]
		[Address(RVA = "0x48F4F70", Offset = "0x48F4F70", VA = "0x48F4F70")]
		set
		{
		}
	}

	[Token(Token = "0x1700057E")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600181C")]
		[Address(RVA = "0x48F4FA0", Offset = "0x48F4FA0", VA = "0x48F4FA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700057F")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x600181D")]
		[Address(RVA = "0x48F4FD0", Offset = "0x48F4FD0", VA = "0x48F4FD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600181E")]
		[Address(RVA = "0x48F5000", Offset = "0x48F5000", VA = "0x48F5000")]
		set
		{
		}
	}

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x48F4D30", Offset = "0x48F4D30", VA = "0x48F4D30")]
	public ServicePointManagerElement()
	{
	}

	[Token(Token = "0x600181F")]
	[Address(RVA = "0x48F5030", Offset = "0x48F5030", VA = "0x48F5030", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
