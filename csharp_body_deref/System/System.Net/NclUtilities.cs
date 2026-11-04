// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NclUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002CB")]
internal static class NclUtilities
{
	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x0")]
	private static IPAddress[] _LocalAddresses;

	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x8")]
	private static object _LocalAddressesLock;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x10")]
	internal static string _LocalDomainName;

	[Token(Token = "0x17000408")]
	internal static IPAddress[] LocalAddresses
	{
		[Token(Token = "0x6001391")]
		[Address(RVA = "0x27CFF50", Offset = "0x27CE550", VA = "0x1827CFF50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000409")]
	private static object LocalAddressesLock
	{
		[Token(Token = "0x6001392")]
		[Address(RVA = "0x27CFEB0", Offset = "0x27CE4B0", VA = "0x1827CFEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x27CFE00", Offset = "0x27CE400", VA = "0x1827CFE00")]
	internal static bool IsFatal(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x27CFD70", Offset = "0x27CE370", VA = "0x1827CFD70")]
	internal static bool IsAddressLocal(IPAddress ipAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x27CFD50", Offset = "0x27CE350", VA = "0x1827CFD50")]
	private static IPHostEntry GetLocalHost()
	{
		return null;
	}
}
