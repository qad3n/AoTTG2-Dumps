using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002E2")]
[ComVisible(true)]
public class HMACSHA1 : HMAC
{
	[Token(Token = "0x6001929")]
	[Address(RVA = "0x4E4C6D0", Offset = "0x4E4C6D0", VA = "0x4E4C6D0")]
	public HMACSHA1()
	{
	}

	[Token(Token = "0x600192A")]
	[Address(RVA = "0x4E4D1E0", Offset = "0x4E4D1E0", VA = "0x4E4D1E0")]
	public HMACSHA1(byte[] key)
	{
	}

	[Token(Token = "0x600192B")]
	[Address(RVA = "0x4E4D1F0", Offset = "0x4E4D1F0", VA = "0x4E4D1F0")]
	public HMACSHA1(byte[] key, bool useManagedSha1)
	{
	}
}
