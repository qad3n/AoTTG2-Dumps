using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000187")]
public class AuthenticationManager
{
	[Token(Token = "0x40007A9")]
	[FieldOffset(Offset = "0x0")]
	private static ArrayList modules;

	[Token(Token = "0x40007AA")]
	[FieldOffset(Offset = "0x8")]
	private static object locker;

	[Token(Token = "0x40007AB")]
	[FieldOffset(Offset = "0x10")]
	private static ICredentialPolicy credential_policy;

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x4657230", Offset = "0x4657230", VA = "0x4657230")]
	private static void EnsureModules()
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x4657520", Offset = "0x4657520", VA = "0x4657520")]
	public static Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x4657610", Offset = "0x4657610", VA = "0x4657610")]
	private static Authorization DoAuthenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x4657B90", Offset = "0x4657B90", VA = "0x4657B90")]
	public static Authorization PreAuthenticate(WebRequest request, ICredentials credentials)
	{
		return null;
	}
}
