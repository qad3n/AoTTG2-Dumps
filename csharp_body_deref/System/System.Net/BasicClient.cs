// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BasicClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002D1")]
internal class BasicClient : IAuthenticationModule
{
	[Token(Token = "0x17000448")]
	public string AuthenticationType
	{
		[Token(Token = "0x600137F")]
		[Address(RVA = "0x617FFE0", Offset = "0x617EFE0", VA = "0x617FFE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x617FBC0", Offset = "0x617EBC0", VA = "0x617FBC0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x617FF40", Offset = "0x617EF40", VA = "0x617FF40")]
	private static byte[] GetBytes(string str)
	{
		return null;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x617FC50", Offset = "0x617EC50", VA = "0x617FC50")]
	private static Authorization InternalAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x617FFD0", Offset = "0x617EFD0", VA = "0x617FFD0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x617EF80", Offset = "0x617DF80", VA = "0x617EF80")]
	public BasicClient()
	{
	}
}
