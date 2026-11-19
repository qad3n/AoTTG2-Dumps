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

[Token(Token = "0x20003A2")]
public sealed class DefaultProxySection : ConfigurationSection
{
	[Token(Token = "0x17000562")]
	public BypassElementCollection BypassList
	{
		[Token(Token = "0x6001869")]
		[Address(RVA = "0x61CFD20", Offset = "0x61CED20", VA = "0x61CFD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000563")]
	public bool Enabled
	{
		[Token(Token = "0x600186A")]
		[Address(RVA = "0x61CFD50", Offset = "0x61CED50", VA = "0x61CFD50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600186B")]
		[Address(RVA = "0x61CFD80", Offset = "0x61CED80", VA = "0x61CFD80")]
		set
		{
		}
	}

	[Token(Token = "0x17000564")]
	public ModuleElement Module
	{
		[Token(Token = "0x600186C")]
		[Address(RVA = "0x61CFDB0", Offset = "0x61CEDB0", VA = "0x61CFDB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000565")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600186D")]
		[Address(RVA = "0x61CFDE0", Offset = "0x61CEDE0", VA = "0x61CFDE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000566")]
	public ProxyElement Proxy
	{
		[Token(Token = "0x600186E")]
		[Address(RVA = "0x61CFE10", Offset = "0x61CEE10", VA = "0x61CFE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x600186F")]
		[Address(RVA = "0x61CFE40", Offset = "0x61CEE40", VA = "0x61CFE40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001870")]
		[Address(RVA = "0x61CFE70", Offset = "0x61CEE70", VA = "0x61CFE70")]
		set
		{
		}
	}

	[Token(Token = "0x6001868")]
	[Address(RVA = "0x61CFCF0", Offset = "0x61CECF0", VA = "0x61CFCF0")]
	public DefaultProxySection()
	{
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x61CFEA0", Offset = "0x61CEEA0", VA = "0x61CFEA0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x61CFED0", Offset = "0x61CEED0", VA = "0x61CFED0", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
