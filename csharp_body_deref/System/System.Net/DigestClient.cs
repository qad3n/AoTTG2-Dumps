using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000192")]
internal class DigestClient : IAuthenticationModule
{
	[Token(Token = "0x40007C8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Hashtable cache;

	[Token(Token = "0x17000230")]
	private static Hashtable Cache
	{
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x465A760", Offset = "0x465A760", VA = "0x465A760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	public string AuthenticationType
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x465B750", Offset = "0x465B750", VA = "0x465B750", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x465A8E0", Offset = "0x465A8E0", VA = "0x465A8E0")]
	private static void CheckExpired(int count)
	{
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x465B2A0", Offset = "0x465B2A0", VA = "0x465B2A0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x465B5D0", Offset = "0x465B5D0", VA = "0x465B5D0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x465B780", Offset = "0x465B780", VA = "0x465B780")]
	public DigestClient()
	{
	}
}
