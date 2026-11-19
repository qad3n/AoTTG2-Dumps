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

[Token(Token = "0x20002D0")]
public class AuthenticationManager
{
	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x0")]
	private static ArrayList modules;

	[Token(Token = "0x4000AF1")]
	[FieldOffset(Offset = "0x8")]
	private static object locker;

	[Token(Token = "0x4000AF2")]
	[FieldOffset(Offset = "0x10")]
	private static ICredentialPolicy credential_policy;

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x617EC20", Offset = "0x617DC20", VA = "0x617EC20")]
	private static void EnsureModules()
	{
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x617EF90", Offset = "0x617DF90", VA = "0x617EF90")]
	public static Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x617F080", Offset = "0x617E080", VA = "0x617F080")]
	private static Authorization DoAuthenticate(string challenge, WebRequest request, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x617F5A0", Offset = "0x617E5A0", VA = "0x617F5A0")]
	public static Authorization PreAuthenticate(WebRequest request, ICredentials credentials)
	{
		return null;
	}
}
