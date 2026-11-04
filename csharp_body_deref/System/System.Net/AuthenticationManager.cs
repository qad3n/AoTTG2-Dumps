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

[Token(Token = "0x200030F")]
public class AuthenticationManager
{
	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x0")]
	private static ArrayList modules;

	[Token(Token = "0x4000BC0")]
	[FieldOffset(Offset = "0x8")]
	private static object locker;

	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x10")]
	private static ICredentialPolicy credential_policy;

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x27DB9D0", Offset = "0x27D9FD0", VA = "0x1827DB9D0")]
	private static void EnsureModules()
	{
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x27DB590", Offset = "0x27D9B90", VA = "0x1827DB590")]
	public static Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x27DB6F0", Offset = "0x27D9CF0", VA = "0x1827DB6F0")]
	private static Authorization DoAuthenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x27DBCB0", Offset = "0x27DA2B0", VA = "0x1827DBCB0")]
	public static Authorization PreAuthenticate(WebRequest request, ICredentials credentials)
	{
		return null;
	}
}
