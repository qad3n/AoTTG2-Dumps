using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000388")]
public sealed class ConnectionManagementElement : ConfigurationElement
{
	[Token(Token = "0x17000520")]
	public string Address
	{
		[Token(Token = "0x6001769")]
		[Address(RVA = "0x45CDD10", Offset = "0x45CDD10", VA = "0x45CDD10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176A")]
		[Address(RVA = "0x45CDD40", Offset = "0x45CDD40", VA = "0x45CDD40")]
		set
		{
		}
	}

	[Token(Token = "0x17000521")]
	public int MaxConnection
	{
		[Token(Token = "0x600176B")]
		[Address(RVA = "0x45CDD70", Offset = "0x45CDD70", VA = "0x45CDD70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x45CDDA0", Offset = "0x45CDDA0", VA = "0x45CDDA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000522")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x45CDDD0", Offset = "0x45CDDD0", VA = "0x45CDDD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x45CDCB0", Offset = "0x45CDCB0", VA = "0x45CDCB0")]
	public ConnectionManagementElement()
	{
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x45CDCE0", Offset = "0x45CDCE0", VA = "0x45CDCE0")]
	public ConnectionManagementElement(string address, int maxConnection)
	{
	}
}
