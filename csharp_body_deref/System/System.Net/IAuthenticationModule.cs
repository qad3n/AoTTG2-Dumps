// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IAuthenticationModule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200013D")]
public interface IAuthenticationModule
{
	[Token(Token = "0x170001AF")]
	string AuthenticationType
	{
		[Token(Token = "0x60007C4")]
		get;
	}

	[Token(Token = "0x60007C2")]
	Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials);

	[Token(Token = "0x60007C3")]
	Authorization PreAuthenticate(WebRequest request, ICredentials credentials);
}
