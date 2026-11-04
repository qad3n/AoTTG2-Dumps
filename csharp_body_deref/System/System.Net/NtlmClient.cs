// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NtlmClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000330")]
internal class NtlmClient : IAuthenticationModule
{
	[Token(Token = "0x4000C85")]
	[FieldOffset(Offset = "0x10")]
	private IAuthenticationModule authObject;

	[Token(Token = "0x170004B6")]
	public string AuthenticationType
	{
		[Token(Token = "0x600160F")]
		[Address(RVA = "0x27E7E90", Offset = "0x27E6490", VA = "0x1827E7E90", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600160C")]
	[Address(RVA = "0x27E7E20", Offset = "0x27E6420", VA = "0x1827E7E20")]
	public NtlmClient()
	{
	}

	[Token(Token = "0x600160D")]
	[Address(RVA = "0x27E7DB0", Offset = "0x27E63B0", VA = "0x1827E7DB0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600160E")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
