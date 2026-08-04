// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BasicClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000188")]
internal class BasicClient : IAuthenticationModule
{
	[Token(Token = "0x17000222")]
	public string AuthenticationType
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x497D750", Offset = "0x497D750", VA = "0x497D750", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x497D2E0", Offset = "0x497D2E0", VA = "0x497D2E0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x497D6A0", Offset = "0x497D6A0", VA = "0x497D6A0")]
	private static byte[] GetBytes(string str)
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x497D370", Offset = "0x497D370", VA = "0x497D370")]
	private static Authorization InternalAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x497D740", Offset = "0x497D740", VA = "0x497D740", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x497C610", Offset = "0x497C610", VA = "0x497C610")]
	public BasicClient()
	{
	}
}
