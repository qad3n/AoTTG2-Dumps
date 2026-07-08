using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A3")]
public sealed class WindowsAuthenticationElement : ConfigurationElement
{
	[Token(Token = "0x1700058A")]
	public int DefaultCredentialsHandleCacheSize
	{
		[Token(Token = "0x6001837")]
		[Address(RVA = "0x45D03B0", Offset = "0x45D03B0", VA = "0x45D03B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001838")]
		[Address(RVA = "0x45D03E0", Offset = "0x45D03E0", VA = "0x45D03E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700058B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001839")]
		[Address(RVA = "0x45D0410", Offset = "0x45D0410", VA = "0x45D0410", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001836")]
	[Address(RVA = "0x45D0380", Offset = "0x45D0380", VA = "0x45D0380")]
	public WindowsAuthenticationElement()
	{
	}
}
