// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NclUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200028C")]
internal static class NclUtilities
{
	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x0")]
	private static IPAddress[] _LocalAddresses;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x8")]
	private static object _LocalAddressesLock;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x10")]
	internal static string _LocalDomainName;

	[Token(Token = "0x170003D9")]
	internal static IPAddress[] LocalAddresses
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x62A5E10", Offset = "0x62A4E10", VA = "0x62A5E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DA")]
	private static object LocalAddressesLock
	{
		[Token(Token = "0x60011D4")]
		[Address(RVA = "0x62A63F0", Offset = "0x62A53F0", VA = "0x62A63F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x62A5CF0", Offset = "0x62A4CF0", VA = "0x62A5CF0")]
	internal static bool IsFatal(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x62A5D90", Offset = "0x62A4D90", VA = "0x62A5D90")]
	internal static bool IsAddressLocal(IPAddress ipAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x62A63D0", Offset = "0x62A53D0", VA = "0x62A63D0")]
	private static IPHostEntry GetLocalHost()
	{
		return null;
	}
}
