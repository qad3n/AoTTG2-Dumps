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

[Token(Token = "0x20003E6")]
public sealed class DefaultProxySection : ConfigurationSection
{
	[Token(Token = "0x17000590")]
	public BypassElementCollection BypassList
	{
		[Token(Token = "0x6001A23")]
		[Address(RVA = "0x282A900", Offset = "0x2828F00", VA = "0x18282A900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000591")]
	public bool Enabled
	{
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x282A930", Offset = "0x2828F30", VA = "0x18282A930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x282AA20", Offset = "0x2829020", VA = "0x18282AA20")]
		set
		{
		}
	}

	[Token(Token = "0x17000592")]
	public ModuleElement Module
	{
		[Token(Token = "0x6001A26")]
		[Address(RVA = "0x282A960", Offset = "0x2828F60", VA = "0x18282A960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000593")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A27")]
		[Address(RVA = "0x282A990", Offset = "0x2828F90", VA = "0x18282A990", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000594")]
	public ProxyElement Proxy
	{
		[Token(Token = "0x6001A28")]
		[Address(RVA = "0x282A9C0", Offset = "0x2828FC0", VA = "0x18282A9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000595")]
	public bool UseDefaultCredentials
	{
		[Token(Token = "0x6001A29")]
		[Address(RVA = "0x282A9F0", Offset = "0x2828FF0", VA = "0x18282A9F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A2A")]
		[Address(RVA = "0x282AA50", Offset = "0x2829050", VA = "0x18282AA50")]
		set
		{
		}
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x282A8D0", Offset = "0x2828ED0", VA = "0x18282A8D0")]
	public DefaultProxySection()
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x282A870", Offset = "0x2828E70", VA = "0x18282A870", Slot = "8")]
	protected override void PostDeserialize()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x282A8A0", Offset = "0x2828EA0", VA = "0x18282A8A0", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
