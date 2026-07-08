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
	[Address(RVA = "0x465B810", Offset = "0x465B810", VA = "0x465B810")]
	public static IAsyncResult BeginGetHostAddresses(string hostNameOrAddress, AsyncCallback requestCallback, object state)
	{
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x465BAE0", Offset = "0x465BAE0", VA = "0x465BAE0")]
	public static IPAddress[] EndGetHostAddresses(IAsyncResult asyncResult)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x465BBE0", Offset = "0x465BBE0", VA = "0x465BBE0")]
	private static extern bool GetHostByName_icall(string host, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x465BBF0", Offset = "0x465BBF0", VA = "0x465BBF0")]
	private static extern bool GetHostByAddr_icall(string addr, out string h_name, out string[] h_aliases, out string[] h_addr_list, int hint);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x465BC00", Offset = "0x465BC00", VA = "0x465BC00")]
	private static extern bool GetHostName_icall(out string h_name);

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x465BC10", Offset = "0x465BC10", VA = "0x465BC10")]
	private static void Error_11001(string hostName)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x465BC80", Offset = "0x465BC80", VA = "0x465BC80")]
	private static IPHostEntry hostent_to_IPHostEntry(string originalHostName, string h_name, string[] h_aliases, string[] h_addrlist)
	{
		return null;
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x465C050", Offset = "0x465C050", VA = "0x465C050")]
	private static IPHostEntry GetHostByAddressFromString(string address, bool parse)
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x465C170", Offset = "0x465C170", VA = "0x465C170")]
	public static IPHostEntry GetHostEntry(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x465C2D0", Offset = "0x465C2D0", VA = "0x465C2D0")]
	public static IPHostEntry GetHostEntry(IPAddress address)
	{
		return null;
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x465C430", Offset = "0x465C430", VA = "0x465C430")]
	public static IPAddress[] GetHostAddresses(string hostNameOrAddress)
	{
		return null;
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x465C340", Offset = "0x465C340", VA = "0x465C340")]
	[Obsolete("Use GetHostEntry instead")]
	public static IPHostEntry GetHostByName(string hostName)
	{
		return null;
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x465C620", Offset = "0x465C620", VA = "0x465C620")]
	public static string GetHostName()
	{
		return null;
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x465C650", Offset = "0x465C650", VA = "0x465C650")]
	public static Task<IPAddress[]> GetHostAddressesAsync(string hostNameOrAddress)
	{
		return null;
	}
}
