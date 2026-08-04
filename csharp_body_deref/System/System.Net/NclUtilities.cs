// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NclUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x495E1D0", Offset = "0x495E1D0", VA = "0x495E1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	private static object LocalAddressesLock
	{
		[Token(Token = "0x60007D3")]
		[Address(RVA = "0x495E850", Offset = "0x495E850", VA = "0x495E850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x495E0D0", Offset = "0x495E0D0", VA = "0x495E0D0")]
	internal static bool IsFatal(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x495E160", Offset = "0x495E160", VA = "0x495E160")]
	internal static bool IsAddressLocal(IPAddress ipAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x495E830", Offset = "0x495E830", VA = "0x495E830")]
	private static IPHostEntry GetLocalHost()
	{
		return null;
	}
}
