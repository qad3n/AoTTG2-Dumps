using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000015")]
internal class AesTransform : Mono.Security.Cryptography.SymmetricTransform
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x58")]
	private uint[] expandedKey;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x60")]
	private int Nk;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x64")]
	private int Nr;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint[] Rcon;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static readonly byte[] SBox;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private static readonly byte[] iSBox;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x18")]
	private static readonly uint[] T0;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	private static readonly uint[] T1;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly uint[] T2;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	private static readonly uint[] T3;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x38")]
	private static readonly uint[] iT0;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x40")]
	private static readonly uint[] iT1;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x48")]
	private static readonly uint[] iT2;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x50")]
	private static readonly uint[] iT3;

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x41667A0", Offset = "0x41667A0", VA = "0x41667A0")]
	public AesTransform(Aes algo, bool encryption, byte[] key, byte[] iv)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4167330", Offset = "0x4167330", VA = "0x4167330", Slot = "17")]
	protected override void ECB(byte[] input, byte[] output)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4167230", Offset = "0x4167230", VA = "0x4167230")]
	private uint SubByte(uint a)
	{
		return default(uint);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4167350", Offset = "0x4167350", VA = "0x4167350")]
	private void Encrypt128(byte[] indata, byte[] outdata, uint[] ekey)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x41697C0", Offset = "0x41697C0", VA = "0x41697C0")]
	private void Decrypt128(byte[] indata, byte[] outdata, uint[] ekey)
	{
	}
}
