using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x20001D9")]
internal abstract class CommonUnixIPGlobalProperties : IPGlobalProperties
{
	[Token(Token = "0x170002B8")]
	public override string DomainName
	{
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x467F350", Offset = "0x467F350", VA = "0x467F350", Slot = "4")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x467F2C0", Offset = "0x467F2C0", VA = "0x467F2C0")]
	private static extern int getdomainname(byte[] name, int len);

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x467F580", Offset = "0x467F580", VA = "0x467F580")]
	protected CommonUnixIPGlobalProperties()
	{
	}
}
