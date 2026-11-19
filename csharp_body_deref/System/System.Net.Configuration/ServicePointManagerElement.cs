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

[Token(Token = "0x20003B6")]
public sealed class ServicePointManagerElement : ConfigurationElement
{
	[Token(Token = "0x170005B4")]
	public bool CheckCertificateName
	{
		[Token(Token = "0x60018FA")]
		[Address(RVA = "0x61D1850", Offset = "0x61D0850", VA = "0x61D1850")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018FB")]
		[Address(RVA = "0x61D1880", Offset = "0x61D0880", VA = "0x61D1880")]
		set
		{
		}
	}

	[Token(Token = "0x170005B5")]
	public bool CheckCertificateRevocationList
	{
		[Token(Token = "0x60018FC")]
		[Address(RVA = "0x61D18B0", Offset = "0x61D08B0", VA = "0x61D18B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018FD")]
		[Address(RVA = "0x61D18E0", Offset = "0x61D08E0", VA = "0x61D18E0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B6")]
	public int DnsRefreshTimeout
	{
		[Token(Token = "0x60018FE")]
		[Address(RVA = "0x61D1910", Offset = "0x61D0910", VA = "0x61D1910")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60018FF")]
		[Address(RVA = "0x61D1940", Offset = "0x61D0940", VA = "0x61D1940")]
		set
		{
		}
	}

	[Token(Token = "0x170005B7")]
	public bool EnableDnsRoundRobin
	{
		[Token(Token = "0x6001900")]
		[Address(RVA = "0x61D1970", Offset = "0x61D0970", VA = "0x61D1970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001901")]
		[Address(RVA = "0x61D19A0", Offset = "0x61D09A0", VA = "0x61D19A0")]
		set
		{
		}
	}

	[Token(Token = "0x170005B8")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6001902")]
		[Address(RVA = "0x61D19D0", Offset = "0x61D09D0", VA = "0x61D19D0")]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x6001903")]
		[Address(RVA = "0x61D1A00", Offset = "0x61D0A00", VA = "0x61D1A00")]
		set
		{
		}
	}

	[Token(Token = "0x170005B9")]
	public bool Expect100Continue
	{
		[Token(Token = "0x6001904")]
		[Address(RVA = "0x61D1A30", Offset = "0x61D0A30", VA = "0x61D1A30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001905")]
		[Address(RVA = "0x61D1A60", Offset = "0x61D0A60", VA = "0x61D1A60")]
		set
		{
		}
	}

	[Token(Token = "0x170005BA")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001906")]
		[Address(RVA = "0x61D1A90", Offset = "0x61D0A90", VA = "0x61D1A90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005BB")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x6001907")]
		[Address(RVA = "0x61D1AC0", Offset = "0x61D0AC0", VA = "0x61D1AC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001908")]
		[Address(RVA = "0x61D1AF0", Offset = "0x61D0AF0", VA = "0x61D1AF0")]
		set
		{
		}
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x61D1820", Offset = "0x61D0820", VA = "0x61D1820")]
	public ServicePointManagerElement()
	{
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x61D1B20", Offset = "0x61D0B20", VA = "0x61D1B20", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
