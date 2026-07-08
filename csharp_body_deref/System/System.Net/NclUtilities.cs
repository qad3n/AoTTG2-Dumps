using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000143")]
internal static class NclUtilities
{
	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x0")]
	private static IPAddress[] _LocalAddresses;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x8")]
	private static object _LocalAddressesLock;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x10")]
	internal static string _LocalDomainName;

	[Token(Token = "0x170001B3")]
	internal static IPAddress[] LocalAddresses
	{
		[Token(Token = "0x60007D2")]
		[Address(RVA = "0x46390D0", Offset = "0x46390D0", VA = "0x46390D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	private static object LocalAddressesLock
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x4639750", Offset = "0x4639750", VA = "0x4639750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x4638FD0", Offset = "0x4638FD0", VA = "0x4638FD0")]
	internal static bool IsFatal(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x4639060", Offset = "0x4639060", VA = "0x4639060")]
	internal static bool IsAddressLocal(IPAddress ipAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x4639730", Offset = "0x4639730", VA = "0x4639730")]
	private static IPHostEntry GetLocalHost()
	{
		return null;
	}
}
