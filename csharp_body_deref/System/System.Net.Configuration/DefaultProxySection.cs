using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200038B")]
public sealed class DefaultProxySection : ConfigurationSection
{
	[Token(Token = "0x17000526")]
	public BypassElementCollection BypassList
	{
		[Token(Token = "0x600177F")]
		[Address(RVA = "0x45CE130", Offset = "0x45CE130", VA = "0x45CE130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000527")]
	public bool Enabled
	{
		[Token(Token = "0x6001780")]
		[Address(RVA = "0x45CE160", Offset = "0x45CE160", VA = "0x45CE160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001781")]
		[Address(RVA = "0x45CE190", Offset = "0x45CE190", VA = "0x45CE190")]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	public ModuleElement Module
	{
		[Token(Token = "0x6001782")]
		[Address(RVA = "0x45CE1C0", Offset = "0x45CE1C0", VA = "0x45CE1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000529")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001783")]
		[Address(RVA = "0x45CE1F0", Offset = "0x45CE1F0", VA = "0x45CE1F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052A")]
	public ProxyElement Proxy
	{
		[Token(Token = "0x6001784")]
		[Address(RVA = "0x45CE220", Offset = "0x45CE220", VA = "0x45CE220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052B")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x6001785")]
		[Address(RVA = "0x45CE250", Offset = "0x45CE250", VA = "0x45CE250")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001786")]
		[Address(RVA = "0x45CE280", Offset = "0x45CE280", VA = "0x45CE280")]
		set
		{
		}
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x45CE100", Offset = "0x45CE100", VA = "0x45CE100")]
	public DefaultProxySection()
	{
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x45CE2B0", Offset = "0x45CE2B0", VA = "0x45CE2B0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x45CE2E0", Offset = "0x45CE2E0", VA = "0x45CE2E0", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
