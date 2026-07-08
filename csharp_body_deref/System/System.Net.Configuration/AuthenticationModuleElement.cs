using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000383")]
public sealed class AuthenticationModuleElement : ConfigurationElement
{
	[Token(Token = "0x17000517")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600173F")]
		[Address(RVA = "0x45CD530", Offset = "0x45CD530", VA = "0x45CD530", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000518")]
	public string Type
	{
		[Token(Token = "0x6001740")]
		[Address(RVA = "0x45CD560", Offset = "0x45CD560", VA = "0x45CD560")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001741")]
		[Address(RVA = "0x45CD590", Offset = "0x45CD590", VA = "0x45CD590")]
		set
		{
		}
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x45CD4D0", Offset = "0x45CD4D0", VA = "0x45CD4D0")]
	public AuthenticationModuleElement()
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x45CD500", Offset = "0x45CD500", VA = "0x45CD500")]
	public AuthenticationModuleElement(string typeName)
	{
	}
}
