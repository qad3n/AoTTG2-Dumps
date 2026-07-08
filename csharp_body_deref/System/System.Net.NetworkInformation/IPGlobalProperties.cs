using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x20001D5")]
public abstract class IPGlobalProperties
{
	[Token(Token = "0x170002B6")]
	public abstract string DomainName
	{
		[Token(Token = "0x6000B96")]
		get;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x467F020", Offset = "0x467F020", VA = "0x467F020")]
	public static IPGlobalProperties GetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x467F0C0", Offset = "0x467F0C0", VA = "0x467F0C0")]
	internal static IPGlobalProperties InternalGetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x467F110", Offset = "0x467F110", VA = "0x467F110")]
	protected IPGlobalProperties()
	{
	}
}
