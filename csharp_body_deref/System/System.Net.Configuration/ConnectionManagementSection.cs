using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200038A")]
public sealed class ConnectionManagementSection : ConfigurationSection
{
	[Token(Token = "0x17000524")]
	public ConnectionManagementElementCollection ConnectionManagement
	{
		[Token(Token = "0x600177C")]
		[Address(RVA = "0x45CE0A0", Offset = "0x45CE0A0", VA = "0x45CE0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000525")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600177D")]
		[Address(RVA = "0x45CE0D0", Offset = "0x45CE0D0", VA = "0x45CE0D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600177B")]
	[Address(RVA = "0x45CE070", Offset = "0x45CE070", VA = "0x45CE070")]
	public ConnectionManagementSection()
	{
	}
}
