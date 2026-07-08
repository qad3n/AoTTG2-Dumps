using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000319")]
internal class RC2Transform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000DFA")]
	[FieldOffset(Offset = "0x58")]
	private ushort R0;

	[Token(Token = "0x4000DFB")]
	[FieldOffset(Offset = "0x5A")]
	private ushort R1;

	[Token(Token = "0x4000DFC")]
	[FieldOffset(Offset = "0x5C")]
	private ushort R2;

	[Token(Token = "0x4000DFD")]
	[FieldOffset(Offset = "0x5E")]
	private ushort R3;

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x60")]
	private ushort[] K;

	[Token(Token = "0x4000DFF")]
	[FieldOffset(Offset = "0x68")]
	private int j;

	[Token(Token = "0x4000E00")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] pitable;

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x4E6DF80", Offset = "0x4E6DF80", VA = "0x4E6DF80")]
	public RC2Transform(RC2 rc2Algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x4E6E520", Offset = "0x4E6E520", VA = "0x4E6E520", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}
}
