using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000043")]
internal sealed class KeyBuilder
{
	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x0")]
	private static RandomNumberGenerator rng;

	[Token(Token = "0x17000019")]
	private static RandomNumberGenerator Rng
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x4DFAED0", Offset = "0x4DFAED0", VA = "0x4DFAED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4DFAF40", Offset = "0x4DFAF40", VA = "0x4DFAF40")]
	public static byte[] Key(int size)
	{
		return null;
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4DFB010", Offset = "0x4DFB010", VA = "0x4DFB010")]
	public static byte[] IV(int size)
	{
		return null;
	}
}
