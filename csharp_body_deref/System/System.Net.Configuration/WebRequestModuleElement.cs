using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A6")]
public sealed class WebRequestModuleElement : ConfigurationElement
{
	[Token(Token = "0x1700058F")]
	public string Prefix
	{
		[Token(Token = "0x600184F")]
		[Address(RVA = "0x45D0830", Offset = "0x45D0830", VA = "0x45D0830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001850")]
		[Address(RVA = "0x45D0860", Offset = "0x45D0860", VA = "0x45D0860")]
		set
		{
		}
	}

	[Token(Token = "0x17000590")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001851")]
		[Address(RVA = "0x45D0890", Offset = "0x45D0890", VA = "0x45D0890", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000591")]
	public Type Type
	{
		[Token(Token = "0x6001852")]
		[Address(RVA = "0x45D08C0", Offset = "0x45D08C0", VA = "0x45D08C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001853")]
		[Address(RVA = "0x45D08F0", Offset = "0x45D08F0", VA = "0x45D08F0")]
		set
		{
		}
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x45D07A0", Offset = "0x45D07A0", VA = "0x45D07A0")]
	public WebRequestModuleElement()
	{
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x45D07D0", Offset = "0x45D07D0", VA = "0x45D07D0")]
	public WebRequestModuleElement(string prefix, string type)
	{
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x45D0800", Offset = "0x45D0800", VA = "0x45D0800")]
	public WebRequestModuleElement(string prefix, Type type)
	{
	}
}
