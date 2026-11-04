// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Dns
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200031B")]
public static class Dns
{
	[Token(Token = "0x200031C")]
	private delegate IPAddress[] GetHostAddressesCallback(string hostName);

	[Token(Token = "0x600156C")]
	[Address(RVA = "0x27E00E0", Offset = "0x27DE6E0", VA = "0x1827E00E0")]
	public static IAsyncResult BeginGetHostAddresses(string hostNameOrAddress, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x600156D")]
	[Address(RVA = "0x27E0310", Offset = "0x27DE910", VA = "0x1827E0310")]
	public static IPAddress[] EndGetHostAddresses(IAsyncResult asyncResult)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600156E")]
	[Address(RVA = "0x27E08E0", Offset = "0x27DEEE0", VA = "0x1827E08E0")]
	private static extern bool GetHostByName_icall(string host, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x600156F")]
	[Address(RVA = "0x27E07A0", Offset = "0x27DEDA0", VA = "0x1827E07A0")]
	private static extern bool GetHostByAddr_icall(string addr, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6001570")]
	[Address(RVA = "0x27E0E80", Offset = "0x27DF480", VA = "0x1827E0E80")]
	private static extern bool GetHostName_icall(out string h_name);

	[Token(Token = "0x6001571")]
	[Address(RVA = "0x27E0420", Offset = "0x27DEA20", VA = "0x1827E0420")]
	private static void Error_11001(string hostName)
	{
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x27E0ED0", Offset = "0x27DF4D0", VA = "0x1827E0ED0")]
	private static IPHostEntry hostent_to_IPHostEntry(string originalHostName, string h_name, string[] h_aliases, string[] h_addrlist)
	{
		return null;
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x27E07B0", Offset = "0x27DEDB0", VA = "0x1827E07B0")]
	private static IPHostEntry GetHostByAddressFromString(string address, bool parse)
	{
		return null;
	}

	[Token(Token = "0x6001574")]
	[Address(RVA = "0x27E09F0", Offset = "0x27DEFF0", VA = "0x1827E09F0")]
	public static IPHostEntry GetHostEntry(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x27E0D20", Offset = "0x27DF320", VA = "0x1827E0D20")]
	public static IPHostEntry GetHostEntry(IPAddress address)
	{
		return null;
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x27E0590", Offset = "0x27DEB90", VA = "0x1827E0590")]
	public static IPAddress[] GetHostAddresses(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x6001577")]
	[Address(RVA = "0x27E08F0", Offset = "0x27DEEF0", VA = "0x1827E08F0")]
	[Obsolete("Use GetHostEntry instead")]
	public static IPHostEntry GetHostByName(string hostName)
	{
		return null;
	}

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x27E0E90", Offset = "0x27DF490", VA = "0x1827E0E90")]
	public static string GetHostName()
	{
		return null;
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x27E0490", Offset = "0x27DEA90", VA = "0x1827E0490")]
	public static Task<IPAddress[]> GetHostAddressesAsync(string hostNameOrAddress)
	{
		return null;
	}
}
