// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.SmtpNetworkElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000399")]
public sealed class SmtpNetworkElement : ConfigurationElement
{
	[Token(Token = "0x17000553")]
	public string ClientDomain
	{
		[Token(Token = "0x60017D3")]
		[Address(RVA = "0x48F41F0", Offset = "0x48F41F0", VA = "0x48F41F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017D4")]
		[Address(RVA = "0x48F4220", Offset = "0x48F4220", VA = "0x48F4220")]
		set
		{
		}
	}

	[Token(Token = "0x17000554")]
	public bool DefaultCredentials
	{
		[Token(Token = "0x60017D5")]
		[Address(RVA = "0x48F4250", Offset = "0x48F4250", VA = "0x48F4250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017D6")]
		[Address(RVA = "0x48F4280", Offset = "0x48F4280", VA = "0x48F4280")]
		set
		{
		}
	}

	[Token(Token = "0x17000555")]
	public bool EnableSsl
	{
		[Token(Token = "0x60017D7")]
		[Address(RVA = "0x48F42B0", Offset = "0x48F42B0", VA = "0x48F42B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017D8")]
		[Address(RVA = "0x48F42E0", Offset = "0x48F42E0", VA = "0x48F42E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000556")]
	public string Host
	{
		[Token(Token = "0x60017D9")]
		[Address(RVA = "0x48F4310", Offset = "0x48F4310", VA = "0x48F4310")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017DA")]
		[Address(RVA = "0x48F4340", Offset = "0x48F4340", VA = "0x48F4340")]
		set
		{
		}
	}

	[Token(Token = "0x17000557")]
	public string Password
	{
		[Token(Token = "0x60017DB")]
		[Address(RVA = "0x48F4370", Offset = "0x48F4370", VA = "0x48F4370")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017DC")]
		[Address(RVA = "0x48F43A0", Offset = "0x48F43A0", VA = "0x48F43A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000558")]
	public int Port
	{
		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x48F43D0", Offset = "0x48F43D0", VA = "0x48F43D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x48F4400", Offset = "0x48F4400", VA = "0x48F4400")]
		set
		{
		}
	}

	[Token(Token = "0x17000559")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x48F4430", Offset = "0x48F4430", VA = "0x48F4430", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700055A")]
	public string TargetName
	{
		[Token(Token = "0x60017E0")]
		[Address(RVA = "0x48F4460", Offset = "0x48F4460", VA = "0x48F4460")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x48F4490", Offset = "0x48F4490", VA = "0x48F4490")]
		set
		{
		}
	}

	[Token(Token = "0x1700055B")]
	public string UserName
	{
		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x48F44C0", Offset = "0x48F44C0", VA = "0x48F44C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x48F44F0", Offset = "0x48F44F0", VA = "0x48F44F0")]
		set
		{
		}
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x48F41C0", Offset = "0x48F41C0", VA = "0x48F41C0")]
	public SmtpNetworkElement()
	{
	}

	[Token(Token = "0x60017E4")]
	[Address(RVA = "0x48F4520", Offset = "0x48F4520", VA = "0x48F4520", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
