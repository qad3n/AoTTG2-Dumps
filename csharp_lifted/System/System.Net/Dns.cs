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

[Token(Token = "0x20002DC")]
public static class Dns
{
	[Token(Token = "0x20002DD")]
	private delegate IPAddress[] GetHostAddressesCallback(string hostName);

	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x6183020", Offset = "0x6182020", VA = "0x6183020")]
	public static IAsyncResult BeginGetHostAddresses(string hostNameOrAddress, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x61832F0", Offset = "0x61822F0", VA = "0x61832F0")]
	public static IPAddress[] EndGetHostAddresses(IAsyncResult asyncResult)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x61833F0", Offset = "0x61823F0", VA = "0x61833F0")]
	private static extern bool GetHostByName_icall(string host, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x6183400", Offset = "0x6182400", VA = "0x6183400")]
	private static extern bool GetHostByAddr_icall(string addr, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x6183410", Offset = "0x6182410", VA = "0x6183410")]
	private static extern bool GetHostName_icall(out string h_name);

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x6183420", Offset = "0x6182420", VA = "0x6183420")]
	private static void Error_11001(string hostName)
	{
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x6183490", Offset = "0x6182490", VA = "0x6183490")]
	private static IPHostEntry hostent_to_IPHostEntry(string originalHostName, string h_name, string[] h_aliases, string[] h_addrlist)
	{
		return null;
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x6183830", Offset = "0x6182830", VA = "0x6183830")]
	private static IPHostEntry GetHostByAddressFromString(string address, bool parse)
	{
		return null;
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x61839B0", Offset = "0x61829B0", VA = "0x61839B0")]
	public static IPHostEntry GetHostEntry(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x6183B10", Offset = "0x6182B10", VA = "0x6183B10")]
	public static IPHostEntry GetHostEntry(IPAddress address)
	{
		return null;
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x6183CC0", Offset = "0x6182CC0", VA = "0x6183CC0")]
	public static IPAddress[] GetHostAddresses(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x6183B80", Offset = "0x6182B80", VA = "0x6183B80")]
	[Obsolete("Use GetHostEntry instead")]
	public static IPHostEntry GetHostByName(string hostName)
	{
		return null;
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x6183EB0", Offset = "0x6182EB0", VA = "0x6183EB0")]
	public static string GetHostName()
	{
		return null;
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x6183F40", Offset = "0x6182F40", VA = "0x6183F40")]
	public static Task<IPAddress[]> GetHostAddressesAsync(string hostNameOrAddress)
	{
		return null;
	}
}
