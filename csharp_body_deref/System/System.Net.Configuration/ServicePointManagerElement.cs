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

[Token(Token = "0x20003FA")]
public sealed class ServicePointManagerElement : ConfigurationElement
{
	[Token(Token = "0x170005E2")]
	public bool CheckCertificateName
	{
		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x282BC20", Offset = "0x282A220", VA = "0x18282BC20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AB5")]
		[Address(RVA = "0x282BDA0", Offset = "0x282A3A0", VA = "0x18282BDA0")]
		set
		{
		}
	}

	[Token(Token = "0x170005E3")]
	public bool CheckCertificateRevocationList
	{
		[Token(Token = "0x6001AB6")]
		[Address(RVA = "0x282BC50", Offset = "0x282A250", VA = "0x18282BC50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AB7")]
		[Address(RVA = "0x282BDD0", Offset = "0x282A3D0", VA = "0x18282BDD0")]
		set
		{
		}
	}

	[Token(Token = "0x170005E4")]
	public int DnsRefreshTimeout
	{
		[Token(Token = "0x6001AB8")]
		[Address(RVA = "0x282BC80", Offset = "0x282A280", VA = "0x18282BC80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001AB9")]
		[Address(RVA = "0x282BE00", Offset = "0x282A400", VA = "0x18282BE00")]
		set
		{
		}
	}

	[Token(Token = "0x170005E5")]
	public bool EnableDnsRoundRobin
	{
		[Token(Token = "0x6001ABA")]
		[Address(RVA = "0x282BCB0", Offset = "0x282A2B0", VA = "0x18282BCB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001ABB")]
		[Address(RVA = "0x282BE30", Offset = "0x282A430", VA = "0x18282BE30")]
		set
		{
		}
	}

	[Token(Token = "0x170005E6")]
	public EncryptionPolicy EncryptionPolicy
	{
		[Token(Token = "0x6001ABC")]
		[Address(RVA = "0x282BCE0", Offset = "0x282A2E0", VA = "0x18282BCE0")]
		get
		{
			return default(EncryptionPolicy);
		}
		[Token(Token = "0x6001ABD")]
		[Address(RVA = "0x282BE60", Offset = "0x282A460", VA = "0x18282BE60")]
		set
		{
		}
	}

	[Token(Token = "0x170005E7")]
	public bool Expect100Continue
	{
		[Token(Token = "0x6001ABE")]
		[Address(RVA = "0x282BD10", Offset = "0x282A310", VA = "0x18282BD10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001ABF")]
		[Address(RVA = "0x282BE90", Offset = "0x282A490", VA = "0x18282BE90")]
		set
		{
		}
	}

	[Token(Token = "0x170005E8")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001AC0")]
		[Address(RVA = "0x282BD40", Offset = "0x282A340", VA = "0x18282BD40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E9")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x6001AC1")]
		[Address(RVA = "0x282BD70", Offset = "0x282A370", VA = "0x18282BD70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001AC2")]
		[Address(RVA = "0x282BEC0", Offset = "0x282A4C0", VA = "0x18282BEC0")]
		set
		{
		}
	}

	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x282BBF0", Offset = "0x282A1F0", VA = "0x18282BBF0")]
	public ServicePointManagerElement()
	{
	}

	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x282BBC0", Offset = "0x282A1C0", VA = "0x18282BBC0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
