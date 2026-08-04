// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.AuthenticationManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x497C330", Offset = "0x497C330", VA = "0x497C330")]
	private static void EnsureModules()
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x497C620", Offset = "0x497C620", VA = "0x497C620")]
	public static Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x497C710", Offset = "0x497C710", VA = "0x497C710")]
	private static Authorization DoAuthenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x497CC90", Offset = "0x497CC90", VA = "0x497CC90")]
	public static Authorization PreAuthenticate(WebRequest request, ICredentials credentials)
	{
		return null;
	}
}
