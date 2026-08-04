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

[Token(Token = "0x2000193")]
public static class Dns
{
	[Token(Token = "0x2000194")]
	private delegate IPAddress[] GetHostAddressesCallback(string hostName);

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4980910", Offset = "0x4980910", VA = "0x4980910")]
	public static IAsyncResult BeginGetHostAddresses(string hostNameOrAddress, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x4980BE0", Offset = "0x4980BE0", VA = "0x4980BE0")]
	public static IPAddress[] EndGetHostAddresses(IAsyncResult asyncResult)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x4980CE0", Offset = "0x4980CE0", VA = "0x4980CE0")]
	private static extern bool GetHostByName_icall(string host, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x4980CF0", Offset = "0x4980CF0", VA = "0x4980CF0")]
	private static extern bool GetHostByAddr_icall(string addr, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x4980D00", Offset = "0x4980D00", VA = "0x4980D00")]
	private static extern bool GetHostName_icall(out string h_name);

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x4980D10", Offset = "0x4980D10", VA = "0x4980D10")]
	private static void Error_11001(string hostName)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x4980D80", Offset = "0x4980D80", VA = "0x4980D80")]
	private static IPHostEntry hostent_to_IPHostEntry(string originalHostName, string h_name, string[] h_aliases, string[] h_addrlist)
	{
		return null;
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x4981150", Offset = "0x4981150", VA = "0x4981150")]
	private static IPHostEntry GetHostByAddressFromString(string address, bool parse)
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x4981270", Offset = "0x4981270", VA = "0x4981270")]
	public static IPHostEntry GetHostEntry(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x49813D0", Offset = "0x49813D0", VA = "0x49813D0")]
	public static IPHostEntry GetHostEntry(IPAddress address)
	{
		return null;
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x4981530", Offset = "0x4981530", VA = "0x4981530")]
	public static IPAddress[] GetHostAddresses(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x4981440", Offset = "0x4981440", VA = "0x4981440")]
	[Obsolete("Use GetHostEntry instead")]
	public static IPHostEntry GetHostByName(string hostName)
	{
		return null;
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x4981720", Offset = "0x4981720", VA = "0x4981720")]
	public static string GetHostName()
	{
		return null;
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x4981750", Offset = "0x4981750", VA = "0x4981750")]
	public static Task<IPAddress[]> GetHostAddressesAsync(string hostNameOrAddress)
	{
		return null;
	}
}
