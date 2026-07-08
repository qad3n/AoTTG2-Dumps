using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000386")]
public sealed class BypassElement : ConfigurationElement
{
	[Token(Token = "0x1700051C")]
	public string Address
	{
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x45CD980", Offset = "0x45CD980", VA = "0x45CD980")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001757")]
		[Address(RVA = "0x45CD9B0", Offset = "0x45CD9B0", VA = "0x45CD9B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700051D")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001758")]
		[Address(RVA = "0x45CD9E0", Offset = "0x45CD9E0", VA = "0x45CD9E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x45CD920", Offset = "0x45CD920", VA = "0x45CD920")]
	public BypassElement()
	{
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x45CD950", Offset = "0x45CD950", VA = "0x45CD950")]
	public BypassElement(string address)
	{
	}
}
