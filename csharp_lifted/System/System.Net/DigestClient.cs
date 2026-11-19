// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.DigestClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002DB")]
internal class DigestClient : IAuthenticationModule
{
	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Hashtable cache;

	[Token(Token = "0x17000456")]
	private static Hashtable Cache
	{
		[Token(Token = "0x60013A7")]
		[Address(RVA = "0x6182070", Offset = "0x6181070", VA = "0x6182070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000457")]
	public string AuthenticationType
	{
		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x6182F70", Offset = "0x6181F70", VA = "0x6182F70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013A8")]
	[Address(RVA = "0x6182210", Offset = "0x6181210", VA = "0x6182210")]
	private static void CheckExpired(int count)
	{
	}

	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x6182AF0", Offset = "0x6181AF0", VA = "0x6182AF0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x60013AA")]
	[Address(RVA = "0x6182E00", Offset = "0x6181E00", VA = "0x6182E00", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x617EF70", Offset = "0x617DF70", VA = "0x617EF70")]
	public DigestClient()
	{
	}
}
