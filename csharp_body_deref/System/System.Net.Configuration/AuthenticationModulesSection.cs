using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000385")]
public sealed class AuthenticationModulesSection : ConfigurationSection
{
	[Token(Token = "0x1700051A")]
	public AuthenticationModuleElementCollection AuthenticationModules
	{
		[Token(Token = "0x6001750")]
		[Address(RVA = "0x45CD860", Offset = "0x45CD860", VA = "0x45CD860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001751")]
		[Address(RVA = "0x45CD890", Offset = "0x45CD890", VA = "0x45CD890", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x45CD830", Offset = "0x45CD830", VA = "0x45CD830")]
	public AuthenticationModulesSection()
	{
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x45CD8C0", Offset = "0x45CD8C0", VA = "0x45CD8C0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x45CD8F0", Offset = "0x45CD8F0", VA = "0x45CD8F0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
