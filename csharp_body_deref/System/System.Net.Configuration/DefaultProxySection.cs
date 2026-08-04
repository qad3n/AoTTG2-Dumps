// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.DefaultProxySection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48F3230", Offset = "0x48F3230", VA = "0x48F3230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000527")]
	public bool Enabled
	{
		[Token(Token = "0x6001780")]
		[Address(RVA = "0x48F3260", Offset = "0x48F3260", VA = "0x48F3260")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001781")]
		[Address(RVA = "0x48F3290", Offset = "0x48F3290", VA = "0x48F3290")]
		set
		{
		}
	}

	[Token(Token = "0x17000528")]
	public ModuleElement Module
	{
		[Token(Token = "0x6001782")]
		[Address(RVA = "0x48F32C0", Offset = "0x48F32C0", VA = "0x48F32C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000529")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001783")]
		[Address(RVA = "0x48F32F0", Offset = "0x48F32F0", VA = "0x48F32F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052A")]
	public ProxyElement Proxy
	{
		[Token(Token = "0x6001784")]
		[Address(RVA = "0x48F3320", Offset = "0x48F3320", VA = "0x48F3320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052B")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x6001785")]
		[Address(RVA = "0x48F3350", Offset = "0x48F3350", VA = "0x48F3350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001786")]
		[Address(RVA = "0x48F3380", Offset = "0x48F3380", VA = "0x48F3380")]
		set
		{
		}
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x48F3200", Offset = "0x48F3200", VA = "0x48F3200")]
	public DefaultProxySection()
	{
	}

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x48F33B0", Offset = "0x48F33B0", VA = "0x48F33B0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x48F33E0", Offset = "0x48F33E0", VA = "0x48F33E0", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
