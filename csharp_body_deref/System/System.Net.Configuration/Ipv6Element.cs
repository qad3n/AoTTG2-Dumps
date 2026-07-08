using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000396")]
public sealed class Ipv6Element : ConfigurationElement
{
	[Token(Token = "0x1700054A")]
	public bool Enabled
	{
		[Token(Token = "0x60017C3")]
		[Address(RVA = "0x45CEDF0", Offset = "0x45CEDF0", VA = "0x45CEDF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017C4")]
		[Address(RVA = "0x45CEE20", Offset = "0x45CEE20", VA = "0x45CEE20")]
		set
		{
		}
	}

	[Token(Token = "0x1700054B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017C5")]
		[Address(RVA = "0x45CEE50", Offset = "0x45CEE50", VA = "0x45CEE50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017C2")]
	[Address(RVA = "0x45CEDC0", Offset = "0x45CEDC0", VA = "0x45CEDC0")]
	public Ipv6Element()
	{
	}
}
